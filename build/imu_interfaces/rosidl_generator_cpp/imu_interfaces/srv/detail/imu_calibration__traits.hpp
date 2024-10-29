// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imu_interfaces:srv/ImuCalibration.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__SRV__DETAIL__IMU_CALIBRATION__TRAITS_HPP_
#define IMU_INTERFACES__SRV__DETAIL__IMU_CALIBRATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imu_interfaces/srv/detail/imu_calibration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'imu_calib'
#include "sensor_msgs/msg/detail/imu__traits.hpp"

namespace imu_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImuCalibration_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: imu_calib
  {
    out << "imu_calib: ";
    to_flow_style_yaml(msg.imu_calib, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuCalibration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: imu_calib
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_calib:\n";
    to_block_style_yaml(msg.imu_calib, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuCalibration_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace imu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use imu_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const imu_interfaces::srv::ImuCalibration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  imu_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imu_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const imu_interfaces::srv::ImuCalibration_Request & msg)
{
  return imu_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<imu_interfaces::srv::ImuCalibration_Request>()
{
  return "imu_interfaces::srv::ImuCalibration_Request";
}

template<>
inline const char * name<imu_interfaces::srv::ImuCalibration_Request>()
{
  return "imu_interfaces/srv/ImuCalibration_Request";
}

template<>
struct has_fixed_size<imu_interfaces::srv::ImuCalibration_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Imu>::value> {};

template<>
struct has_bounded_size<imu_interfaces::srv::ImuCalibration_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Imu>::value> {};

template<>
struct is_message<imu_interfaces::srv::ImuCalibration_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace imu_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImuCalibration_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuCalibration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuCalibration_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace imu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use imu_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const imu_interfaces::srv::ImuCalibration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  imu_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imu_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const imu_interfaces::srv::ImuCalibration_Response & msg)
{
  return imu_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<imu_interfaces::srv::ImuCalibration_Response>()
{
  return "imu_interfaces::srv::ImuCalibration_Response";
}

template<>
inline const char * name<imu_interfaces::srv::ImuCalibration_Response>()
{
  return "imu_interfaces/srv/ImuCalibration_Response";
}

template<>
struct has_fixed_size<imu_interfaces::srv::ImuCalibration_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<imu_interfaces::srv::ImuCalibration_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<imu_interfaces::srv::ImuCalibration_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<imu_interfaces::srv::ImuCalibration>()
{
  return "imu_interfaces::srv::ImuCalibration";
}

template<>
inline const char * name<imu_interfaces::srv::ImuCalibration>()
{
  return "imu_interfaces/srv/ImuCalibration";
}

template<>
struct has_fixed_size<imu_interfaces::srv::ImuCalibration>
  : std::integral_constant<
    bool,
    has_fixed_size<imu_interfaces::srv::ImuCalibration_Request>::value &&
    has_fixed_size<imu_interfaces::srv::ImuCalibration_Response>::value
  >
{
};

template<>
struct has_bounded_size<imu_interfaces::srv::ImuCalibration>
  : std::integral_constant<
    bool,
    has_bounded_size<imu_interfaces::srv::ImuCalibration_Request>::value &&
    has_bounded_size<imu_interfaces::srv::ImuCalibration_Response>::value
  >
{
};

template<>
struct is_service<imu_interfaces::srv::ImuCalibration>
  : std::true_type
{
};

template<>
struct is_service_request<imu_interfaces::srv::ImuCalibration_Request>
  : std::true_type
{
};

template<>
struct is_service_response<imu_interfaces::srv::ImuCalibration_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IMU_INTERFACES__SRV__DETAIL__IMU_CALIBRATION__TRAITS_HPP_
