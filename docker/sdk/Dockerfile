FROM ubuntu:22.04 as base
LABEL maintainer="Gapfruit"
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && \
    apt-get install -qy --no-install-recommends \
                    apt-transport-https \
                    apt-utils \
                    autoconf2.69 \
                    autogen \
                    automake \
                    bash-completion \
                    bc \
                    binutils \
                    binutils-dev \
                    bison \
                    build-essential \
                    byacc \
                    bzip2 \
                    ca-certificates \
                    ccache \
                    clang-tools \
                    cmake \
                    cpio \
                    cpp \
                    curl \
                    default-jdk-headless \
                    device-tree-compiler \
                    dosfstools \
                    e2tools \
                    expect \
                    fdisk \
                    flex \
                    fuse \
                    fuseext2 \
                    g++ \
                    gawk \
                    gcc \
                    gdisk \
                    git \
                    gnat \
                    gnupg \
                    gperf \
                    gpg \
                    gpg-agent \
                    gprbuild \
                    iasl \
                    iproute2 \
                    iptables \
                    iputils-ping \
                    isolinux \
                    jq \
                    kmod \
                    libc-dev-bin \
                    libc6-dev \
                    libc6-dev-armel-cross \
                    libc6-dev-i386 \
                    libelf-dev \
                    libexpat1-dev \
                    libfl2 \
                    libfontconfig1 \
                    libgmp-dev \
                    libgmp10 \
                    libncurses-dev \
                    libpixman-1-dev \
                    libsdl1.2-dev \
                    libsdl2-dev \
                    libssl-dev \
                    libtool \
                    libxml2-utils \
                    lsb-release \
                    lynx \
                    make \
                    mawk \
                    moreutils \
                    mosquitto-clients \
                    mtools \
                    net-tools \
                    netcat-openbsd \
                    ninja-build \
                    openssh-client \
                    parted \
                    patch \
                    picocom \
                    putty-tools \
                    python-is-python3 \
                    python-six \
                    python2 \
                    python2-minimal \
                    python3 \
                    python3-argcomplete \
                    python3-future \
                    python3-jinja2 \
                    python3-jsonschema \
                    python3-minimal \
                    python3-pip \
                    python3-ply \
                    python3-setuptools \
                    python3-six \
                    python3-tempita \
                    qemu-system-arm \
                    qemu-system-x86 \
                    qt5-qmake \
                    qtbase5-dev \
                    qtchooser \
                    rsyslog \
                    socat \
                    sshpass \
                    subversion \
                    sudo \
                    swtpm \
                    tcl \
                    tcllib \
                    tdom \
                    telnet \
                    texinfo \
                    tidy \
                    tzdata \
                    u-boot-tools \
                    udev \
                    uml-utilities \
                    unzip \
                    vim \
                    wget \
                    xorriso \
                    xsltproc \
                    xxd \
                    xz-utils \
                    yasm \
                    zip \
                    zlib1g-dev \
    && apt-get clean

RUN pip3 install --no-cache-dir \
                    junit_xml \
                    parsimonious \
                    protobuf==3.11.2 \
                    pyfdt \
                    pytest-asyncio==0.20.3 \
                    pytest==7.2.0 \
                    requests==2.25.1 \
                    websockets==10.4


RUN ln -s $(which scan-build-10) /usr/bin/scan-build

ENV TOOLCHAIN_COMMON       https://dev.gapfruit.com/genode-toolchain/genode-toolchain-23.05.tar.xz
ENV TOOLCHAIN_ARMHF        https://dev.gapfruit.com/genode-toolchain/genode-toolchain-23.05-armhf.tar.xz
ENV TOOLCHAIN_ARMHF_LINUX  https://dev.gapfruit.com/arm-linux-gnueabihf/arm-linux-gnueabihf-x86_64_7.4.tar.gz

RUN ["/bin/bash", "-c", "set -o pipefail && curl -sL \"$TOOLCHAIN_COMMON\"      | tar xPJf -"]
RUN ["/bin/bash", "-c", "set -o pipefail && curl -sL \"$TOOLCHAIN_ARMHF\"       | tar xPJf -"]
RUN ["/bin/bash", "-c", "set -o pipefail && curl -sL \"$TOOLCHAIN_ARMHF_LINUX\" | tar xPzf - -C /"]

FROM base
ENV GENODE_TOOLCHAIN_DIR /var/cache/genode/toolchain
RUN echo "fuse" >> /etc/modules
COPY toolchain/*.tar.xz $GENODE_TOOLCHAIN_DIR/
COPY toolchain/netperf-* /usr/bin/

ENV TEE_GRPC_CLIENT https://s3.eu-central-1.amazonaws.com/dev.gapfruit.com/tee_grpc_client/21.10/tee_grpc_client
RUN ["/bin/bash", "-c", "set -o pipefail && curl -sL \"$TEE_GRPC_CLIENT\" > /usr/bin/tee_grpc_client"]
RUN chmod +x /usr/bin/tee_grpc_client

# Download and install the Microsoft signing key
RUN curl -sL https://packages.microsoft.com/keys/microsoft.asc | \
    gpg --dearmor | \
    tee /etc/apt/trusted.gpg.d/microsoft.gpg > /dev/null; \
# Add the Azure CLI software repository
    echo "deb [arch=amd64] https://packages.microsoft.com/repos/azure-cli/ jammy main" | \
    tee /etc/apt/sources.list.d/azure-cli.list; \
    apt-get update && apt-get install -qy --no-install-recommends azure-cli && \
    az extension add --upgrade --yes --name azure-iot
