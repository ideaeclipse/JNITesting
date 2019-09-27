# JNI Testing Repo

#### JNI in a nut shell

* JNI allows you to link java methods to native c/c++ code.

#### Why would you want to use this

* You're a control freak and like to return memory that is no longer being used the minute it is no longer needed.
* This might be useful if you need to do things at the OS level that require C. But give you the convenience of "frame working" you're code using java.
* If you wanted to build a Windows desktop application but didn't want to learn the WINAPI but wanted to write all your logic in C.

#### Is this hard?

* Yes and no, it will require some setup and you will have to setup some workflow aids to make development easier as no one knows what they're doing the first time the start programming using a new library. It will require that you know enough about your system that allows you to run batch/shell scripts before executing java code as you will need to create a dll file houses your c code for java to access.

#### Disclaimer

* I am new to this and I thought this would be a good tool to learn as I enjoy programming in both c and java and found there weren't to many examples online to learn from.
