#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RuleLayerTower.BP_RuleLayerTower_C
// (None)

class UClass* UBP_RuleLayerTower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RuleLayerTower_C");

	return Clss;
}


// BP_RuleLayerTower_C BP_RuleLayerTower.Default__BP_RuleLayerTower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RuleLayerTower_C* UBP_RuleLayerTower_C::GetDefaultObj()
{
	static class UBP_RuleLayerTower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RuleLayerTower_C*>(UBP_RuleLayerTower_C::StaticClass()->DefaultObject);

	return Default;
}

}


