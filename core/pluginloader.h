#ifndef PLUGINLOADER_H
#define PLUGINLOADER_H

#include <QObject>


namespace Quto
{
    namespace Core
    {
        /*!
         * \brief The PluginLoader class
         * \author Gokul Kartha <kartha.gokul@gmail.com>
         */
        class PluginLoader : public QObject
        {
                Q_OBJECT
            public:
                explicit PluginLoader(QObject *parent = 0);
                bool loadPlugins();

            signals:
                void pluginLoaded();

            public slots:

        };
    }
}

#endif // PLUGINLOADER_H
