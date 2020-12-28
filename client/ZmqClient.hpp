//
// Created by Pop Richards on 28/12/20.
//

#ifndef RECEIVER_LOGGER_ZMQCLIENT_HPP
#define RECEIVER_LOGGER_ZMQCLIENT_HPP

#include "ClientFactory.hpp"
#include <iostream>
#include <zmq.hpp>
#include <thread>
#include <chrono>

class ZMQClient: public ClientFactory{
public:
    ZMQClient();
    void Request(std::string serverAddress, int statCollectionTimer, WriterFactory * writer);

};


#endif //RECEIVER_LOGGER_ZMQCLIENT_HPP
