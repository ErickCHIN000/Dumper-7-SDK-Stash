#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DemonPoolSemenHarvestNode.DemonPoolSemenHarvestNode_C
// (Actor)

class UClass* ADemonPoolSemenHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DemonPoolSemenHarvestNode_C");

	return Clss;
}


// DemonPoolSemenHarvestNode_C DemonPoolSemenHarvestNode.Default__DemonPoolSemenHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADemonPoolSemenHarvestNode_C* ADemonPoolSemenHarvestNode_C::GetDefaultObj()
{
	static class ADemonPoolSemenHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADemonPoolSemenHarvestNode_C*>(ADemonPoolSemenHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


