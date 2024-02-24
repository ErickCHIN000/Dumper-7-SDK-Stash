#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterQuestObject.BP_MasterQuestObject_C
// (Actor)

class UClass* ABP_MasterQuestObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterQuestObject_C");

	return Clss;
}


// BP_MasterQuestObject_C BP_MasterQuestObject.Default__BP_MasterQuestObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterQuestObject_C* ABP_MasterQuestObject_C::GetDefaultObj()
{
	static class ABP_MasterQuestObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterQuestObject_C*>(ABP_MasterQuestObject_C::StaticClass()->DefaultObject);

	return Default;
}

}


