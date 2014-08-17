#include "AccountEditor.h"

AccountEditor::AccountEditor(QWidget *parent) :
    QWidget(parent)
{
    AccountEditorTitle *m_accountEditorTitle = new AccountEditorTitle(this);
    QVBoxLayout *m_mainLayout = new QVBoxLayout(this);
    m_mainLayout->addWidget(m_accountEditorTitle);
    m_mainLayout->addStretch();
    setLayout(m_mainLayout);
}
