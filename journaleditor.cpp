#include "journaleditor.h"
#include "ui_journaleditor.h"

JournalEditor::JournalEditor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JournalEditor)
{
    ui->setupUi(this);
}

JournalEditor::~JournalEditor()
{
    delete ui;
}
