#include <QApplication>
#include <QVBoxLayout>
#include "mainWindow.hpp"
#include "customTopBar.hpp"
#include "toolBar.hpp"
#include "closeBar.hpp"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  MainWindow window;

  // Create a container widget and a horizontal layout
  auto *container = new QWidget(&window);
  auto *layout = new QHBoxLayout(container);
  layout->setAlignment(Qt::AlignTop | Qt::AlignLeft);
  layout->setSpacing(0);
  layout->setMargin(0);

  // Create and add the CustomTopBar to the layout
  auto *customMenuBar = new CustomTopBar(container);
  layout->addWidget(customMenuBar);

  // Create and add the ToolBar to the layout
  auto *toolBar = new ToolBar(container);
  layout->addWidget(toolBar);
  layout->addStretch(0);

  auto *closeBar = new CloseBar(container);
  layout->addWidget(closeBar);

  // Set the container as the central widget of the main window
  window.setCentralWidget(container);

  window.show();

  return QApplication::exec();
}
