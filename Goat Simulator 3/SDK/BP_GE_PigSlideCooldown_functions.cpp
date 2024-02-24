#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GE_PigSlideCooldown.BP_GE_PigSlideCooldown_C
// (None)

class UClass* UBP_GE_PigSlideCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GE_PigSlideCooldown_C");

	return Clss;
}


// BP_GE_PigSlideCooldown_C BP_GE_PigSlideCooldown.Default__BP_GE_PigSlideCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GE_PigSlideCooldown_C* UBP_GE_PigSlideCooldown_C::GetDefaultObj()
{
	static class UBP_GE_PigSlideCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GE_PigSlideCooldown_C*>(UBP_GE_PigSlideCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


