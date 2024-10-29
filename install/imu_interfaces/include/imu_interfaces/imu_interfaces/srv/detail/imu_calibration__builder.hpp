// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imu_interfaces:srv/ImuCalibration.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__SRV__DETAIL__IMU_CALIBRATION__BUILDER_HPP_
#define IMU_INTERFACES__SRV__DETAIL__IMU_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imu_interfaces/srv/detail/imu_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imu_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImuCalibration_Request_imu_calib
{
public:
  Init_ImuCalibration_Request_imu_calib()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::imu_interfaces::srv::ImuCalibration_Request imu_calib(::imu_interfaces::srv::ImuCalibration_Request::_imu_calib_type arg)
  {
    msg_.imu_calib = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_interfaces::srv::ImuCalibration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_interfaces::srv::ImuCalibration_Request>()
{
  return imu_interfaces::srv::builder::Init_ImuCalibration_Request_imu_calib();
}

}  // namespace imu_interfaces


namespace imu_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImuCalibration_Response_success
{
public:
  Init_ImuCalibration_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::imu_interfaces::srv::ImuCalibration_Response success(::imu_interfaces::srv::ImuCalibration_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_interfaces::srv::ImuCalibration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_interfaces::srv::ImuCalibration_Response>()
{
  return imu_interfaces::srv::builder::Init_ImuCalibration_Response_success();
}

}  // namespace imu_interfaces

#endif  // IMU_INTERFACES__SRV__DETAIL__IMU_CALIBRATION__BUILDER_HPP_
