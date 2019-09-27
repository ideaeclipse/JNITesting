#include <jni.h>
#include <stdio.h>
#include "com_myles_NativeStudent.h"

//Get name value from java object and return it
JNIEXPORT jstring JNICALL Java_com_myles_NativeStudent_getName(JNIEnv *env,
		jobject obj) {

	/*
	 * The logic behind this is:
	 * 1) Get the Type of class from the jvm.
	 * 2) Get the field if based on field name and type (refer to header file for exact type format)
	 * 3) get value from jvm based on the returned field id.
	 *
	 */
	jclass clazz;
	jfieldID fid;
	jstring value;

	clazz = (*env)->GetObjectClass(env, obj);
	fid = (*env)->GetFieldID(env, clazz, "name", "Ljava/lang/String;");
	value = (*env)->GetObjectField(env, obj, fid);

	/*
	 * This is an example of how to convert the jstring type into a usable char*
	 * always remember to give access back to the jvm once complete.
	 */

	const char *nativeString = (*env)->GetStringUTFChars(env, value, 0);

	(*env)->ReleaseStringUTFChars(env, value, nativeString);

	return value;
}

//Set name value inside java object and return status code.
JNIEXPORT jint JNICALL Java_com_myles_NativeStudent_setName(JNIEnv *env,
		jobject obj, jstring newName) {

	/*
	 * The logic behind this is:
	 * 1) Get the Type of class from the jvm.
	 * 2) Get the field if based on field name and type (refer to header file for exact type format)
	 * 3) get value from jvm based on the returned field id.
	 *
	 */
	jclass clazz;
	jfieldID fid;
	jstring value;

	clazz = (*env)->GetObjectClass(env, obj);
	fid = (*env)->GetFieldID(env, clazz, "name", "Ljava/lang/String;");
	value = (*env)->GetObjectField(env, obj, fid);

	/*
	 * This is the same idea as GetObjectField but it allows for setting the value.
	 * Just need one additional parameter which can either be the native type or the java type
	 */
	(*env)->SetObjectField(env, obj, fid, newName);

	return 1;

}

//Get name value from java object and return it
JNIEXPORT jint JNICALL Java_com_myles_NativeStudent_getAge(JNIEnv *env,
		jobject obj) {

	/*
	 * The logic behind this is:
	 * 1) Get the Type of class from the jvm.
	 * 2) Get the field if based on field name and type (refer to header file for exact type format)
	 * 3) get value from jvm based on the returned field id.
	 *
	 */
	jclass clazz;
	jfieldID fid;
	jint value;

	clazz = (*env)->GetObjectClass(env, obj);
	fid = (*env)->GetFieldID(env, clazz, "age", "I");
	value = (*env)->GetIntField(env, obj, fid);

	/*
	 * This is an example of how to get an integer out of the jint type.
	 */
	int nativeInt = (int) value;

	return value;
}

//Set name value inside java object and return status code.
JNIEXPORT jint JNICALL Java_com_myles_NativeStudent_setAge(JNIEnv *env,
		jobject obj, jint newAge) {

	/*
	 * The logic behind this is:
	 * 1) Get the Type of class from the jvm.
	 * 2) Get the field if based on field name and type (refer to header file for exact type format)
	 * 3) get value from jvm based on the returned field id.
	 *
	 */
	jclass clazz;
	jfieldID fid;

	clazz = (*env)->GetObjectClass(env, obj);
	fid = (*env)->GetFieldID(env, clazz, "age", "I");

	/*
	 * This is how you set an integer field back. Same as GetFieldID just one additional param of the new value
	 */
	(*env)->SetIntField(env, obj, fid, newAge);

	return 1;
}
