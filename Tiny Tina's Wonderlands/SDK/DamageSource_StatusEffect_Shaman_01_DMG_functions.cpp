#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_StatusEffect_Shaman_01_DMG.DamageSource_StatusEffect_Shaman_01_DMG_C
// (None)

class UClass* UDamageSource_StatusEffect_Shaman_01_DMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_StatusEffect_Shaman_01_DMG_C");

	return Clss;
}


// DamageSource_StatusEffect_Shaman_01_DMG_C DamageSource_StatusEffect_Shaman_01_DMG.Default__DamageSource_StatusEffect_Shaman_01_DMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_StatusEffect_Shaman_01_DMG_C* UDamageSource_StatusEffect_Shaman_01_DMG_C::GetDefaultObj()
{
	static class UDamageSource_StatusEffect_Shaman_01_DMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_StatusEffect_Shaman_01_DMG_C*>(UDamageSource_StatusEffect_Shaman_01_DMG_C::StaticClass()->DefaultObject);

	return Default;
}

}

