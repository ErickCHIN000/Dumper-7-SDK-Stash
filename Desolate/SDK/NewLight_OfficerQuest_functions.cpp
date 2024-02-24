#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_OfficerQuest.NewLight_OfficerQuest_C
// (Actor, Pawn)

class UClass* ANewLight_OfficerQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_OfficerQuest_C");

	return Clss;
}


// NewLight_OfficerQuest_C NewLight_OfficerQuest.Default__NewLight_OfficerQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_OfficerQuest_C* ANewLight_OfficerQuest_C::GetDefaultObj()
{
	static class ANewLight_OfficerQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_OfficerQuest_C*>(ANewLight_OfficerQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


