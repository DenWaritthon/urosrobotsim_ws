// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imu_interfaces:srv/ImuCalibration.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__SRV__DETAIL__IMU_CALIBRATION__STRUCT_HPP_
#define IMU_INTERFACES__SRV__DETAIL__IMU_CALIBRATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'imu_calib'
#include "sensor_msgs/msg/detail/imu__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__imu_interfaces__srv__ImuCalibration_Request __attribute__((deprecated))
#else
# define DEPRECATED__imu_interfaces__srv__ImuCalibration_Request __declspec(deprecated)
#endif

namespace imu_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImuCalibration_Request_
{
  using Type = ImuCalibration_Request_<ContainerAllocator>;

  explicit ImuCalibration_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_calib(_init)
  {
    (void)_init;
  }

  explicit ImuCalibration_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_calib(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _imu_calib_type =
    sensor_msgs::msg::Imu_<ContainerAllocator>;
  _imu_calib_type imu_calib;

  // setters for named parameter idiom
  Type & set__imu_calib(
    const sensor_msgs::msg::Imu_<ContainerAllocator> & _arg)
  {
    this->imu_calib = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imu_interfaces__srv__ImuCalibration_Request
    std::shared_ptr<imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imu_interfaces__srv__ImuCalibration_Request
    std::shared_ptr<imu_interfaces::srv::ImuCalibration_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuCalibration_Request_ & other) const
  {
    if (this->imu_calib != other.imu_calib) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuCalibration_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuCalibration_Request_

// alias to use template instance with default allocator
using ImuCalibration_Request =
  imu_interfaces::srv::ImuCalibration_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace imu_interfaces


#ifndef _WIN32
# define DEPRECATED__imu_interfaces__srv__ImuCalibration_Response __attribute__((deprecated))
#else
# define DEPRECATED__imu_interfaces__srv__ImuCalibration_Response __declspec(deprecated)
#endif

namespace imu_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImuCalibration_Response_
{
  using Type = ImuCalibration_Response_<ContainerAllocator>;

  explicit ImuCalibration_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ImuCalibration_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imu_interfaces__srv__ImuCalibration_Response
    std::shared_ptr<imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imu_interfaces__srv__ImuCalibration_Response
    std::shared_ptr<imu_interfaces::srv::ImuCalibration_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuCalibration_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuCalibration_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuCalibration_Response_

// alias to use template instance with default allocator
using ImuCalibration_Response =
  imu_interfaces::srv::ImuCalibration_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace imu_interfaces

namespace imu_interfaces
{

namespace srv
{

struct ImuCalibration
{
  using Request = imu_interfaces::srv::ImuCalibration_Request;
  using Response = imu_interfaces::srv::ImuCalibration_Response;
};

}  // namespace srv

}  // namespace imu_interfaces

#endif  // IMU_INTERFACES__SRV__DETAIL__IMU_CALIBRATION__STRUCT_HPP_
