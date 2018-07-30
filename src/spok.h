#ifndef SPOK_H
#define SPOK_H

#include <QObject>

#include <QPlainTextEdit>
#include <unistd.h>

class spok : public QObject
{
    Q_OBJECT
public:
    explicit spok(QObject *parent = nullptr);
  //  void show();

signals:

public slots:

private:
    QPlainTextEdit   m_buf;
};

#endif // SPOK_H
