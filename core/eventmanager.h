#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include <QObject>
#include <QString>
#include <QVariant>

namespace Quto
{
    namespace Core
    {
        class EventManagerPrivate;
        class EventInterface;
        /*!
         * \brief The EventManager class
         * \author Gokul Kartha <kartha.gokul@gmail.com>
         */
        class EventManager : public QObject
        {
                Q_OBJECT
            public:
                explicit EventManager(QObject *parent = 0);
                ~EventManager();
                bool send(const QString &aEventId,const QVariant &aData=QVariant());
                bool subscribe(const QString &aEventId,EventInterface *aSubscriber);
                bool unsubscribe(const QString &aEventId,EventInterface *aSubscriber);

            private:
                EventManagerPrivate *d;
        };
    }
}

#endif // EVENTMANAGER_H
