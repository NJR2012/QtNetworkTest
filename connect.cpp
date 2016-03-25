#include "QtSql"

void ConnectToDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("SixtDatabase");
    db.setUserName("nash");
    db.setPassword("Bachelor2016");
    if(db.open())
    {
        qDebug() << "Database connection opened!";
    }
    else
    {
        qDebug() << "Database connection not opened. Something went wrong.";
        db.close();
    }

}
