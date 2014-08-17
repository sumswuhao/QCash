#include "AccountEditorTitle.h"

AccountEditorTitle::AccountEditorTitle(QWidget *parent) :
    QWidget(parent)
{
    QComboBox *m_accountSelector = new QComboBox(this);
    QLineEdit *m_accountDisplay = new QLineEdit;
    m_accountDisplay->setAlignment(Qt::AlignCenter);
    m_accountSelector->setLineEdit(m_accountDisplay);
    m_accountSelector->insertItem(1,"中国工商银行广州活期");
    m_accountSelector->insertItem(2,"中国银行中山活期");
    QDateEdit *m_beginDateSelector = new QDateEdit(this);
    m_beginDateSelector->setDate(QDate(2014,1,1));
    m_beginDateSelector->setDisplayFormat(tr("yyyy年MM月dd日"));
    m_beginDateSelector->adjustSize();
    QDateEdit *m_endDateSelector = new QDateEdit(this);
    m_endDateSelector->setDate(QDate(2014,2,1));
    m_endDateSelector->setDisplayFormat(tr("yyyy年MM月dd日"));
    m_endDateSelector->adjustSize();
    QLabel *m_toLabel = new QLabel(this);
    m_toLabel->setText(tr("~"));
    QHBoxLayout *m_titleBar = new QHBoxLayout(this);
    m_titleBar->addStretch();
    m_titleBar->addWidget(m_accountSelector);
    m_titleBar->addWidget(m_beginDateSelector);
    m_titleBar->addWidget(m_toLabel);
    m_titleBar->addWidget(m_endDateSelector);
    m_titleBar->addStretch();

    setLayout(m_titleBar);
}
