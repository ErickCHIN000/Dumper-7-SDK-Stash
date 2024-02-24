#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlueStimpack_Crafted.BlueStimpack_Crafted_C
// (Actor)

class UClass* ABlueStimpack_Crafted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlueStimpack_Crafted_C");

	return Clss;
}


// BlueStimpack_Crafted_C BlueStimpack_Crafted.Default__BlueStimpack_Crafted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlueStimpack_Crafted_C* ABlueStimpack_Crafted_C::GetDefaultObj()
{
	static class ABlueStimpack_Crafted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlueStimpack_Crafted_C*>(ABlueStimpack_Crafted_C::StaticClass()->DefaultObject);

	return Default;
}

}


