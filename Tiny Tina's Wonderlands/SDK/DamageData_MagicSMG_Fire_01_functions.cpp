#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_MagicSMG_Fire_01.DamageData_MagicSMG_Fire_01_C
// (None)

class UClass* UDamageData_MagicSMG_Fire_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_MagicSMG_Fire_01_C");

	return Clss;
}


// DamageData_MagicSMG_Fire_01_C DamageData_MagicSMG_Fire_01.Default__DamageData_MagicSMG_Fire_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_MagicSMG_Fire_01_C* UDamageData_MagicSMG_Fire_01_C::GetDefaultObj()
{
	static class UDamageData_MagicSMG_Fire_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_MagicSMG_Fire_01_C*>(UDamageData_MagicSMG_Fire_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


