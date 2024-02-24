#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CollectedMovement.CollectedMovement_C
// (None)

class UClass* UCollectedMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectedMovement_C");

	return Clss;
}


// CollectedMovement_C CollectedMovement.Default__CollectedMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectedMovement_C* UCollectedMovement_C::GetDefaultObj()
{
	static class UCollectedMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectedMovement_C*>(UCollectedMovement_C::StaticClass()->DefaultObject);

	return Default;
}

}


