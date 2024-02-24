#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C
// (None)

class UClass* UWBP_GuideBook_QuestDetailPane_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GuideBook_QuestDetailPane_C");

	return Clss;
}


// WBP_GuideBook_QuestDetailPane_C WBP_GuideBook_QuestDetailPane.Default__WBP_GuideBook_QuestDetailPane_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GuideBook_QuestDetailPane_C* UWBP_GuideBook_QuestDetailPane_C::GetDefaultObj()
{
	static class UWBP_GuideBook_QuestDetailPane_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GuideBook_QuestDetailPane_C*>(UWBP_GuideBook_QuestDetailPane_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.SetInputActionPreviewOnTrackButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowInputAction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::SetInputActionPreviewOnTrackButtons(bool ShowInputAction, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "SetInputActionPreviewOnTrackButtons");

	Params::UWBP_GuideBook_QuestDetailPane_C_SetInputActionPreviewOnTrackButtons_Params Parms{};

	Parms.ShowInputAction = ShowInputAction;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.UntrackQuest
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBP_HUDGoalTrackingComponent_C*HudGoalComponent                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UQuestTrackerComponent*      QuestTracker                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FName                        Quest                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        QuestReference                                                   (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveQuestTrack_bWasRemoved                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDGoalTrackingComponent_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)

void UWBP_GuideBook_QuestDetailPane_C::UntrackQuest(class UBP_HUDGoalTrackingComponent_C* HudGoalComponent, class UQuestTrackerComponent* QuestTracker, class ANWXPlayerController* PlayerController, class FName Quest, const struct FQuestAssetReference& QuestReference, bool CallFunc_IsValid_ReturnValue, class UQuestTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue, bool CallFunc_RemoveQuestTrack_bWasRemoved, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "UntrackQuest");

	Params::UWBP_GuideBook_QuestDetailPane_C_UntrackQuest_Params Parms{};

	Parms.HudGoalComponent = HudGoalComponent;
	Parms.QuestTracker = QuestTracker;
	Parms.PlayerController = PlayerController;
	Parms.Quest = Quest;
	Parms.QuestReference = QuestReference;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue = CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue;
	Parms.CallFunc_RemoveQuestTrack_bWasRemoved = CallFunc_RemoveQuestTrack_bWasRemoved;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.TrackQuest
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBP_HUDGoalTrackingComponent_C*HudGoalComponent                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UQuestTrackerComponent*      QuestTracker                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FName                        Quest                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddQuestTrack_bWasAdded                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDGoalTrackingComponent_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)
// class FName                        CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::TrackQuest(class UBP_HUDGoalTrackingComponent_C* HudGoalComponent, class UQuestTrackerComponent* QuestTracker, class ANWXPlayerController* PlayerController, class FName Quest, bool CallFunc_IsValid_ReturnValue, class UQuestTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_AddQuestTrack_bWasAdded, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "TrackQuest");

	Params::UWBP_GuideBook_QuestDetailPane_C_TrackQuest_Params Parms{};

	Parms.HudGoalComponent = HudGoalComponent;
	Parms.QuestTracker = QuestTracker;
	Parms.PlayerController = PlayerController;
	Parms.Quest = Quest;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_AddQuestTrack_bWasAdded = CallFunc_AddQuestTrack_bWasAdded;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;
	Parms.CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue = CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.ToggleTracking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::ToggleTracking(class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "ToggleTracking");

	Params::UWBP_GuideBook_QuestDetailPane_C_ToggleTracking_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.Refresh
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_QuestDetailPane_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.UpdateGoalTrackingButtons
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_HUDGoalTrackingComponent_C*HudTrackingComponent                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UQuestTrackerComponent*      QuestTracker                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::UpdateGoalTrackingButtons(class UBP_HUDGoalTrackingComponent_C* HudTrackingComponent, class UQuestTrackerComponent* QuestTracker, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQuestTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "UpdateGoalTrackingButtons");

	Params::UWBP_GuideBook_QuestDetailPane_C_UpdateGoalTrackingButtons_Params Parms{};

	Parms.HudTrackingComponent = HudTrackingComponent;
	Parms.QuestTracker = QuestTracker;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue = CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.SetTaskProgressAndContractState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        NewTaskProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    NewContractState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::SetTaskProgressAndContractState(const struct FOngoingTaskProgress& NewTaskProgress, enum class E_Contract_StateType NewContractState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "SetTaskProgressAndContractState");

	Params::UWBP_GuideBook_QuestDetailPane_C_SetTaskProgressAndContractState_Params Parms{};

	Parms.NewTaskProgress = NewTaskProgress;
	Parms.NewContractState = NewContractState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.Show Rewards
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> Reward_Values_LOCAL                                              (Edit, BlueprintVisible)
// TArray<enum class E_UI_QuestRewardFormating>Reward_Keys_LOCAL                                                (Edit, BlueprintVisible)
// TArray<int32>                      Reward_Quantity_LOCAL                                            (Edit, BlueprintVisible)
// TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle>Reward_Table_LOCAL                                               (Edit, BlueprintVisible)
// TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle>K2Node_MakeVariable_MakeVariableOutput                           (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_Guidebook_QuestRewardEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData(None)
// bool                               CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestRewardPresentationDataCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::Show_Rewards(const TArray<struct FDataTableRowHandle>& Reward_Values_LOCAL, const TArray<enum class E_UI_QuestRewardFormating>& Reward_Keys_LOCAL, const TArray<int32>& Reward_Quantity_LOCAL, TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> Reward_Table_LOCAL, TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, class UWBP_sw_Guidebook_QuestRewardEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "Show Rewards");

	Params::UWBP_GuideBook_QuestDetailPane_C_Show_Rewards_Params Parms{};

	Parms.Reward_Values_LOCAL = Reward_Values_LOCAL;
	Parms.Reward_Keys_LOCAL = Reward_Keys_LOCAL;
	Parms.Reward_Quantity_LOCAL = Reward_Quantity_LOCAL;
	Parms.Reward_Table_LOCAL = Reward_Table_LOCAL;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.SetupTaskInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_sw_Guidebook_QuestTaskEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskPresentationData  CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData(None)
// bool                               CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::SetupTaskInfo(const struct FOngoingTaskProgress& TaskProgress, class UWBP_sw_Guidebook_QuestTaskEntry_C* CallFunc_Create_ReturnValue, const struct FQuestTaskPresentationData& CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData, bool CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "SetupTaskInfo");

	Params::UWBP_GuideBook_QuestDetailPane_C_SetupTaskInfo_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData = CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.SetupStaticData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BlankString                                                      (Edit, BlueprintVisible)
// struct FQuestTaskPresentationData  TaskPresentationData                                             (Edit, BlueprintVisible)
// struct FQuestPresentationData      QuestPresentationData                                            (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskPresentationData  CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData(None)
// bool                               CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData(None)
// bool                               CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::SetupStaticData(class FText BlankString, const struct FQuestTaskPresentationData& TaskPresentationData, const struct FQuestPresentationData& QuestPresentationData, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_NotEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FQuestTaskPresentationData& CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData, bool CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "SetupStaticData");

	Params::UWBP_GuideBook_QuestDetailPane_C_SetupStaticData_Params Parms{};

	Parms.BlankString = BlankString;
	Parms.TaskPresentationData = TaskPresentationData;
	Parms.QuestPresentationData = QuestPresentationData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData = CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.SetupQuestDetails
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)
// struct FQuest                      CallFunc_GetQuestDataFromQuestAssetReference_OutData             (ContainsInstancedReference)
// bool                               CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::SetupQuestDetails(const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "SetupQuestDetails");

	Params::UWBP_GuideBook_QuestDetailPane_C_SetupQuestDetails_Params Parms{};

	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_OutData = CallFunc_GetQuestDataFromQuestAssetReference_OutData;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue = CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_QuestDetailPane_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Track_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Track_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Track_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GuideBook_QuestDetailPane_C_BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Track_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Untrack_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Untrack_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Untrack_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GuideBook_QuestDetailPane_C_BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Untrack_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_QuestDetailPane_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.ExecuteUbergraph_WBP_GuideBook_QuestDetailPane
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::ExecuteUbergraph_WBP_GuideBook_QuestDetailPane(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "ExecuteUbergraph_WBP_GuideBook_QuestDetailPane");

	Params::UWBP_GuideBook_QuestDetailPane_C_ExecuteUbergraph_WBP_GuideBook_QuestDetailPane_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.QuestAccepted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        Accepted                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    Contract_State                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_QuestDetailPane_C::QuestAccepted__DelegateSignature(const struct FOngoingTaskProgress& Accepted, enum class E_Contract_StateType Contract_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_QuestDetailPane_C", "QuestAccepted__DelegateSignature");

	Params::UWBP_GuideBook_QuestDetailPane_C_QuestAccepted__DelegateSignature_Params Parms{};

	Parms.Accepted = Accepted;
	Parms.Contract_State = Contract_State;

	UObject::ProcessEvent(Func, &Parms);

}

}


