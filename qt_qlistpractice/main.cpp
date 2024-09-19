#include <QCoreApplication>
#include <QList>

QList<int> makeList(){
    QList<int> items;
    for(int i = 0;i<10;i++){
        items.append(i*i);
    }
    return items;

}

void find(QList<int> &list, int value){
    bool a=0;
    foreach (int i,list) {
        if(value==i){
            a=1;
        }
    }
    if(a){
        qInfo()<<"the value existed and the index is:"<<list.indexOf(value);
    }
    else{
        qInfo()<<"the value does not exist!!!";
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> list=makeList();
    find(list,9);
    find(list,8);

    return a.exec();
}
