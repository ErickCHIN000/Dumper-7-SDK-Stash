#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Shaman_Spirits.DamageData_Shaman_Spirits_C
// (None)

class UClass* UDamageData_Shaman_Spirits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Shaman_Spirits_C");

	return Clss;
}


// DamageData_Shaman_Spirits_C DamageData_Shaman_Spirits.Default__DamageData_Shaman_Spirits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Shaman_Spirits_C* UDamageData_Shaman_Spirits_C::GetDefaultObj()
{
	static class UDamageData_Shaman_Spirits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Shaman_Spirits_C*>(UDamageData_Shaman_Spirits_C::StaticClass()->DefaultObject);

	return Default;
}

}


