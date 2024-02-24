#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Shaman_01_DMG.DamageData_Shaman_01_DMG_C
// (None)

class UClass* UDamageData_Shaman_01_DMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Shaman_01_DMG_C");

	return Clss;
}


// DamageData_Shaman_01_DMG_C DamageData_Shaman_01_DMG.Default__DamageData_Shaman_01_DMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Shaman_01_DMG_C* UDamageData_Shaman_01_DMG_C::GetDefaultObj()
{
	static class UDamageData_Shaman_01_DMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Shaman_01_DMG_C*>(UDamageData_Shaman_01_DMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


