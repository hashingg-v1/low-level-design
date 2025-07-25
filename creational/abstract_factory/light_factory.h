#pragma once
#include "gui_factory.h"
#include "light_button.h"
#include "light_checkbox.h"

class LightFactory : public GUIFactory {
public:
    std::unique_ptr<Button> createButton() const override {
        return std::make_unique<LightButton>();
    }
    std::unique_ptr<Checkbox> createCheckbox() const override {
        return std::make_unique<LightCheckbox>();
    }
};
