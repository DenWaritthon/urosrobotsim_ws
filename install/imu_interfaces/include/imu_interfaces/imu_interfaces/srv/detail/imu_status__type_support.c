// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from imu_interfaces:srv/ImuStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "imu_interfaces/srv/detail/imu_status__rosidl_typesupport_introspection_c.h"
#include "imu_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "imu_interfaces/srv/detail/imu_status__functions.h"
#include "imu_interfaces/srv/detail/imu_status__struct.h"


// Include directives for member types
// Member `imu_status_check`
#include "std_msgs/msg/bool.h"
// Member `imu_status_check`
#include "std_msgs/msg/detail/bool__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  imu_interfaces__srv__ImuStatus_Request__init(message_memory);
}

void imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_fini_function(void * message_memory)
{
  imu_interfaces__srv__ImuStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_message_member_array[1] = {
  {
    "imu_status_check",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_interfaces__srv__ImuStatus_Request, imu_status_check),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_message_members = {
  "imu_interfaces__srv",  // message namespace
  "ImuStatus_Request",  // message name
  1,  // number of fields
  sizeof(imu_interfaces__srv__ImuStatus_Request),
  imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_message_member_array,  // message members
  imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_message_type_support_handle = {
  0,
  &imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_imu_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imu_interfaces, srv, ImuStatus_Request)() {
  imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  if (!imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_message_type_support_handle.typesupport_identifier) {
    imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &imu_interfaces__srv__ImuStatus_Request__rosidl_typesupport_introspection_c__ImuStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "imu_interfaces/srv/detail/imu_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "imu_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "imu_interfaces/srv/detail/imu_status__functions.h"
// already included above
// #include "imu_interfaces/srv/detail/imu_status__struct.h"


// Include directives for member types
// Member `imu_status`
// already included above
// #include "std_msgs/msg/bool.h"
// Member `imu_status`
// already included above
// #include "std_msgs/msg/detail/bool__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  imu_interfaces__srv__ImuStatus_Response__init(message_memory);
}

void imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_fini_function(void * message_memory)
{
  imu_interfaces__srv__ImuStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_message_member_array[1] = {
  {
    "imu_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_interfaces__srv__ImuStatus_Response, imu_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_message_members = {
  "imu_interfaces__srv",  // message namespace
  "ImuStatus_Response",  // message name
  1,  // number of fields
  sizeof(imu_interfaces__srv__ImuStatus_Response),
  imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_message_member_array,  // message members
  imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_message_type_support_handle = {
  0,
  &imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_imu_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imu_interfaces, srv, ImuStatus_Response)() {
  imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  if (!imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_message_type_support_handle.typesupport_identifier) {
    imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &imu_interfaces__srv__ImuStatus_Response__rosidl_typesupport_introspection_c__ImuStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "imu_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "imu_interfaces/srv/detail/imu_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers imu_interfaces__srv__detail__imu_status__rosidl_typesupport_introspection_c__ImuStatus_service_members = {
  "imu_interfaces__srv",  // service namespace
  "ImuStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // imu_interfaces__srv__detail__imu_status__rosidl_typesupport_introspection_c__ImuStatus_Request_message_type_support_handle,
  NULL  // response message
  // imu_interfaces__srv__detail__imu_status__rosidl_typesupport_introspection_c__ImuStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t imu_interfaces__srv__detail__imu_status__rosidl_typesupport_introspection_c__ImuStatus_service_type_support_handle = {
  0,
  &imu_interfaces__srv__detail__imu_status__rosidl_typesupport_introspection_c__ImuStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imu_interfaces, srv, ImuStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imu_interfaces, srv, ImuStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_imu_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imu_interfaces, srv, ImuStatus)() {
  if (!imu_interfaces__srv__detail__imu_status__rosidl_typesupport_introspection_c__ImuStatus_service_type_support_handle.typesupport_identifier) {
    imu_interfaces__srv__detail__imu_status__rosidl_typesupport_introspection_c__ImuStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)imu_interfaces__srv__detail__imu_status__rosidl_typesupport_introspection_c__ImuStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imu_interfaces, srv, ImuStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imu_interfaces, srv, ImuStatus_Response)()->data;
  }

  return &imu_interfaces__srv__detail__imu_status__rosidl_typesupport_introspection_c__ImuStatus_service_type_support_handle;
}
