#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RedStimpack.RedStimpack_C
// (Actor)

class UClass* ARedStimpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedStimpack_C");

	return Clss;
}


// RedStimpack_C RedStimpack.Default__RedStimpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARedStimpack_C* ARedStimpack_C::GetDefaultObj()
{
	static class ARedStimpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARedStimpack_C*>(ARedStimpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


