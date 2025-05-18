#include <iostream>
#include <string>
using namespace std;

// Concrete Logger (No abstraction)
class ConsoleLogger {
public:
    void LogMessage(const string& message) {
        cout << "Console Logger: " << message << endl;
    }
};

// Tightly coupled NotificationService
class NotificationService {
    ConsoleLogger logger; // depends on concrete class
public:
    void Notify(const string& message) {
        // Notification logic
        logger.LogMessage(message);
    }
};

int main() {
    NotificationService service;
    service.Notify("Message sent without DIP.");

    return 0;
}


//with dip

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Abstraction
class ILogger {
public:
    virtual void LogMessage(const string& message) = 0;
    virtual ~ILogger() {}
};

// Concrete Console Logger
class ConsoleLogger : public ILogger {
public:
    void LogMessage(const string& message) override {
        cout << "Console Logger: " << message << endl;
    }
};

// Concrete File Logger
class FileLogger : public ILogger {
    string filePath;
public:
    FileLogger(const string& path) : filePath(path) {}

    void LogMessage(const string& message) override {
        ofstream outFile(filePath, ios::app);
        if (outFile.is_open()) {
            outFile << "File Logger: " << message << "\n";
            outFile.close();
        }
    }
};

// High-level module depends on abstraction
class NotificationService {
    ILogger* logger;
public:
    NotificationService(ILogger* l) : logger(l) {}

    void Notify(const string& message) {
        logger->LogMessage(message);
    }
};

int main() {
    ConsoleLogger consoleLogger;
    NotificationService service1(&consoleLogger);
    service1.Notify("Message sent using ConsoleLogger (DIP).");

    FileLogger fileLogger("log.txt");
    NotificationService service2(&fileLogger);
    service2.Notify("Message sent using FileLogger (DIP).");

    return 0;
}
