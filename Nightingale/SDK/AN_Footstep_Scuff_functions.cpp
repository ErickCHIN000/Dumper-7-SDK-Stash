#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_Footstep_Scuff.AN_Footstep_Scuff_C
// (None)

class UClass* UAN_Footstep_Scuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_Footstep_Scuff_C");

	return Clss;
}


// AN_Footstep_Scuff_C AN_Footstep_Scuff.Default__AN_Footstep_Scuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_Footstep_Scuff_C* UAN_Footstep_Scuff_C::GetDefaultObj()
{
	static class UAN_Footstep_Scuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_Footstep_Scuff_C*>(UAN_Footstep_Scuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


