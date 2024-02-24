#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuestArchiveBox_Full.QuestArchiveBox_Full_C
// (Actor)

class UClass* AQuestArchiveBox_Full_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestArchiveBox_Full_C");

	return Clss;
}


// QuestArchiveBox_Full_C QuestArchiveBox_Full.Default__QuestArchiveBox_Full_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuestArchiveBox_Full_C* AQuestArchiveBox_Full_C::GetDefaultObj()
{
	static class AQuestArchiveBox_Full_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuestArchiveBox_Full_C*>(AQuestArchiveBox_Full_C::StaticClass()->DefaultObject);

	return Default;
}

}


