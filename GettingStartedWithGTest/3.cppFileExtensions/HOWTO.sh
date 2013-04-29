#! /bin/sh

mkdir ./build
cd ./build
cmake ..
make
cd ..
./build/sampleTest
rm -rf ./build



