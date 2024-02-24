#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Axe_Fail.DamageData_Axe_Fail_C
// (None)

class UClass* UDamageData_Axe_Fail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Axe_Fail_C");

	return Clss;
}


// DamageData_Axe_Fail_C DamageData_Axe_Fail.Default__DamageData_Axe_Fail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Axe_Fail_C* UDamageData_Axe_Fail_C::GetDefaultObj()
{
	static class UDamageData_Axe_Fail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Axe_Fail_C*>(UDamageData_Axe_Fail_C::StaticClass()->DefaultObject);

	return Default;
}

}


