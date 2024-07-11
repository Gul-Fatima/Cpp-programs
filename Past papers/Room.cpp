#include <iostream>
using namespace std;

class Room {
protected:
    int num_walls, num_windows, num_rooms;
public:
    Room(int walls = 0, int windows = 0, int rooms = 0)
        : num_walls(walls), num_windows(windows), num_rooms(rooms) {}
    virtual char room_type() = 0;
    virtual void input() {
        cout << "Enter number of walls: ";
        cin >> num_walls;
        cout << "Enter number of windows: ";
        cin >> num_windows;
        cout << "Enter number of rooms: ";
        cin >> num_rooms;
    }
};

class Bedroom : public Room {
    int bed_size, num_wardrobe;
public:
    Bedroom(int walls = 0, int windows = 0, int rooms = 0, int bedSize = 0, int wardrobe = 0)
        : Room(walls, windows, rooms), bed_size(bedSize), num_wardrobe(wardrobe) {}
    char room_type() override {
        return 'B';
    }
    void set_wardrobe(int noOfWardrobe) {
        num_wardrobe += noOfWardrobe;
    }
    int retrieve_wardrobe() {
        return num_wardrobe;
    }
    void input() override {
        Room::input();
        cout << "Enter number of wardrobes: ";
        cin >> num_wardrobe;
        cout << "Enter bed size: ";
        cin >> bed_size;
    }
};

class LivingRoom : public Room {
    int num_sofas;
public:
    bool fireplace_present;
    LivingRoom(int walls = 0, int windows = 0, int rooms = 0, int sofas = 0, bool fireplace = false)
        : Room(walls, windows, rooms), num_sofas(sofas), fireplace_present(fireplace) {}
    int retrieve_sofas() {
        return num_sofas;
    }
    void input() override {
        Room::input();
        cout << "Enter number of sofas: ";
        cin >> num_sofas;
        cout << "Is there a fireplace? (1 for yes, 0 for no): ";
        cin >> fireplace_present;
    }
    char room_type() override {
        return 'L';
    }
};

int main() {
    Bedroom b;
    LivingRoom lr;

    // Test Bedroom
    b.input();
    cout << "Room type: " << b.room_type() << endl;
    if (b.room_type() == 'B') {
        cout << "This is a bedroom!" << endl;
        cout << "Number of wardrobes: " << b.retrieve_wardrobe() << endl;
    }

    // Test Living Room
    lr.input();
    cout << "Room type: " << lr.room_type() << endl;
    if (lr.room_type() == 'L') {
        cout << "This is a living room!" << endl;
        cout << "Number of sofas: " << lr.retrieve_sofas() << endl;
        cout << "Fireplace present: " << (lr.fireplace_present ? "Yes" : "No") << endl;
    }

    return 0;
}
