#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildableItem_Tent.BP_BuildableItem_Tent_C
// (Actor)

class UClass* ABP_BuildableItem_Tent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildableItem_Tent_C");

	return Clss;
}


// BP_BuildableItem_Tent_C BP_BuildableItem_Tent.Default__BP_BuildableItem_Tent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildableItem_Tent_C* ABP_BuildableItem_Tent_C::GetDefaultObj()
{
	static class ABP_BuildableItem_Tent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildableItem_Tent_C*>(ABP_BuildableItem_Tent_C::StaticClass()->DefaultObject);

	return Default;
}

}


