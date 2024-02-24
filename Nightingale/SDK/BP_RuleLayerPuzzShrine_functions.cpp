#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RuleLayerPuzzShrine.BP_RuleLayerPuzzShrine_C
// (None)

class UClass* UBP_RuleLayerPuzzShrine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RuleLayerPuzzShrine_C");

	return Clss;
}


// BP_RuleLayerPuzzShrine_C BP_RuleLayerPuzzShrine.Default__BP_RuleLayerPuzzShrine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RuleLayerPuzzShrine_C* UBP_RuleLayerPuzzShrine_C::GetDefaultObj()
{
	static class UBP_RuleLayerPuzzShrine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RuleLayerPuzzShrine_C*>(UBP_RuleLayerPuzzShrine_C::StaticClass()->DefaultObject);

	return Default;
}

}


