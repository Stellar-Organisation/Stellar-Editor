//
// Created by beafowl on 1/30/24.
//

#include "closeBar.hpp"
#include <QIcon>
#include <QPixmap>
#include <QToolButton>

// Function to create a button with the given spritesheet
QToolButton *createButtonWithStates(const QString &spriteSheetPath) {
  // Load the sprite sheet
  QPixmap spriteSheet(spriteSheetPath);

  // Create the button
  auto *button = new QToolButton();

  // Assuming each sprite is 114x114 pixels and they are aligned horizontally
  const int spriteSize = 114;

  // Extract individual button states from the sprite sheet
  QIcon buttonIcon;
  buttonIcon.addPixmap(
      spriteSheet.copy(0 * spriteSize, 0, spriteSize, spriteSize),
      QIcon::Normal);
  buttonIcon.addPixmap(
      spriteSheet.copy(1 * spriteSize, 0, spriteSize, spriteSize),
      QIcon::Active);
  buttonIcon.addPixmap(
      spriteSheet.copy(2 * spriteSize, 0, spriteSize, spriteSize),
      QIcon::Selected);
  buttonIcon.addPixmap(
      spriteSheet.copy(3 * spriteSize, 0, spriteSize, spriteSize),
      QIcon::Disabled);

  // Set the icon size and the icon itself
  button->setIconSize(QSize(spriteSize, spriteSize));
  button->setIcon(buttonIcon);

  return button;
}

CloseBar::CloseBar(QWidget *parent) : QToolBar(parent) {
  // In your Toolbar constructor or initialization function
  QToolButton *redButton = createButtonWithStates("./assets/red_buttons.png");
  QToolButton *yellowButton =
      createButtonWithStates("./assets/yellow_buttons.png");
  QToolButton *greenButton =
      createButtonWithStates("./assets/green_buttons.png");

  // Add the buttons to the toolbar
  addSeparator();
  addWidget(greenButton);
  addWidget(yellowButton);
  addWidget(redButton);

  this->setToolButtonStyle(Qt::ToolButtonIconOnly);

  setStyleSheet("QToolBar {"
                "  border: 2px solid transparent;"
                "  border-top-left-radius: 0px;"
                "  border-top-right-radius: 0px;"
                "  border-bottom-left-radius: 10px;"
                "  border-bottom-right-radius: 0px;"
                "  background-color: grey ;"
                "  padding: 4px;"
                "}"
                "Separator {"
                "  background-color: black;"
                "  width: 1px;"
                "  margin: 10px;"
                "}");
}

CloseBar::~CloseBar() = default;
