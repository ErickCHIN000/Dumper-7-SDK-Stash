#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Difficulty_AI.Difficulty_AI_C
// (None)

class UClass* UDifficulty_AI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Difficulty_AI_C");

	return Clss;
}


// Difficulty_AI_C Difficulty_AI.Default__Difficulty_AI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDifficulty_AI_C* UDifficulty_AI_C::GetDefaultObj()
{
	static class UDifficulty_AI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDifficulty_AI_C*>(UDifficulty_AI_C::StaticClass()->DefaultObject);

	return Default;
}

}


