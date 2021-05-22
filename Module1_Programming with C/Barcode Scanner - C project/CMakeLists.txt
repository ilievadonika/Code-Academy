cmake_minimum_required(VERSION 3.5.1)

project(barcode)

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inlcude)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
     
#generate project binary
add_executable(
    ${PROJECT_NAME}
        ${INC_DIR}/Barcode.h
        
        ${SRC_DIR}/main.c
        ${SRC_DIR}/Barcode.c
)

target_include_directories(
    ${PROJECT_NAME} 
        PRIVATE 
            ${INC_DIR}
)  
