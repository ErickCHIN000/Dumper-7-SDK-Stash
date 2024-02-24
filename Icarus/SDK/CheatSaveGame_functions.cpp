#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheatSaveGame.CheatSaveGame_C
// (None)

class UClass* UCheatSaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatSaveGame_C");

	return Clss;
}


// CheatSaveGame_C CheatSaveGame.Default__CheatSaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatSaveGame_C* UCheatSaveGame_C::GetDefaultObj()
{
	static class UCheatSaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatSaveGame_C*>(UCheatSaveGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


