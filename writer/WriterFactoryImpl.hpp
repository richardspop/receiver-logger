//
// Created by Pop Richards on 28/12/20.
//

#ifndef RECEIVER_LOGGER_WRITERFACTORYIMPL_HPP
#define RECEIVER_LOGGER_WRITERFACTORYIMPL_HPP

#include "WriterFactory.hpp"
#include "FileWriter.hpp"

class WriterFactoryImpl {
private:
    WriterFactoryImpl();
    inline static WriterFactoryImpl * instance;
public:
    static WriterFactoryImpl * GetWriterFactoryInstace();

    WriterFactory * CreateWriter(std::string writerType, std::string path);
};


#endif //RECEIVER_LOGGER_WRITERFACTORYIMPL_HPP
