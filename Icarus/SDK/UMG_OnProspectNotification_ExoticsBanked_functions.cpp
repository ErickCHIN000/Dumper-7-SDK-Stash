#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_OnProspectNotification_ExoticsBanked.UMG_OnProspectNotification_ExoticsBanked_C
// (None)

class UClass* UUMG_OnProspectNotification_ExoticsBanked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_OnProspectNotification_ExoticsBanked_C");

	return Clss;
}


// UMG_OnProspectNotification_ExoticsBanked_C UMG_OnProspectNotification_ExoticsBanked.Default__UMG_OnProspectNotification_ExoticsBanked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_OnProspectNotification_ExoticsBanked_C* UUMG_OnProspectNotification_ExoticsBanked_C::GetDefaultObj()
{
	static class UUMG_OnProspectNotification_ExoticsBanked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_OnProspectNotification_ExoticsBanked_C*>(UUMG_OnProspectNotification_ExoticsBanked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_OnProspectNotification_ExoticsBanked.UMG_OnProspectNotification_ExoticsBanked_C.SetExoticsCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetaCurrencyRowHandle      Currency                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UUMG_WorkshopCostLarge_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_OnProspectNotification_ExoticsBanked_C::SetExoticsCount(int32 Amount, const struct FMetaCurrencyRowHandle& Currency, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotification_ExoticsBanked_C", "SetExoticsCount");

	Params::UUMG_OnProspectNotification_ExoticsBanked_C_SetExoticsCount_Params Parms{};

	Parms.Amount = Amount;
	Parms.Currency = Currency;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OnProspectNotification_ExoticsBanked.UMG_OnProspectNotification_ExoticsBanked_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OnProspectNotification_ExoticsBanked_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotification_ExoticsBanked_C", "PreConstruct");

	Params::UUMG_OnProspectNotification_ExoticsBanked_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OnProspectNotification_ExoticsBanked.UMG_OnProspectNotification_ExoticsBanked_C.ExecuteUbergraph_UMG_OnProspectNotification_ExoticsBanked
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OnProspectNotification_ExoticsBanked_C::ExecuteUbergraph_UMG_OnProspectNotification_ExoticsBanked(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotification_ExoticsBanked_C", "ExecuteUbergraph_UMG_OnProspectNotification_ExoticsBanked");

	Params::UUMG_OnProspectNotification_ExoticsBanked_C_ExecuteUbergraph_UMG_OnProspectNotification_ExoticsBanked_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


