#! /bin/sh

mkdir ./build
cd ./build
cmake ..
make
cd ..
./build/unittests
rm -rf ./build



