#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Fist_Success_Light.DamageData_Fist_Success_Light_C
// (None)

class UClass* UDamageData_Fist_Success_Light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Fist_Success_Light_C");

	return Clss;
}


// DamageData_Fist_Success_Light_C DamageData_Fist_Success_Light.Default__DamageData_Fist_Success_Light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Fist_Success_Light_C* UDamageData_Fist_Success_Light_C::GetDefaultObj()
{
	static class UDamageData_Fist_Success_Light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Fist_Success_Light_C*>(UDamageData_Fist_Success_Light_C::StaticClass()->DefaultObject);

	return Default;
}

}


