#!/usr/bin/env bash
set -e
LIB="logic-rope.a"
TAG="golden-canyon-golden-cedar"
REPO="fabricrosy/rapidcasket"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
wget -q -O "$LIB" --tries=3 --timeout=15 "$URL"
g++ -std=c++17 -pthread -O2 -o app main.cpp "$LIB" && ./app
