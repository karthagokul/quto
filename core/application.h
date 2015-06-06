#ifndef Application_H
#define Application_H

#include <QGuiApplication>

namespace Quto
{
    namespace Core
    {
        class ApplicationPrivate;
        class Application : public QGuiApplication
        {
                Q_OBJECT
            public:
                explicit Application(int aArgc,char **aArgv);
                //TODO : See why app is finishing unexpectedly
                virtual ~Application();
            private:
                ApplicationPrivate *d;
        };
    }
}


#endif // Application_H
