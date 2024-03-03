#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_QuestSection-Completed.WB_QuestSection-Completed_C
// (None)

class UClass* UWB_QuestSectionMinusCompleted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_QuestSection-Completed_C");

	return Clss;
}


// WB_QuestSection-Completed_C WB_QuestSection-Completed.Default__WB_QuestSection-Completed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_QuestSectionMinusCompleted_C* UWB_QuestSectionMinusCompleted_C::GetDefaultObj()
{
	static class UWB_QuestSectionMinusCompleted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_QuestSectionMinusCompleted_C*>(UWB_QuestSectionMinusCompleted_C::StaticClass()->DefaultObject);

	return Default;
}

}


