#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlueStimpack.BlueStimpack_C
// (Actor)

class UClass* ABlueStimpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlueStimpack_C");

	return Clss;
}


// BlueStimpack_C BlueStimpack.Default__BlueStimpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlueStimpack_C* ABlueStimpack_C::GetDefaultObj()
{
	static class ABlueStimpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlueStimpack_C*>(ABlueStimpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


