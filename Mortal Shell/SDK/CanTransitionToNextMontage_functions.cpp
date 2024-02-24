#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CanTransitionToNextMontage.CanTransitionToNextMontage_C
// (None)

class UClass* UCanTransitionToNextMontage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanTransitionToNextMontage_C");

	return Clss;
}


// CanTransitionToNextMontage_C CanTransitionToNextMontage.Default__CanTransitionToNextMontage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCanTransitionToNextMontage_C* UCanTransitionToNextMontage_C::GetDefaultObj()
{
	static class UCanTransitionToNextMontage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCanTransitionToNextMontage_C*>(UCanTransitionToNextMontage_C::StaticClass()->DefaultObject);

	return Default;
}

}


