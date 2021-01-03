# receiver-logger
C++ microservice to get stats from monitor-sender and log it.

## client
This is a client factory.
It is used to create clients that connect to the stats server.
This has the potential to connect to multiple stats servers (zmq, http, grpc, etc.,) and be a single sink.

## writer
This contains a set of pluggable writer factory classes.
It can be used to write into various sources file local file, s3, nfs, etc.,
Currently File source alone is implemented as a example.

## Design
![Design](receiver-logger-Designs.png?raw=true "Title")

## Sequence Diagram
![Design](receiver_logger_sequence.png?raw=true "Title")