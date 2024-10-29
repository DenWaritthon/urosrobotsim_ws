// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imu_interfaces:srv/ImuStatus.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__SRV__DETAIL__IMU_STATUS__STRUCT_HPP_
#define IMU_INTERFACES__SRV__DETAIL__IMU_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'imu_status_check'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__imu_interfaces__srv__ImuStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__imu_interfaces__srv__ImuStatus_Request __declspec(deprecated)
#endif

namespace imu_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImuStatus_Request_
{
  using Type = ImuStatus_Request_<ContainerAllocator>;

  explicit ImuStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_status_check(_init)
  {
    (void)_init;
  }

  explicit ImuStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_status_check(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _imu_status_check_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _imu_status_check_type imu_status_check;

  // setters for named parameter idiom
  Type & set__imu_status_check(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->imu_status_check = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imu_interfaces__srv__ImuStatus_Request
    std::shared_ptr<imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imu_interfaces__srv__ImuStatus_Request
    std::shared_ptr<imu_interfaces::srv::ImuStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuStatus_Request_ & other) const
  {
    if (this->imu_status_check != other.imu_status_check) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuStatus_Request_

// alias to use template instance with default allocator
using ImuStatus_Request =
  imu_interfaces::srv::ImuStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace imu_interfaces


// Include directives for member types
// Member 'imu_status'
// already included above
// #include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__imu_interfaces__srv__ImuStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__imu_interfaces__srv__ImuStatus_Response __declspec(deprecated)
#endif

namespace imu_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImuStatus_Response_
{
  using Type = ImuStatus_Response_<ContainerAllocator>;

  explicit ImuStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_status(_init)
  {
    (void)_init;
  }

  explicit ImuStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _imu_status_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _imu_status_type imu_status;

  // setters for named parameter idiom
  Type & set__imu_status(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->imu_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imu_interfaces__srv__ImuStatus_Response
    std::shared_ptr<imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imu_interfaces__srv__ImuStatus_Response
    std::shared_ptr<imu_interfaces::srv::ImuStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuStatus_Response_ & other) const
  {
    if (this->imu_status != other.imu_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuStatus_Response_

// alias to use template instance with default allocator
using ImuStatus_Response =
  imu_interfaces::srv::ImuStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace imu_interfaces

namespace imu_interfaces
{

namespace srv
{

struct ImuStatus
{
  using Request = imu_interfaces::srv::ImuStatus_Request;
  using Response = imu_interfaces::srv::ImuStatus_Response;
};

}  // namespace srv

}  // namespace imu_interfaces

#endif  // IMU_INTERFACES__SRV__DETAIL__IMU_STATUS__STRUCT_HPP_
