#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SeraphimLoftMilkHarvestNode.SeraphimLoftMilkHarvestNode_C
// (Actor)

class UClass* ASeraphimLoftMilkHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeraphimLoftMilkHarvestNode_C");

	return Clss;
}


// SeraphimLoftMilkHarvestNode_C SeraphimLoftMilkHarvestNode.Default__SeraphimLoftMilkHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASeraphimLoftMilkHarvestNode_C* ASeraphimLoftMilkHarvestNode_C::GetDefaultObj()
{
	static class ASeraphimLoftMilkHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASeraphimLoftMilkHarvestNode_C*>(ASeraphimLoftMilkHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


