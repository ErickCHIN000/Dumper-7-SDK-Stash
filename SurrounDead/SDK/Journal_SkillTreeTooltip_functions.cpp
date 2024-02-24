#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Journal_SkillTreeTooltip.Journal_SkillTreeTooltip_C
// (None)

class UClass* UJournal_SkillTreeTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Journal_SkillTreeTooltip_C");

	return Clss;
}


// Journal_SkillTreeTooltip_C Journal_SkillTreeTooltip.Default__Journal_SkillTreeTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJournal_SkillTreeTooltip_C* UJournal_SkillTreeTooltip_C::GetDefaultObj()
{
	static class UJournal_SkillTreeTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJournal_SkillTreeTooltip_C*>(UJournal_SkillTreeTooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Journal_SkillTreeTooltip.Journal_SkillTreeTooltip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournal_SkillTreeTooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillTreeTooltip_C", "PreConstruct");

	Params::UJournal_SkillTreeTooltip_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Journal_SkillTreeTooltip.Journal_SkillTreeTooltip_C.ExecuteUbergraph_Journal_SkillTreeTooltip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UJournal_SkillTreeTooltip_C::ExecuteUbergraph_Journal_SkillTreeTooltip(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillTreeTooltip_C", "ExecuteUbergraph_Journal_SkillTreeTooltip");

	Params::UJournal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


