#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EmptyWaterCanteen.BP_EmptyWaterCanteen_C
// (Actor)

class UClass* ABP_EmptyWaterCanteen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EmptyWaterCanteen_C");

	return Clss;
}


// BP_EmptyWaterCanteen_C BP_EmptyWaterCanteen.Default__BP_EmptyWaterCanteen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EmptyWaterCanteen_C* ABP_EmptyWaterCanteen_C::GetDefaultObj()
{
	static class ABP_EmptyWaterCanteen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EmptyWaterCanteen_C*>(ABP_EmptyWaterCanteen_C::StaticClass()->DefaultObject);

	return Default;
}

}


