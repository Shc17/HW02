#include <iostream>
#include <vector>
using namespace std;

// 기본 클래스
class Animal 
{
public:
    virtual void makesound() = 0; // 순수 가상 함수
    
    virtual ~Animal() {} // 소멸자
};

// 파생 클래스
class dog : public Animal 
{
public:
    void makesound() override
    {
        cout << "Dog: Woof! Woof!" << endl;
    }
};
 
// 파생 클래스
class cat : public Animal 
{
public:
    void makesound() override
    {
        cout << "Cat: Meow! Meow!" << endl;
    }
};
 
// 파생 클래스
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
    
    // 다형성 사용
    vector<Animal*> animal;
    animal.push_back(new dog());
    animal.push_back(new cat());
    animal.push_back(new cow());
    
    
    // 각 동물의 울음소리
    for (size_t i = 0; i < animal.size(); ++i) 
    {
        animal[i]->makesound();
    }

    // 메모리 해제
    for (size_t i = 0; i < animal.size(); ++i) 
    {
        delete animal[i];
    }

    return 0;
}
//  됬나