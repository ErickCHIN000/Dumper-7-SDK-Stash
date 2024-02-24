#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Bullet_Sniper_Crossbow.DamageSource_Bullet_Sniper_Crossbow_C
// (None)

class UClass* UDamageSource_Bullet_Sniper_Crossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Bullet_Sniper_Crossbow_C");

	return Clss;
}


// DamageSource_Bullet_Sniper_Crossbow_C DamageSource_Bullet_Sniper_Crossbow.Default__DamageSource_Bullet_Sniper_Crossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Bullet_Sniper_Crossbow_C* UDamageSource_Bullet_Sniper_Crossbow_C::GetDefaultObj()
{
	static class UDamageSource_Bullet_Sniper_Crossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Bullet_Sniper_Crossbow_C*>(UDamageSource_Bullet_Sniper_Crossbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


