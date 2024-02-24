#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FingerlessGlovesOrange.BP_FingerlessGlovesOrange_C
// (Actor)

class UClass* ABP_FingerlessGlovesOrange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FingerlessGlovesOrange_C");

	return Clss;
}


// BP_FingerlessGlovesOrange_C BP_FingerlessGlovesOrange.Default__BP_FingerlessGlovesOrange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FingerlessGlovesOrange_C* ABP_FingerlessGlovesOrange_C::GetDefaultObj()
{
	static class ABP_FingerlessGlovesOrange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FingerlessGlovesOrange_C*>(ABP_FingerlessGlovesOrange_C::StaticClass()->DefaultObject);

	return Default;
}

}


