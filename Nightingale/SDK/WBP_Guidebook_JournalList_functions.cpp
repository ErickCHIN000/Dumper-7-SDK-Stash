#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C
// (None)

class UClass* UWBP_Guidebook_JournalList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Guidebook_JournalList_C");

	return Clss;
}


// WBP_Guidebook_JournalList_C WBP_Guidebook_JournalList.Default__WBP_Guidebook_JournalList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Guidebook_JournalList_C* UWBP_Guidebook_JournalList_C::GetDefaultObj()
{
	static class UWBP_Guidebook_JournalList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Guidebook_JournalList_C*>(UWBP_Guidebook_JournalList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.HandleQuestTrackingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::HandleQuestTrackingChanged(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "HandleQuestTrackingChanged");

	Params::UWBP_Guidebook_JournalList_C_HandleQuestTrackingChanged_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.GetFocusWidgetInQuestList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     FocusWidget                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_QuestGrid_Entry_C*K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::GetFocusWidgetInQuestList(class UWidget** FocusWidget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWBP_Guidebook_QuestGrid_Entry_C* K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "GetFocusWidgetInQuestList");

	Params::UWBP_Guidebook_JournalList_C_GetFocusWidgetInQuestList_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry = K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FocusWidget != nullptr)
		*FocusWidget = Parms.FocusWidget;

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.SetFocusOnQuestList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_QuestGrid_Entry_C*K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::SetFocusOnQuestList(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWBP_Guidebook_QuestGrid_Entry_C* K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "SetFocusOnQuestList");

	Params::UWBP_Guidebook_JournalList_C_SetFocusOnQuestList_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry = K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.OnFilteringCompleted
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CategoryTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              TotalFilteredResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookQuestCategoryTag_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::OnFilteringCompleted(struct FGameplayTag& CategoryTag, int32 TotalFilteredResults, const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "OnFilteringCompleted");

	Params::UWBP_Guidebook_JournalList_C_OnFilteringCompleted_Params Parms{};

	Parms.CategoryTag = CategoryTag;
	Parms.TotalFilteredResults = TotalFilteredResults;
	Parms.CallFunc_GuideBookQuestCategoryTag_ReturnValue = CallFunc_GuideBookQuestCategoryTag_ReturnValue;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.UnbindFromQuestEntryEvents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                VerticalBox                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             LAllChildren                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// class UWBP_Guidebook_QuestGrid_Entry_C*LCurrentQuestGridEntry                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_QuestGrid_Entry_C*K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::UnbindFromQuestEntryEvents(class UVerticalBox* VerticalBox, const TArray<class UWidget*>& LAllChildren, class UWBP_Guidebook_QuestGrid_Entry_C* LCurrentQuestGridEntry, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Guidebook_QuestGrid_Entry_C* K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "UnbindFromQuestEntryEvents");

	Params::UWBP_Guidebook_JournalList_C_UnbindFromQuestEntryEvents_Params Parms{};

	Parms.VerticalBox = VerticalBox;
	Parms.LAllChildren = LAllChildren;
	Parms.LCurrentQuestGridEntry = LCurrentQuestGridEntry;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry = K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.OnQuestSelected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryObservedStateTracker*LObservedStateTracker                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           LMenuDataEntry                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryObservedStateTracker*CallFunc_GetStateTracker_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIDFromOngoingTask_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookQuestCategoryTag_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_FindEntryWithIDFromCategory_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::OnQuestSelected(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, class UNWXMenuDataEntryObservedStateTracker* LObservedStateTracker, class UNWXMenuDataEntry* LMenuDataEntry, bool CallFunc_IsValid_ReturnValue, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGuid& CallFunc_GetUniqueIDFromOngoingTask_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, class UNWXMenuDataEntry* CallFunc_FindEntryWithIDFromCategory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "OnQuestSelected");

	Params::UWBP_Guidebook_JournalList_C_OnQuestSelected_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;
	Parms.LObservedStateTracker = LObservedStateTracker;
	Parms.LMenuDataEntry = LMenuDataEntry;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStateTracker_ReturnValue = CallFunc_GetStateTracker_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetUniqueIDFromOngoingTask_ReturnValue = CallFunc_GetUniqueIDFromOngoingTask_ReturnValue;
	Parms.CallFunc_GuideBookQuestCategoryTag_ReturnValue = CallFunc_GuideBookQuestCategoryTag_ReturnValue;
	Parms.CallFunc_FindEntryWithIDFromCategory_ReturnValue = CallFunc_FindEntryWithIDFromCategory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.OnQuestHovered
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           LLastSelectedQuestEntry                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Quests_C*  K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Contract_StateType    CallFunc_GetTaskState_TaskState                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_GetTaskProgress_ReturnValue                             (ConstParm)

void UWBP_Guidebook_JournalList_C::OnQuestHovered(bool Hovered, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, class UNWXMenuDataEntry* LLastSelectedQuestEntry, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess, enum class E_Contract_StateType CallFunc_GetTaskState_TaskState, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "OnQuestHovered");

	Params::UWBP_Guidebook_JournalList_C_OnQuestHovered_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.TaskProgress = TaskProgress;
	Parms.State = State;
	Parms.LLastSelectedQuestEntry = LLastSelectedQuestEntry;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTaskState_TaskState = CallFunc_GetTaskState_TaskState;
	Parms.CallFunc_GetTaskProgress_ReturnValue = CallFunc_GetTaskProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.ValidateQuestList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_BasicText_OneLine_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Quests_QuestEntry_C*    K2Node_DynamicCast_AsWBP_Quests_Quest_Entry                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Contract_StateType    CallFunc_GetContractState_ContractState                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_GetTaskProgress_TaskProgress                            (None)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_Quests_QuestEntry_C*    K2Node_DynamicCast_AsWBP_Quests_Quest_Entry_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Contract_StateType    CallFunc_GetContractState_ContractState_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_GetTaskProgress_TaskProgress_1                          (None)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::ValidateQuestList(const struct FLinearColor& Temp_struct_Variable, class FText Temp_text_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Quests_QuestEntry_C* K2Node_DynamicCast_AsWBP_Quests_Quest_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyChildren_ReturnValue, enum class E_Contract_StateType CallFunc_GetContractState_ContractState, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_TaskProgress, bool CallFunc_HasAnyChildren_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class UWBP_Quests_QuestEntry_C* K2Node_DynamicCast_AsWBP_Quests_Quest_Entry_1, bool K2Node_DynamicCast_bSuccess_1, enum class E_Contract_StateType CallFunc_GetContractState_ContractState_1, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_TaskProgress_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "ValidateQuestList");

	Params::UWBP_Guidebook_JournalList_C_ValidateQuestList_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Quests_Quest_Entry = K2Node_DynamicCast_AsWBP_Quests_Quest_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetContractState_ContractState = CallFunc_GetContractState_ContractState;
	Parms.CallFunc_GetTaskProgress_TaskProgress = CallFunc_GetTaskProgress_TaskProgress;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_DynamicCast_AsWBP_Quests_Quest_Entry_1 = K2Node_DynamicCast_AsWBP_Quests_Quest_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetContractState_ContractState_1 = CallFunc_GetContractState_ContractState_1;
	Parms.CallFunc_GetTaskProgress_TaskProgress_1 = CallFunc_GetTaskProgress_TaskProgress_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.GenerateQuestWidgets
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                VerticalBoxReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    ContractState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_QuestGrid_Entry_C*LQuestEntry                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_QuestGrid_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Bottom_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::GenerateQuestWidgets(class UVerticalBox* VerticalBoxReference, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType ContractState, class UWBP_Guidebook_QuestGrid_Entry_C* LQuestEntry, class UWBP_Guidebook_QuestGrid_Entry_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float K2Node_MakeStruct_Bottom_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "GenerateQuestWidgets");

	Params::UWBP_Guidebook_JournalList_C_GenerateQuestWidgets_Params Parms{};

	Parms.VerticalBoxReference = VerticalBoxReference;
	Parms.TaskProgress = TaskProgress;
	Parms.ContractState = ContractState;
	Parms.LQuestEntry = LQuestEntry;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_MakeStruct_Bottom_ImplicitCast = K2Node_MakeStruct_Bottom_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.RefreshQuestLists
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        LTaskProgress                                                    (Edit, BlueprintVisible)
// TArray<class UNWXMenuDataEntry*>   LCachedQuestEntries                                              (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Quests_C*  K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_GetTaskProgress_ReturnValue                             (ConstParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookQuestCategoryTag_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXMenuDataEntry*>   CallFunc_GetFilteredEntriesByCategory_OutEntries                 (ReferenceParm)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)
// bool                               CallFunc_IsQuestOngoing_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::RefreshQuestLists(const struct FOngoingTaskProgress& LTaskProgress, const TArray<class UNWXMenuDataEntry*>& LCachedQuestEntries, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Array_Get_Item, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, TArray<class UNWXMenuDataEntry*>& CallFunc_GetFilteredEntriesByCategory_OutEntries, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, bool CallFunc_IsQuestOngoing_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "RefreshQuestLists");

	Params::UWBP_Guidebook_JournalList_C_RefreshQuestLists_Params Parms{};

	Parms.LTaskProgress = LTaskProgress;
	Parms.LCachedQuestEntries = LCachedQuestEntries;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTaskProgress_ReturnValue = CallFunc_GetTaskProgress_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_GuideBookQuestCategoryTag_ReturnValue = CallFunc_GuideBookQuestCategoryTag_ReturnValue;
	Parms.CallFunc_GetFilteredEntriesByCategory_OutEntries = CallFunc_GetFilteredEntriesByCategory_OutEntries;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;
	Parms.CallFunc_IsQuestOngoing_ReturnValue = CallFunc_IsQuestOngoing_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.OnQuestUnselected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guidebook_JournalList_C::OnQuestUnselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "OnQuestUnselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Guidebook_JournalList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Guidebook_JournalList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.ExecuteUbergraph_WBP_Guidebook_JournalList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_GuideBookComponent_C*    CallFunc_GetLocalPlayerGuideBookComponent_GuideBook              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::ExecuteUbergraph_WBP_Guidebook_JournalList(int32 EntryPoint, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue_1, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "ExecuteUbergraph_WBP_Guidebook_JournalList");

	Params::UWBP_Guidebook_JournalList_C_ExecuteUbergraph_WBP_Guidebook_JournalList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLocalPlayerGuideBookComponent_GuideBook = CallFunc_GetLocalPlayerGuideBookComponent_GuideBook;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue_1 = CallFunc_GetOwningPlayerState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1 = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetQuestTracker_ReturnValue_1 = CallFunc_GetQuestTracker_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.OnQuestEntryUnselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guidebook_JournalList_C::OnQuestEntryUnselected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "OnQuestEntryUnselected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.OnQuestTrackingChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::OnQuestTrackingChanged__DelegateSignature(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "OnQuestTrackingChanged__DelegateSignature");

	Params::UWBP_Guidebook_JournalList_C_OnQuestTrackingChanged__DelegateSignature_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.OnQuestEntryHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        Task                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::OnQuestEntryHovered__DelegateSignature(const struct FOngoingTaskProgress& Task, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "OnQuestEntryHovered__DelegateSignature");

	Params::UWBP_Guidebook_JournalList_C_OnQuestEntryHovered__DelegateSignature_Params Parms{};

	Parms.Task = Task;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C.OnQuestEntrySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        Task                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_JournalList_C::OnQuestEntrySelected__DelegateSignature(const struct FOngoingTaskProgress& Task, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_JournalList_C", "OnQuestEntrySelected__DelegateSignature");

	Params::UWBP_Guidebook_JournalList_C_OnQuestEntrySelected__DelegateSignature_Params Parms{};

	Parms.Task = Task;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}

}


