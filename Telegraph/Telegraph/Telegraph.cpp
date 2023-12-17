//Telegraph
#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    std::cout << "Enter your message: ";
    std::string message;
    std::getline(std::cin, message);

    std::cout << "\nYour message: ";

    for (int i = 0; i < message.size(); ++i)
    {
        std::cout << message[i] << ' ';
        Sleep(300);
    }

    return 0;
}