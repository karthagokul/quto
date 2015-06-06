#include "application.h"
#include "private/applicationprivate.h"
#include "eventmanager.h"
#include "pluginloader.h"

#include<QPointer>

using namespace Quto::Core;

Application::Application(int aArgc,char **aArgv) :
    QGuiApplication(aArgc,aArgv),d(new ApplicationPrivate(qApp))
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

EventManager *Application::eventManager() const
{
    return d->mEventManager.data();
}
