/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opengl_Window */

#ifndef _Included_org_lwjgl_opengl_Window
#define _Included_org_lwjgl_opengl_Window
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: _00024assertionsDisabled */
/* Inaccessible static: created */
/* Inaccessible static: x */
/* Inaccessible static: y */
/* Inaccessible static: width */
/* Inaccessible static: height */
/* Inaccessible static: title */
/* Inaccessible static: color */
/* Inaccessible static: alpha */
/* Inaccessible static: depth */
/* Inaccessible static: stencil */
/* Inaccessible static: fullscreen */
/* Inaccessible static: vbo_tracker */
/* Inaccessible static: class_00024org_00024lwjgl_00024opengl_00024Window */
/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nSetTitle
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_nSetTitle
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nIsCloseRequested
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_Window_nIsCloseRequested
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nIsMinimized
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_Window_nIsMinimized
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nIsFocused
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_Window_nIsFocused
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    minimize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_minimize
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    restore
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_restore
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nIsDirty
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_Window_nIsDirty
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    swapBuffers
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_swapBuffers
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nCreate
 * Signature: (Ljava/lang/String;IIIIZIIII)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_nCreate
  (JNIEnv *, jclass, jstring, jint, jint, jint, jint, jboolean, jint, jint, jint, jint);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    nDestroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_nDestroy
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_Window
 * Method:    updateState
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Window_updateState
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
