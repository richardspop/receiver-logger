cmake_minimum_required(VERSION 3.17)
project(receiver_logger)

set(CMAKE_CXX_STANDARD 17)

find_package(cppzmq)

add_executable(receiver_logger main.cpp client/ClientFactory.hpp client/ClientFactoryImpl.cpp client/ClientFactoryImpl.hpp client/ZmqClient.cpp client/ZmqClient.hpp writer/WriterFactory.hpp writer/FileWriter.cpp writer/FileWriter.hpp writer/WriterFactoryImpl.cpp writer/WriterFactoryImpl.hpp cxxopts/cxxopts.hpp Config.cpp Config.hpp)

target_link_libraries(receiver_logger cppzmq)