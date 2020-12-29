#!/bin/sh

docker run -v /var/run/docker.sock:/var/run/docker.sock -v "$(pwd)":/root/receiver-logger -w="/root/receiver-logger" 10.157.1.216:5000/microservice-base:v1.0-5-gefc87df ./build.sh $1

