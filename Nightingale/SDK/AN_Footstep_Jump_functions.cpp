#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_Footstep_Jump.AN_Footstep_Jump_C
// (None)

class UClass* UAN_Footstep_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_Footstep_Jump_C");

	return Clss;
}


// AN_Footstep_Jump_C AN_Footstep_Jump.Default__AN_Footstep_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_Footstep_Jump_C* UAN_Footstep_Jump_C::GetDefaultObj()
{
	static class UAN_Footstep_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_Footstep_Jump_C*>(UAN_Footstep_Jump_C::StaticClass()->DefaultObject);

	return Default;
}

}


