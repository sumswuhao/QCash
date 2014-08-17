#ifndef ACCOUNTEDITOR_H
#define ACCOUNTEDITOR_H

#include <QWidget>
#include "AccountEditorTitle.h"
#include <QVBoxLayout>

class AccountEditor : public QWidget
{
    Q_OBJECT
private:
    AccountEditorTitle *m_accountEditorTitle;
public:
    explicit AccountEditor(QWidget *parent = 0);

signals:

public slots:

};

#endif // ACCOUNTEDITOR_H
