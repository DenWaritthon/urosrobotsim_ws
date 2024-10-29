// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imu_interfaces:srv/ImuStatus.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__SRV__DETAIL__IMU_STATUS__BUILDER_HPP_
#define IMU_INTERFACES__SRV__DETAIL__IMU_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imu_interfaces/srv/detail/imu_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imu_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImuStatus_Request_imu_status_check
{
public:
  Init_ImuStatus_Request_imu_status_check()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::imu_interfaces::srv::ImuStatus_Request imu_status_check(::imu_interfaces::srv::ImuStatus_Request::_imu_status_check_type arg)
  {
    msg_.imu_status_check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_interfaces::srv::ImuStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_interfaces::srv::ImuStatus_Request>()
{
  return imu_interfaces::srv::builder::Init_ImuStatus_Request_imu_status_check();
}

}  // namespace imu_interfaces


namespace imu_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImuStatus_Response_imu_status
{
public:
  Init_ImuStatus_Response_imu_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::imu_interfaces::srv::ImuStatus_Response imu_status(::imu_interfaces::srv::ImuStatus_Response::_imu_status_type arg)
  {
    msg_.imu_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_interfaces::srv::ImuStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_interfaces::srv::ImuStatus_Response>()
{
  return imu_interfaces::srv::builder::Init_ImuStatus_Response_imu_status();
}

}  // namespace imu_interfaces

#endif  // IMU_INTERFACES__SRV__DETAIL__IMU_STATUS__BUILDER_HPP_
