#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LostControl_Ignition_Fireman.LostControl_Ignition_Fireman_C
// (Actor)

class UClass* ALostControl_Ignition_Fireman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LostControl_Ignition_Fireman_C");

	return Clss;
}


// LostControl_Ignition_Fireman_C LostControl_Ignition_Fireman.Default__LostControl_Ignition_Fireman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALostControl_Ignition_Fireman_C* ALostControl_Ignition_Fireman_C::GetDefaultObj()
{
	static class ALostControl_Ignition_Fireman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALostControl_Ignition_Fireman_C*>(ALostControl_Ignition_Fireman_C::StaticClass()->DefaultObject);

	return Default;
}

}


