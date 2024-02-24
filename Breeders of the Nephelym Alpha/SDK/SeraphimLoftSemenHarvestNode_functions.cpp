#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SeraphimLoftSemenHarvestNode.SeraphimLoftSemenHarvestNode_C
// (Actor)

class UClass* ASeraphimLoftSemenHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeraphimLoftSemenHarvestNode_C");

	return Clss;
}


// SeraphimLoftSemenHarvestNode_C SeraphimLoftSemenHarvestNode.Default__SeraphimLoftSemenHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASeraphimLoftSemenHarvestNode_C* ASeraphimLoftSemenHarvestNode_C::GetDefaultObj()
{
	static class ASeraphimLoftSemenHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASeraphimLoftSemenHarvestNode_C*>(ASeraphimLoftSemenHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


