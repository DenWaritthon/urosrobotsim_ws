# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imu_interfaces:srv/ImuCalibration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImuCalibration_Request(type):
    """Metaclass of message 'ImuCalibration_Request'."""

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
                'imu_interfaces.srv.ImuCalibration_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__imu_calibration__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__imu_calibration__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__imu_calibration__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__imu_calibration__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__imu_calibration__request

            from sensor_msgs.msg import Imu
            if Imu.__class__._TYPE_SUPPORT is None:
                Imu.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImuCalibration_Request(metaclass=Metaclass_ImuCalibration_Request):
    """Message class 'ImuCalibration_Request'."""

    __slots__ = [
        '_imu_calib',
    ]

    _fields_and_field_types = {
        'imu_calib': 'sensor_msgs/Imu',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Imu'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Imu
        self.imu_calib = kwargs.get('imu_calib', Imu())

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
        if self.imu_calib != other.imu_calib:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def imu_calib(self):
        """Message field 'imu_calib'."""
        return self._imu_calib

    @imu_calib.setter
    def imu_calib(self, value):
        if __debug__:
            from sensor_msgs.msg import Imu
            assert \
                isinstance(value, Imu), \
                "The 'imu_calib' field must be a sub message of type 'Imu'"
        self._imu_calib = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ImuCalibration_Response(type):
    """Metaclass of message 'ImuCalibration_Response'."""

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
                'imu_interfaces.srv.ImuCalibration_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__imu_calibration__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__imu_calibration__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__imu_calibration__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__imu_calibration__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__imu_calibration__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImuCalibration_Response(metaclass=Metaclass_ImuCalibration_Response):
    """Message class 'ImuCalibration_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_ImuCalibration(type):
    """Metaclass of service 'ImuCalibration'."""

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
                'imu_interfaces.srv.ImuCalibration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__imu_calibration

            from imu_interfaces.srv import _imu_calibration
            if _imu_calibration.Metaclass_ImuCalibration_Request._TYPE_SUPPORT is None:
                _imu_calibration.Metaclass_ImuCalibration_Request.__import_type_support__()
            if _imu_calibration.Metaclass_ImuCalibration_Response._TYPE_SUPPORT is None:
                _imu_calibration.Metaclass_ImuCalibration_Response.__import_type_support__()


class ImuCalibration(metaclass=Metaclass_ImuCalibration):
    from imu_interfaces.srv._imu_calibration import ImuCalibration_Request as Request
    from imu_interfaces.srv._imu_calibration import ImuCalibration_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
