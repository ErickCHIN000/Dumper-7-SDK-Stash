#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Melee_Miss_Base.DamageData_Melee_Miss_Base_C
// (None)

class UClass* UDamageData_Melee_Miss_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Melee_Miss_Base_C");

	return Clss;
}


// DamageData_Melee_Miss_Base_C DamageData_Melee_Miss_Base.Default__DamageData_Melee_Miss_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Melee_Miss_Base_C* UDamageData_Melee_Miss_Base_C::GetDefaultObj()
{
	static class UDamageData_Melee_Miss_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Melee_Miss_Base_C*>(UDamageData_Melee_Miss_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


