#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BovaurShedSemenHarvestNode.BovaurShedSemenHarvestNode_C
// (Actor)

class UClass* ABovaurShedSemenHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BovaurShedSemenHarvestNode_C");

	return Clss;
}


// BovaurShedSemenHarvestNode_C BovaurShedSemenHarvestNode.Default__BovaurShedSemenHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABovaurShedSemenHarvestNode_C* ABovaurShedSemenHarvestNode_C::GetDefaultObj()
{
	static class ABovaurShedSemenHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABovaurShedSemenHarvestNode_C*>(ABovaurShedSemenHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


