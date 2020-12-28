#!/bin/sh

git clone https://github.com/zeromq/libzmq.git
mkdir -p libzmq/build
cd libzmq/build
cmake ..
make -j4 install

cd ../../

git clone https://github.com/zeromq/cppzmq
mkdir -p cppzmq/build
cd cppzmq/build
cmake ..
make -j4 install

cd ../../

mkdir -p cxxopts
cd cxxopts
wget https://raw.githubusercontent.com/jarro2783/cxxopts/v2.2.1/include/cxxopts.hpp
cd ../
