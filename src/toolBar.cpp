#include "toolBar.hpp"
#include <QHBoxLayout>
#include <QPushButton>

ToolBar::ToolBar(QWidget *parent) : QToolBar(nullptr) {
  const QString assetsPath = "./assets/";
  const QStringList iconNames = {"save.png",   "build.png",  "start.png",
                                 "pause.png",  "stop.png",   "cursor.png",
                                 "resize.png", "rotate.png", "maximize.png"};

  for (const QString &iconName : iconNames) {
    auto *action = new QAction(QIcon(assetsPath + iconName), "", this);
    addAction(action);
  }

  this->setToolButtonStyle(Qt::ToolButtonIconOnly);

  setStyleSheet("QToolBar {"
                "  border: 2px solid transparent;"
                "  background-color: grey ;"
                "  border-top-left-radius: 0px;"
                "  border-top-right-radius: 0px;"
                "  border-bottom-left-radius: 10px;"
                "  border-bottom-right-radius: 10px;"
                "  padding: 4px;"
                "}"
                "Separator {"
                "  background-color: black;"
                "  width: 1px;"
                "  margin: 10px;"
                "}");
}

ToolBar::~ToolBar() = default;