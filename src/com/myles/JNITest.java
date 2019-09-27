package com.myles;

import com.myles.NativeStudent;
/*
#include <jni.h>
#include <stdio.h>
#include "HEADERNAME.h"
 */

public class JNITest {
	static {
		System.loadLibrary("native");
	}

	public static void main(String[] args) {
		NativeStudent student = new NativeStudent("myles", 10);
		System.out.println("Name: " + student.getName() + " Age: " + student.getAge());
		System.out.println("We are updating the age to 20");
		student.setAge(20);
		System.out.println("Name: " + student.getName() + " Age: " + student.getAge());
		System.out.println("We are updating the name to Myles");
		student.setName("Myles");
		System.out.println("Name: " + student.getName() + " Age: " + student.getAge());
	}
}
