#ifndef GLOBAL_H
#define GLOBAL_H
#include <QString>
#include <QDir>
#include "src/helper/filehelper.h"

namespace GLOBAL {
    namespace PATH {
        static const QString WORK = QDir::currentPath();
        static const QString TMP = FileHelper::joinPath(WORK, "temp");
    };

    namespace SQLITE {
        static const QString NAME = FileHelper::joinPath(PATH::TMP, "cos.db");
    };

    namespace SQL {
        static const QString LOGIN_INFO_TABLE = ":/static/sql/login_info.sql";
    };

    namespace TABLES {
        static const QString LOGIN_INFO = "login_info";
    };

    static bool init()
    {
        return FileHelper::mkPath(PATH::TMP);
    }
    static bool OK = init();
}

#endif // GLOBAL_H
