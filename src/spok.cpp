#include "spok.h"
#include <iostream>
#include <QDebug>

using namespace std;

spok::spok(QObject *parent) : QObject(parent)
{


    cout <<"foo\nbsr" << Q_FUNC_INFO << endl;
}
