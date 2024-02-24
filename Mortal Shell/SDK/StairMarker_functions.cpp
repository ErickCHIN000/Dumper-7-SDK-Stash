#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StairMarker.StairMarker_C
// (Actor)

class UClass* AStairMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StairMarker_C");

	return Clss;
}


// StairMarker_C StairMarker.Default__StairMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStairMarker_C* AStairMarker_C::GetDefaultObj()
{
	static class AStairMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStairMarker_C*>(AStairMarker_C::StaticClass()->DefaultObject);

	return Default;
}

}


