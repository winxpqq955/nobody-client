#pragma once

#include "../../../Object.h"
#include "../../../../util/math/geometry.h"

class CVec3 : public Object
{
	//CVec3();
	//CVec3(jobject instance);

	//jclass getClass();
	//jobject getInstance();
public:
	using Object::Object;
	Vector3 GetNativeVector3(JNIEnv* env = Java::Env);
	Vector3D GetNativeVector3D(JNIEnv* env = Java::Env);
};

