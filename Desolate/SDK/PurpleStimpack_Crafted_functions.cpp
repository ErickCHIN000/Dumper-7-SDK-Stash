#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PurpleStimpack_Crafted.PurpleStimpack_Crafted_C
// (Actor)

class UClass* APurpleStimpack_Crafted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PurpleStimpack_Crafted_C");

	return Clss;
}


// PurpleStimpack_Crafted_C PurpleStimpack_Crafted.Default__PurpleStimpack_Crafted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APurpleStimpack_Crafted_C* APurpleStimpack_Crafted_C::GetDefaultObj()
{
	static class APurpleStimpack_Crafted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APurpleStimpack_Crafted_C*>(APurpleStimpack_Crafted_C::StaticClass()->DefaultObject);

	return Default;
}

}


