#ifndef CREADWRITEFILE_H
#define CREADWRITEFILE_H

#include <QObject>
#include <QWidget>
#include <QTableWidget>

class CREADWRITEFILE
{
public:
    CREADWRITEFILE();

    void SaveFile(QTableWidget *, const QString);
    void LoadFile(QTableWidget *, const QString);
    void writeJsonFile(QTableWidget *);
};

#endif // CREADWRITEFILE_H
