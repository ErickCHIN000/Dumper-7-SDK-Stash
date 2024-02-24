#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_Footstep_Scuff_Short.AN_Footstep_Scuff_Short_C
// (None)

class UClass* UAN_Footstep_Scuff_Short_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_Footstep_Scuff_Short_C");

	return Clss;
}


// AN_Footstep_Scuff_Short_C AN_Footstep_Scuff_Short.Default__AN_Footstep_Scuff_Short_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_Footstep_Scuff_Short_C* UAN_Footstep_Scuff_Short_C::GetDefaultObj()
{
	static class UAN_Footstep_Scuff_Short_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_Footstep_Scuff_Short_C*>(UAN_Footstep_Scuff_Short_C::StaticClass()->DefaultObject);

	return Default;
}

}


