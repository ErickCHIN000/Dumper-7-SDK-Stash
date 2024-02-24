#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Bullet_Shotgun.DamageSource_Bullet_Shotgun_C
// (None)

class UClass* UDamageSource_Bullet_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Bullet_Shotgun_C");

	return Clss;
}


// DamageSource_Bullet_Shotgun_C DamageSource_Bullet_Shotgun.Default__DamageSource_Bullet_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Bullet_Shotgun_C* UDamageSource_Bullet_Shotgun_C::GetDefaultObj()
{
	static class UDamageSource_Bullet_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Bullet_Shotgun_C*>(UDamageSource_Bullet_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


