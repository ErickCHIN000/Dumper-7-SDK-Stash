#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FingerlessGlovesGreen.BP_FingerlessGlovesGreen_C
// (Actor)

class UClass* ABP_FingerlessGlovesGreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FingerlessGlovesGreen_C");

	return Clss;
}


// BP_FingerlessGlovesGreen_C BP_FingerlessGlovesGreen.Default__BP_FingerlessGlovesGreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FingerlessGlovesGreen_C* ABP_FingerlessGlovesGreen_C::GetDefaultObj()
{
	static class ABP_FingerlessGlovesGreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FingerlessGlovesGreen_C*>(ABP_FingerlessGlovesGreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


