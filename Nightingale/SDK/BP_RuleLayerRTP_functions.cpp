#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RuleLayerRTP.BP_RuleLayerRTP_C
// (None)

class UClass* UBP_RuleLayerRTP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RuleLayerRTP_C");

	return Clss;
}


// BP_RuleLayerRTP_C BP_RuleLayerRTP.Default__BP_RuleLayerRTP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RuleLayerRTP_C* UBP_RuleLayerRTP_C::GetDefaultObj()
{
	static class UBP_RuleLayerRTP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RuleLayerRTP_C*>(UBP_RuleLayerRTP_C::StaticClass()->DefaultObject);

	return Default;
}

}


