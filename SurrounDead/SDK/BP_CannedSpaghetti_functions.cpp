#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CannedSpaghetti.BP_CannedSpaghetti_C
// (Actor)

class UClass* ABP_CannedSpaghetti_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CannedSpaghetti_C");

	return Clss;
}


// BP_CannedSpaghetti_C BP_CannedSpaghetti.Default__BP_CannedSpaghetti_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CannedSpaghetti_C* ABP_CannedSpaghetti_C::GetDefaultObj()
{
	static class ABP_CannedSpaghetti_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CannedSpaghetti_C*>(ABP_CannedSpaghetti_C::StaticClass()->DefaultObject);

	return Default;
}

}


