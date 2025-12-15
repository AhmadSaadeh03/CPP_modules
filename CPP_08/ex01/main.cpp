#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::cout << "===== BASIC TEST =====" << std::endl;
    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span : " << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== ADDING TOO MANY NUMBERS =====" << std::endl;
    try {
        Span sp(2);
        sp.addNumber(10);
        sp.addNumber(20);
        sp.addNumber(30); // should throw
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== NOT ENOUGH NUMBERS FOR SPAN =====" << std::endl;
    try {
        Span sp(5);
        sp.addNumber(42);

        std::cout << sp.shortestSpan() << std::endl; // should throw
        std::cout << sp.longestSpan() << std::endl;  // should throw
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== generateNumbers() TEST =====" << std::endl;
    try {
        Span sp(10);
        std::vector<int> nums;

        for (int i = 0; i < 10; i++)
            nums.push_back(i * 10);

        sp.generateNumbers(nums.begin(), nums.end());

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span : " << sp.longestSpan() << std::endl;

    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== COPY CONSTRUCTOR TEST =====" << std::endl;
    try {
        Span sp1(3);
        sp1.addNumber(1);
        sp1.addNumber(100);
        sp1.addNumber(50);

        Span sp2 = sp1;

        std::cout << "sp1 shortest: " << sp1.shortestSpan() << std::endl;
        std::cout << "sp2 shortest: " << sp2.shortestSpan() << std::endl;

        // sp2 is full, adding should throw
        sp2.addNumber(200);
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== COPY ASSIGNMENT OPERATOR TEST =====" << std::endl;
    try {
        Span sp1(5);
        sp1.addNumber(5);
        sp1.addNumber(10);

        Span sp2(10);
        sp2.addNumber(100);
        sp2.addNumber(200);

        sp2 = sp1; // assignment

        std::cout << "sp2 shortest: " << sp2.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== BIG TEST (10.000 NUMBERS) =====" << std::endl;
    try {
        Span sp(10000);

        for (int i = 0; i < 10000; i++)
            sp.addNumber(i);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span : " << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
