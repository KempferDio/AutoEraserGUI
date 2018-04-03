#ifndef AUTOERASER_H
#define AUTOERASER_H

#include <qvector.h>
#include <QDateTime>
#include <QFileInfo>
#include <QDir>
#include <QDirIterator>

class AutoEraser
{
public:
    AutoEraser();
    ~AutoEraser();

    void CheckFiles();
    void SetDeadlineDate(int days, int hours, int mins);
    void AddTrackingPath(QString path);
    void AddTrackingPath(QStringList paths);
    void AddTrackingExt(QString ext);
    void RemoveTrackingPath(QString path);
    void RemoveTrackingExt(QString ext);
    QString GetDeadlineDate();

    QStringList trackingPaths;
    QStringList trackingExts;

private:

    QDateTime deadlineDate;

    bool CheckFileExt();
    QDateTime GetFileCreationTime(QFile file);
    QString GetFileExt(QFile file);
    QDateTime GetCurrentTime();
    QString GetFullPathToFile(QFile file);
    bool DeleteFile(QFile file);

};

#endif // AUTOERASER_H
