#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KatanasRiposteDamage.KatanasRiposteDamage_C
// (None)

class UClass* UKatanasRiposteDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KatanasRiposteDamage_C");

	return Clss;
}


// KatanasRiposteDamage_C KatanasRiposteDamage.Default__KatanasRiposteDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKatanasRiposteDamage_C* UKatanasRiposteDamage_C::GetDefaultObj()
{
	static class UKatanasRiposteDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKatanasRiposteDamage_C*>(UKatanasRiposteDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


