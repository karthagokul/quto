#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>

namespace Quto
{
namespace Core
{

enum LogType
{
    Warning,
    Error,
    Debug,
    userDefined
};

/*!
 * \brief The LoggingPlugin class
 * \author Gokul Kartha <kartha.gokul@gmail.com>
 * This interface can be used to write your own logger for example a Bluetooth Logger,a logger over Sockets etc.
 */
class LoggingPlugin
{
   public:
        LoggingPlugin(){}
        virtual ~LoggingPlugin(){}
        virtual void write(const LogType & aLogType,const QString &aLogData);
        virtual bool start();
        virtual bool stop();
};

/*!
 * \brief The Logger class
 * \author Gokul Kartha <kartha.gokul@gmail.com>
 * The logger class,which can be injected to the application using installEventFilter.
 */
class Logger : public QObject
{
    Q_OBJECT
public:
    explicit Logger(QObject *parent = 0);

signals:

public slots:

};
}
}
#endif // LOGGER_H
