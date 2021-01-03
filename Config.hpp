//
// Created by Pop Richards on 28/12/20.
//

#ifndef RECEIVER_LOGGER_CONFIG_HPP
#define RECEIVER_LOGGER_CONFIG_HPP

#include <iostream>
#include <string>
#include "cxxopts/cxxopts.hpp"

class Config {
    // default options for cli arguments
    std::string progName = "receiver-logger";
    std::string progDesc = "Microservice for getting the stats and logging";
    std::string fileOptDesc = "logger file path";
    std::string fileOptDefault = "/tmp/receiver-logger-log.txt";
    std::string fileOpt = "f";
public:
    Config();
    std::string parseConfigFile(int argc, char *argv[]);
};


#endif //RECEIVER_LOGGER_CONFIG_HPP
