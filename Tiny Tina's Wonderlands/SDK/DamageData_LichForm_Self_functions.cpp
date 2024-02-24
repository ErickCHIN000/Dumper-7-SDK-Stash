#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_LichForm_Self.DamageData_LichForm_Self_C
// (None)

class UClass* UDamageData_LichForm_Self_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_LichForm_Self_C");

	return Clss;
}


// DamageData_LichForm_Self_C DamageData_LichForm_Self.Default__DamageData_LichForm_Self_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_LichForm_Self_C* UDamageData_LichForm_Self_C::GetDefaultObj()
{
	static class UDamageData_LichForm_Self_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_LichForm_Self_C*>(UDamageData_LichForm_Self_C::StaticClass()->DefaultObject);

	return Default;
}

}


