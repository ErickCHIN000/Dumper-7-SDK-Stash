#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TEMP_Structure_EncounterWaveTimer.WBP_TEMP_Structure_EncounterWaveTimer_C
// (None)

class UClass* UWBP_TEMP_Structure_EncounterWaveTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TEMP_Structure_EncounterWaveTimer_C");

	return Clss;
}


// WBP_TEMP_Structure_EncounterWaveTimer_C WBP_TEMP_Structure_EncounterWaveTimer.Default__WBP_TEMP_Structure_EncounterWaveTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TEMP_Structure_EncounterWaveTimer_C* UWBP_TEMP_Structure_EncounterWaveTimer_C::GetDefaultObj()
{
	static class UWBP_TEMP_Structure_EncounterWaveTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TEMP_Structure_EncounterWaveTimer_C*>(UWBP_TEMP_Structure_EncounterWaveTimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TEMP_Structure_EncounterWaveTimer.WBP_TEMP_Structure_EncounterWaveTimer_C.ShouldWidgetBeShowing
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               bShouldShow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TEMP_Structure_EncounterWaveTimer_C::ShouldWidgetBeShowing(bool* bShouldShow, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TEMP_Structure_EncounterWaveTimer_C", "ShouldWidgetBeShowing");

	Params::UWBP_TEMP_Structure_EncounterWaveTimer_C_ShouldWidgetBeShowing_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldShow != nullptr)
		*bShouldShow = Parms.bShouldShow;

}


// Function WBP_TEMP_Structure_EncounterWaveTimer.WBP_TEMP_Structure_EncounterWaveTimer_C.RefreshWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NameColor_Complete                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                NameColor_NotComplete                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldWidgetBeShowing_bShouldShow                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TEMP_Structure_EncounterWaveTimer_C::RefreshWidget(const struct FLinearColor& NameColor_Complete, const struct FLinearColor& NameColor_NotComplete, bool CallFunc_ShouldWidgetBeShowing_bShouldShow, double CallFunc_SafeDivide_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TEMP_Structure_EncounterWaveTimer_C", "RefreshWidget");

	Params::UWBP_TEMP_Structure_EncounterWaveTimer_C_RefreshWidget_Params Parms{};

	Parms.NameColor_Complete = NameColor_Complete;
	Parms.NameColor_NotComplete = NameColor_NotComplete;
	Parms.CallFunc_ShouldWidgetBeShowing_bShouldShow = CallFunc_ShouldWidgetBeShowing_bShouldShow;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TEMP_Structure_EncounterWaveTimer.WBP_TEMP_Structure_EncounterWaveTimer_C.TimerUpdate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URealmTimerComponent*        RealmTimerComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              GameState                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             CurrentServerTime                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRealTimeElapsedSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URealmTimerComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TEMP_Structure_EncounterWaveTimer_C::TimerUpdate(class URealmTimerComponent* RealmTimerComponent, class AGameStateBase* GameState, double CurrentServerTime, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TEMP_Structure_EncounterWaveTimer_C", "TimerUpdate");

	Params::UWBP_TEMP_Structure_EncounterWaveTimer_C_TimerUpdate_Params Parms{};

	Parms.RealmTimerComponent = RealmTimerComponent;
	Parms.GameState = GameState;
	Parms.CurrentServerTime = CurrentServerTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetRealTimeElapsedSeconds_ReturnValue = CallFunc_GetRealTimeElapsedSeconds_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TEMP_Structure_EncounterWaveTimer.WBP_TEMP_Structure_EncounterWaveTimer_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Crafting_CraftInProgress CraftInProgress                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// double                             CallFunc_GetDeactivatedTime_DeactivatedTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWaveLullTimer_WaveLullTime                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TEMP_Structure_EncounterWaveTimer_C::Initialize(const struct FS_Crafting_CraftInProgress& CraftInProgress, double CallFunc_GetDeactivatedTime_DeactivatedTime, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetWaveLullTimer_WaveLullTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TEMP_Structure_EncounterWaveTimer_C", "Initialize");

	Params::UWBP_TEMP_Structure_EncounterWaveTimer_C_Initialize_Params Parms{};

	Parms.CraftInProgress = CraftInProgress;
	Parms.CallFunc_GetDeactivatedTime_DeactivatedTime = CallFunc_GetDeactivatedTime_DeactivatedTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWaveLullTimer_WaveLullTime = CallFunc_GetWaveLullTimer_WaveLullTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TEMP_Structure_EncounterWaveTimer.WBP_TEMP_Structure_EncounterWaveTimer_C.UpdateStructure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     NewStructure                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_Defense_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TEMP_Structure_EncounterWaveTimer_C::UpdateStructure(class UObject* NewStructure, bool CallFunc_IsValid_ReturnValue, class ABP_Structure_EncounterTrigger_Defense_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TEMP_Structure_EncounterWaveTimer_C", "UpdateStructure");

	Params::UWBP_TEMP_Structure_EncounterWaveTimer_C_UpdateStructure_Params Parms{};

	Parms.NewStructure = NewStructure;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TEMP_Structure_EncounterWaveTimer.WBP_TEMP_Structure_EncounterWaveTimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TEMP_Structure_EncounterWaveTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TEMP_Structure_EncounterWaveTimer_C", "Tick");

	Params::UWBP_TEMP_Structure_EncounterWaveTimer_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TEMP_Structure_EncounterWaveTimer.WBP_TEMP_Structure_EncounterWaveTimer_C.ExecuteUbergraph_WBP_TEMP_Structure_EncounterWaveTimer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldWidgetBeShowing_bShouldShow                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TEMP_Structure_EncounterWaveTimer_C::ExecuteUbergraph_WBP_TEMP_Structure_EncounterWaveTimer(int32 EntryPoint, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_ShouldWidgetBeShowing_bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TEMP_Structure_EncounterWaveTimer_C", "ExecuteUbergraph_WBP_TEMP_Structure_EncounterWaveTimer");

	Params::UWBP_TEMP_Structure_EncounterWaveTimer_C_ExecuteUbergraph_WBP_TEMP_Structure_EncounterWaveTimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_ShouldWidgetBeShowing_bShouldShow = CallFunc_ShouldWidgetBeShowing_bShouldShow;

	UObject::ProcessEvent(Func, &Parms);

}

}


