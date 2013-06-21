#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QCheckBox>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class main_window : public QWidget
{
  Q_OBJECT

public:
  main_window(QWidget *parent = 0);

signals:
  void findNext(const QString &str, Qt::CaseSensitivity cs);
  void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
  void findClicked();
  void enableFindButton(const QString &text);

private:
  QLabel *label;
  QLineEdit *lineEdit;
  QCheckBox *caseCheckBox;
  QCheckBox *backwardCheckBox;
  QPushButton *findButton;
  QPushButton *closeButton;
};

#endif // MAIN_WINDOW_H
