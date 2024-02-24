#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LostControl_Rolldown.LostControl_Rolldown_C
// (Actor)

class UClass* ALostControl_Rolldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LostControl_Rolldown_C");

	return Clss;
}


// LostControl_Rolldown_C LostControl_Rolldown.Default__LostControl_Rolldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALostControl_Rolldown_C* ALostControl_Rolldown_C::GetDefaultObj()
{
	static class ALostControl_Rolldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALostControl_Rolldown_C*>(ALostControl_Rolldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


