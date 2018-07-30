#include "spok.h"
#include <iostream>
#include <QDebug>

using namespace std;

spok::spok(QMainWindow *parent) : QMainWindow(parent)
{


    cout <<"foo\nbsr" << Q_FUNC_INFO << endl;
    //m_buf.append("");
}
/*
void spok::show()
{
    m_buf.show();

   sleep(2);
   coud << "showing" :: endl;
}
*/
