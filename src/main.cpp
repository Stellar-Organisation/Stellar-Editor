#include <QApplication>
#include <QWidget>

void createAndShowWidget() {
  QWidget w;
  w.show();
  QApplication::exec();
}

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  createAndShowWidget();

  return QApplication::exec();
}
