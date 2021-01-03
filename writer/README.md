# receiver-logger
## writer
This contains a set of pluggable writer factory classes. 
It can be used to write into various sources file local file, s3, nfs, etc.,
Currently File source alone is implemented as a example.

### WriterFactory
A generic interface for all the pluggable write classes to honor to. 
This follows factory design pattern to create the instance needed dynamically based on the use cases.
There can even be multiple writer classes created simultaneously in runtime.

### WriterFactoryImpl
WriterFactoryImpl is an implementation of the factory design pattern to create various writer sources.
This creates various sources based on the type passed.

### FileWriter
FileWriter logs the given string into a local file. 
The path for logging the message is passed in with constructor.

### Class Design
![Class disgram]("receiver_logger_writer-class.png")