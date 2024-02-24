#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Bullet_Sniper_Envy.DamageSource_Bullet_Sniper_Envy_C
// (None)

class UClass* UDamageSource_Bullet_Sniper_Envy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Bullet_Sniper_Envy_C");

	return Clss;
}


// DamageSource_Bullet_Sniper_Envy_C DamageSource_Bullet_Sniper_Envy.Default__DamageSource_Bullet_Sniper_Envy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Bullet_Sniper_Envy_C* UDamageSource_Bullet_Sniper_Envy_C::GetDefaultObj()
{
	static class UDamageSource_Bullet_Sniper_Envy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Bullet_Sniper_Envy_C*>(UDamageSource_Bullet_Sniper_Envy_C::StaticClass()->DefaultObject);

	return Default;
}

}


