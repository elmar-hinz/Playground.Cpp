#! /bin/sh

mkdir ./build
cd ./build
cmake ..
make
cd ..
./build/unit-tests
rm -rf ./build



