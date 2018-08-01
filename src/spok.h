#pragma once

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class Spok : public QMainWindow
{
    Q_OBJECT
public:
    explicit Spok(QWidget *parent = nullptr);

signals:

public slots:

private:

    Ui::MainWindow * ui;
};
