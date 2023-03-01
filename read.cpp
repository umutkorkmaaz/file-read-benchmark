#include <iostream>
#include <fstream>
#include <string>
#include <chrono>

int main()
{
    auto start_time = std::chrono::high_resolution_clock::now();

    std::ifstream file("./lists.csv");
    if (!file.is_open())
    {
        std::cout << "Error: Could not open file" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line))
    {
        if (line.find("123.194.235.37") != std::string::npos)
        {
            break;
        }
    }

    file.close();

    auto end_time = std::chrono::high_resolution_clock::now();
    std::cout << "[c++] File check finished in " << std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count() << " ms" << std::endl;

    return 0;
}

