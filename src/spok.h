#ifndef SPOK_H
#define SPOK_H

#include <QObject>

#include <QTextBrowser>

class spok : public QObject
{
    Q_OBJECT
public:
    explicit spok(QObject *parent = nullptr);
    void spkshow();

signals:

public slots:

private:
    QTextBrowser   m_buf;
};

#endif // SPOK_H
