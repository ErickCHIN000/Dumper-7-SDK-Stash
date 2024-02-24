#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestTrackerComponent.BP_QuestTrackerComponent_C
// (None)

class UClass* UBP_QuestTrackerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestTrackerComponent_C");

	return Clss;
}


// BP_QuestTrackerComponent_C BP_QuestTrackerComponent.Default__BP_QuestTrackerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestTrackerComponent_C* UBP_QuestTrackerComponent_C::GetDefaultObj()
{
	static class UBP_QuestTrackerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestTrackerComponent_C*>(UBP_QuestTrackerComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


