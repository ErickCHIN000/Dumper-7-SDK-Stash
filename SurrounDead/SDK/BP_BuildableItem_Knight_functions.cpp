#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildableItem_Knight.BP_BuildableItem_Knight_C
// (Actor)

class UClass* ABP_BuildableItem_Knight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildableItem_Knight_C");

	return Clss;
}


// BP_BuildableItem_Knight_C BP_BuildableItem_Knight.Default__BP_BuildableItem_Knight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildableItem_Knight_C* ABP_BuildableItem_Knight_C::GetDefaultObj()
{
	static class ABP_BuildableItem_Knight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildableItem_Knight_C*>(ABP_BuildableItem_Knight_C::StaticClass()->DefaultObject);

	return Default;
}

}


