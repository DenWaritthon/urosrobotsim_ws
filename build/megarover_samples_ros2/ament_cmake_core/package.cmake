set(_AMENT_PACKAGE_NAME "megarover_samples_ros2")
set(megarover_samples_ros2_VERSION "0.0.0")
set(megarover_samples_ros2_MAINTAINER "atinfinity <dandelion1124@gmail.com>")
set(megarover_samples_ros2_BUILD_DEPENDS "gazebo_ros_pkgs" "sensor_msgs")
set(megarover_samples_ros2_BUILDTOOL_DEPENDS "ament_cmake")
set(megarover_samples_ros2_BUILD_EXPORT_DEPENDS "gazebo_ros_pkgs" "sensor_msgs")
set(megarover_samples_ros2_BUILDTOOL_EXPORT_DEPENDS )
set(megarover_samples_ros2_EXEC_DEPENDS "diff_drive_controller" "gazebo_ros2_control" "gazebo_ros" "ign_ros2_control" "joint_state_broadcaster" "joint_state_publisher" "nav2_bringup" "navigation2" "robot_state_publisher" "ros_ign" "ros2_control" "ros2_controllers" "slam_toolbox" "xacro" "gazebo_ros_pkgs" "sensor_msgs")
set(megarover_samples_ros2_TEST_DEPENDS "ament_lint_auto" "ament_lint_common")
set(megarover_samples_ros2_GROUP_DEPENDS )
set(megarover_samples_ros2_MEMBER_OF_GROUPS )
set(megarover_samples_ros2_DEPRECATED "")
set(megarover_samples_ros2_EXPORT_TAGS)
list(APPEND megarover_samples_ros2_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND megarover_samples_ros2_EXPORT_TAGS "<gazebo_ros gazebo_plugin_path=\"lib\"/>")
list(APPEND megarover_samples_ros2_EXPORT_TAGS "<gazebo_ros gazebo_model_path=\"models\"/>")