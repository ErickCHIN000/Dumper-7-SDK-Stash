#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_Guidebook_QuestRewardEntry.WBP_sw_Guidebook_QuestRewardEntry_C
// (None)

class UClass* UWBP_sw_Guidebook_QuestRewardEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_Guidebook_QuestRewardEntry_C");

	return Clss;
}


// WBP_sw_Guidebook_QuestRewardEntry_C WBP_sw_Guidebook_QuestRewardEntry.Default__WBP_sw_Guidebook_QuestRewardEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_Guidebook_QuestRewardEntry_C* UWBP_sw_Guidebook_QuestRewardEntry_C::GetDefaultObj()
{
	static class UWBP_sw_Guidebook_QuestRewardEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_Guidebook_QuestRewardEntry_C*>(UWBP_sw_Guidebook_QuestRewardEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_Guidebook_QuestRewardEntry.WBP_sw_Guidebook_QuestRewardEntry_C.RefreshRewardData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_sw_Guidebook_QuestRewardEntry_C::RefreshRewardData(bool CallFunc_IsValidSoftObjectReference_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Guidebook_QuestRewardEntry_C", "RefreshRewardData");

	Params::UWBP_sw_Guidebook_QuestRewardEntry_C_RefreshRewardData_Params Parms{};

	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_Guidebook_QuestRewardEntry.WBP_sw_Guidebook_QuestRewardEntry_C.GetTooltipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_sw_Guidebook_QuestRewardEntry_C::GetTooltipWidget_0(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Guidebook_QuestRewardEntry_C", "GetTooltipWidget_0");

	Params::UWBP_sw_Guidebook_QuestRewardEntry_C_GetTooltipWidget_0_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_sw_Guidebook_QuestRewardEntry.WBP_sw_Guidebook_QuestRewardEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_Guidebook_QuestRewardEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Guidebook_QuestRewardEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_Guidebook_QuestRewardEntry.WBP_sw_Guidebook_QuestRewardEntry_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_sw_Guidebook_QuestRewardEntry_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Guidebook_QuestRewardEntry_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_Guidebook_QuestRewardEntry.WBP_sw_Guidebook_QuestRewardEntry_C.ExecuteUbergraph_WBP_sw_Guidebook_QuestRewardEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_Guidebook_QuestRewardEntry_C::ExecuteUbergraph_WBP_sw_Guidebook_QuestRewardEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Guidebook_QuestRewardEntry_C", "ExecuteUbergraph_WBP_sw_Guidebook_QuestRewardEntry");

	Params::UWBP_sw_Guidebook_QuestRewardEntry_C_ExecuteUbergraph_WBP_sw_Guidebook_QuestRewardEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


