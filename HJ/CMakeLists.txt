aux_source_directory(. hj)
foreach(T_FILE_NAME ${hj})
    string(REGEX REPLACE "\./(.+)\.cpp" "\\1" EXECUTABLE_NAME ${T_FILE_NAME})
    add_executable(${EXECUTABLE_NAME} ${T_FILE_NAME})
endforeach()