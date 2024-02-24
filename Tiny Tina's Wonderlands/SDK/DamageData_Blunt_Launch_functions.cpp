#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Blunt_Launch.DamageData_Blunt_Launch_C
// (None)

class UClass* UDamageData_Blunt_Launch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Blunt_Launch_C");

	return Clss;
}


// DamageData_Blunt_Launch_C DamageData_Blunt_Launch.Default__DamageData_Blunt_Launch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Blunt_Launch_C* UDamageData_Blunt_Launch_C::GetDefaultObj()
{
	static class UDamageData_Blunt_Launch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Blunt_Launch_C*>(UDamageData_Blunt_Launch_C::StaticClass()->DefaultObject);

	return Default;
}

}


