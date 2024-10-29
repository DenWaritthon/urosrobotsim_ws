# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_calibrate_imu_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED calibrate_imu_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(calibrate_imu_FOUND FALSE)
  elseif(NOT calibrate_imu_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(calibrate_imu_FOUND FALSE)
  endif()
  return()
endif()
set(_calibrate_imu_CONFIG_INCLUDED TRUE)

# output package information
if(NOT calibrate_imu_FIND_QUIETLY)
  message(STATUS "Found calibrate_imu: 0.0.0 (${calibrate_imu_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'calibrate_imu' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${calibrate_imu_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(calibrate_imu_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${calibrate_imu_DIR}/${_extra}")
endforeach()
