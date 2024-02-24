#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Necromancer_12.DamageData_Necromancer_12_C
// (None)

class UClass* UDamageData_Necromancer_12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Necromancer_12_C");

	return Clss;
}


// DamageData_Necromancer_12_C DamageData_Necromancer_12.Default__DamageData_Necromancer_12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Necromancer_12_C* UDamageData_Necromancer_12_C::GetDefaultObj()
{
	static class UDamageData_Necromancer_12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Necromancer_12_C*>(UDamageData_Necromancer_12_C::StaticClass()->DefaultObject);

	return Default;
}

}


