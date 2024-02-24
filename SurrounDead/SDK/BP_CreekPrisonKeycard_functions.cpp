#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreekPrisonKeycard.BP_CreekPrisonKeycard_C
// (Actor)

class UClass* ABP_CreekPrisonKeycard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreekPrisonKeycard_C");

	return Clss;
}


// BP_CreekPrisonKeycard_C BP_CreekPrisonKeycard.Default__BP_CreekPrisonKeycard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreekPrisonKeycard_C* ABP_CreekPrisonKeycard_C::GetDefaultObj()
{
	static class ABP_CreekPrisonKeycard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreekPrisonKeycard_C*>(ABP_CreekPrisonKeycard_C::StaticClass()->DefaultObject);

	return Default;
}

}


