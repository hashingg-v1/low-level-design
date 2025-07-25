#pragma once
#include "gui_factory.h"
#include "dark_button.h"
#include "dark_checkbox.h"

class DarkFactory : public GUIFactory {
public:
    std::unique_ptr<Button> createButton() const override {
        return std::make_unique<DarkButton>();
    }
    std::unique_ptr<Checkbox> createCheckbox() const override {
        return std::make_unique<DarkCheckbox>();
    }
};
