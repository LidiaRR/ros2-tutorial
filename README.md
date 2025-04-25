# ROS2 Tutorial

This repository contains some ROS2 packages made from the tutorial at <https://docs.ros.org/en/jazzy/Tutorials.html>.

## Packages

- `my_package`: a basic package with a single node that prints a 'Hello world' message. Package made following <https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Creating-Your-First-ROS2-Package.html>
- `cpp_pubsub`: a package with basic publisher and subscriber nodes. Package made following <https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Publisher-And-Subscriber.html>

## Execution

To build the packages and execute them, write the following lines in a terminal:

```bash
colcon build
source install/setup.bash
ros2 run <package_name> <node_name>
```
