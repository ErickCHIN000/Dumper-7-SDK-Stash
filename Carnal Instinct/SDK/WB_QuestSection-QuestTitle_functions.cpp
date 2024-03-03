#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_QuestSection-QuestTitle.WB_QuestSection-QuestTitle_C
// (None)

class UClass* UWB_QuestSectionMinusQuestTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_QuestSection-QuestTitle_C");

	return Clss;
}


// WB_QuestSection-QuestTitle_C WB_QuestSection-QuestTitle.Default__WB_QuestSection-QuestTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_QuestSectionMinusQuestTitle_C* UWB_QuestSectionMinusQuestTitle_C::GetDefaultObj()
{
	static class UWB_QuestSectionMinusQuestTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_QuestSectionMinusQuestTitle_C*>(UWB_QuestSectionMinusQuestTitle_C::StaticClass()->DefaultObject);

	return Default;
}

}


