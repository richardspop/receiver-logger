//
// Created by Pop Richards on 28/12/20.
//

#include "Config.hpp"
Config::Config() {
    std::cout << "Creating config instance" << std::endl;
}

std::string Config::parseConfigFile(int argc, char **argv) {
    std::cout << "Parsing CLI config" << std::endl;
    std::string filePath;
    try {
        // Parsing CLI options
        cxxopts::Options options(progName, progDesc);
        options.add_options()
                (fileOpt, fileOptDesc, cxxopts::value<std::string>()->default_value(fileOptDefault));
        options.allow_unrecognised_options();

        auto result = options.parse(argc, argv);
        filePath = result[fileOpt].as<std::string>();
    } catch (...) {
        std::cout << "Error: Parsing arg -f" << std::endl;
    }
    return filePath;
}