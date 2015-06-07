#ifndef POPUPMANAGER_H
#define POPUPMANAGER_H

#include <QObject>

namespace Quto
{
    namespace Core
    {
        /*!
 * \brief The PopupManager class
 * \author Gokul Kartha <kartha.gokul@gmail.com>
 */
        class PopupManager : public QObject
        {
                Q_OBJECT
            public:
                explicit PopupManager(QObject *parent = 0);

            signals:

            public slots:

        };
    }
}

#endif // POPUPMANAGER_H
