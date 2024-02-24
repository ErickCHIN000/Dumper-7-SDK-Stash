#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RuleLayerCodex.BP_RuleLayerCodex_C
// (None)

class UClass* UBP_RuleLayerCodex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RuleLayerCodex_C");

	return Clss;
}


// BP_RuleLayerCodex_C BP_RuleLayerCodex.Default__BP_RuleLayerCodex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RuleLayerCodex_C* UBP_RuleLayerCodex_C::GetDefaultObj()
{
	static class UBP_RuleLayerCodex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RuleLayerCodex_C*>(UBP_RuleLayerCodex_C::StaticClass()->DefaultObject);

	return Default;
}

}


