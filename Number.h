#ifndef NUMBER_H
#define NUMBER_H

#include <QObject>
#include <QString>
#include <QRegExp>

class Number : public QObject
{
    Q_OBJECT

public:
    Number (QString);
    Number (long long);
    Number (double);
    //~Number ();

private:
    const int AMPLIFICATION = 10000; //输入的数值将乘以这个放大倍数，以便化小数为整数，处理完后除以这个倍数，得到正确的结果
    const unsigned long long number = 0;
    enum Sign {
        Sign_Positive = 1,
        Sign_Negative = -1
    };
    Sign sign = Sign_Positive; //记录数字的正负号

};
#endif // NUMBER_H
