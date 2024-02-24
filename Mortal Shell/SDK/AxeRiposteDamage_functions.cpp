#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AxeRiposteDamage.AxeRiposteDamage_C
// (None)

class UClass* UAxeRiposteDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AxeRiposteDamage_C");

	return Clss;
}


// AxeRiposteDamage_C AxeRiposteDamage.Default__AxeRiposteDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAxeRiposteDamage_C* UAxeRiposteDamage_C::GetDefaultObj()
{
	static class UAxeRiposteDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAxeRiposteDamage_C*>(UAxeRiposteDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


