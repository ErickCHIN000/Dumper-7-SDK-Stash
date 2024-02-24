#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_FrozenOrb.DamageData_FrozenOrb_C
// (None)

class UClass* UDamageData_FrozenOrb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_FrozenOrb_C");

	return Clss;
}


// DamageData_FrozenOrb_C DamageData_FrozenOrb.Default__DamageData_FrozenOrb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_FrozenOrb_C* UDamageData_FrozenOrb_C::GetDefaultObj()
{
	static class UDamageData_FrozenOrb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_FrozenOrb_C*>(UDamageData_FrozenOrb_C::StaticClass()->DefaultObject);

	return Default;
}

}


