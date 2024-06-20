#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

// Базовый класс Student
class Student {
public:
    // Конструктор
    Student(const string& name, int age, const string& studentID)
        : name(name), age(age), studentID(studentID) {}

    // Функция для вывода информации о студенте
    virtual void printInfo() const
    {
        cout << "Имя: " << name << "\nВозраст: " << age << "\nСтудент ID: " << studentID << endl;
    }

    // Виртуальный деструктор
    virtual ~Student() {}

protected:
    string name;
    int age;
    string studentID;
};

// Производный класс Aspirant
class Aspirant : public Student {
public:
    // Конструктор
    Aspirant(const string& name, int age, const string& studentID, const string& thesisTopic)
        : Student(name, age, studentID), thesisTopic(thesisTopic) {}

    // Функция для вывода информации об аспиранте
    void printInfo() const override
    {
        Student::printInfo();
       cout << "Тема диссертации: " << thesisTopic << endl;
    }

private:
    string thesisTopic;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Создание объекта класса Student
    Student student("Данила", 22, "S123456");
    student.printInfo();

    cout << endl;

    // Создание объекта класса Aspirant
    Aspirant aspirant("Данила", 22, "A654321", "CNC-programming");
    aspirant.printInfo();

    return 0;
}