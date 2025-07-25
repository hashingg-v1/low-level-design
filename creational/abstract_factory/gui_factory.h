#pragma once
#include <memory>
#include "button.h"
#include "checkbox.h"

// Abstract factory
class GUIFactory {
public:
    virtual std::unique_ptr<Button> createButton() const = 0;
    virtual std::unique_ptr<Checkbox> createCheckbox() const = 0;
    virtual ~GUIFactory() = default;
};
