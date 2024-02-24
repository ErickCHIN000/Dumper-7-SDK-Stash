#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_AS3_FireBreath.DamageData_AS3_FireBreath_C
// (None)

class UClass* UDamageData_AS3_FireBreath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_AS3_FireBreath_C");

	return Clss;
}


// DamageData_AS3_FireBreath_C DamageData_AS3_FireBreath.Default__DamageData_AS3_FireBreath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_AS3_FireBreath_C* UDamageData_AS3_FireBreath_C::GetDefaultObj()
{
	static class UDamageData_AS3_FireBreath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_AS3_FireBreath_C*>(UDamageData_AS3_FireBreath_C::StaticClass()->DefaultObject);

	return Default;
}

}


