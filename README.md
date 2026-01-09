# sample-apps
This is a repository containing documentation and small applications that explain how to use certain technologies.

## Drogon App
Sample application to show how to set up a c++ project using CMake and conan to handle build and dependency management.

### Prereqs
- CMake and Conan need to be installed, these can be installed with the following command:
- ```brew install cmake```
- ```brew install conan ```

### To build and run the application is should be as simple as running the build-and-run.sh script provided
```./build-and-run.sh```

### Then in a new terminal run the following to test that the application is up and running
```curl http://localhost:8080/test?username=<your-name>```

### If you are having issues, inspect the logs in the logs directory
