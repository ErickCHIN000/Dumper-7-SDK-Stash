#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_TED_Shadowfire.DamageData_TED_Shadowfire_C
// (None)

class UClass* UDamageData_TED_Shadowfire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_TED_Shadowfire_C");

	return Clss;
}


// DamageData_TED_Shadowfire_C DamageData_TED_Shadowfire.Default__DamageData_TED_Shadowfire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_TED_Shadowfire_C* UDamageData_TED_Shadowfire_C::GetDefaultObj()
{
	static class UDamageData_TED_Shadowfire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_TED_Shadowfire_C*>(UDamageData_TED_Shadowfire_C::StaticClass()->DefaultObject);

	return Default;
}

}


