#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RuleLayerOccShrine.BP_RuleLayerOccShrine_C
// (None)

class UClass* UBP_RuleLayerOccShrine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RuleLayerOccShrine_C");

	return Clss;
}


// BP_RuleLayerOccShrine_C BP_RuleLayerOccShrine.Default__BP_RuleLayerOccShrine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RuleLayerOccShrine_C* UBP_RuleLayerOccShrine_C::GetDefaultObj()
{
	static class UBP_RuleLayerOccShrine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RuleLayerOccShrine_C*>(UBP_RuleLayerOccShrine_C::StaticClass()->DefaultObject);

	return Default;
}

}


