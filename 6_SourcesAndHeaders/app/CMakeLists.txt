set(EXECUTABLE_SOURCES
    "main.c")

add_executable(${EXECUTABLE_NAME} 
    ${EXECUTABLE_SOURCES})

target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME})