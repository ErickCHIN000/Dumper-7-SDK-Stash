#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuestZoneWidget.QuestZoneWidget_C
// (None)

class UClass* UQuestZoneWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestZoneWidget_C");

	return Clss;
}


// QuestZoneWidget_C QuestZoneWidget.Default__QuestZoneWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuestZoneWidget_C* UQuestZoneWidget_C::GetDefaultObj()
{
	static class UQuestZoneWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestZoneWidget_C*>(UQuestZoneWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


