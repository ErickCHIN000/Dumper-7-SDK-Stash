#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SetQuestScore.GE_SetQuestScore_C
// (None)

class UClass* UGE_SetQuestScore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SetQuestScore_C");

	return Clss;
}


// GE_SetQuestScore_C GE_SetQuestScore.Default__GE_SetQuestScore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SetQuestScore_C* UGE_SetQuestScore_C::GetDefaultObj()
{
	static class UGE_SetQuestScore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SetQuestScore_C*>(UGE_SetQuestScore_C::StaticClass()->DefaultObject);

	return Default;
}

}


