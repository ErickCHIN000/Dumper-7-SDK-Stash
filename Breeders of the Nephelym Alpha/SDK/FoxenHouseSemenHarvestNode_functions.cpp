#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoxenHouseSemenHarvestNode.FoxenHouseSemenHarvestNode_C
// (Actor)

class UClass* AFoxenHouseSemenHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoxenHouseSemenHarvestNode_C");

	return Clss;
}


// FoxenHouseSemenHarvestNode_C FoxenHouseSemenHarvestNode.Default__FoxenHouseSemenHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFoxenHouseSemenHarvestNode_C* AFoxenHouseSemenHarvestNode_C::GetDefaultObj()
{
	static class AFoxenHouseSemenHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFoxenHouseSemenHarvestNode_C*>(AFoxenHouseSemenHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


