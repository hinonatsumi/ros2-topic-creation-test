cmake_minimum_required(VERSION 3.5)
project(tutorial_interfaces)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

#Set message file
set(MSG_FILES
  "msg/Int32Stamped.msg"
  )
#Generate interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  ${MSG_FILES}
  DEPENDENCIES std_msgs
  )
#Call ament build system
ament_package()
