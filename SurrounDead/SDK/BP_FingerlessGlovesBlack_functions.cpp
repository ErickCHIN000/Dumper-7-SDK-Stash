#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FingerlessGlovesBlack.BP_FingerlessGlovesBlack_C
// (Actor)

class UClass* ABP_FingerlessGlovesBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FingerlessGlovesBlack_C");

	return Clss;
}


// BP_FingerlessGlovesBlack_C BP_FingerlessGlovesBlack.Default__BP_FingerlessGlovesBlack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FingerlessGlovesBlack_C* ABP_FingerlessGlovesBlack_C::GetDefaultObj()
{
	static class ABP_FingerlessGlovesBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FingerlessGlovesBlack_C*>(ABP_FingerlessGlovesBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


