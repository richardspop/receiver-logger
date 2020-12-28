//
// Created by Pop Richards on 28/12/20.
//

#include "WriterFactoryImpl.hpp"

WriterFactoryImpl::WriterFactoryImpl() {
    std::cout << "Writer factory created" << std::endl;
}

WriterFactoryImpl * WriterFactoryImpl::GetWriterFactoryInstace() {
    if (!instance)
        instance = new WriterFactoryImpl();
    std::cout << "WriterFactoryImpl instance returned" << std::endl;
    return instance;
}

WriterFactory * WriterFactoryImpl::CreateWriter(std::string writerType, std::string path) {
    if (writerType == "file") {
        return new FileWriter(path);
    } else {
        std::cout << "Error: undefined writer type" << writerType << std::endl;
    }
    return nullptr;
}