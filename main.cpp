#include <iostream>

#include "Config.hpp"

#include "client/ClientFactory.hpp"
#include "client/ClientFactoryImpl.hpp"

#include "writer/WriterFactory.hpp"
#include "writer/WriterFactoryImpl.hpp"

int main(int argc, char *argv[]) {
    std::cout << "Starting Receiver-logger" << std::endl;

    // Config for parsing arguments from cli
    Config * config = new Config();
    std::string filePath = config->parseConfigFile(argc, argv);

    // Creating file writer
    WriterFactoryImpl * writerFactory = WriterFactoryImpl::GetWriterFactoryInstace();
    WriterFactory * writer = writerFactory->CreateWriter("file", filePath);

    // Creating ZMQ client
    ClientFactoryImpl * clientFactory = ClientFactoryImpl::GetClientFactoryInstance();
    ClientFactory * client = clientFactory->CreateClient("zmq");

    // Start the stats poller
    client->Request("tcp://localhost:5555", 2, writer);
    std::cout << "Receiver-logger exited" << std::endl;
    return 0;
}
