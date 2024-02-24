#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DialogueJobBoard.WBP_DialogueJobBoard_C
// (None)

class UClass* UWBP_DialogueJobBoard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DialogueJobBoard_C");

	return Clss;
}


// WBP_DialogueJobBoard_C WBP_DialogueJobBoard.Default__WBP_DialogueJobBoard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DialogueJobBoard_C* UWBP_DialogueJobBoard_C::GetDefaultObj()
{
	static class UWBP_DialogueJobBoard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DialogueJobBoard_C*>(UWBP_DialogueJobBoard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.FocusDefaultWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_DialogueJobBoard_C::FocusDefaultWidget(const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "FocusDefaultWidget");

	Params::UWBP_DialogueJobBoard_C_FocusDefaultWidget_Params Parms{};

	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_FocusDefaultWidget_ReturnValue                          (None)

struct FEventReply UWBP_DialogueJobBoard_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_FocusDefaultWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "OnFocusReceived");

	Params::UWBP_DialogueJobBoard_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_FocusDefaultWidget_ReturnValue = CallFunc_FocusDefaultWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.SetGridPanelQuestEntriesToUnselected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                GridPanelWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              IndexToIgnore                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CurrentChildWidget                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_JobBoard_QuestGrid_Entry_C*K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::SetGridPanelQuestEntriesToUnselected(class UPanelWidget* GridPanelWidget, int32 IndexToIgnore, class UWidget* CurrentChildWidget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_JobBoard_QuestGrid_Entry_C* K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "SetGridPanelQuestEntriesToUnselected");

	Params::UWBP_DialogueJobBoard_C_SetGridPanelQuestEntriesToUnselected_Params Parms{};

	Parms.GridPanelWidget = GridPanelWidget;
	Parms.IndexToIgnore = IndexToIgnore;
	Parms.CurrentChildWidget = CurrentChildWidget;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry = K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.ResetQuestBoard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXWindowWidget*            Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::ResetQuestBoard(class UNWXWindowWidget* Window)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "ResetQuestBoard");

	Params::UWBP_DialogueJobBoard_C_ResetQuestBoard_Params Parms{};

	Parms.Window = Window;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.Cleanup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DialogueJobBoard_C::Cleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "Cleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.OnTaskHandedIn
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DialogueJobBoard_C::OnTaskHandedIn(struct FOngoingTaskProgress& TaskProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "OnTaskHandedIn");

	Params::UWBP_DialogueJobBoard_C_OnTaskHandedIn_Params Parms{};

	Parms.TaskProgress = TaskProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.OnQuestAccepted
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestAssetReference        QuestRowHandle                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DialogueJobBoard_C::OnQuestAccepted(struct FQuestAssetReference& QuestRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "OnQuestAccepted");

	Params::UWBP_DialogueJobBoard_C_OnQuestAccepted_Params Parms{};

	Parms.QuestRowHandle = QuestRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.SetupQuestContractBoard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQuestGiverSession*          CallFunc_GetQuestGiverSession_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::SetupQuestContractBoard(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AQuestGiverSession* CallFunc_GetQuestGiverSession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "SetupQuestContractBoard");

	Params::UWBP_DialogueJobBoard_C_SetupQuestContractBoard_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestGiverSession_ReturnValue = CallFunc_GetQuestGiverSession_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.QuestSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Grid_Index                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::QuestSelected(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, int32 Grid_Index, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "QuestSelected");

	Params::UWBP_DialogueJobBoard_C_QuestSelected_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;
	Parms.Grid_Index = Grid_Index;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.PopulateTasksToComplete
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_JobBoard_QuestGrid_Entry_C*JobBoardQuestEntry                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              TaskToCompleteIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         QuestRowHandle                                                   (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        TaskToComplete                                                   (Edit, BlueprintVisible)
// class UWBP_JobBoard_QuestGrid_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)
// struct FQuest                      CallFunc_GetQuestDataFromQuestAssetReference_OutData             (ContainsInstancedReference)
// bool                               CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOngoingTaskProgress>CallFunc_GetTasksToComplete_ReturnValue                          (ConstParm, ReferenceParm)
// struct FOngoingTaskProgress        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::PopulateTasksToComplete(class UWBP_JobBoard_QuestGrid_Entry_C* JobBoardQuestEntry, int32 TaskToCompleteIndex, const struct FDataTableRowHandle& QuestRowHandle, const struct FOngoingTaskProgress& TaskToComplete, class UWBP_JobBoard_QuestGrid_Entry_C* CallFunc_Create_ReturnValue, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FOngoingTaskProgress>& CallFunc_GetTasksToComplete_ReturnValue, const struct FOngoingTaskProgress& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "PopulateTasksToComplete");

	Params::UWBP_DialogueJobBoard_C_PopulateTasksToComplete_Params Parms{};

	Parms.JobBoardQuestEntry = JobBoardQuestEntry;
	Parms.TaskToCompleteIndex = TaskToCompleteIndex;
	Parms.QuestRowHandle = QuestRowHandle;
	Parms.TaskToComplete = TaskToComplete;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_OutData = CallFunc_GetQuestDataFromQuestAssetReference_OutData;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue = CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTasksToComplete_ReturnValue = CallFunc_GetTasksToComplete_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.PopulateQuestsToAccept
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GridWidth                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_JobBoard_QuestGrid_Entry_C*JobBoardQuestEntry                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              QuestIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_JobBoard_QuestGrid_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQuestAssetReference>CallFunc_GetAvailableQuests_ReturnValue                          (ConstParm, ReferenceParm)
// struct FQuestAssetReference        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_MakeStartingOngoingTaskProgressFromQuestReference_ReturnValue(None)
// struct FQuest                      CallFunc_GetQuestDataFromQuestAssetReference_OutData             (ContainsInstancedReference)
// bool                               CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::PopulateQuestsToAccept(int32 GridWidth, class UWBP_JobBoard_QuestGrid_Entry_C* JobBoardQuestEntry, int32 QuestIndex, enum class ESlateVisibility Temp_byte_Variable, class UWBP_JobBoard_QuestGrid_Entry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Percent_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FQuestAssetReference>& CallFunc_GetAvailableQuests_ReturnValue, const struct FQuestAssetReference& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FOngoingTaskProgress& CallFunc_MakeStartingOngoingTaskProgressFromQuestReference_ReturnValue, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "PopulateQuestsToAccept");

	Params::UWBP_DialogueJobBoard_C_PopulateQuestsToAccept_Params Parms{};

	Parms.GridWidth = GridWidth;
	Parms.JobBoardQuestEntry = JobBoardQuestEntry;
	Parms.QuestIndex = QuestIndex;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAvailableQuests_ReturnValue = CallFunc_GetAvailableQuests_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeStartingOngoingTaskProgressFromQuestReference_ReturnValue = CallFunc_MakeStartingOngoingTaskProgressFromQuestReference_ReturnValue;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_OutData = CallFunc_GetQuestDataFromQuestAssetReference_OutData;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue = CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.RefreshQuestsList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 CallFunc_FocusDefaultWidget_ReturnValue                          (None)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_QuestGiverComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::RefreshQuestsList(const struct FEventReply& CallFunc_FocusDefaultWidget_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UBP_QuestGiverComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "RefreshQuestsList");

	Params::UWBP_DialogueJobBoard_C_RefreshQuestsList_Params Parms{};

	Parms.CallFunc_FocusDefaultWidget_ReturnValue = CallFunc_FocusDefaultWidget_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallCreatureKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Creature_Information                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CreatureTagContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       KillerTagContainer                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DialogueJobBoard_C::CallCreatureKilled(const struct FDataTableRowHandle& Creature_Information, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "CallCreatureKilled");

	Params::UWBP_DialogueJobBoard_C_CallCreatureKilled_Params Parms{};

	Parms.Creature_Information = Creature_Information;
	Parms.CreatureTagContainer = CreatureTagContainer;
	Parms.KillerTagContainer = KillerTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallGiveTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Gameplay_Tag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::CallGiveTag(const struct FGameplayTag& Gameplay_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "CallGiveTag");

	Params::UWBP_DialogueJobBoard_C_CallGiveTag_Params Parms{};

	Parms.Gameplay_Tag = Gameplay_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallStructureBlueprintPlaced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StructureDataHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::CallStructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "CallStructureBlueprintPlaced");

	Params::UWBP_DialogueJobBoard_C_CallStructureBlueprintPlaced_Params Parms{};

	Parms.StructureDataHandle = StructureDataHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallResourceHarvested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::CallResourceHarvested(const struct FInventoryEntry& ItemEntry, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "CallResourceHarvested");

	Params::UWBP_DialogueJobBoard_C_CallResourceHarvested_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallStructureCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Owning_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Piece_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::CallStructureCompleted(class AActor* Owning_Actor, int32 Piece_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "CallStructureCompleted");

	Params::UWBP_DialogueJobBoard_C_CallStructureCompleted_Params Parms{};

	Parms.Owning_Actor = Owning_Actor;
	Parms.Piece_ID = Piece_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallItemDeposited_InWorldContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemRowHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ContainerTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::CallItemDeposited_InWorldContainer(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "CallItemDeposited_InWorldContainer");

	Params::UWBP_DialogueJobBoard_C_CallItemDeposited_InWorldContainer_Params Parms{};

	Parms.ItemRowHandle = ItemRowHandle;
	Parms.Quantity = Quantity;
	Parms.ContainerTag = ContainerTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallWeakpointHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       WeakpointType                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       CreatureTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UWBP_DialogueJobBoard_C::CallWeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "CallWeakpointHit");

	Params::UWBP_DialogueJobBoard_C_CallWeakpointHit_Params Parms{};

	Parms.WeakpointType = WeakpointType;
	Parms.CreatureTags = CreatureTags;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallOnSpellCast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTechniqueDataAsset>SpellCast                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::CallOnSpellCast(TSoftObjectPtr<class UTechniqueDataAsset> SpellCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "CallOnSpellCast");

	Params::UWBP_DialogueJobBoard_C_CallOnSpellCast_Params Parms{};

	Parms.SpellCast = SpellCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallOnGlyphRevealed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DialogueJobBoard_C::CallOnGlyphRevealed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "CallOnGlyphRevealed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallFishCaught
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFish                       CaughtFish                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_DialogueJobBoard_C::CallFishCaught(struct FFish& CaughtFish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "CallFishCaught");

	Params::UWBP_DialogueJobBoard_C_CallFishCaught_Params Parms{};

	Parms.CaughtFish = CaughtFish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallOnInteractedWithPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::CallOnInteractedWithPlayer(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "CallOnInteractedWithPlayer");

	Params::UWBP_DialogueJobBoard_C_CallOnInteractedWithPlayer_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DialogueJobBoard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DialogueJobBoard_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.ExecuteUbergraph_WBP_DialogueJobBoard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_Creature_Information                                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_CreatureTagContainer                                (None)
