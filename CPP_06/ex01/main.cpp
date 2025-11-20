#include "Serializer.hpp"

int main()
{
   
    Data data;
    data.num = 42;
    data.name = "ahmad";


    // Print original data and its address
    std::cout << "Original Data address: " << &data << std::endl;
    std::cout << "Original Data values: num=" << data.num << ", name=" << data.name << std :: endl;
    // Serialize the pointer
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized value (uintptr_t): " << raw << std::endl;

    // Deserialize it back
    Data* ptr2 = Serializer::deserialize(raw);
    std::cout << "Deserialized pointer: " << ptr2 << std::endl;

    // Access data through deserialized pointer
    std::cout << "Data through deserialized pointer: " << "num=" << ptr2->num << ", name=" << ptr2->name << std::endl;

    return 0;
}