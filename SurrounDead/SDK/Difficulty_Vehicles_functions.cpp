#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Difficulty_Vehicles.Difficulty_Vehicles_C
// (None)

class UClass* UDifficulty_Vehicles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Difficulty_Vehicles_C");

	return Clss;
}


// Difficulty_Vehicles_C Difficulty_Vehicles.Default__Difficulty_Vehicles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDifficulty_Vehicles_C* UDifficulty_Vehicles_C::GetDefaultObj()
{
	static class UDifficulty_Vehicles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDifficulty_Vehicles_C*>(UDifficulty_Vehicles_C::StaticClass()->DefaultObject);

	return Default;
}

}


