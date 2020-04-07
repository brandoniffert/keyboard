FROM qmkfm/base_container

RUN cd / && \
    git clone --branch 0.8.103 --depth 1 https://github.com/qmk/qmk_firmware.git && \
    cd /qmk_firmware && \
    make git-submodule

WORKDIR /qmk_firmware
