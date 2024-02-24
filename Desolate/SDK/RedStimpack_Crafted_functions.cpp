#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RedStimpack_Crafted.RedStimpack_Crafted_C
// (Actor)

class UClass* ARedStimpack_Crafted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedStimpack_Crafted_C");

	return Clss;
}


// RedStimpack_Crafted_C RedStimpack_Crafted.Default__RedStimpack_Crafted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARedStimpack_Crafted_C* ARedStimpack_Crafted_C::GetDefaultObj()
{
	static class ARedStimpack_Crafted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARedStimpack_Crafted_C*>(ARedStimpack_Crafted_C::StaticClass()->DefaultObject);

	return Default;
}

}


