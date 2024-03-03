#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_QuestSection-Main.WB_QuestSection-Main_C
// (None)

class UClass* UWB_QuestSectionMinusMain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_QuestSection-Main_C");

	return Clss;
}


// WB_QuestSection-Main_C WB_QuestSection-Main.Default__WB_QuestSection-Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_QuestSectionMinusMain_C* UWB_QuestSectionMinusMain_C::GetDefaultObj()
{
	static class UWB_QuestSectionMinusMain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_QuestSectionMinusMain_C*>(UWB_QuestSectionMinusMain_C::StaticClass()->DefaultObject);

	return Default;
}

}


