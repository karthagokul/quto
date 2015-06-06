#include "application.h"

namespace Quto
{
    namespace Core
    {
        class ApplicationPrivate
        {
            public:
                ApplicationPrivate();
        };
    }
}

using namespace Quto::Core;

ApplicationPrivate::ApplicationPrivate()
{

}

Application::Application(int aArgc,char **aArgv) :
    QGuiApplication(aArgc,aArgv),d(new ApplicationPrivate())
{

}

Application::~Application()
{
    if(d)
    {
        delete d;
        d=0;
    }
}
