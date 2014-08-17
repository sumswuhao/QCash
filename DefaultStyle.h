#ifndef DEFAULTSTYLE_H
#define DEFAULTSTYLE_H

//莫名其妙地无法加载qss文件，改用在头文件内定义的方法

const QString DEFAULTSTYLE = " \
        * { \
            font-size: 30px; \
        }\
        \
        QComboBox { \
            min-width: 325px;\
        } \
        ";

#endif // DEFAULTSTYLE_H
