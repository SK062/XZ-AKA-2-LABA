#include <iostream>

class Engine {
public:
    Engine() {
        // Конструктор двигуна
    }

    ~Engine() {
        // Деструктор двигуна
    }

    // Метод для встановлення швидкості обертів двигуна
    void setSpeed(int speed) {
        // Реалізація встановлення швидкості обертів
        std::cout << "Setting engine speed to " << speed << " RPM." << std::endl;
    }
};

class Controller {
public:
    Controller() {
        // Конструктор контролера
    }

    ~Controller() {
        // Деструктор контролера
    }

    // Методи для керування вентилятором
    void startFan() {
        // Розпочати роботу вентилятора
        std::cout << "Starting the fan." << std::endl;
    }

    void stopFan() {
        // Зупинити роботу вентилятора
        std::cout << "Stopping the fan." << std::endl;
    }
};

class Fan {
public:
    Fan() {
        // Конструктор вентилятора
    }

    ~Fan() {
        // Деструктор вентилятора
    }

    // Метод для налаштування часу відключення вентилятора
    void setShutdownTime(int time) {
        // Встановити час відключення вентилятора
        std::cout << "Setting fan shutdown time to " << time << " minutes." << std::endl;
    }
};

class RemoteControl {
public:
    RemoteControl() {
        // Конструктор пульта керування
    }

    ~RemoteControl() {
        // Деструктор пульта керування
    }

    // Метод для налаштування швидкості обертів двигуна за допомогою пульта керування
    void setEngineSpeed(Engine& engine, int speed) {
        engine.setSpeed(speed);
    }

    // Метод для налаштування часу відключення вентилятора за допомогою пульта керування
    void setFanShutdownTime(Fan& fan, int time) {
        fan.setShutdownTime(time);
    }
};

int main() {
    Fan fan;
    Engine engine;
    Controller controller;
    RemoteControl remoteControl;

    int engineSpeed;
    int fanShutdownTime;

    std::cout << "Enter engine speed (RPM): ";
    std::cin >> engineSpeed;

    std::cout << "Enter fan shutdown time (minutes): ";
    std::cin >> fanShutdownTime;

    controller.startFan(); // Розпочати роботу вентилятора
    remoteControl.setEngineSpeed(engine, engineSpeed); // Налаштувати швидкість обертів двигуна
    remoteControl.setFanShutdownTime(fan, fanShutdownTime); // Налаштувати час відключення вентилятора
    controller.stopFan(); // Зупинити роботу вентилятора

    return 0;
}
