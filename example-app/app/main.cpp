#include "application.h"
#include "musicpropertyaccount.h"
#include "eventinterface.h"
#include "eventmanager.h"
#include <QDebug>

class MyCustomQutoEventOneListner : public Quto::Core::EventInterface
{
public:
    virtual void onQutoEvent(const QString &aEventId,const QVariant &aData)
    {
        qDebug()<<" Got Event :"<<aEventId<<aData;
    }
};

class MyCustomQutoEventTwoListener : public Quto::Core::EventInterface
{
public:
    virtual void onQutoEvent(const QString &aEventId,const QVariant &aData)
    {
        qDebug()<<" Got Event :"<<aEventId<<aData;
    }
};



int main(int argc,char **argv)
{
    Quto::Core::Application app(argc,argv);
    Quto::Core::EventManager *eventPropogater=app.eventManager();

    const QString EventOne ("Event 1");
    MyCustomQutoEventOneListner one;
    //Lets Subscribe for a Custom Event
    eventPropogater->subscribe(EventOne , &one);

    //And Test it
    eventPropogater->send(EventOne,QVariant());

    int status=app.exec();

    return status;

}
