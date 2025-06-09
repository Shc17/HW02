#include <iostream>
#include <vector>
using namespace std;

// �⺻ Ŭ����
class Animal 
{
public:
    virtual void makesound() = 0; // ���� ���� �Լ�
    
    virtual ~Animal() {} // �Ҹ���
};

// �Ļ� Ŭ����
class dog : public Animal 
{
public:
    void makesound() override
    {
        cout << "Dog: Woof! Woof!" << endl;
    }
};
 
// �Ļ� Ŭ����
class cat : public Animal 
{
public:
    void makesound() override
    {
        cout << "Cat: Meow! Meow!" << endl;
    }
};
 
// �Ļ� Ŭ����
class cow : public Animal 
{
public:
    void makesound() override
    {
        cout << "cow: ummaaa~~" << endl;
    }
};

int main() 
{
    
    // ������ ���
    vector<Animal*> animal;
    animal.push_back(new dog());
    animal.push_back(new cat());
    animal.push_back(new cow());
    
    
    // �� ������ �����Ҹ�
    for (size_t i = 0; i < animal.size(); ++i) 
    {
        animal[i]->makesound();
    }

    // �޸� ����
    for (size_t i = 0; i < animal.size(); ++i) 
    {
        delete animal[i];
    }

    return 0;
}
//  �糪