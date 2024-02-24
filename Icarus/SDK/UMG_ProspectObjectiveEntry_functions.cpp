#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ProspectObjectiveEntry.UMG_ProspectObjectiveEntry_C
// (None)

class UClass* UUMG_ProspectObjectiveEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ProspectObjectiveEntry_C");

	return Clss;
}


// UMG_ProspectObjectiveEntry_C UMG_ProspectObjectiveEntry.Default__UMG_ProspectObjectiveEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ProspectObjectiveEntry_C* UUMG_ProspectObjectiveEntry_C::GetDefaultObj()
{
	static class UUMG_ProspectObjectiveEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ProspectObjectiveEntry_C*>(UUMG_ProspectObjectiveEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ProspectObjectiveEntry.UMG_ProspectObjectiveEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProspectObjectiveEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectObjectiveEntry_C", "PreConstruct");

	Params::UUMG_ProspectObjectiveEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectObjectiveEntry.UMG_ProspectObjectiveEntry_C.ExecuteUbergraph_UMG_ProspectObjectiveEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuestSetup                 CallFunc_GetQuestsStruct_Quests                                  (None)
// enum class EValid                  CallFunc_GetQuestsStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_ProspectObjectiveEntry_C::ExecuteUbergraph_UMG_ProspectObjectiveEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FQuestSetup& CallFunc_GetQuestsStruct_Quests, enum class EValid CallFunc_GetQuestsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectObjectiveEntry_C", "ExecuteUbergraph_UMG_ProspectObjectiveEntry");

	Params::UUMG_ProspectObjectiveEntry_C_ExecuteUbergraph_UMG_ProspectObjectiveEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetQuestsStruct_Quests = CallFunc_GetQuestsStruct_Quests;
	Parms.CallFunc_GetQuestsStruct_Paths = CallFunc_GetQuestsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


