#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_GuardQuest.NewLight_GuardQuest_C
// (Actor, Pawn)

class UClass* ANewLight_GuardQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_GuardQuest_C");

	return Clss;
}


// NewLight_GuardQuest_C NewLight_GuardQuest.Default__NewLight_GuardQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_GuardQuest_C* ANewLight_GuardQuest_C::GetDefaultObj()
{
	static class ANewLight_GuardQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_GuardQuest_C*>(ANewLight_GuardQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


