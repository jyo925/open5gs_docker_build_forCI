FROM ubuntu:focal

WORKDIR /
COPY setup.sh / 

ARG DEBIAN_FRONTEND=noninteractive
ARG USER=open5gs
ARG REPO=open5gs
ARG BRANCH=main

RUN apt-get update && \
   apt-get -yq dist-upgrade && \
   apt-get --no-install-recommends -qqy install python3-pip python3-setuptools python3-wheel ninja-build build-essential flex bison git libsctp-dev libgnutls28-dev \
   libgcrypt-dev libssl-dev libidn11-dev libmongoc-dev libbson-dev libyaml-dev libnghttp2-dev libmicrohttpd-dev libcurl4-gnutls-dev libnghttp2-dev libtins-dev libtalloc-dev meson iproute2 \
   iptables iputils-ping tcpdump cmake curl gnupg

COPY . .
ADD https://api.github.com/repos/$USER/$REPO/git/refs/heads/$BRANCH /root/open5gs-ver.json

RUN cd $REPO && \
    meson build --prefix=/ && ninja -C build && cd build && ninja install

