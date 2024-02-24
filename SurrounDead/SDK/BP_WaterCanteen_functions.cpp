#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WaterCanteen.BP_WaterCanteen_C
// (Actor)

class UClass* ABP_WaterCanteen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WaterCanteen_C");

	return Clss;
}


// BP_WaterCanteen_C BP_WaterCanteen.Default__BP_WaterCanteen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WaterCanteen_C* ABP_WaterCanteen_C::GetDefaultObj()
{
	static class ABP_WaterCanteen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WaterCanteen_C*>(ABP_WaterCanteen_C::StaticClass()->DefaultObject);

	return Default;
}

}


