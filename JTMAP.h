/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JTmap */

#ifndef _Included_JTmap
#define _Included_JTmap
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     JTmap
 * Method:    Connect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JTmap_Connect
  (JNIEnv *, jobject);

/*
 * Class:     JTmap
 * Method:    Attach
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JTmap_Attach
  (JNIEnv *, jobject);

/*
 * Class:     JTmap
 * Method:    SetMemory
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_JTmap_SetMemory
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

/*
 * Class:     JTmap
 * Method:    GetMemory
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_JTmap_GetMemory
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     JTmap
 * Method:    WriteString
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JTmap_WriteString
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     JTmap
 * Method:    ReadString
 * Signature: (J)C
 */
JNIEXPORT jchar JNICALL Java_JTmap_ReadString
  (JNIEnv *, jobject, jlong);

/*
 * Class:     JTmap
 * Method:    WriteByte
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_JTmap_WriteByte
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     JTmap
 * Method:    ReadByte
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_JTmap_ReadByte
  (JNIEnv *, jobject, jlong);

/*
 * Class:     JTmap
 * Method:    WriteBool
 * Signature: (JLjava/lang/Boolean;)V
 */
JNIEXPORT void JNICALL Java_JTmap_WriteBool
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     JTmap
 * Method:    ReadBool
 * Signature: (J)Ljava/lang/Boolean;
 */
JNIEXPORT jobject JNICALL Java_JTmap_ReadBool
  (JNIEnv *, jobject, jlong);

/*
 * Class:     JTmap
 * Method:    WriteShort
 * Signature: (JLjava/lang/Short;)V
 */
JNIEXPORT void JNICALL Java_JTmap_WriteShort
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     JTmap
 * Method:    ReadShort
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_JTmap_ReadShort
  (JNIEnv *, jobject, jlong);

/*
 * Class:     JTmap
 * Method:    WriteUShort
 * Signature: (JLjava/lang/Short;)V
 */
JNIEXPORT void JNICALL Java_JTmap_WriteUShort
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     JTmap
 * Method:    ReadUShort
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_JTmap_ReadUShort
  (JNIEnv *, jobject, jlong);

/*
 * Class:     JTmap
 * Method:    WriteInt
 * Signature: (JLjava/lang/Short;)V
 */
JNIEXPORT void JNICALL Java_JTmap_WriteInt
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     JTmap
 * Method:    WriteUInt
 * Signature: (JLjava/lang/Short;)V
 */
JNIEXPORT void JNICALL Java_JTmap_WriteUInt
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     JTmap
 * Method:    ReadInt
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_JTmap_ReadInt
  (JNIEnv *, jobject, jlong);

/*
 * Class:     JTmap
 * Method:    ReadUInt
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_JTmap_ReadUInt
  (JNIEnv *, jobject, jlong);

/*
 * Class:     JTmap
 * Method:    WriteFloat
 * Signature: (JF)F
 */
JNIEXPORT jfloat JNICALL Java_JTmap_WriteFloat
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     JTmap
 * Method:    ReadFloat
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_JTmap_ReadFloat
  (JNIEnv *, jobject, jlong);

/*
 * Class:     JTmap
 * Method:    ReadDouble
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_JTmap_ReadDouble
  (JNIEnv *, jobject, jlong);

/*
 * Class:     JTmap
 * Method:    cmpArray
 * Signature: ([Ljava/lang/Byte;[Ljava/lang/Byte;S)Ljava/lang/Boolean;
 */
JNIEXPORT jobject JNICALL Java_JTmap_cmpArray
  (JNIEnv *, jobject, jobjectArray, jobjectArray, jshort);

/*
 * Class:     JTmap
 * Method:    WriteDouble
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_JTmap_WriteDouble
  (JNIEnv *, jobject, jlong, jdouble);

#ifdef __cplusplus
}
#endif
#endif