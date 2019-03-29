#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class Myclass : public QObject
{
    Q_OBJECT
public:
    explicit Myclass(QObject *parent = 0);

signals:

public slots:
};

#endif // MYCLASS_H