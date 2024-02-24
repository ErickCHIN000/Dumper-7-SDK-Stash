#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_KotC_Passive19_ShockDamage.Init_KotC_Passive19_ShockDamage_C
// (None)

class UClass* UInit_KotC_Passive19_ShockDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_KotC_Passive19_ShockDamage_C");

	return Clss;
}


// Init_KotC_Passive19_ShockDamage_C Init_KotC_Passive19_ShockDamage.Default__Init_KotC_Passive19_ShockDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_KotC_Passive19_ShockDamage_C* UInit_KotC_Passive19_ShockDamage_C::GetDefaultObj()
{
	static class UInit_KotC_Passive19_ShockDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_KotC_Passive19_ShockDamage_C*>(UInit_KotC_Passive19_ShockDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


