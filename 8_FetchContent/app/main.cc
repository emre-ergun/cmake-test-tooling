#include <iostream>

#include "my_lib.hpp"
#include "config.hpp"

#include <cxxopts.hpp>
#include <nlohmann/json.hpp>
#include <fmt/format.h>
#include <spdlog/spdlog.h>

int main(int argc, char *argv[])
{
    std::cout << "Project Name: " << PROJECT_NAME << "\n";
    std::cout << "Project Version: " << PROJECT_VERSION << "\n";
    sayHello();

    std::cout << "JSON Lib Version: " 
        << NLOHMANN_JSON_VERSION_MAJOR << "."
        << NLOHMANN_JSON_VERSION_MINOR << "."
        << NLOHMANN_JSON_VERSION_PATCH << "\n";
    
    std::cout << "FMT: " 
        << FMT_VERSION << "\n";
    
    std::cout << "CXXOPTS: " 
        << CXXOPTS__VERSION_MAJOR << "."
        << CXXOPTS__VERSION_MINOR << "."
        << CXXOPTS__VERSION_PATCH << "\n";
    
    std::cout << "SPDLOG: " 
        << SPDLOG_VER_MAJOR << "."
        << SPDLOG_VER_MINOR << "."
        << SPDLOG_VER_PATCH << "\n";
    


    return EXIT_SUCCESS;
}
