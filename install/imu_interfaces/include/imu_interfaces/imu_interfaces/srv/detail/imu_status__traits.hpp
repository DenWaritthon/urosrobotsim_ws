// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imu_interfaces:srv/ImuStatus.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__SRV__DETAIL__IMU_STATUS__TRAITS_HPP_
#define IMU_INTERFACES__SRV__DETAIL__IMU_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imu_interfaces/srv/detail/imu_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'imu_status_check'
#include "std_msgs/msg/detail/bool__traits.hpp"

namespace imu_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImuStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: imu_status_check
  {
    out << "imu_status_check: ";
    to_flow_style_yaml(msg.imu_status_check, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: imu_status_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_status_check:\n";
    to_block_style_yaml(msg.imu_status_check, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuStatus_Request & msg, bool use_flow_style = false)
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
  const imu_interfaces::srv::ImuStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  imu_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imu_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const imu_interfaces::srv::ImuStatus_Request & msg)
{
  return imu_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<imu_interfaces::srv::ImuStatus_Request>()
{
  return "imu_interfaces::srv::ImuStatus_Request";
}

template<>
inline const char * name<imu_interfaces::srv::ImuStatus_Request>()
{
  return "imu_interfaces/srv/ImuStatus_Request";
}

template<>
struct has_fixed_size<imu_interfaces::srv::ImuStatus_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<imu_interfaces::srv::ImuStatus_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<imu_interfaces::srv::ImuStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'imu_status'
// already included above
// #include "std_msgs/msg/detail/bool__traits.hpp"

namespace imu_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImuStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: imu_status
  {
    out << "imu_status: ";
    to_flow_style_yaml(msg.imu_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: imu_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_status:\n";
    to_block_style_yaml(msg.imu_status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuStatus_Response & msg, bool use_flow_style = false)
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
  const imu_interfaces::srv::ImuStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  imu_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imu_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const imu_interfaces::srv::ImuStatus_Response & msg)
{
  return imu_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<imu_interfaces::srv::ImuStatus_Response>()
{
  return "imu_interfaces::srv::ImuStatus_Response";
}

template<>
inline const char * name<imu_interfaces::srv::ImuStatus_Response>()
{
  return "imu_interfaces/srv/ImuStatus_Response";
}

template<>
struct has_fixed_size<imu_interfaces::srv::ImuStatus_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<imu_interfaces::srv::ImuStatus_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<imu_interfaces::srv::ImuStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<imu_interfaces::srv::ImuStatus>()
{
  return "imu_interfaces::srv::ImuStatus";
}

template<>
inline const char * name<imu_interfaces::srv::ImuStatus>()
{
  return "imu_interfaces/srv/ImuStatus";
}

template<>
struct has_fixed_size<imu_interfaces::srv::ImuStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<imu_interfaces::srv::ImuStatus_Request>::value &&
    has_fixed_size<imu_interfaces::srv::ImuStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<imu_interfaces::srv::ImuStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<imu_interfaces::srv::ImuStatus_Request>::value &&
    has_bounded_size<imu_interfaces::srv::ImuStatus_Response>::value
  >
{
};

template<>
struct is_service<imu_interfaces::srv::ImuStatus>
  : std::true_type
{
};

template<>
struct is_service_request<imu_interfaces::srv::ImuStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<imu_interfaces::srv::ImuStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IMU_INTERFACES__SRV__DETAIL__IMU_STATUS__TRAITS_HPP_
