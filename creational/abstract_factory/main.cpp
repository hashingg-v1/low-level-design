#include "light_factory.h"
#include "dark_factory.h"

int main() {
    // Choose theme dynamically (here hardcoded)
    bool darkTheme = true; 

    std::unique_ptr<GUIFactory> factory;

    if (darkTheme) {
        factory = std::make_unique<DarkFactory>();
    } else {
        factory = std::make_unique<LightFactory>();
    }

    // Create products without knowing concrete classes
    auto button = factory->createButton();
    auto checkbox = factory->createCheckbox();

    button->paint();    // e.g., Rendering Dark Button
    checkbox->paint();  // e.g., Rendering Dark Checkbox

    return 0;
}
