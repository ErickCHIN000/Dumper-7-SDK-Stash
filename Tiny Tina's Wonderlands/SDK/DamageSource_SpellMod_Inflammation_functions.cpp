#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_SpellMod_Inflammation.DamageSource_SpellMod_Inflammation_C
// (None)

class UClass* UDamageSource_SpellMod_Inflammation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_SpellMod_Inflammation_C");

	return Clss;
}


// DamageSource_SpellMod_Inflammation_C DamageSource_SpellMod_Inflammation.Default__DamageSource_SpellMod_Inflammation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_SpellMod_Inflammation_C* UDamageSource_SpellMod_Inflammation_C::GetDefaultObj()
{
	static class UDamageSource_SpellMod_Inflammation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_SpellMod_Inflammation_C*>(UDamageSource_SpellMod_Inflammation_C::StaticClass()->DefaultObject);

	return Default;
}

}


