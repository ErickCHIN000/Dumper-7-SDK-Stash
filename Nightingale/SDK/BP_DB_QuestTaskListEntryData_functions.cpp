#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DB_QuestTaskListEntryData.BP_DB_QuestTaskListEntryData_C
// (None)

class UClass* UBP_DB_QuestTaskListEntryData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DB_QuestTaskListEntryData_C");

	return Clss;
}


// BP_DB_QuestTaskListEntryData_C BP_DB_QuestTaskListEntryData.Default__BP_DB_QuestTaskListEntryData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DB_QuestTaskListEntryData_C* UBP_DB_QuestTaskListEntryData_C::GetDefaultObj()
{
	static class UBP_DB_QuestTaskListEntryData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DB_QuestTaskListEntryData_C*>(UBP_DB_QuestTaskListEntryData_C::StaticClass()->DefaultObject);

	return Default;
}

}


