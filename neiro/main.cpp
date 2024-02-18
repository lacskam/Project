#include"file.h"
#include <QApplication>
#include"plot.h"
#include "mslq.h"
#include "nn.h"


int main(int argc, char* argv[]) {
QApplication a(argc, argv);
    DB dbase;

    std::cout<<"learn?(1,0)"<<std::endl;
    int h;
    std::cin>>h;
    if (h!=0) {
    learn(&h);
    }
    int df =8;
    QList<QDate> d = {QDate(2019,1,1),QDate(2020,3,8)};

    QList<Data> data = getDateFromDb(&dbase);
    importFullInfo(&data);




    Plot myPlot = Plot(0,&data,&df,&d,&dbase);

    myPlot.show();

    return a.exec();



}