// struct FGameplayTagContainer       K2Node_Event_KillerTagContainer                                  (None)
// struct FGameplayTag                K2Node_Event_Gameplay_Tag                                        (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_StructureDataHandle                                 (NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_Event_ItemEntry                                           (None)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Owning_Actor                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Piece_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          K2Node_Event_ItemRowHandle                                       (HasGetValueTypeHash)
// int32                              K2Node_Event_Quantity                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_ContainerTag                                        (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_WeakpointType                                       (None)
// struct FGameplayTagContainer       K2Node_Event_CreatureTags                                        (None)
// struct FHitResult                  K2Node_Event_HitResult                                           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TSoftObjectPtr<class UTechniqueDataAsset>K2Node_Event_SpellCast                                           (HasGetValueTypeHash)
// struct FFish                       K2Node_Event_CaughtFish                                          (ConstParm, ContainsInstancedReference)
// class APawn*                       K2Node_Event_InteractingPawn                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByInterface_ReturnValue                    (ReferenceParm, ContainsInstancedReference)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestGiverInterface>K2Node_DynamicCast_AsQuest_Giver_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetQuestGiverTag_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AQuestGiverSession*          CallFunc_GetQuestGiverSession_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByInterface_ReturnValue_1                  (ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestGiverInterface>K2Node_DynamicCast_AsQuest_Giver_Interface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetQuestGiverTag_ReturnValue_1                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::ExecuteUbergraph_WBP_DialogueJobBoard(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, const struct FDataTableRowHandle& K2Node_Event_Creature_Information, const struct FGameplayTagContainer& K2Node_Event_CreatureTagContainer, const struct FGameplayTagContainer& K2Node_Event_KillerTagContainer, const struct FGameplayTag& K2Node_Event_Gameplay_Tag, const struct FDataTableRowHandle& K2Node_Event_StructureDataHandle, const struct FInventoryEntry& K2Node_Event_ItemEntry, int32 K2Node_Event_Amount, class AActor* K2Node_Event_Owning_Actor, int32 K2Node_Event_Piece_ID, const struct FItemDataReference& K2Node_Event_ItemRowHandle, int32 K2Node_Event_Quantity, const struct FGameplayTag& K2Node_Event_ContainerTag, const struct FGameplayTagContainer& K2Node_Event_WeakpointType, const struct FGameplayTagContainer& K2Node_Event_CreatureTags, const struct FHitResult& K2Node_Event_HitResult, TSoftObjectPtr<class UTechniqueDataAsset> K2Node_Event_SpellCast, const struct FFish& K2Node_Event_CaughtFish, class APawn* K2Node_Event_InteractingPawn, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, TArray<class UActorComponent*>& CallFunc_GetComponentsByInterface_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, TScriptInterface<class IQuestGiverInterface> K2Node_DynamicCast_AsQuest_Giver_Interface, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_GetQuestGiverTag_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, class AQuestGiverSession* CallFunc_GetQuestGiverSession_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue_1, TArray<class UActorComponent*>& CallFunc_GetComponentsByInterface_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UActorComponent* CallFunc_Array_Get_Item_1, TScriptInterface<class IQuestGiverInterface> K2Node_DynamicCast_AsQuest_Giver_Interface_1, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue_1, const struct FGameplayTag& CallFunc_GetQuestGiverTag_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "ExecuteUbergraph_WBP_DialogueJobBoard");

	Params::UWBP_DialogueJobBoard_C_ExecuteUbergraph_WBP_DialogueJobBoard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.K2Node_Event_Creature_Information = K2Node_Event_Creature_Information;
	Parms.K2Node_Event_CreatureTagContainer = K2Node_Event_CreatureTagContainer;
	Parms.K2Node_Event_KillerTagContainer = K2Node_Event_KillerTagContainer;
	Parms.K2Node_Event_Gameplay_Tag = K2Node_Event_Gameplay_Tag;
	Parms.K2Node_Event_StructureDataHandle = K2Node_Event_StructureDataHandle;
	Parms.K2Node_Event_ItemEntry = K2Node_Event_ItemEntry;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_Event_Owning_Actor = K2Node_Event_Owning_Actor;
	Parms.K2Node_Event_Piece_ID = K2Node_Event_Piece_ID;
	Parms.K2Node_Event_ItemRowHandle = K2Node_Event_ItemRowHandle;
	Parms.K2Node_Event_Quantity = K2Node_Event_Quantity;
	Parms.K2Node_Event_ContainerTag = K2Node_Event_ContainerTag;
	Parms.K2Node_Event_WeakpointType = K2Node_Event_WeakpointType;
	Parms.K2Node_Event_CreatureTags = K2Node_Event_CreatureTags;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_SpellCast = K2Node_Event_SpellCast;
	Parms.K2Node_Event_CaughtFish = K2Node_Event_CaughtFish;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_GetComponentsByInterface_ReturnValue = CallFunc_GetComponentsByInterface_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQuest_Giver_Interface = K2Node_DynamicCast_AsQuest_Giver_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetQuestGiverTag_ReturnValue = CallFunc_GetQuestGiverTag_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_1 = CallFunc_GetLocalPlayerController_LocalPlayerController_1;
	Parms.CallFunc_GetQuestGiverSession_ReturnValue = CallFunc_GetQuestGiverSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1 = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetQuestTracker_ReturnValue_1 = CallFunc_GetQuestTracker_ReturnValue_1;
	Parms.CallFunc_GetComponentsByInterface_ReturnValue_1 = CallFunc_GetComponentsByInterface_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsQuest_Giver_Interface_1 = K2Node_DynamicCast_AsQuest_Giver_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetQuestGiverTag_ReturnValue_1 = CallFunc_GetQuestGiverTag_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.ShowDetailPane__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueJobBoard_C::ShowDetailPane__DelegateSignature(bool Hovered, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DialogueJobBoard_C", "ShowDetailPane__DelegateSignature");

	Params::UWBP_DialogueJobBoard_C_ShowDetailPane__DelegateSignature_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.TaskProgress = TaskProgress;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}

}


