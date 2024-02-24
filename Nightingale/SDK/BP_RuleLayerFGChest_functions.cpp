#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RuleLayerFGChest.BP_RuleLayerFGChest_C
// (None)

class UClass* UBP_RuleLayerFGChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RuleLayerFGChest_C");

	return Clss;
}


// BP_RuleLayerFGChest_C BP_RuleLayerFGChest.Default__BP_RuleLayerFGChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RuleLayerFGChest_C* UBP_RuleLayerFGChest_C::GetDefaultObj()
{
	static class UBP_RuleLayerFGChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RuleLayerFGChest_C*>(UBP_RuleLayerFGChest_C::StaticClass()->DefaultObject);

	return Default;
}

}


