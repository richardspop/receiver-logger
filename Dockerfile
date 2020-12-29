FROM 10.157.1.216:5000/microservice-base:v1.0-5-gefc87df
MAINTAINER richardspop@gmail.com

ENV DEBIAN_FRONTEND=noninteractive

RUN mkdir -p /root/receiver_logger

COPY receiver_logger /root/receiver_logger/receiver_logger

WORKDIR /root/receiver_logger

COPY install-dependencies.sh /root/receiver_logger/install-dependencies.sh
RUN /root/receiver_logger/install-dependencies.sh

ARG FILE_PATH

ENV FILE_PATH=$FILE_PATH

ENTRYPOINT /root/receiver_logger/receiver_logger -f $FILE_PATH
