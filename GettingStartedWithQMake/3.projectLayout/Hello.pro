CONFIG += debug_and_release
CONFIG += build_all
mac {
	CONFIG -= app_bundle
}

TARGET = hello
VPATH  = src
SOURCES = hello.cpp

CONFIG(debug, debug|release) {
	TARGET = debug_hello
} else {
	TARGET = release_hello
}

