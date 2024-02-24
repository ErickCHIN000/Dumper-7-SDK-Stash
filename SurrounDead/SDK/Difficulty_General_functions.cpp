#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Difficulty_General.Difficulty_General_C
// (None)

class UClass* UDifficulty_General_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Difficulty_General_C");

	return Clss;
}


// Difficulty_General_C Difficulty_General.Default__Difficulty_General_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDifficulty_General_C* UDifficulty_General_C::GetDefaultObj()
{
	static class UDifficulty_General_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDifficulty_General_C*>(UDifficulty_General_C::StaticClass()->DefaultObject);

	return Default;
}

}


