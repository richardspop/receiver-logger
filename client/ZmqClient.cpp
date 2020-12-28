//
// Created by Pop Richards on 28/12/20.
//

#include "ZmqClient.hpp"

ZMQClient::ZMQClient() {
    std::cout << "ZMQ Client Created" << std::endl;
}

void ZMQClient::Request(std::string serverAddress, int statCollectionTimer, WriterFactory * writer) {
    std::cout << "ZMQ Req Called" << std::endl;
    zmq::context_t context{1};

    zmq::socket_t socket{context, zmq::socket_type::req};
    socket.connect(serverAddress);

    const std::string data;

    for (;;) {
        socket.send(zmq::buffer(data), zmq::send_flags::none);

        zmq::message_t reply{};
        socket.recv(reply, zmq::recv_flags::none);

        std::cout << "Received " << reply.to_string() << std::endl;
        writer->StatsWrite(reply.to_string());

        std::this_thread::sleep_for(std::chrono::seconds(statCollectionTimer));
    }

}