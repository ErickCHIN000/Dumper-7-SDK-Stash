#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragonHoardSemenHarvestNode.DragonHoardSemenHarvestNode_C
// (Actor)

class UClass* ADragonHoardSemenHarvestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonHoardSemenHarvestNode_C");

	return Clss;
}


// DragonHoardSemenHarvestNode_C DragonHoardSemenHarvestNode.Default__DragonHoardSemenHarvestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADragonHoardSemenHarvestNode_C* ADragonHoardSemenHarvestNode_C::GetDefaultObj()
{
	static class ADragonHoardSemenHarvestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADragonHoardSemenHarvestNode_C*>(ADragonHoardSemenHarvestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


