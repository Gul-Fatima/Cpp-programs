// Task: Create a class that ensures only one instance can exist
// throughout the application.
// o Example Scenario: A configuration manager class that loads settings
// from a file and ensures the settings are available globally without creating
// multiple instances.

#include <iostream>
#include <string>

using namespace std;

class ConfigurationManager {
private:
    static ConfigurationManager* instance;

    // Private constructor to prevent instantiation
    ConfigurationManager() {
        cout << "Configuration Manager Created." << endl;
    }

public:
    // Delete copy constructor and assignment operator
    ConfigurationManager(const ConfigurationManager&) = delete;
    ConfigurationManager& operator=(const ConfigurationManager&) = delete;

    // Static method to access the single instance
    static ConfigurationManager* GetInstance() {
        if (instance == nullptr) {
            instance = new ConfigurationManager();
        }
        return instance;
    }

    // Example method
    string GetSetting(const string& key) {
        return (key == "AppName") ? "My App" : "Unknown";
    }
};

// Initialize static member
ConfigurationManager* ConfigurationManager::instance = nullptr;

int main() {
    // Access the Singleton instance
    ConfigurationManager* config = ConfigurationManager::GetInstance();
    cout << config->GetSetting("AppName") << endl;

    // Confirm it's the same instance
    ConfigurationManager* anotherConfig = ConfigurationManager::GetInstance();
    cout << boolalpha << (config == anotherConfig) << endl; // Output: true

    return 0;
}
