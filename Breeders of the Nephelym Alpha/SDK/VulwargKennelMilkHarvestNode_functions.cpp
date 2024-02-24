#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VulwargKennelMilkHarvestNode.VulwargKennelMilkHarvestNode_C
// (Actor)

class UClass* AVulwargKennelMilkHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VulwargKennelMilkHarvestNode_C");

	return Clss;
}


// VulwargKennelMilkHarvestNode_C VulwargKennelMilkHarvestNode.Default__VulwargKennelMilkHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVulwargKennelMilkHarvestNode_C* AVulwargKennelMilkHarvestNode_C::GetDefaultObj()
{
	static class AVulwargKennelMilkHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVulwargKennelMilkHarvestNode_C*>(AVulwargKennelMilkHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


