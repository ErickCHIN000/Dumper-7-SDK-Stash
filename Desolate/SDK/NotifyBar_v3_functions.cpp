#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NotifyBar_v3.NotifyBar_v3_C
// (None)

class UClass* UNotifyBar_v3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotifyBar_v3_C");

	return Clss;
}


// NotifyBar_v3_C NotifyBar_v3.Default__NotifyBar_v3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotifyBar_v3_C* UNotifyBar_v3_C::GetDefaultObj()
{
	static class UNotifyBar_v3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotifyBar_v3_C*>(UNotifyBar_v3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NotifyBar_v3.NotifyBar_v3_C.HasActiveNotify
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotifyBar_v3_C::HasActiveNotify(bool* Result, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "HasActiveNotify");

	Params::UNotifyBar_v3_C_HasActiveNotify_Params Parms{};

	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function NotifyBar_v3.NotifyBar_v3_C.CreateNotify
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENotifyType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Caption                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ToolTip                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class USoundWave*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bNeedPressJ                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNotifyLine_v3_C*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNotifyLine_v3_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

class UNotifyLine_v3_C* UNotifyBar_v3_C::CreateNotify(enum class ENotifyType Type, class FText Caption, class FText ToolTip, class USoundWave* Sound, bool bNeedPressJ, class UNotifyLine_v3_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "CreateNotify");

	Params::UNotifyBar_v3_C_CreateNotify_Params Parms{};

	Parms.Type = Type;
	Parms.Caption = Caption;
	Parms.ToolTip = ToolTip;
	Parms.Sound = Sound;
	Parms.bNeedPressJ = bNeedPressJ;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NotifyBar_v3.NotifyBar_v3_C.RemoveNotifyWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNotifyLine_v3_C*            Notify                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotifyBar_v3_C::RemoveNotifyWidget(class UNotifyLine_v3_C* Notify, bool CallFunc_RemoveChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "RemoveNotifyWidget");

	Params::UNotifyBar_v3_C_RemoveNotifyWidget_Params Parms{};

	Parms.Notify = Notify;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotifyBar_v3.NotifyBar_v3_C.AddNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNotifyLine_v3_C*            Line                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Center                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyBar_v3_C::AddNotify(class UNotifyLine_v3_C* Line, int32 Center, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "AddNotify");

	Params::UNotifyBar_v3_C_AddNotify_Params Parms{};

	Parms.Line = Line;
	Parms.Center = Center;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnHasBleeding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyBar_v3_C::OnHasBleeding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnHasBleeding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyBar_v3.NotifyBar_v3_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyBar_v3_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "Tick");

	Params::UNotifyBar_v3_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnQuestComplete_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestView                  QuestView                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNotifyBar_v3_C::OnQuestComplete_Event_0(struct FQuestView& QuestView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnQuestComplete_Event_0");

	Params::UNotifyBar_v3_C_OnQuestComplete_Event_0_Params Parms{};

	Parms.QuestView = QuestView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnQuestUpdated_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestView                  QuestView                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNotifyBar_v3_C::OnQuestUpdated_Event_0(struct FQuestView& QuestView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnQuestUpdated_Event_0");

	Params::UNotifyBar_v3_C_OnQuestUpdated_Event_0_Params Parms{};

	Parms.QuestView = QuestView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotifyBar_v3.NotifyBar_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNotifyBar_v3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnLevelAdded_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyBar_v3_C::OnLevelAdded_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnLevelAdded_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnTaskComplete_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTaskView                   TaskView                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNotifyBar_v3_C::OnTaskComplete_Event_0(struct FTaskView& TaskView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnTaskComplete_Event_0");

	Params::UNotifyBar_v3_C_OnTaskComplete_Event_0_Params Parms{};

	Parms.TaskView = TaskView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnNoteLearned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyBar_v3_C::OnNoteLearned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnNoteLearned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnTraumaApplied_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyBar_v3_C::OnTraumaApplied_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnTraumaApplied_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnRecipeLearned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyBar_v3_C::OnRecipeLearned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnRecipeLearned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnHasPoisoning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyBar_v3_C::OnHasPoisoning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnHasPoisoning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnIncomingInvite_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyBar_v3_C::OnIncomingInvite_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnIncomingInvite_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnQuestAdded_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestView                  QuestView                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNotifyBar_v3_C::OnQuestAdded_Event_0(struct FQuestView& QuestView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnQuestAdded_Event_0");

	Params::UNotifyBar_v3_C_OnQuestAdded_Event_0_Params Parms{};

	Parms.QuestView = QuestView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotifyBar_v3.NotifyBar_v3_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyBar_v3_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyBar_v3.NotifyBar_v3_C.OnNotifyMapChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyBar_v3_C::OnNotifyMapChanged_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "OnNotifyMapChanged_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyBar_v3.NotifyBar_v3_C.ExecuteUbergraph_NotifyBar_v3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNotifyLine_v3_C*            CallFunc_CreateNotify_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class UNotifyLine_v3_C*            CallFunc_CreateNotify_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetLocalSize_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestView                  K2Node_CustomEvent_QuestView_2                                   (ConstParm)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestView                  K2Node_CustomEvent_QuestView_1                                   (ConstParm)
// class UNotifyLine_v3_C*            CallFunc_CreateNotify_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// struct FTaskView                   K2Node_CustomEvent_TaskView                                      (ConstParm)
// class UNotifyLine_v3_C*            CallFunc_CreateNotify_ReturnValue_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNotifyLine_v3_C*            CallFunc_CreateNotify_ReturnValue_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerController*         K2Node_DynamicCast_AsSHPlayer_Controller                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNotifyLine_v3_C*            CallFunc_CreateNotify_ReturnValue_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNotifyLine_v3_C*            CallFunc_CreateNotify_ReturnValue_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestView                  K2Node_CustomEvent_QuestView                                     (ConstParm)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHMapManager*               CallFunc_GetMapManager_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotifyBar_v3_C::ExecuteUbergraph_NotifyBar_v3(int32 EntryPoint, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FQuestView& K2Node_CustomEvent_QuestView_2, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FQuestView& K2Node_CustomEvent_QuestView_1, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FTaskView& K2Node_CustomEvent_TaskView, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_3, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_5, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_6, const struct FQuestView& K2Node_CustomEvent_QuestView, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class ASHMapManager* CallFunc_GetMapManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyBar_v3_C", "ExecuteUbergraph_NotifyBar_v3");

	Params::UNotifyBar_v3_C_ExecuteUbergraph_NotifyBar_v3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateNotify_ReturnValue = CallFunc_CreateNotify_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_CreateNotify_ReturnValue_1 = CallFunc_CreateNotify_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetLocalSize_ReturnValue = CallFunc_GetLocalSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_CustomEvent_QuestView_2 = K2Node_CustomEvent_QuestView_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_QuestView_1 = K2Node_CustomEvent_QuestView_1;
	Parms.CallFunc_CreateNotify_ReturnValue_2 = CallFunc_CreateNotify_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_TaskView = K2Node_CustomEvent_TaskView;
	Parms.CallFunc_CreateNotify_ReturnValue_3 = CallFunc_CreateNotify_ReturnValue_3;
	Parms.CallFunc_CreateNotify_ReturnValue_4 = CallFunc_CreateNotify_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_Controller = K2Node_DynamicCast_AsSHPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CreateNotify_ReturnValue_5 = CallFunc_CreateNotify_ReturnValue_5;
	Parms.CallFunc_CreateNotify_ReturnValue_6 = CallFunc_CreateNotify_ReturnValue_6;
	Parms.K2Node_CustomEvent_QuestView = K2Node_CustomEvent_QuestView;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetMapManager_ReturnValue = CallFunc_GetMapManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


