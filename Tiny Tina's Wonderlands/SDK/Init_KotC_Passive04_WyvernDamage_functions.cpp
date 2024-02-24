#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_KotC_Passive04_WyvernDamage.Init_KotC_Passive04_WyvernDamage_C
// (None)

class UClass* UInit_KotC_Passive04_WyvernDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_KotC_Passive04_WyvernDamage_C");

	return Clss;
}


// Init_KotC_Passive04_WyvernDamage_C Init_KotC_Passive04_WyvernDamage.Default__Init_KotC_Passive04_WyvernDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_KotC_Passive04_WyvernDamage_C* UInit_KotC_Passive04_WyvernDamage_C::GetDefaultObj()
{
	static class UInit_KotC_Passive04_WyvernDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_KotC_Passive04_WyvernDamage_C*>(UInit_KotC_Passive04_WyvernDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


