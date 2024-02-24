#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BovaurShedMilkHarvestNode.BovaurShedMilkHarvestNode_C
// (Actor)

class UClass* ABovaurShedMilkHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BovaurShedMilkHarvestNode_C");

	return Clss;
}


// BovaurShedMilkHarvestNode_C BovaurShedMilkHarvestNode.Default__BovaurShedMilkHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABovaurShedMilkHarvestNode_C* ABovaurShedMilkHarvestNode_C::GetDefaultObj()
{
	static class ABovaurShedMilkHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABovaurShedMilkHarvestNode_C*>(ABovaurShedMilkHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


