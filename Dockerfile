FROM 10.157.1.216:5000/microservice-base:v1.0-5-gefc87df
MAINTAINER richardspop@gmail.com

ENV DEBIAN_FRONTEND=noninteractive

RUN mkdir -p /root/receiver-logger

COPY receiver-logger /root/receiver-logger/receiver-logger

WORKDIR /root/receiver-logger

COPY install-dependencies.sh /root/receiver-logger/install-dependencies.sh
RUN /root/receiver-logger/install-dependencies.sh

ARG FILE_PATH

ENV FILE_PATH=$FILE_PATH

ENTRYPOINT /root/receiver-logger/receiver-logger -f $FILE_PATH
