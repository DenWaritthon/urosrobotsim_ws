from setuptools import find_packages
from setuptools import setup

setup(
    name='calibrate_imu',
    version='0.0.0',
    packages=find_packages(
        include=('calibrate_imu', 'calibrate_imu.*')),
)
