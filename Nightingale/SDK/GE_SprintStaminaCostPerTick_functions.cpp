#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SprintStaminaCostPerTick.GE_SprintStaminaCostPerTick_C
// (None)

class UClass* UGE_SprintStaminaCostPerTick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SprintStaminaCostPerTick_C");

	return Clss;
}


// GE_SprintStaminaCostPerTick_C GE_SprintStaminaCostPerTick.Default__GE_SprintStaminaCostPerTick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SprintStaminaCostPerTick_C* UGE_SprintStaminaCostPerTick_C::GetDefaultObj()
{
	static class UGE_SprintStaminaCostPerTick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SprintStaminaCostPerTick_C*>(UGE_SprintStaminaCostPerTick_C::StaticClass()->DefaultObject);

	return Default;
}

}


