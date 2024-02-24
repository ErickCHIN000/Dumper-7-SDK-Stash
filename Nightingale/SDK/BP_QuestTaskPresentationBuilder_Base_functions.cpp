#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C
// (None)

class UClass* UBP_QuestTaskPresentationBuilder_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestTaskPresentationBuilder_Base_C");

	return Clss;
}


// BP_QuestTaskPresentationBuilder_Base_C BP_QuestTaskPresentationBuilder_Base.Default__BP_QuestTaskPresentationBuilder_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestTaskPresentationBuilder_Base_C* UBP_QuestTaskPresentationBuilder_Base_C::GetDefaultObj()
{
	static class UBP_QuestTaskPresentationBuilder_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestTaskPresentationBuilder_Base_C*>(UBP_QuestTaskPresentationBuilder_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.GetPresentationBuilderForChildCondition
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              ConditionIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_QuestTaskPresentationBuilder_Base_C*PresentationBuilder                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_QuestTaskPresentationBuilder_Base_C::GetPresentationBuilderForChildCondition(int32 ConditionIndex, class UBP_QuestTaskPresentationBuilder_Base_C** PresentationBuilder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_Base_C", "GetPresentationBuilderForChildCondition");

	Params::UBP_QuestTaskPresentationBuilder_Base_C_GetPresentationBuilderForChildCondition_Params Parms{};

	Parms.ConditionIndex = ConditionIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (PresentationBuilder != nullptr)
		*PresentationBuilder = Parms.PresentationBuilder;

}


// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.MakeFirstInCompoundTaskPresentationData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTask                       Task                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FConditionProgressDataList  TaskProgressList                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQuestTaskPresentationData  OutPresentationData                                              (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataConditionPresentationData                                        (Edit, BlueprintVisible)
// class UCompoundCondition*          CompoundCondition                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompoundCondition*          K2Node_DynamicCast_AsCompound_Condition                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQuestTaskConditionPresentationData>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FQuestTaskPresentationData  CallFunc_BuildReadyToCompletePresentationData_PresentationData   (None)
// bool                               CallFunc_BuildReadyToCompletePresentationData_bWasBuilt          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskPresentationData  K2Node_MakeStruct_QuestTaskPresentationData                      (None)
// class UConditionBehaviour*         CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeTaskConditionPresentationData_bWasCreated           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataCallFunc_MakeTaskConditionPresentationData_ConditionPresentationData(None)
// bool                               CallFunc_IsTaskReadyToComplete_bIsReadyToComplete                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_QuestTaskPresentationBuilder_Base_C::MakeFirstInCompoundTaskPresentationData(struct FTask& Task, struct FConditionProgressDataList& TaskProgressList, struct FQuestTaskPresentationData* OutPresentationData, const struct FQuestTaskConditionPresentationData& ConditionPresentationData, class UCompoundCondition* CompoundCondition, int32 CurrentValue, class UCompoundCondition* K2Node_DynamicCast_AsCompound_Condition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsNotEmpty_ReturnValue, TArray<struct FQuestTaskConditionPresentationData>& K2Node_MakeArray_Array, const struct FQuestTaskPresentationData& CallFunc_BuildReadyToCompletePresentationData_PresentationData, bool CallFunc_BuildReadyToCompletePresentationData_bWasBuilt, const struct FQuestTaskPresentationData& K2Node_MakeStruct_QuestTaskPresentationData, class UConditionBehaviour* CallFunc_Array_Get_Item, bool CallFunc_MakeTaskConditionPresentationData_bWasCreated, const struct FQuestTaskConditionPresentationData& CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData, bool CallFunc_IsTaskReadyToComplete_bIsReadyToComplete, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_Base_C", "MakeFirstInCompoundTaskPresentationData");

	Params::UBP_QuestTaskPresentationBuilder_Base_C_MakeFirstInCompoundTaskPresentationData_Params Parms{};

	Parms.Task = Task;
	Parms.TaskProgressList = TaskProgressList;
	Parms.ConditionPresentationData = ConditionPresentationData;
	Parms.CompoundCondition = CompoundCondition;
	Parms.CurrentValue = CurrentValue;
	Parms.K2Node_DynamicCast_AsCompound_Condition = K2Node_DynamicCast_AsCompound_Condition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BuildReadyToCompletePresentationData_PresentationData = CallFunc_BuildReadyToCompletePresentationData_PresentationData;
	Parms.CallFunc_BuildReadyToCompletePresentationData_bWasBuilt = CallFunc_BuildReadyToCompletePresentationData_bWasBuilt;
	Parms.K2Node_MakeStruct_QuestTaskPresentationData = K2Node_MakeStruct_QuestTaskPresentationData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeTaskConditionPresentationData_bWasCreated = CallFunc_MakeTaskConditionPresentationData_bWasCreated;
	Parms.CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData = CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData;
	Parms.CallFunc_IsTaskReadyToComplete_bIsReadyToComplete = CallFunc_IsTaskReadyToComplete_bIsReadyToComplete;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPresentationData != nullptr)
		*OutPresentationData = std::move(Parms.OutPresentationData);

	return Parms.ReturnValue;

}


// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.MakeCompoundTaskPresentationData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTask                       Task                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FConditionProgressDataList  TaskProgressList                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQuestTaskPresentationData  OutPresentationData                                              (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuestTaskCompletionRequirementsTaskCompletionRequirements                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetValue                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewTaskName                                                      (Edit, BlueprintVisible)
// struct FQuestTaskPresentationData  QuestTaskPresentationData                                        (Edit, BlueprintVisible)
// TArray<struct FQuestTaskConditionPresentationData>QuestTaskConditions                                              (Edit, BlueprintVisible)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionBehaviour*         CurrentCondition                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bUseDefaultProgressData                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConditionPersistentData>ProgressDataList                                                 (Edit, BlueprintVisible)
// TArray<class UConditionBehaviour*> ConditionsList                                                   (Edit, BlueprintVisible)
// int32                              CurrentValue                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompoundConditionAnd*       K2Node_DynamicCast_AsCompound_Condition_And                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompoundConditionOr*        K2Node_DynamicCast_AsCompound_Condition_Or                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_QuestTaskPresentationBuilder_Base_C*CallFunc_GetPresentationBuilderForChildCondition_PresentationBuilder(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    K2Node_MakeStruct_ConditionPersistentData                        (NoDestructor)
// struct FQuestTaskPresentationData  CallFunc_BuildReadyToCompletePresentationData_PresentationData   (None)
// bool                               CallFunc_BuildReadyToCompletePresentationData_bWasBuilt          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTaskReadyToComplete_bIsReadyToComplete                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    CallFunc_Array_Get_Item                                          (NoDestructor)
// struct FConditionPersistentData    CallFunc_Array_Get_Item_1                                        (NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionBehaviour*         CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataCallFunc_Array_Get_Item_3                                        (None)
// struct FQuestTaskConditionPresentationDataCallFunc_Array_Get_Item_4                                        (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeTaskConditionPresentationData_bWasCreated           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataCallFunc_MakeTaskConditionPresentationData_ConditionPresentationData(None)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataK2Node_SetFieldsInStruct_StructOut                               (None)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_QuestTaskPresentationBuilder_Base_C::MakeCompoundTaskPresentationData(struct FTask& Task, struct FConditionProgressDataList& TaskProgressList, struct FQuestTaskPresentationData* OutPresentationData, enum class EQuestTaskCompletionRequirements TaskCompletionRequirements, int32 TargetValue, class FText NewTaskName, const struct FQuestTaskPresentationData& QuestTaskPresentationData, const TArray<struct FQuestTaskConditionPresentationData>& QuestTaskConditions, int32 CurrentIndex, class UConditionBehaviour* CurrentCondition, bool bUseDefaultProgressData, const TArray<struct FConditionPersistentData>& ProgressDataList, const TArray<class UConditionBehaviour*>& ConditionsList, int32 CurrentValue, int32 Temp_int_Loop_Counter_Variable, class UCompoundConditionAnd* K2Node_DynamicCast_AsCompound_Condition_And, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UCompoundConditionOr* K2Node_DynamicCast_AsCompound_Condition_Or, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UBP_QuestTaskPresentationBuilder_Base_C* CallFunc_GetPresentationBuilderForChildCondition_PresentationBuilder, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FConditionPersistentData& K2Node_MakeStruct_ConditionPersistentData, const struct FQuestTaskPresentationData& CallFunc_BuildReadyToCompletePresentationData_PresentationData, bool CallFunc_BuildReadyToCompletePresentationData_bWasBuilt, bool CallFunc_IsTaskReadyToComplete_bIsReadyToComplete, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FConditionPersistentData& CallFunc_Array_Get_Item, const struct FConditionPersistentData& CallFunc_Array_Get_Item_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class UConditionBehaviour* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FQuestTaskConditionPresentationData& CallFunc_Array_Get_Item_3, const struct FQuestTaskConditionPresentationData& CallFunc_Array_Get_Item_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Array_Length_ReturnValue_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue_1, bool CallFunc_MakeTaskConditionPresentationData_bWasCreated, const struct FQuestTaskConditionPresentationData& CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Max_ReturnValue_1, int32 CallFunc_Max_ReturnValue_2, const struct FQuestTaskConditionPresentationData& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_Base_C", "MakeCompoundTaskPresentationData");

	Params::UBP_QuestTaskPresentationBuilder_Base_C_MakeCompoundTaskPresentationData_Params Parms{};

	Parms.Task = Task;
	Parms.TaskProgressList = TaskProgressList;
	Parms.TaskCompletionRequirements = TaskCompletionRequirements;
	Parms.TargetValue = TargetValue;
	Parms.NewTaskName = NewTaskName;
	Parms.QuestTaskPresentationData = QuestTaskPresentationData;
	Parms.QuestTaskConditions = QuestTaskConditions;
	Parms.CurrentIndex = CurrentIndex;
	Parms.CurrentCondition = CurrentCondition;
	Parms.bUseDefaultProgressData = bUseDefaultProgressData;
	Parms.ProgressDataList = ProgressDataList;
	Parms.ConditionsList = ConditionsList;
	Parms.CurrentValue = CurrentValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsCompound_Condition_And = K2Node_DynamicCast_AsCompound_Condition_And;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_DynamicCast_AsCompound_Condition_Or = K2Node_DynamicCast_AsCompound_Condition_Or;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetPresentationBuilderForChildCondition_PresentationBuilder = CallFunc_GetPresentationBuilderForChildCondition_PresentationBuilder;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_ConditionPersistentData = K2Node_MakeStruct_ConditionPersistentData;
	Parms.CallFunc_BuildReadyToCompletePresentationData_PresentationData = CallFunc_BuildReadyToCompletePresentationData_PresentationData;
	Parms.CallFunc_BuildReadyToCompletePresentationData_bWasBuilt = CallFunc_BuildReadyToCompletePresentationData_bWasBuilt;
	Parms.CallFunc_IsTaskReadyToComplete_bIsReadyToComplete = CallFunc_IsTaskReadyToComplete_bIsReadyToComplete;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue_1 = CallFunc_Array_IsNotEmpty_ReturnValue_1;
	Parms.CallFunc_MakeTaskConditionPresentationData_bWasCreated = CallFunc_MakeTaskConditionPresentationData_bWasCreated;
	Parms.CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData = CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue_2 = CallFunc_Max_ReturnValue_2;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPresentationData != nullptr)
		*OutPresentationData = std::move(Parms.OutPresentationData);

	return Parms.ReturnValue;

}


// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.IsTaskReadyToComplete
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTask                       GivenTask                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsReadyToComplete                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidTaskCompleterRow_bIsTaskReadyToComplete         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestTaskPresentationBuilder_Base_C::IsTaskReadyToComplete(const struct FTask& GivenTask, int32 CurrentValue, int32 TargetValue, bool* bIsReadyToComplete, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HasValidTaskCompleterRow_bIsTaskReadyToComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_Base_C", "IsTaskReadyToComplete");

	Params::UBP_QuestTaskPresentationBuilder_Base_C_IsTaskReadyToComplete_Params Parms{};

	Parms.GivenTask = GivenTask;
	Parms.CurrentValue = CurrentValue;
	Parms.TargetValue = TargetValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasValidTaskCompleterRow_bIsTaskReadyToComplete = CallFunc_HasValidTaskCompleterRow_bIsTaskReadyToComplete;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsReadyToComplete != nullptr)
		*bIsReadyToComplete = Parms.bIsReadyToComplete;

}


// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.BuildReadyToCompletePresentationData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTask                       Task                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FQuestTaskPresentationData  PresentationData                                                 (Parm, OutParm)
// bool                               bWasBuilt                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        QuestGiverName                                                   (Edit, BlueprintVisible)
// TArray<struct FQuestTaskConditionPresentationData>ItemTaskConditions                                               (Edit, BlueprintVisible)
// struct FQuestTaskPresentationData  TaskPresentationData                                             (Edit, BlueprintVisible)
// class FText                        NewTaskName                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestGiverTableRow         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FQuestTaskPresentationData  K2Node_MakeStruct_QuestTaskPresentationData                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FItemConstraint             CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// struct FQuestTaskConditionPresentationDataK2Node_MakeStruct_QuestTaskConditionPresentationData             (None)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQuestTaskConditionPresentationData>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FItemConstraintPresentationDataCallFunc_GetItemConstraintUIData_OutPresentationData             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FQuestTaskConditionPresentationDataK2Node_MakeStruct_QuestTaskConditionPresentationData_1           (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestTaskPresentationBuilder_Base_C::BuildReadyToCompletePresentationData(const struct FTask& Task, struct FQuestTaskPresentationData* PresentationData, bool* bWasBuilt, class FText QuestGiverName, const TArray<struct FQuestTaskConditionPresentationData>& ItemTaskConditions, const struct FQuestTaskPresentationData& TaskPresentationData, class FText NewTaskName, int32 Temp_int_Array_Index_Variable, const struct FQuestGiverTableRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FQuestTaskPresentationData& K2Node_MakeStruct_QuestTaskPresentationData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FItemConstraint& CallFunc_Array_Get_Item, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, TArray<struct FQuestTaskConditionPresentationData>& K2Node_MakeArray_Array_1, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_Base_C", "BuildReadyToCompletePresentationData");

	Params::UBP_QuestTaskPresentationBuilder_Base_C_BuildReadyToCompletePresentationData_Params Parms{};

	Parms.Task = Task;
	Parms.QuestGiverName = QuestGiverName;
	Parms.ItemTaskConditions = ItemTaskConditions;
	Parms.TaskPresentationData = TaskPresentationData;
	Parms.NewTaskName = NewTaskName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_QuestTaskPresentationData = K2Node_MakeStruct_QuestTaskPresentationData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_QuestTaskConditionPresentationData = K2Node_MakeStruct_QuestTaskConditionPresentationData;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetItemConstraintUIData_OutPresentationData = CallFunc_GetItemConstraintUIData_OutPresentationData;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_QuestTaskConditionPresentationData_1 = K2Node_MakeStruct_QuestTaskConditionPresentationData_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PresentationData != nullptr)
		*PresentationData = std::move(Parms.PresentationData);

	if (bWasBuilt != nullptr)
		*bWasBuilt = Parms.bWasBuilt;

}


// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.HasValidTaskCompleterRow
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTask                       Task                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               bIsTaskReadyToComplete                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestTaskPresentationBuilder_Base_C::HasValidTaskCompleterRow(const struct FTask& Task, bool* bIsTaskReadyToComplete, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_Base_C", "HasValidTaskCompleterRow");

	Params::UBP_QuestTaskPresentationBuilder_Base_C_HasValidTaskCompleterRow_Params Parms{};

	Parms.Task = Task;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsTaskReadyToComplete != nullptr)
		*bIsTaskReadyToComplete = Parms.bIsTaskReadyToComplete;

}


// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.GetCreatureDataTable
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDataTable*                  CreatureDataTable                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_QuestTaskPresentationBuilder_Base_C::GetCreatureDataTable(class UDataTable** CreatureDataTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_Base_C", "GetCreatureDataTable");

	Params::UBP_QuestTaskPresentationBuilder_Base_C_GetCreatureDataTable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CreatureDataTable != nullptr)
		*CreatureDataTable = Parms.CreatureDataTable;

}


// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.MakeTaskConditionPresentationData
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UConditionBehaviour*         Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasCreated                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataConditionPresentationData                                        (Parm, OutParm)

void UBP_QuestTaskPresentationBuilder_Base_C::MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_Base_C", "MakeTaskConditionPresentationData");

	Params::UBP_QuestTaskPresentationBuilder_Base_C_MakeTaskConditionPresentationData_Params Parms{};

	Parms.Condition = Condition;
	Parms.CurrentValue = CurrentValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasCreated != nullptr)
		*bWasCreated = Parms.bWasCreated;

	if (ConditionPresentationData != nullptr)
		*ConditionPresentationData = std::move(Parms.ConditionPresentationData);

}


// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.MakeTaskPresentationData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTask                       Task                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FConditionProgressDataList  TaskProgressList                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQuestTaskPresentationData  OutPresentationData                                              (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataConditionPresentationData                                        (Edit, BlueprintVisible)
// int32                              CurrentValue                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQuestTaskConditionPresentationData>K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskPresentationData  CallFunc_BuildReadyToCompletePresentationData_PresentationData   (None)
// bool                               CallFunc_BuildReadyToCompletePresentationData_bWasBuilt          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTaskReadyToComplete_bIsReadyToComplete                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeTaskConditionPresentationData_bWasCreated           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataCallFunc_MakeTaskConditionPresentationData_ConditionPresentationData(None)
// struct FQuestTaskPresentationData  K2Node_MakeStruct_QuestTaskPresentationData                      (None)

bool UBP_QuestTaskPresentationBuilder_Base_C::MakeTaskPresentationData(struct FTask& Task, struct FConditionProgressDataList& TaskProgressList, struct FQuestTaskPresentationData* OutPresentationData, const struct FQuestTaskConditionPresentationData& ConditionPresentationData, int32 CurrentValue, TArray<struct FQuestTaskConditionPresentationData>& K2Node_MakeArray_Array, bool CallFunc_Array_IsEmpty_ReturnValue, const struct FQuestTaskPresentationData& CallFunc_BuildReadyToCompletePresentationData_PresentationData, bool CallFunc_BuildReadyToCompletePresentationData_bWasBuilt, bool CallFunc_IsTaskReadyToComplete_bIsReadyToComplete, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_MakeTaskConditionPresentationData_bWasCreated, const struct FQuestTaskConditionPresentationData& CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData, const struct FQuestTaskPresentationData& K2Node_MakeStruct_QuestTaskPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_Base_C", "MakeTaskPresentationData");

	Params::UBP_QuestTaskPresentationBuilder_Base_C_MakeTaskPresentationData_Params Parms{};

	Parms.Task = Task;
	Parms.TaskProgressList = TaskProgressList;
	Parms.ConditionPresentationData = ConditionPresentationData;
	Parms.CurrentValue = CurrentValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_BuildReadyToCompletePresentationData_PresentationData = CallFunc_BuildReadyToCompletePresentationData_PresentationData;
	Parms.CallFunc_BuildReadyToCompletePresentationData_bWasBuilt = CallFunc_BuildReadyToCompletePresentationData_bWasBuilt;
	Parms.CallFunc_IsTaskReadyToComplete_bIsReadyToComplete = CallFunc_IsTaskReadyToComplete_bIsReadyToComplete;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeTaskConditionPresentationData_bWasCreated = CallFunc_MakeTaskConditionPresentationData_bWasCreated;
	Parms.CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData = CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData;
	Parms.K2Node_MakeStruct_QuestTaskPresentationData = K2Node_MakeStruct_QuestTaskPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPresentationData != nullptr)
		*OutPresentationData = std::move(Parms.OutPresentationData);

	return Parms.ReturnValue;

}

}


