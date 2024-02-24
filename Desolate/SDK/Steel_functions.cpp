#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Steel.Steel_C
// (Actor)

class UClass* ASteel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Steel_C");

	return Clss;
}


// Steel_C Steel.Default__Steel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASteel_C* ASteel_C::GetDefaultObj()
{
	static class ASteel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASteel_C*>(ASteel_C::StaticClass()->DefaultObject);

	return Default;
}

}


