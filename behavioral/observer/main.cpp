#include "weather_station.h"
#include "phone_display.h"
#include "window_display.h"
#include <memory>

int main() {
    auto weatherStation = std::make_shared<WeatherStation>();

    auto phone = std::make_shared<PhoneDisplay>();
    auto window = std::make_shared<WindowDisplay>();

    weatherStation->attach(phone);
    weatherStation->attach(window);

    weatherStation->setTemperature(25.0f);
    weatherStation->setTemperature(28.5f);

    return 0;
}
