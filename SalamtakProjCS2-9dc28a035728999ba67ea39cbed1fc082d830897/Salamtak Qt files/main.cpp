#include "salamtak.h"

#include <QApplication>
#include <QtSql>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString servername = "localhost";
    QString dbname = "HospitalDB";
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setConnectOptions();

    //connection string
    QString dsn = QString("Server=localhost;Database=master;Trusted_Connection=True;").arg(servername).arg(dbname);
    db.setDatabaseName(dsn);
    if(db.open())
    {
        qDebug() << "Opened!";
        db.close();
    }
    else
    {
        qDebug() << "Error = " << db.lastError().text();
    }


    Salamtak w;
    w.show();
    w.setWindowIcon(QIcon("../Resources/SalLogo.png"));
    return a.exec();
}
