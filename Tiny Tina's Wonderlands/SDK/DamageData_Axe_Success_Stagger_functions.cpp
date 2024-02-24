#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Axe_Success_Stagger.DamageData_Axe_Success_Stagger_C
// (None)

class UClass* UDamageData_Axe_Success_Stagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Axe_Success_Stagger_C");

	return Clss;
}


// DamageData_Axe_Success_Stagger_C DamageData_Axe_Success_Stagger.Default__DamageData_Axe_Success_Stagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Axe_Success_Stagger_C* UDamageData_Axe_Success_Stagger_C::GetDefaultObj()
{
	static class UDamageData_Axe_Success_Stagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Axe_Success_Stagger_C*>(UDamageData_Axe_Success_Stagger_C::StaticClass()->DefaultObject);

	return Default;
}

}


