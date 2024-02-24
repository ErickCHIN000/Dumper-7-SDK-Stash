#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainMenu_GGGameState.BP_MainMenu_GGGameState_C
// (Actor)

class UClass* ABP_MainMenu_GGGameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainMenu_GGGameState_C");

	return Clss;
}


// BP_MainMenu_GGGameState_C BP_MainMenu_GGGameState.Default__BP_MainMenu_GGGameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MainMenu_GGGameState_C* ABP_MainMenu_GGGameState_C::GetDefaultObj()
{
	static class ABP_MainMenu_GGGameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MainMenu_GGGameState_C*>(ABP_MainMenu_GGGameState_C::StaticClass()->DefaultObject);

	return Default;
}

}


