# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\cloudObjectStorageBrowsers_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\cloudObjectStorageBrowsers_autogen.dir\\ParseCache.txt"
  "cloudObjectStorageBrowsers_autogen"
  )
endif()
