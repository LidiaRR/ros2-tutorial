from setuptools import find_packages
from setuptools import setup

setup(
    name='rosidl_tutorials_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('rosidl_tutorials_msgs', 'rosidl_tutorials_msgs.*')),
)
