#include <iostream>

#include "Config.hpp"

#include "client/ClientFactory.hpp"
#include "client/ClientFactoryImpl.hpp"

#include "writer/WriterFactory.hpp"
#include "writer/WriterFactoryImpl.hpp"

int main(int argc, char *argv[]) {
    std::cout << "Starting Receiver-logger" << std::endl;

    Config * config = new Config();
    std::string filePath = config->parseConfigFile(argc, argv);

    WriterFactoryImpl * writerFactory = WriterFactoryImpl::GetWriterFactoryInstace();
    WriterFactory * writer = writerFactory->CreateWriter("file", filePath);

    ClientFactoryImpl * clientFactory = ClientFactoryImpl::GetClientFactoryInstance();
    ClientFactory * client = clientFactory->CreateClient("zmq");
    client->Request("tcp://localhost:5555", 2, writer);
    std::cout << "Receiver-logger exited" << std::endl;
    return 0;
}
