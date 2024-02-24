#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_GlacialCascade.DamageData_GlacialCascade_C
// (None)

class UClass* UDamageData_GlacialCascade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_GlacialCascade_C");

	return Clss;
}


// DamageData_GlacialCascade_C DamageData_GlacialCascade.Default__DamageData_GlacialCascade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_GlacialCascade_C* UDamageData_GlacialCascade_C::GetDefaultObj()
{
	static class UDamageData_GlacialCascade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_GlacialCascade_C*>(UDamageData_GlacialCascade_C::StaticClass()->DefaultObject);

	return Default;
}

}


