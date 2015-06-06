#ifndef ApplicationPrivate_H
#define ApplicationPrivate_H

#include<QPointer>

namespace Quto
{
    namespace Core
    {
        class EventManager;
        class PluginLoader;
        class PropertyBank;
        class ApplicationPrivate:public QObject
        {
                Q_OBJECT
            public:
                ApplicationPrivate(QObject *parent);
                ~ApplicationPrivate();

            public:
                QPointer<EventManager> mEventManager;
                QPointer<PluginLoader> mPluginLoader;
                QPointer<PropertyBank> mPropertyBank;
        };
    }
}

#endif // Application_H
