#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HarpyAviaryMilkHarvestNode.HarpyAviaryMilkHarvestNode_C
// (Actor)

class UClass* AHarpyAviaryMilkHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HarpyAviaryMilkHarvestNode_C");

	return Clss;
}


// HarpyAviaryMilkHarvestNode_C HarpyAviaryMilkHarvestNode.Default__HarpyAviaryMilkHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHarpyAviaryMilkHarvestNode_C* AHarpyAviaryMilkHarvestNode_C::GetDefaultObj()
{
	static class AHarpyAviaryMilkHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHarpyAviaryMilkHarvestNode_C*>(AHarpyAviaryMilkHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


