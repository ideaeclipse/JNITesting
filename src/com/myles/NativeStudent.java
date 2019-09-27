package com.myles;

/**
 * This is a simple example of a student class only where all methods are
 * written using native linking vs traditional java code
 * 
 * @author myles
 */
public class NativeStudent {
	private String name;
	private int age;

	/**
	 * Set default values
	 */
	public NativeStudent() {
		this.name = "N/A";
		this.age = -1;
	}

	/**
	 * Set user inputed values
	 * 
	 * @param name of student
	 * @param age  of student
	 */
	public NativeStudent(final String name, final int age) {
		this.name = name;
		this.age = age;
	}

	/**
	 * @return name of student
	 */
	public native String getName();

	/**
	 * @param name new name of student
	 * @return status code
	 */
	public native int setName(final String name);

	/**
	 * @return age of student
	 */
	public native int getAge();

	/**
	 * @param age of student
	 * @return status code
	 */
	public native int setAge(final int age);
}
