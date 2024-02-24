#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_SacSkeep.DamageData_SacSkeep_C
// (None)

class UClass* UDamageData_SacSkeep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_SacSkeep_C");

	return Clss;
}


// DamageData_SacSkeep_C DamageData_SacSkeep.Default__DamageData_SacSkeep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_SacSkeep_C* UDamageData_SacSkeep_C::GetDefaultObj()
{
	static class UDamageData_SacSkeep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_SacSkeep_C*>(UDamageData_SacSkeep_C::StaticClass()->DefaultObject);

	return Default;
}

}


