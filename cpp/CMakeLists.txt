cmake_minimum_required(VERSION 3.20)
project(js_cpp_rsa)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenSSL REQUIRED)
add_executable(js_cpp_rsa main.cpp encryption.h encryption.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC OpenSSL::Crypto)