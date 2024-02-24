#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Bullet_AssaultRifle.DamageSource_Bullet_AssaultRifle_C
// (None)

class UClass* UDamageSource_Bullet_AssaultRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Bullet_AssaultRifle_C");

	return Clss;
}


// DamageSource_Bullet_AssaultRifle_C DamageSource_Bullet_AssaultRifle.Default__DamageSource_Bullet_AssaultRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Bullet_AssaultRifle_C* UDamageSource_Bullet_AssaultRifle_C::GetDefaultObj()
{
	static class UDamageSource_Bullet_AssaultRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Bullet_AssaultRifle_C*>(UDamageSource_Bullet_AssaultRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


