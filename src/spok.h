#ifndef SPOK_H
#define SPOK_H

#include <QObject>

#include <QTextBrowser>

class spok : public QObject
{
    Q_OBJECT
public:
    explicit spok(QObject *parent = nullptr);

signals:

public slots:

private:
    QTextBrowser   m_bug;
};

#endif // SPOK_H
