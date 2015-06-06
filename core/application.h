#ifndef Application_H
#define Application_H

#include <QGuiApplication>

namespace Quto
{
    namespace Core
    {
        class ApplicationPrivate;
        class EventManager;

        /*!
         * \brief The Application class
         * \author Gokul Kartha <kartha.gokul@gmail.com>
         */
        class Application : public QGuiApplication
        {
                Q_OBJECT
            public:
                explicit Application(int aArgc,char **aArgv);
                //TODO : See why app is finishing unexpectedly
                virtual ~Application();
                EventManager *eventManager() const ;
            private:
                ApplicationPrivate *d;
        };
    }
}

//Macro for the application instance,Any class in the process can access this.
#define qutoApp (static_cast<Quto::Core::Application *>(QGuiApplication::instance()))

#endif // Application_H
