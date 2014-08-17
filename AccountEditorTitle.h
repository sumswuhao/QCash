#ifndef ACCOUNTEDITORTITLE_H
#define ACCOUNTEDITORTITLE_H

#include <QWidget>
#include <QLineEdit>
#include <QComboBox>
#include <QHBoxLayout>
#include <QDateEdit>
#include <QLabel>

class AccountEditorTitle : public QWidget
{
    Q_OBJECT
private:
    QComboBox *m_accountSelector;
    QDateEdit *m_beginDateSelector;
    QDateEdit *m_endDateSelector;
    QLabel *m_toLabel;

public:
    explicit AccountEditorTitle(QWidget *parent = 0);

signals:

public slots:

};

#endif // ACCOUNTEDITORTITLE_H
