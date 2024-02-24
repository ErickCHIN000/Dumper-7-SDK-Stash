#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Barbarian_17.DamageData_Barbarian_17_C
// (None)

class UClass* UDamageData_Barbarian_17_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Barbarian_17_C");

	return Clss;
}


// DamageData_Barbarian_17_C DamageData_Barbarian_17.Default__DamageData_Barbarian_17_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Barbarian_17_C* UDamageData_Barbarian_17_C::GetDefaultObj()
{
	static class UDamageData_Barbarian_17_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Barbarian_17_C*>(UDamageData_Barbarian_17_C::StaticClass()->DefaultObject);

	return Default;
}

}


