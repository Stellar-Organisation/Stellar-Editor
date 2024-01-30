//
// Created by beafowl on 1/25/24.
//

#ifndef TOOLBAR_HPP
#define TOOLBAR_HPP

#include <QToolBar>

class ToolBar : public QToolBar {
  Q_OBJECT

public:
  ToolBar(QWidget *parent = nullptr);
  ~ToolBar();
};

#endif // TOOLBAR_HPP
