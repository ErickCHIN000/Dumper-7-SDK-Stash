#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerLightningMovement.PlayerLightningMovement_C
// (None)

class UClass* UPlayerLightningMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerLightningMovement_C");

	return Clss;
}


// PlayerLightningMovement_C PlayerLightningMovement.Default__PlayerLightningMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerLightningMovement_C* UPlayerLightningMovement_C::GetDefaultObj()
{
	static class UPlayerLightningMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerLightningMovement_C*>(UPlayerLightningMovement_C::StaticClass()->DefaultObject);

	return Default;
}

}


