#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_QuestSection-Secondary.WB_QuestSection-Secondary_C
// (None)

class UClass* UWB_QuestSectionMinusSecondary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_QuestSection-Secondary_C");

	return Clss;
}


// WB_QuestSection-Secondary_C WB_QuestSection-Secondary.Default__WB_QuestSection-Secondary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_QuestSectionMinusSecondary_C* UWB_QuestSectionMinusSecondary_C::GetDefaultObj()
{
	static class UWB_QuestSectionMinusSecondary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_QuestSectionMinusSecondary_C*>(UWB_QuestSectionMinusSecondary_C::StaticClass()->DefaultObject);

	return Default;
}

}


