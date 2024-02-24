#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TitanCaveMilkHarvestNode.TitanCaveMilkHarvestNode_C
// (Actor)

class UClass* ATitanCaveMilkHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitanCaveMilkHarvestNode_C");

	return Clss;
}


// TitanCaveMilkHarvestNode_C TitanCaveMilkHarvestNode.Default__TitanCaveMilkHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATitanCaveMilkHarvestNode_C* ATitanCaveMilkHarvestNode_C::GetDefaultObj()
{
	static class ATitanCaveMilkHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATitanCaveMilkHarvestNode_C*>(ATitanCaveMilkHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


