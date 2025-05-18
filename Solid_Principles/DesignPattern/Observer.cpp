// Task: Implement a simple notification system where multiple objects
// need to be updated when the state of another object changes.
// o Example Scenario: A weather monitoring system where multiple
// displays (e.g., temperature, humidity, pressure) are updated when the
// weather station data changes.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class IObserver {
public:
    virtual void Update(float temp, float hum, float pres) = 0;
    virtual ~IObserver() = default;
};

class WeatherStation {
    vector<IObserver*> observers;
    float temperature, humidity, pressure;

public:
    void AddObserver(IObserver* o) { observers.push_back(o); }
    void RemoveObserver(IObserver* o) {
        observers.erase(remove(observers.begin(), observers.end(), o), observers.end());
    }
    void NotifyObservers() {
        for (auto* o : observers) o->Update(temperature, humidity, pressure);
    }
    void SetMeasurements(float t, float h, float p) {
        temperature = t; 
        humidity = h; 
        pressure = p;
        NotifyObservers();
    }
};

class TemperatureDisplay : public IObserver {
public:
    void Update(float temp, float, float) override {
        cout << "Temperature: " << temp << "°C\n";
    }
};

class HumidityDisplay : public IObserver {
public:
    void Update(float, float hum, float) override {
        cout << "Humidity: " << hum << "%\n";
    }
};

class PressureDisplay : public IObserver {
public:
    void Update(float, float, float pres) override {
        cout << "Pressure: " << pres << " hPa\n";
    }
};

int main() {
    WeatherStation station;
    TemperatureDisplay tempDisp;
    HumidityDisplay humDisp;
    PressureDisplay presDisp;

    station.AddObserver(&tempDisp);
    station.AddObserver(&humDisp);
    station.AddObserver(&presDisp);

    station.SetMeasurements(25.3f, 65.0f, 1013.1f);
}
