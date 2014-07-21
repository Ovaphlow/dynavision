#include <QHBoxLayout>
#include <QVBoxLayout>

#include "main_window.h"

main_window::main_window(QWidget *parent)
  : QWidget(parent)
{
  label = new QLabel("Find &what:");
  lineEdit = new QLineEdit;
  label->setBuddy(lineEdit);

  caseCheckBox = new QCheckBox("Match &case");
  backwardCheckBox = new QCheckBox("Search backward");

  findButton = new QPushButton("&Find");
  findButton->setDefault(true);
  findButton->setEnabled(false);

  closeButton = new QPushButton("关闭");

  connect(lineEdit, SIGNAL(textChanged(const QString &)),
          this, SLOT(enableFindButton(const QString &)));
  connect(findButton, SIGNAL(clicked()),
          this, SLOT(findClicked()));
  connect(closeButton, SIGNAL(clicked()),
          this, SLOT(close()));

  QHBoxLayout *topLeftLayout = new QHBoxLayout;
  topLeftLayout->addWidget(label);
  topLeftLayout->addWidget(lineEdit);

  QVBoxLayout *leftLayout = new QVBoxLayout;
  leftLayout->addLayout(topLeftLayout);
  leftLayout->addWidget(caseCheckBox);
  leftLayout->addWidget(backwardCheckBox);

  QVBoxLayout *rightLayout = new QVBoxLayout;
  rightLayout->addWidget(findButton);
  rightLayout->addWidget(closeButton);
  rightLayout->addStretch();

  QHBoxLayout *mainLayout = new QHBoxLayout;
  mainLayout->addLayout(leftLayout);
  mainLayout->addLayout(rightLayout);
  setLayout(mainLayout);

  setWindowTitle("查找");
  setFixedHeight(sizeHint().height());
}

void main_window::findClicked()
{
  QString text = lineEdit->text();
  Qt::CaseSensitivity cs =
      caseCheckBox->isChecked() ? Qt::CaseSensitive
                                : Qt::CaseInsensitive;
  if (backwardCheckBox->isChecked())
    {
      emit findPrevious(text, cs);
    } else {
      emit findNext(text, cs);
    }
}

void main_window::enableFindButton(const QString &text)
{
  findButton->setEnabled(!text.isEmpty());
}
