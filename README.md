# Bazel Introduction

## Build your first hello-world

Make sure you are under the project's root directory.

Run `bazel build welcome/hello_world` to build the app.
Then you can find executable file in `bazel-bin/welcome:hello_world`.

Run the executable file to see the results.

### Add more targets

You can find more targets in `welcome/BUILD`.

### Add another package

You can find the package in `modules/time_utils`.
