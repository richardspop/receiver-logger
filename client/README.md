# receiver-logger
## client
This is a client factory.
It is used to create clients that connect to the stats server.
This has the potential to connect to multiple stats servers (zmq, http, grpc, etc.,) and be a single sink.

### ClientFactory
This is a factory design pattern based client implementation. 
This was chosen so that we can handle multiple types of stats server connections like zmq, http, grpc, etc., dynamically.

### ClientFactoryImpl
ClientFactoryImpl is an implementation of the factory design pattern to create various client connections.
This creates various client connections based on the type passed.

### ZMQClient
ZMQClient creates and maintains a persistent client connection to the ZMQ server.
This initiates a request and awaits a response back from the server.
This has writer sink injected from main class. Upon receiving the response, it uses the writer sink to log it.

### Class Design
![Class Diagram](receiver_logger_client_class.png?raw=true "Title")

### Sequence Diagram
![Sequence Diagram](receiver_logger_client_sequence.png?raw=true "Title")