#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TitanCaveSemenHarvestNode.TitanCaveSemenHarvestNode_C
// (Actor)

class UClass* ATitanCaveSemenHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitanCaveSemenHarvestNode_C");

	return Clss;
}


// TitanCaveSemenHarvestNode_C TitanCaveSemenHarvestNode.Default__TitanCaveSemenHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATitanCaveSemenHarvestNode_C* ATitanCaveSemenHarvestNode_C::GetDefaultObj()
{
	static class ATitanCaveSemenHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATitanCaveSemenHarvestNode_C*>(ATitanCaveSemenHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


