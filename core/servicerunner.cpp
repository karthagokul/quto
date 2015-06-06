#include "servicerunner.h"
#include "service.h"

using namespace Quto::Core;

ServiceRunner::ServiceRunner(Service *aService) :
    QThread(aService), //Shall we give 0 here?
    mService(aService)
{
}

void ServiceRunner::run()
{

}
