#ifndef NEWSPAPER_H
#define NEWSPAPER_H
#include <QObject>

////////// newspaper.h
class Newspaper : public QObject
{
    Q_OBJECT
public:
    Newspaper(const QString & name) :
        m_name(name)
    {
    }

    void send() const
    {
        emit newPaper(m_name);
    }

signals:
    void newPaper(const QString &name) const;

private:
    QString m_name;
};
#endif // NEWSPAPER_H
