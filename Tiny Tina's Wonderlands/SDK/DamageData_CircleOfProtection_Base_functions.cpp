#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_CircleOfProtection_Base.DamageData_CircleOfProtection_Base_C
// (None)

class UClass* UDamageData_CircleOfProtection_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_CircleOfProtection_Base_C");

	return Clss;
}


// DamageData_CircleOfProtection_Base_C DamageData_CircleOfProtection_Base.Default__DamageData_CircleOfProtection_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_CircleOfProtection_Base_C* UDamageData_CircleOfProtection_Base_C::GetDefaultObj()
{
	static class UDamageData_CircleOfProtection_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_CircleOfProtection_Base_C*>(UDamageData_CircleOfProtection_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


