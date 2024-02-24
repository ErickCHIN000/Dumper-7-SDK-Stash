#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_DrylsLegacy.DamageData_DrylsLegacy_C
// (None)

class UClass* UDamageData_DrylsLegacy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_DrylsLegacy_C");

	return Clss;
}


// DamageData_DrylsLegacy_C DamageData_DrylsLegacy.Default__DamageData_DrylsLegacy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_DrylsLegacy_C* UDamageData_DrylsLegacy_C::GetDefaultObj()
{
	static class UDamageData_DrylsLegacy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_DrylsLegacy_C*>(UDamageData_DrylsLegacy_C::StaticClass()->DefaultObject);

	return Default;
}

}


