#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Sword2H_Success_Stagger.DamageData_Sword2H_Success_Stagger_C
// (None)

class UClass* UDamageData_Sword2H_Success_Stagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Sword2H_Success_Stagger_C");

	return Clss;
}


// DamageData_Sword2H_Success_Stagger_C DamageData_Sword2H_Success_Stagger.Default__DamageData_Sword2H_Success_Stagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Sword2H_Success_Stagger_C* UDamageData_Sword2H_Success_Stagger_C::GetDefaultObj()
{
	static class UDamageData_Sword2H_Success_Stagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Sword2H_Success_Stagger_C*>(UDamageData_Sword2H_Success_Stagger_C::StaticClass()->DefaultObject);

	return Default;
}

}


