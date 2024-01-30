//
// Created by beafowl on 1/30/24.
//

#ifndef CLOSEBAR_HPP
#define CLOSEBAR_HPP

#include <QToolBar>

class CloseBar : public QToolBar
{
    Q_OBJECT

public:
    explicit CloseBar(QWidget *parent = nullptr);
    ~CloseBar() override;
};

#endif //CLOSEBAR_HPP
