#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HammerRiposteDamage.HammerRiposteDamage_C
// (None)

class UClass* UHammerRiposteDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HammerRiposteDamage_C");

	return Clss;
}


// HammerRiposteDamage_C HammerRiposteDamage.Default__HammerRiposteDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHammerRiposteDamage_C* UHammerRiposteDamage_C::GetDefaultObj()
{
	static class UHammerRiposteDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHammerRiposteDamage_C*>(UHammerRiposteDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


