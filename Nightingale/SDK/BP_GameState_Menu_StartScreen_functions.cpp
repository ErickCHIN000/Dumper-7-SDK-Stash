#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameState_Menu_StartScreen.BP_GameState_Menu_StartScreen_C
// (Actor)

class UClass* ABP_GameState_Menu_StartScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameState_Menu_StartScreen_C");

	return Clss;
}


// BP_GameState_Menu_StartScreen_C BP_GameState_Menu_StartScreen.Default__BP_GameState_Menu_StartScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GameState_Menu_StartScreen_C* ABP_GameState_Menu_StartScreen_C::GetDefaultObj()
{
	static class ABP_GameState_Menu_StartScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GameState_Menu_StartScreen_C*>(ABP_GameState_Menu_StartScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


