#include "spok.h"
#include "ui_spok.h"

#include <QDebug>

using namespace std;

Spok::Spok(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
