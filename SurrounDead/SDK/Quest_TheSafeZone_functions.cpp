#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// QuestBlueprintGeneratedClass Quest_TheSafeZone.Quest_TheSafeZone_C
// (None)

class UClass* UQuest_TheSafeZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Quest_TheSafeZone_C");

	return Clss;
}


// Quest_TheSafeZone_C Quest_TheSafeZone.Default__Quest_TheSafeZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuest_TheSafeZone_C* UQuest_TheSafeZone_C::GetDefaultObj()
{
	static class UQuest_TheSafeZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuest_TheSafeZone_C*>(UQuest_TheSafeZone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Quest_TheSafeZone.Quest_TheSafeZone_C.ExecuteUbergraph_Quest_TheSafeZone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_TheSafeZone_C::ExecuteUbergraph_Quest_TheSafeZone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Quest_TheSafeZone_C", "ExecuteUbergraph_Quest_TheSafeZone");

	Params::UQuest_TheSafeZone_C_ExecuteUbergraph_Quest_TheSafeZone_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


