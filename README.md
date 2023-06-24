# 3DCurvesHierarchy

The 3DCurvesHierarchy is a C++ library that provides a hierarchy of 3D curves, including circles, ellipses, and helixes. It allows you to perform various operations on these curves, such as calculating coordinates, derivatives, sorting, and more.

## Features

- Creation and manipulation of 3D curves, including circles, ellipses, and helixes.
- Calculation of coordinates and derivatives of curves at a given parameter value.
- Sorting of curves based on their properties.
- Parallel computation of the total sum of radii using OpenMP library.
- Building the library as a shared object (.so) for easy integration with other projects.

## Requirements

- C++ compiler with support for C++11 or higher.
- OpenMP library (optional, for parallel computation).

## Usage

### Mandatory Part

To build the main executable, use the following command:


This will compile the source files and generate an executable file named `3dCurvesHierarchy`.

### Bonus Part

To build the bonus executable with the library as a shared object, use the following command:


This will compile the source files, generate a shared object file named `lib3DCurvesHierarchy.so`, and create an executable file named `3dCurvesHierarchy_bonus`.

### Executing

After building the executables, you can run them as follows:

make - For the main executable:

make bonus - For the bonus executable:

## Example

The `main.cpp` file provided in the source code demonstrates the usage of the library. It creates a container of curves, performs operations on them, and computes the total sum of radii. You can modify this file or create your own to utilize the library for your specific needs.

## Contributing

Contributions are welcome! If you have any suggestions, bug reports, or feature requests, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.
