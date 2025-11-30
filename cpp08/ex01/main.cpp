#include "Span.hpp"

//     try
//     {
//         Span s(10);
//         std :: vector<int> v;
//         // v.reserve(500);
//         for (size_t i = 0; i < 10; i++)
//         {
//             v.push_back(rand() % 9000);
//         }
        
//         std :: vector<int> :: iterator it  = v.begin();
//         std :: vector<int> :: iterator end  = v.end();
//         s.generateNumbers(v,it,end);
//         std :: cout <<"The longest span : " << s.longestSpan();
//         std :: cout <<"The shortest span : " << s.shortestSpan();
    
// //        v.capacity(); Returns the amount of memory allocated

//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         Span sp(5);

//         sp.addNumber(5);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);

//         std::cout << sp.shortestSpan() << std::endl;  // Expected: 2 (5-3)
//         std::cout << sp.longestSpan() << std::endl;   // Expected: 14 (17-3)

//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// try 
// {
//     Span sp(1);
//     sp.addNumber(42);
//     sp.shortestSpan();  // Should throw exception
// } 
// catch (std::exception &e)
// {
//     std::cout << e.what() << std::endl;
// }

#include <iostream>
#include <vector>
#include <cstdlib>
#include "Span.hpp"

int main()
{
    // ===========================
    // 1. Basic small test
    // ===========================
    try {
        Span sp(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Basic Test - Shortest Span: " << sp.shortestSpan() << std::endl; // 2
        std::cout << "Basic Test - Longest Span: " << sp.longestSpan() << std::endl;   // 14
    } catch (std::exception &e) {
        std::cout << "Basic Test Exception: " << e.what() << std::endl;
    }

    // ===========================
    // 2. Test with only 1 element
    // ===========================
    try {
        Span sp(1);
        sp.addNumber(42);
        std::cout << "Single Element Test - Shortest Span: " << sp.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Single Element Test Exception: " << e.what() << std::endl;
    }

    // ===========================
    // 3. Test with empty Span
    // ===========================
    try {
        Span sp(3);
        std::cout << "Empty Test - Longest Span: " << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Empty Test Exception: " << e.what() << std::endl;
    }

    // ===========================
    // 4. Test adding more than capacity
    // ===========================
    try {
        Span sp(3);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
        sp.addNumber(4); // should throw
    } catch (std::exception &e) {
        std::cout << "Exceed Capacity Test Exception: " << e.what() << std::endl;
    }


    // ===========================
    // 6. Test with duplicate numbers
    // ===========================
    try {
        Span sp(5);
        sp.addNumber(7);
        sp.addNumber(7);
        sp.addNumber(7);
        sp.addNumber(7);
        std::cout << "Duplicates Test - Shortest Span: " << sp.shortestSpan() << std::endl; // 0
        std::cout << "Duplicates Test - Longest Span: " << sp.longestSpan() << std::endl;   // 0
    } catch (std::exception &e) {
        std::cout << "Duplicates Test Exception: " << e.what() << std::endl;
    }

    // ===========================
    // 7. Test with large numbers
    // ===========================
    try {
        Span sp(5);
        sp.addNumber(1000000);
        sp.addNumber(500000);
        sp.addNumber(999999);
        std::cout << "Large Numbers Test - Shortest Span: " << sp.shortestSpan() << std::endl; // 1
        std::cout << "Large Numbers Test - Longest Span: " << sp.longestSpan() << std::endl;   // 500000
    } catch (std::exception &e) {
        std::cout << "Large Numbers Test Exception: " << e.what() << std::endl;
    }

    // ===========================
    // 8. Large random numbers (stress test)
    // ===========================
    try {
        Span sp(10000);
        for (int i = 0; i < 10000; i++)
            sp.addNumber(rand() % 1000000);
        std::cout << "Large Random Test - Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Large Random Test - Longest Span: " << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Large Random Test Exception: " << e.what() << std::endl;
    }

    return 0;
}