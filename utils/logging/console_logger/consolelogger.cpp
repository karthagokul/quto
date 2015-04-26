#include "consolelogger.h"

ConsoleLogger::ConsoleLogger()
{
}

void ConsoleLogger::write(const Quto::Core::LogType & aLogType,const QString &aLogData)
{
    Q_UNUSED(aLogType);
    Q_UNUSED(aLogData);
}

bool ConsoleLogger::start()
{
    return true;
}

bool ConsoleLogger::stop()
{
    return true;
}

QString ConsoleLogger::name() const
{
    return "Quto Console Logger V 1.0";
}

QString ConsoleLogger::author() const
{
    return "Quto";
}

bool ConsoleLogger::isActive() const
{
    return true;
}
