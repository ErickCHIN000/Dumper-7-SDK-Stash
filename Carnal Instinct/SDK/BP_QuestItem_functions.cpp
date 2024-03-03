#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestItem.BP_QuestItem_C
// (Actor)

class UClass* ABP_QuestItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestItem_C");

	return Clss;
}


// BP_QuestItem_C BP_QuestItem.Default__BP_QuestItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_QuestItem_C* ABP_QuestItem_C::GetDefaultObj()
{
	static class ABP_QuestItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_QuestItem_C*>(ABP_QuestItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


