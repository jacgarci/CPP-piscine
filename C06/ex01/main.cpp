#include <iostream>

struct Data
{
    int     age;
    int     hight;
    char    sex;
};


uintptr_t   serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data    *desearialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data        myData;
    uintptr_t   ptr;

    myData.age = 27;
    myData.hight = 176;
    myData.sex = 'M';

    Data        *dataAfter;

    ptr = serialize(&myData);
    dataAfter = desearialize(ptr);

    std::cout 
    << myData.age << std::endl
    << dataAfter->age << std::endl
    << myData.hight << std::endl
    << dataAfter->hight << std::endl
    << myData.sex << std::endl
    << dataAfter->sex << std::endl;
    
    int *p = reinterpret_cast<int*>(&myData);

    std::cout << "***************" << std::endl;
    std::cout << *p << std::endl;
    p++;
    std::cout << *p << std::endl;
    p++;
    std::cout << static_cast<char>(*p) << std::endl;


}