#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LostControl_Bleeding_Medium.LostControl_Bleeding_Medium_C
// (Actor)

class UClass* ALostControl_Bleeding_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LostControl_Bleeding_Medium_C");

	return Clss;
}


// LostControl_Bleeding_Medium_C LostControl_Bleeding_Medium.Default__LostControl_Bleeding_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALostControl_Bleeding_Medium_C* ALostControl_Bleeding_Medium_C::GetDefaultObj()
{
	static class ALostControl_Bleeding_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALostControl_Bleeding_Medium_C*>(ALostControl_Bleeding_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


