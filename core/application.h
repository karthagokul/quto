#ifndef Application_H
#define Application_H

#include <QGuiApplication>

namespace Quto
{
namespace Core
{
class Application : public QGuiApplication
{
    Q_OBJECT
public:
    explicit Application(int aArgc,char **aArgv);

signals:

public slots:

};
}
}


#endif // Application_H
