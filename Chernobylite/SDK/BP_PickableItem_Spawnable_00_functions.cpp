#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickableItem_Spawnable_00.BP_PickableItem_Spawnable_00_C
// (Actor)

class UClass* ABP_PickableItem_Spawnable_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickableItem_Spawnable_00_C");

	return Clss;
}


// BP_PickableItem_Spawnable_00_C BP_PickableItem_Spawnable_00.Default__BP_PickableItem_Spawnable_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickableItem_Spawnable_00_C* ABP_PickableItem_Spawnable_00_C::GetDefaultObj()
{
	static class ABP_PickableItem_Spawnable_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickableItem_Spawnable_00_C*>(ABP_PickableItem_Spawnable_00_C::StaticClass()->DefaultObject);

	return Default;
}

}


