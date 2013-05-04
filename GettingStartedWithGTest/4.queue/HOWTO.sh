#! /bin/sh

mkdir ./build
cd ./build
cmake ..
make
cd ..
./build/queueTest
rm -rf ./build



