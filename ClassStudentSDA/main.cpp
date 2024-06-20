#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

// ������� ����� Student
class Student {
public:
    // �����������
    Student(const string& name, int age, const string& studentID)
        : name(name), age(age), studentID(studentID) {}

    // ������� ��� ������ ���������� � ��������
    virtual void printInfo() const
    {
        cout << "���: " << name << "\n�������: " << age << "\n������� ID: " << studentID << endl;
    }

    // ����������� ����������
    virtual ~Student() {}

protected:
    string name;
    int age;
    string studentID;
};

// ����������� ����� Aspirant
class Aspirant : public Student {
public:
    // �����������
    Aspirant(const string& name, int age, const string& studentID, const string& thesisTopic)
        : Student(name, age, studentID), thesisTopic(thesisTopic) {}

    // ������� ��� ������ ���������� �� ���������
    void printInfo() const override
    {
        Student::printInfo();
       cout << "���� �����������: " << thesisTopic << endl;
    }

private:
    string thesisTopic;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // �������� ������� ������ Student
    Student student("������", 22, "S123456");
    student.printInfo();

    cout << endl;

    // �������� ������� ������ Aspirant
    Aspirant aspirant("������", 22, "A654321", "CNC-programming");
    aspirant.printInfo();

    return 0;
}