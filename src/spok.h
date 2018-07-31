#ifndef SPOK_H
#define SPOK_H

#include <QObject>

#include <QMainWindow>
#include <QPlainTextEdit>
#include <unistd.h>
#include "ui_spok.h"


class spok : public QMainWindow
{
    Q_OBJECT
public:
    explicit spok(QMainWindow *parent = nullptr);
  //  void show();

signals:

public slots:

private:

    Ui_Main    mainUi;
    QPlainTextEdit   m_buf;
};

#endif // SPOK_H
