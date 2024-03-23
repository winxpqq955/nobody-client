#pragma once

#include "../../entity/player/EntityPlayer.h"
#include "../../entity/Entity.h"
#include "../../world/World.h"
class CEntityPlayerSP : public CEntityPlayer
{
public:
	using CEntityPlayer::CEntityPlayer;
	void setSneak(bool state, JNIEnv* env = Java::GetInstance()->Env);
	Vector3D GetLastTickPos2(JNIEnv* env = Java::GetInstance()->Env);
	void attackEntity(CEntityPlayerSP* player, jobject entity, JNIEnv* env = Java::GetInstance()->Env);
	bool sendUseItem(CEntityPlayer* player, CWorld* world, CItemStack item, JNIEnv* env = Java::GetInstance()->Env);

	double get_motion_x(JNIEnv* env = Java::GetInstance()->Env);

	void set_motion_x(double x, JNIEnv* env = Java::GetInstance()->Env);

	double get_motion_y(JNIEnv* env = Java::GetInstance()->Env);

	void set_motion_y(double y, JNIEnv* env = Java::GetInstance()->Env);

	double get_motion_z(JNIEnv* env = Java::GetInstance()->Env);

	void set_motion_z(double z, JNIEnv* env = Java::GetInstance()->Env);

	double toRadians(float degrees, JNIEnv* env = Java::GetInstance()->Env);

	float get_direction(JNIEnv* env = Java::GetInstance()->Env);

	float get_speed(JNIEnv* env = Java::GetInstance()->Env);

	bool isStrafing(JNIEnv* env = Java::GetInstance()->Env);

	bool isMovingForwardsOrBackwards(JNIEnv* env = Java::GetInstance()->Env);

	bool isMovingForwards(JNIEnv* env = Java::GetInstance()->Env);

	bool isMovingBackwards(JNIEnv* env = Java::GetInstance()->Env);

	void set_speed(const float speed, JNIEnv* env = Java::GetInstance()->Env);

	void sendGroundPacket(Object Packet, JNIEnv* env = Java::GetInstance()->Env);

	Object C03PacketPlayer(jboolean ground, float yaw, float pitch, JNIEnv* env = Java::GetInstance()->Env);

};