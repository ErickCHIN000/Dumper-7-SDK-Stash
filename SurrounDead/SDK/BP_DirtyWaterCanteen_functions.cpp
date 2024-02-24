#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DirtyWaterCanteen.BP_DirtyWaterCanteen_C
// (Actor)

class UClass* ABP_DirtyWaterCanteen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DirtyWaterCanteen_C");

	return Clss;
}


// BP_DirtyWaterCanteen_C BP_DirtyWaterCanteen.Default__BP_DirtyWaterCanteen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DirtyWaterCanteen_C* ABP_DirtyWaterCanteen_C::GetDefaultObj()
{
	static class ABP_DirtyWaterCanteen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DirtyWaterCanteen_C*>(ABP_DirtyWaterCanteen_C::StaticClass()->DefaultObject);

	return Default;
}

}


