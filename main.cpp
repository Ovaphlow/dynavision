#include <QApplication>
#include <QLabel>

#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QWidget *window = new QWidget;
  window->setWindowTitle("输入年龄");
  QSpinBox *spinBox = new QSpinBox;
  QSlider *slider = new QSlider(Qt::Horizontal);
  spinBox->setRange(0, 130);
  slider->setRange(0, 130);

  QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                   slider, SLOT(setValue(int)));
  QObject::connect(slider, SIGNAL(valueChanged(int)),
                   spinBox, SLOT(setValue(int)));
  spinBox->setValue(35);

  QHBoxLayout *topLayout = new QHBoxLayout;
  topLayout->addWidget(spinBox);
  topLayout->addWidget(slider);

 // QLabel *labelImage = new QLabel;

  window->setLayout(topLayout);

  window->show();

  return app.exec();
}
