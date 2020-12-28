//
// Created by Pop Richards on 28/12/20.
//

#ifndef RECEIVER_LOGGER_FILEWRITER_HPP
#define RECEIVER_LOGGER_FILEWRITER_HPP

#include "WriterFactory.hpp"
#include <iostream>
#include <fstream>

class FileWriter: public WriterFactory {
private:
    std::string filePath;
public:
    FileWriter(std::string path);
    void StatsWrite(std::string statsJson);
};


#endif //RECEIVER_LOGGER_FILEWRITER_HPP
