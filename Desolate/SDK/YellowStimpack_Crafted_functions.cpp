#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YellowStimpack_Crafted.YellowStimpack_Crafted_C
// (Actor)

class UClass* AYellowStimpack_Crafted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YellowStimpack_Crafted_C");

	return Clss;
}


// YellowStimpack_Crafted_C YellowStimpack_Crafted.Default__YellowStimpack_Crafted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AYellowStimpack_Crafted_C* AYellowStimpack_Crafted_C::GetDefaultObj()
{
	static class AYellowStimpack_Crafted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AYellowStimpack_Crafted_C*>(AYellowStimpack_Crafted_C::StaticClass()->DefaultObject);

	return Default;
}

}


