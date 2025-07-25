#pragma once
#include "subject.h"
#include "observer.h"
#include <vector>
#include <algorithm>

class WeatherStation : public Subject {
private:
    std::vector<std::shared_ptr<Observer>> observers;
    float temperature = 0.0f;
public:
    void attach(std::shared_ptr<Observer> observer) override {
        observers.push_back(observer);
    }

    void detach(std::shared_ptr<Observer> observer) override {
        observers.erase(
            std::remove(observers.begin(), observers.end(), observer),
            observers.end()
        );
    }

    void notify() override {
        for (auto& obs : observers) {
            obs->update(temperature);
        }
    }

    void setTemperature(float temp) {
        temperature = temp;
        notify(); // Notify observers whenever temperature changes
    }
};
