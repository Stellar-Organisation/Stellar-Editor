//
// Created by beafowl on 1/25/24.
//

#ifndef CUSTOMTOPBAR_HPP
#define CUSTOMTOPBAR_HPP

#include <QWidget>

class CustomTopBar : public QWidget {
  Q_OBJECT

public:
  explicit CustomTopBar(QWidget *parent = nullptr);
  ~CustomTopBar() override;
};

#endif // CUSTOMTOPBAR_HPP
