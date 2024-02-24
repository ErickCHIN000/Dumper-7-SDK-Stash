#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_Footstep_Wade.AN_Footstep_Wade_C
// (None)

class UClass* UAN_Footstep_Wade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_Footstep_Wade_C");

	return Clss;
}


// AN_Footstep_Wade_C AN_Footstep_Wade.Default__AN_Footstep_Wade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_Footstep_Wade_C* UAN_Footstep_Wade_C::GetDefaultObj()
{
	static class UAN_Footstep_Wade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_Footstep_Wade_C*>(UAN_Footstep_Wade_C::StaticClass()->DefaultObject);

	return Default;
}

}


