#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ForestTutorialHunger.GE_ForestTutorialHunger_C
// (None)

class UClass* UGE_ForestTutorialHunger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ForestTutorialHunger_C");

	return Clss;
}


// GE_ForestTutorialHunger_C GE_ForestTutorialHunger.Default__GE_ForestTutorialHunger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ForestTutorialHunger_C* UGE_ForestTutorialHunger_C::GetDefaultObj()
{
	static class UGE_ForestTutorialHunger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ForestTutorialHunger_C*>(UGE_ForestTutorialHunger_C::StaticClass()->DefaultObject);

	return Default;
}

}


