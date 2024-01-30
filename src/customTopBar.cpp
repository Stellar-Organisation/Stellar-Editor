//
// Created by beafowl on 1/25/24.
//

#include "customTopBar.hpp"
#include <QApplication>
#include <QHBoxLayout>
#include <QMenuBar>
#include <QWidget>

CustomTopBar::CustomTopBar(QWidget* parent) : QWidget(parent)
{
    auto* layout = new QHBoxLayout(this);
    layout->setMargin(0); // Remove margins

    auto* menuBar = new QMenuBar(this);
    QMenu* z = menuBar->addMenu("Z");
    QMenu* fileMenu = menuBar->addMenu("File");
    QMenu* editMenu = menuBar->addMenu("Edit");
    QMenu* viewMenu = menuBar->addMenu("View");
    fileMenu->addAction("Open");
    fileMenu->addAction("Exit");

    // Apply styles here
    menuBar->setStyleSheet(
        "QMenuBar {"
        "  border: 2px solid grey;"
        "  border-top-left-radius: 0px;"
        "  border-top-right-radius: 0px;"
        "  border-bottom-left-radius: 0px;"
        "  border-bottom-right-radius: 10px;"
        "  background-color: grey;"
        "}"
        "QMenuBar::item {"
        "  background-color: transparent;"
        "}"
        "QMenuBar::item:selected {"
        "  background-color: transparent;"
        "}"
        // Add additional styles for QMenu and QMenuItem if needed
    );

    layout->addWidget(menuBar);
    layout->addStretch(1); // Add a spacer

    this->setLayout(layout);
}

CustomTopBar::~CustomTopBar() = default;
