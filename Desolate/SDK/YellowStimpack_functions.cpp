#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YellowStimpack.YellowStimpack_C
// (Actor)

class UClass* AYellowStimpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YellowStimpack_C");

	return Clss;
}


// YellowStimpack_C YellowStimpack.Default__YellowStimpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AYellowStimpack_C* AYellowStimpack_C::GetDefaultObj()
{
	static class AYellowStimpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AYellowStimpack_C*>(AYellowStimpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


