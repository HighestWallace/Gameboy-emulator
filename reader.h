#ifndef READER_H
#define READER_H

////////// reader.h
#include <QObject>
#include <QDebug>

class Reader : public QObject
{
    Q_OBJECT
public:
    Reader() {}

public slots:
    void receiveNewspaper(const QString & name) const
    {
        qDebug() << "Receives Newspaper: " << name;
    }
};

#endif // READER_H
