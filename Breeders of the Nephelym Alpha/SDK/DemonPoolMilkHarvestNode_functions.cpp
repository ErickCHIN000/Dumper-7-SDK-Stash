#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DemonPoolMilkHarvestNode.DemonPoolMilkHarvestNode_C
// (Actor)

class UClass* ADemonPoolMilkHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DemonPoolMilkHarvestNode_C");

	return Clss;
}


// DemonPoolMilkHarvestNode_C DemonPoolMilkHarvestNode.Default__DemonPoolMilkHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADemonPoolMilkHarvestNode_C* ADemonPoolMilkHarvestNode_C::GetDefaultObj()
{
	static class ADemonPoolMilkHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADemonPoolMilkHarvestNode_C*>(ADemonPoolMilkHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


