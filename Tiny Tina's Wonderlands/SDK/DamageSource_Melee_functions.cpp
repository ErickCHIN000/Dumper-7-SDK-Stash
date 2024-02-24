#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Melee.DamageSource_Melee_C
// (None)

class UClass* UDamageSource_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Melee_C");

	return Clss;
}


// DamageSource_Melee_C DamageSource_Melee.Default__DamageSource_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Melee_C* UDamageSource_Melee_C::GetDefaultObj()
{
	static class UDamageSource_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Melee_C*>(UDamageSource_Melee_C::StaticClass()->DefaultObject);

	return Default;
}

}


