#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Bullet.DamageSource_Bullet_C
// (None)

class UClass* UDamageSource_Bullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Bullet_C");

	return Clss;
}


// DamageSource_Bullet_C DamageSource_Bullet.Default__DamageSource_Bullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Bullet_C* UDamageSource_Bullet_C::GetDefaultObj()
{
	static class UDamageSource_Bullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Bullet_C*>(UDamageSource_Bullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


