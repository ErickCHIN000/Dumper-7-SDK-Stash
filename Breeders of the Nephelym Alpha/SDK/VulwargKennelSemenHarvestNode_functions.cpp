#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VulwargKennelSemenHarvestNode.VulwargKennelSemenHarvestNode_C
// (Actor)

class UClass* AVulwargKennelSemenHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VulwargKennelSemenHarvestNode_C");

	return Clss;
}


// VulwargKennelSemenHarvestNode_C VulwargKennelSemenHarvestNode.Default__VulwargKennelSemenHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVulwargKennelSemenHarvestNode_C* AVulwargKennelSemenHarvestNode_C::GetDefaultObj()
{
	static class AVulwargKennelSemenHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVulwargKennelSemenHarvestNode_C*>(AVulwargKennelSemenHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


