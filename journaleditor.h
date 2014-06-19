#ifndef JOURNALEDITOR_H
#define JOURNALEDITOR_H

#include <QWidget>

namespace Ui {
class JournalEditor;
}

class JournalEditor : public QWidget
{
    Q_OBJECT

public:
    explicit JournalEditor(QWidget *parent = 0);
    ~JournalEditor();

private:
    Ui::JournalEditor *ui;
};

#endif // JOURNALEDITOR_H
