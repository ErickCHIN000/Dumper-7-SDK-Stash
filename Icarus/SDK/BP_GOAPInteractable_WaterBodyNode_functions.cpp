#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GOAPInteractable_WaterBodyNode.BP_GOAPInteractable_WaterBodyNode_C
// (Actor)

class UClass* ABP_GOAPInteractable_WaterBodyNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GOAPInteractable_WaterBodyNode_C");

	return Clss;
}


// BP_GOAPInteractable_WaterBodyNode_C BP_GOAPInteractable_WaterBodyNode.Default__BP_GOAPInteractable_WaterBodyNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GOAPInteractable_WaterBodyNode_C* ABP_GOAPInteractable_WaterBodyNode_C::GetDefaultObj()
{
	static class ABP_GOAPInteractable_WaterBodyNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GOAPInteractable_WaterBodyNode_C*>(ABP_GOAPInteractable_WaterBodyNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


