#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoxenHouseMilkHarvestNode.FoxenHouseMilkHarvestNode_C
// (Actor)

class UClass* AFoxenHouseMilkHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoxenHouseMilkHarvestNode_C");

	return Clss;
}


// FoxenHouseMilkHarvestNode_C FoxenHouseMilkHarvestNode.Default__FoxenHouseMilkHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFoxenHouseMilkHarvestNode_C* AFoxenHouseMilkHarvestNode_C::GetDefaultObj()
{
	static class AFoxenHouseMilkHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFoxenHouseMilkHarvestNode_C*>(AFoxenHouseMilkHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


