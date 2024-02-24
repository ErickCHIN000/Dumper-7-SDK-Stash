#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuPlayerState.MainMenuPlayerState_C
// (Actor)

class UClass* AMainMenuPlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuPlayerState_C");

	return Clss;
}


// MainMenuPlayerState_C MainMenuPlayerState.Default__MainMenuPlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenuPlayerState_C* AMainMenuPlayerState_C::GetDefaultObj()
{
	static class AMainMenuPlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenuPlayerState_C*>(AMainMenuPlayerState_C::StaticClass()->DefaultObject);

	return Default;
}

}


