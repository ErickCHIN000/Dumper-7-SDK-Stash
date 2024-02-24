#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Difficulty_Player.Difficulty_Player_C
// (None)

class UClass* UDifficulty_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Difficulty_Player_C");

	return Clss;
}


// Difficulty_Player_C Difficulty_Player.Default__Difficulty_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDifficulty_Player_C* UDifficulty_Player_C::GetDefaultObj()
{
	static class UDifficulty_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDifficulty_Player_C*>(UDifficulty_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


