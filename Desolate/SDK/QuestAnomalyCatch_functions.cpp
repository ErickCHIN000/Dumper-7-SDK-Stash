#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuestAnomalyCatch.QuestAnomalyCatch_C
// (Actor)

class UClass* AQuestAnomalyCatch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestAnomalyCatch_C");

	return Clss;
}


// QuestAnomalyCatch_C QuestAnomalyCatch.Default__QuestAnomalyCatch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuestAnomalyCatch_C* AQuestAnomalyCatch_C::GetDefaultObj()
{
	static class AQuestAnomalyCatch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuestAnomalyCatch_C*>(AQuestAnomalyCatch_C::StaticClass()->DefaultObject);

	return Default;
}

}


