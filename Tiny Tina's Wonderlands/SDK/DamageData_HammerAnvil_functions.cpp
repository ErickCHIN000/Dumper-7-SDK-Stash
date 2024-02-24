#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_HammerAnvil.DamageData_HammerAnvil_C
// (None)

class UClass* UDamageData_HammerAnvil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_HammerAnvil_C");

	return Clss;
}


// DamageData_HammerAnvil_C DamageData_HammerAnvil.Default__DamageData_HammerAnvil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_HammerAnvil_C* UDamageData_HammerAnvil_C::GetDefaultObj()
{
	static class UDamageData_HammerAnvil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_HammerAnvil_C*>(UDamageData_HammerAnvil_C::StaticClass()->DefaultObject);

	return Default;
}

}


