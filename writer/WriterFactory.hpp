//
// Created by Pop Richards on 28/12/20.
//

#ifndef RECEIVER_LOGGER_WRITERFACTORY_HPP
#define RECEIVER_LOGGER_WRITERFACTORY_HPP

#include <string>

class WriterFactory {
public:
    virtual void StatsWrite(std::string statsJson) = 0;
};


#endif //RECEIVER_LOGGER_WRITERFACTORY_HPP
