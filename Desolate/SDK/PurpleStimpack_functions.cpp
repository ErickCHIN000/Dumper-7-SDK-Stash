#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PurpleStimpack.PurpleStimpack_C
// (Actor)

class UClass* APurpleStimpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PurpleStimpack_C");

	return Clss;
}


// PurpleStimpack_C PurpleStimpack.Default__PurpleStimpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APurpleStimpack_C* APurpleStimpack_C::GetDefaultObj()
{
	static class APurpleStimpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APurpleStimpack_C*>(APurpleStimpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


