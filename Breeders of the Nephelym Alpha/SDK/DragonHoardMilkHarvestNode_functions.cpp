#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragonHoardMilkHarvestNode.DragonHoardMilkHarvestNode_C
// (Actor)

class UClass* ADragonHoardMilkHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonHoardMilkHarvestNode_C");

	return Clss;
}


// DragonHoardMilkHarvestNode_C DragonHoardMilkHarvestNode.Default__DragonHoardMilkHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADragonHoardMilkHarvestNode_C* ADragonHoardMilkHarvestNode_C::GetDefaultObj()
{
	static class ADragonHoardMilkHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADragonHoardMilkHarvestNode_C*>(ADragonHoardMilkHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


