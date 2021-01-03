//
// Created by Pop Richards on 28/12/20.
//

#include "FileWriter.hpp"


FileWriter::FileWriter(std::string path) {
    std::cout << "File Writer instance created" << std::endl;
    filePath = path;
}

void FileWriter::StatsWrite(std::string statsJson) {
    // Write the given string to the file
    std::ofstream logFile;
    logFile.open(filePath, std::ios::app | std::ios::out);
    if (logFile.is_open()) {
        std::cout << "Writing |" << statsJson << "| in path " << filePath << std::endl;
        logFile << statsJson << std::endl;
        logFile.close();
    } else {
        std::cout << "ERROR: unable to open file - " << filePath << std::endl;
    }
}