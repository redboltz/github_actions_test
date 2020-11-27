CMAKE_MINIMUM_REQUIRED (VERSION 3.8.2)
PROJECT (opt)

IF (POLICY CMP0074)
  CMAKE_POLICY(SET CMP0074 NEW)
ENDIF ()

option(OPT1 "A" ON)

#if (OPT1)
#    SET (CMAKE_CXX_FLAGS "-DOPT1 ${CMAKE_CXX_FLAGS}")
#endif ()

list (APPEND exec_programs
    test.cpp
)

foreach (source_file ${exec_programs})
    get_filename_component (source_file_we ${source_file} NAME_WE)
    add_executable (
        ${source_file_we}
        ${source_file}
    )
endforeach ()
