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
                virtual void write(const LogType & aLogType,const QString &aLogData)=0;
                virtual bool start()=0;
                virtual bool stop()=0;
                virtual QString name() const=0;
                virtual QString author() const=0;
                virtual bool isActive() const=0;
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
                /*!
     * \brief Logger
     * \param parent
     */
                explicit Logger(QObject *parent = 0);
                /*!
     * \brief ~Logger
     */
                virtual ~Logger();
                /*!
     * \brief registerPlugin
     * \param aPlugin
     * \return
     */
                bool registerPlugin(LoggingPlugin *aPlugin);
                /*!
     * \brief unregisterPlugin
     * \param aPlugin
     * \return
     */
                bool deregisterPlugin(LoggingPlugin *aPlugin);

            private:
                //You can add multiple logging plugins for simultaneous logging
                QList<LoggingPlugin*> mPlugins;
        };
    }
}
#endif // LOGGER_H
