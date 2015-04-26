#ifndef CONSOLELOGGER_H
#define CONSOLELOGGER_H

#include "logger.h"
#include <QObject>

class ConsoleLogger : public Quto::Core::LoggingPlugin
{
public:
    ConsoleLogger();
    virtual void write(const Quto::Core::LogType & aLogType,const QString &aLogData);
    virtual bool start();
    virtual bool stop();
    virtual QString name() const;
    virtual QString author() const;
    virtual bool isActive() const;
};

#endif // CONSOLELOGGER_H
