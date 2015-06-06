#include "applicationprivate.h"

#include "application.h"
#include "eventmanager.h"
#include "pluginloader.h"
#include "propertybank.h"

using namespace Quto::Core;

ApplicationPrivate::ApplicationPrivate(QObject *parent):
    QObject(parent),
    mEventManager(new EventManager(qApp))
{

}

ApplicationPrivate::~ApplicationPrivate()
{
    //Lets clear the proprties first
    mPropertyBank.clear();
    //Then the event pool
    mEventManager.clear();
    //finally all the plugins
    mPluginLoader.clear();
}
