#ifndef DOMAIN_INTERFACE_H
#define DOMAIN_INTERFACE_H

#include <QObject>
#include <QUrl>
#include <QString>

namespace Quto
{
    namespace Core
    {
        /*!
         * \brief The BaseDomain class
         * \author Gokul Kartha <kartha.gokul@gmail.com>
         */
        class BaseDomain:public QObject
        {
                Q_OBJECT

            public:
                BaseDomain(QObject *parent,const QString &aName,\
                           const QString &aAuthor,\
                           const QString &aHomePageUrl):
                    QObject(parent),
                    mName(aName),
                    mAuthor(aAuthor),
                    mHomePageURL(aHomePageUrl)
                {

                }

                virtual ~BaseDomain()
                {
                }

                virtual void onFocusChanged(const bool &aFocus)=0;
                virtual void started()=0;
                virtual void stopped()=0;

                QString name() const
                {
                    return mName;
                }

                QString author() const
                {
                    return mAuthor;
                }

                QUrl homepage() const
                {
                    return mHomePageURL;
                }

            private:
                QString mName;
                QString mAuthor;
                QUrl mHomePageURL;

        };
    }
}

#endif // DOMAIN_INTERFACE_H
