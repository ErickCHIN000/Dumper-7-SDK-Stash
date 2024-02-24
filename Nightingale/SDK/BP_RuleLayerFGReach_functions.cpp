#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RuleLayerFGReach.BP_RuleLayerFGReach_C
// (None)

class UClass* UBP_RuleLayerFGReach_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RuleLayerFGReach_C");

	return Clss;
}


// BP_RuleLayerFGReach_C BP_RuleLayerFGReach.Default__BP_RuleLayerFGReach_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RuleLayerFGReach_C* UBP_RuleLayerFGReach_C::GetDefaultObj()
{
	static class UBP_RuleLayerFGReach_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RuleLayerFGReach_C*>(UBP_RuleLayerFGReach_C::StaticClass()->DefaultObject);

	return Default;
}

}


