# About

This is a basic `hello world` application built for the purposes of learning C++

## Setup

This repository already has several configurations added for building and debugging, these configurations are located in the `.vscode`.

## Known Issues

When attempting to launch the debugger I received a prompt from Mac OS, requiring approval to attach to the debug processor. [this is outlined in the documentation for vscode](https://code.visualstudio.com/docs/cpp/lldb-mi)

I was able to get things to work by running:

```
sudo DevToolsSecurity --enable
```

According to the help menu for DevToolsSecurity it says:

```
Changes the security authorization policies for developer systems
Usage: DevToolsSecurity [-verbose] [-enable | -disable | -status]
    -enable  :: (default) enable developer mode policies
    -disable :: return policies to system default
    -status  :: prints out whether or not developer mode policies are in effect
    -verbose :: makes output more verbose
```
