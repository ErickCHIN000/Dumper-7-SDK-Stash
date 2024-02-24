#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_CommanderQuest.NewLight_CommanderQuest_C
// (Actor, Pawn)

class UClass* ANewLight_CommanderQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_CommanderQuest_C");

	return Clss;
}


// NewLight_CommanderQuest_C NewLight_CommanderQuest.Default__NewLight_CommanderQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_CommanderQuest_C* ANewLight_CommanderQuest_C::GetDefaultObj()
{
	static class ANewLight_CommanderQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_CommanderQuest_C*>(ANewLight_CommanderQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


