#include "eventmanager.h"
#include "eventinterface.h"
#include "coreobject.h"

#include <QMultiHash>
namespace Quto
{
    namespace Core
    {

        class EventManagerPrivate
        {
            public:
                EventManagerPrivate();
                ~EventManagerPrivate();
                bool send(const QString &aEventId,const QVariant &aData=QVariant());
                bool subscribe(const QString &aEventId,EventInterface *aSubscriber);
                bool unsubscribe(const QString &aEventId,EventInterface *aSubscriber);

            private:
                QMultiHash<const QString,EventInterface *> mSubscribers;
        };
    }
}

using namespace Quto::Core;

EventManagerPrivate::EventManagerPrivate()
{
    mSubscribers.clear();
}

EventManagerPrivate::~EventManagerPrivate()
{
    mSubscribers.clear();
}

bool EventManagerPrivate::send(const QString &aEventId,const QVariant &aData)
{
    QMultiHash<const QString,EventInterface *>::iterator i;
    for (i = mSubscribers.begin(); i != mSubscribers.end(); ++i)
    {
        if(i.key()==aEventId)
        {
            EventInterface* receiver=i.value();
            receiver->onQutoEvent(aEventId,aData);
        }
    }
    return true;
}

bool EventManagerPrivate::subscribe(const QString &aEventId,EventInterface *aSubscriber)
{
    bool succesful=true;
    //TODO : Use multihash find
    QMultiHash<const QString,EventInterface *>::iterator i;
    for (i = mSubscribers.begin(); i != mSubscribers.end(); ++i)
    {
        if((i.key()==aEventId)&&(aSubscriber==i.value()))
            succesful=false;
    }
    if(succesful)
    {
        mSubscribers.insert(aEventId,aSubscriber);
    }
    return succesful;
}

bool EventManagerPrivate::unsubscribe(const QString &aEventId,EventInterface *aSubscriber)
{
    bool succesful=false;
    QMultiHash<const QString,EventInterface *>::iterator i;
    for (i = mSubscribers.begin(); i != mSubscribers.end(); ++i)
    {
        if((i.key()==aEventId)&&(aSubscriber==i.value()))
        {
            succesful=true;
            mSubscribers.remove(aEventId,aSubscriber);
        }
    }

    return succesful;
}


EventManager::EventManager(QObject *parent) :
    QObject(parent),d(new EventManagerPrivate())
{
}

EventManager::~EventManager()
{
    if(d)
    {
        delete d;
        d=0;
    }
}

bool EventManager::send(const QString &aEventId,const QVariant &aData)
{
    return d->send(aEventId,aData);
}

bool EventManager::subscribe(const QString &aEventId,EventInterface *aSubscriber)
{
    return d->subscribe(aEventId,aSubscriber);
}

bool EventManager::unsubscribe(const QString &aEventId,EventInterface *aSubscriber)
{
    return d->unsubscribe(aEventId,aSubscriber);
}
