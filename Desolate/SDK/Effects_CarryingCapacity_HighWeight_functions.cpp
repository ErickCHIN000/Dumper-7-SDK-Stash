#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_CarryingCapacity_HighWeight.Effects_CarryingCapacity_HighWeight_C
// (Actor)

class UClass* AEffects_CarryingCapacity_HighWeight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_CarryingCapacity_HighWeight_C");

	return Clss;
}


// Effects_CarryingCapacity_HighWeight_C Effects_CarryingCapacity_HighWeight.Default__Effects_CarryingCapacity_HighWeight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_CarryingCapacity_HighWeight_C* AEffects_CarryingCapacity_HighWeight_C::GetDefaultObj()
{
	static class AEffects_CarryingCapacity_HighWeight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_CarryingCapacity_HighWeight_C*>(AEffects_CarryingCapacity_HighWeight_C::StaticClass()->DefaultObject);

	return Default;
}

}


