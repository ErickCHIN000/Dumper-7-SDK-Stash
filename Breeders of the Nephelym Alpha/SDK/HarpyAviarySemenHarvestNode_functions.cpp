#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HarpyAviarySemenHarvestNode.HarpyAviarySemenHarvestNode_C
// (Actor)

class UClass* AHarpyAviarySemenHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HarpyAviarySemenHarvestNode_C");

	return Clss;
}


// HarpyAviarySemenHarvestNode_C HarpyAviarySemenHarvestNode.Default__HarpyAviarySemenHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHarpyAviarySemenHarvestNode_C* AHarpyAviarySemenHarvestNode_C::GetDefaultObj()
{
	static class AHarpyAviarySemenHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHarpyAviarySemenHarvestNode_C*>(AHarpyAviarySemenHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


