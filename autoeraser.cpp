#include "autoeraser.h"
#include <QDebug>
#include <QFile>
#include "Log.h"

AutoEraser::AutoEraser() {
    deadlineDate = QDateTime::currentDateTime();
}

AutoEraser::~AutoEraser() {

}

void AutoEraser::CheckFiles() {
    Log::LogInfo("Checking files...");


    for(int path = 0; path < trackingPaths.size(); path++) {
        QDirIterator it(trackingPaths.at(path), trackingExts, QDir::Files, QDirIterator::Subdirectories);

        while(it.hasNext()) {
            //Check file date
            QFileInfo info(it.next());

            if(info.lastModified() < deadlineDate) {

                QFile file(info.absoluteFilePath());
                file.remove();

                QByteArray ba = info.completeBaseName().toLatin1() + "." + info.suffix().toLatin1();

                const char* c_info = ba.data();
                Log::LogInfo(c_info, "was removed");
            }
        }
    }

    Log::LogInfo("Checking files complete");
}

void AutoEraser::SetDeadlineDate(int days, int hours, int mins) {
    deadlineDate = QDateTime::currentDateTime();
    deadlineDate = deadlineDate.addDays(-days);
    deadlineDate = deadlineDate.addSecs(-hours * 60 * 60);
    deadlineDate = deadlineDate.addSecs(-mins * 60);
}

//void AutoEraser::SetDeadlineDate() {}

void AutoEraser::AddTrackingPath(QString path) {
    trackingPaths << path;
}

void AutoEraser::AddTrackingPath(QStringList paths) {
    trackingPaths = paths;
}

void AutoEraser::AddTrackingExt(QString ext) {
    trackingExts << "*." + ext;
}

void AutoEraser::RemoveTrackingPath(QString path) {
    trackingPaths.removeOne(path);
}

void AutoEraser::RemoveTrackingExt(QString ext) {
    trackingExts.removeOne(ext);
}

QString AutoEraser::GetDeadlineDate() {
    return deadlineDate.toString();
}
