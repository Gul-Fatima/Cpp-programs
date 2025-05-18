// Task: Implement a simple notification system where multiple objects
// need to be updated when the state of another object changes.
// o Example Scenario: A weather monitoring system where multiple
// displays (e.g., temperature, humidity, pressure) are updated when the
// weather station data changes.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Forward declaration
class IObserver;

// Subject class: WeatherStation
class WeatherStation {
    vector<IObserver*> observers;
    float temperature;
    float humidity;
    float pressure;

public:
    void AddObserver(IObserver* observer) {
        observers.push_back(observer);
    }

    void RemoveObserver(IObserver* observer) {
        observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
    }

    void NotifyObservers();

    void SetMeasurements(float temp, float hum, float pres) {
        temperature = temp;
        humidity = hum;
        pressure = pres;
        NotifyObservers();
    }

    float getTemperature() const { return temperature; }
    float getHumidity() const { return humidity; }
    float getPressure() const { return pressure; }
};

// Observer interface
class IObserver {
public:
    virtual void Update(float temp, float humidity, float pressure) = 0;
    virtual ~IObserver() {}
};

// Concrete Observer: TemperatureDisplay
class TemperatureDisplay : public IObserver {
public:
    void Update(float temp, float humidity, float pressure) override {
        cout << "Temperature Display: " << temp << "°C" << endl;
    }
};

// Concrete Observer: HumidityDisplay
class HumidityDisplay : public IObserver {
public:
    void Update(float temp, float humidity, float pressure) override {
        cout << "Humidity Display: " << humidity << "%" << endl;
    }
};

// Concrete Observer: PressureDisplay
class PressureDisplay : public IObserver {
public:
    void Update(float temp, float humidity, float pressure) override {
        cout << "Pressure Display: " << pressure << " hPa" << endl;
    }
};

// NotifyObservers definition (after IObserver is fully defined)
void WeatherStation::NotifyObservers() {
    for (IObserver* observer : observers) {
        observer->Update(temperature, humidity, pressure);
    }
}

// Main function
int main() {
    WeatherStation station;

    TemperatureDisplay tempDisplay;
    HumidityDisplay humDisplay;
    PressureDisplay presDisplay;

    // Register observers
    station.AddObserver(&tempDisplay);
    station.AddObserver(&humDisplay);
    station.AddObserver(&presDisplay);

    // Simulate weather update
    station.SetMeasurements(25.3f, 65.0f, 1013.1f);

    return 0;
}
