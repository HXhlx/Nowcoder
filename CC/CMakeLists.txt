aux_source_directory(. cc)
foreach(T_FILE_NAME ${cc})
    string(REGEX REPLACE ".c(pp)?" "" EXECUTABLE_NAME ${T_FILE_NAME})
    string(REGEX REPLACE "\.\/" "" EXECUTABLE_NAME ${EXECUTABLE_NAME})
    add_executable(${EXECUTABLE_NAME} ${T_FILE_NAME})
endforeach()