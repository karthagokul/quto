#include "application.h"


int main(int argc,char **argv)
{
    Quto::Core::Application app(argc,argv);

    int status=app.exec();

    return status;

}
