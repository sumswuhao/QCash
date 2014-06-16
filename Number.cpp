#include "Number.h"

Number::Number (QString input)
{
    //验证是否为合法的数字
    QRegExp pattern(QString("^[+|-]{0,}[0-9]{1,}[.]{0,1}[0-9]{0,}"));
    bool matched = input.contains(pattern);
    if(!mathced){
        throw
    }

}
