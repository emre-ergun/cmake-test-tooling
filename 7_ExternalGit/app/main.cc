#include <iostream>

#include "my_lib.hpp"
#include "config.hpp"
#include "nlohmann/json.hpp"

int main(int argc, char *argv[])
{
    std::cout << "Project Name: " << PROJECT_NAME << "\n";
    std::cout << "Project Version: " << PROJECT_VERSION << "\n";
    sayHello();

    std::cout << "JSON Lib Version: " 
        << NLOHMANN_JSON_VERSION_MAJOR << "."
        << NLOHMANN_JSON_VERSION_MINOR << "."
        << NLOHMANN_JSON_VERSION_PATCH << "\n";

    return EXIT_SUCCESS;
}
