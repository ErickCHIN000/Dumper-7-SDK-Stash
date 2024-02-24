#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FingerlessGlovesBlue.BP_FingerlessGlovesBlue_C
// (Actor)

class UClass* ABP_FingerlessGlovesBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FingerlessGlovesBlue_C");

	return Clss;
}


// BP_FingerlessGlovesBlue_C BP_FingerlessGlovesBlue.Default__BP_FingerlessGlovesBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FingerlessGlovesBlue_C* ABP_FingerlessGlovesBlue_C::GetDefaultObj()
{
	static class ABP_FingerlessGlovesBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FingerlessGlovesBlue_C*>(ABP_FingerlessGlovesBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


