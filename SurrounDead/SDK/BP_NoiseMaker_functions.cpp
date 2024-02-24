#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NoiseMaker.BP_NoiseMaker_C
// (Actor)

class UClass* ABP_NoiseMaker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NoiseMaker_C");

	return Clss;
}


// BP_NoiseMaker_C BP_NoiseMaker.Default__BP_NoiseMaker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NoiseMaker_C* ABP_NoiseMaker_C::GetDefaultObj()
{
	static class ABP_NoiseMaker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NoiseMaker_C*>(ABP_NoiseMaker_C::StaticClass()->DefaultObject);

	return Default;
}

}


