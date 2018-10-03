FROM debian:stretch-slim

RUN apt-get update && apt-get install --no-install-recommends -y build-essential \
    gcc \
    unzip \
    wget \
    zip \
    gcc-avr \
    binutils-avr \
    avr-libc \
    dfu-programmer \
    dfu-util \
    gcc-arm-none-eabi \
    binutils-arm-none-eabi \
    libnewlib-arm-none-eabi \
    git \
    software-properties-common \
    avrdude \
    && rm -rf /var/lib/apt/lists/*

RUN cd / && \
    git clone --branch 0.6.134 --depth 1 https://github.com/qmk/qmk_firmware.git && \
    cd /qmk_firmware && \
    make git-submodule

WORKDIR /qmk_firmware
