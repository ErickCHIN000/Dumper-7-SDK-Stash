#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Bullet_Sniper_DrylsFury.DamageSource_Bullet_Sniper_DrylsFury_C
// (None)

class UClass* UDamageSource_Bullet_Sniper_DrylsFury_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Bullet_Sniper_DrylsFury_C");

	return Clss;
}


// DamageSource_Bullet_Sniper_DrylsFury_C DamageSource_Bullet_Sniper_DrylsFury.Default__DamageSource_Bullet_Sniper_DrylsFury_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Bullet_Sniper_DrylsFury_C* UDamageSource_Bullet_Sniper_DrylsFury_C::GetDefaultObj()
{
	static class UDamageSource_Bullet_Sniper_DrylsFury_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Bullet_Sniper_DrylsFury_C*>(UDamageSource_Bullet_Sniper_DrylsFury_C::StaticClass()->DefaultObject);

	return Default;
}

}


