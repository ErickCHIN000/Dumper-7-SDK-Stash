#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Difficulty_Loot.Difficulty_Loot_C
// (None)

class UClass* UDifficulty_Loot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Difficulty_Loot_C");

	return Clss;
}


// Difficulty_Loot_C Difficulty_Loot.Default__Difficulty_Loot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDifficulty_Loot_C* UDifficulty_Loot_C::GetDefaultObj()
{
	static class UDifficulty_Loot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDifficulty_Loot_C*>(UDifficulty_Loot_C::StaticClass()->DefaultObject);

	return Default;
}

}


