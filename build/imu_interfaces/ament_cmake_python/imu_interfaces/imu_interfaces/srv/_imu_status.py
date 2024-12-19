# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imu_interfaces:srv/ImuStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImuStatus_Request(type):
    """Metaclass of message 'ImuStatus_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('imu_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'imu_interfaces.srv.ImuStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__imu_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__imu_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__imu_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__imu_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__imu_status__request

            from std_msgs.msg import Bool
            if Bool.__class__._TYPE_SUPPORT is None:
                Bool.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImuStatus_Request(metaclass=Metaclass_ImuStatus_Request):
    """Message class 'ImuStatus_Request'."""

    __slots__ = [
        '_imu_status_check',
    ]

    _fields_and_field_types = {
        'imu_status_check': 'std_msgs/Bool',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Bool
        self.imu_status_check = kwargs.get('imu_status_check', Bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.imu_status_check != other.imu_status_check:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def imu_status_check(self):
        """Message field 'imu_status_check'."""
        return self._imu_status_check

    @imu_status_check.setter
    def imu_status_check(self, value):
        if __debug__:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 'imu_status_check' field must be a sub message of type 'Bool'"
        self._imu_status_check = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ImuStatus_Response(type):
    """Metaclass of message 'ImuStatus_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('imu_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'imu_interfaces.srv.ImuStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__imu_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__imu_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__imu_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__imu_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__imu_status__response

            from std_msgs.msg import Bool
            if Bool.__class__._TYPE_SUPPORT is None:
                Bool.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImuStatus_Response(metaclass=Metaclass_ImuStatus_Response):
    """Message class 'ImuStatus_Response'."""

    __slots__ = [
        '_imu_status',
    ]

    _fields_and_field_types = {
        'imu_status': 'std_msgs/Bool',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Bool
        self.imu_status = kwargs.get('imu_status', Bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.imu_status != other.imu_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def imu_status(self):
        """Message field 'imu_status'."""
        return self._imu_status

    @imu_status.setter
    def imu_status(self, value):
        if __debug__:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 'imu_status' field must be a sub message of type 'Bool'"
        self._imu_status = value


class Metaclass_ImuStatus(type):
    """Metaclass of service 'ImuStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('imu_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'imu_interfaces.srv.ImuStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__imu_status

            from imu_interfaces.srv import _imu_status
            if _imu_status.Metaclass_ImuStatus_Request._TYPE_SUPPORT is None:
                _imu_status.Metaclass_ImuStatus_Request.__import_type_support__()
            if _imu_status.Metaclass_ImuStatus_Response._TYPE_SUPPORT is None:
                _imu_status.Metaclass_ImuStatus_Response.__import_type_support__()


class ImuStatus(metaclass=Metaclass_ImuStatus):
    from imu_interfaces.srv._imu_status import ImuStatus_Request as Request
    from imu_interfaces.srv._imu_status import ImuStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
