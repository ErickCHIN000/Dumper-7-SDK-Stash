#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_Voice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_Voice_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_Voice_C WBP_CC_DynamicSubPanel_Voice.Default__WBP_CC_DynamicSubPanel_Voice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_Voice_C* UWBP_CC_DynamicSubPanel_Voice_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_Voice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_Voice_C*>(UWBP_CC_DynamicSubPanel_Voice_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Voice_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_Voice_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.GetVoicesSorted
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVoiceSetDataReference>Output_Get                                                       (Parm, OutParm)
// TArray<struct FVoiceSetDataReference>NewLocalVar_0                                                    (Edit, BlueprintVisible)
// TArray<class FString>              NewLocalVar                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetDataReference      CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FVoiceSetData               CallFunc_TryGetVoiceSetData_OutData                              (None)
// enum class EGetResult              CallFunc_TryGetVoiceSetData_OutBranches                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetDataReference      CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetData               CallFunc_TryGetVoiceSetData_OutData_1                            (None)
// enum class EGetResult              CallFunc_TryGetVoiceSetData_OutBranches_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_IncreasingStringSort_ReturnValue                        (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoiceSetDataReference>CallFunc_GetAllVoiceSetDataReferences_OutReferences              (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Voice_C::GetVoicesSorted(TArray<struct FVoiceSetDataReference>* Output_Get, const TArray<struct FVoiceSetDataReference>& NewLocalVar_0, const TArray<class FString>& NewLocalVar, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FVoiceSetDataReference& CallFunc_Array_Get_Item, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const struct FVoiceSetDataReference& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData_1, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class FString>& CallFunc_IncreasingStringSort_ReturnValue, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<struct FVoiceSetDataReference>& CallFunc_GetAllVoiceSetDataReferences_OutReferences, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "GetVoicesSorted");

	Params::UWBP_CC_DynamicSubPanel_Voice_C_GetVoicesSorted_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.NewLocalVar = NewLocalVar;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_TryGetVoiceSetData_OutData = CallFunc_TryGetVoiceSetData_OutData;
	Parms.CallFunc_TryGetVoiceSetData_OutBranches = CallFunc_TryGetVoiceSetData_OutBranches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_TryGetVoiceSetData_OutData_1 = CallFunc_TryGetVoiceSetData_OutData_1;
	Parms.CallFunc_TryGetVoiceSetData_OutBranches_1 = CallFunc_TryGetVoiceSetData_OutBranches_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IncreasingStringSort_ReturnValue = CallFunc_IncreasingStringSort_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllVoiceSetDataReferences_OutReferences = CallFunc_GetAllVoiceSetDataReferences_OutReferences;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = std::move(Parms.Output_Get);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.TriggerAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBodyType               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBodyType               Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBodyType               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Voice_C::TriggerAudio(int32 Temp_int_Variable, enum class EBodyType Temp_byte_Variable, enum class EBodyType Temp_byte_Variable_1, enum class EBodyType K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "TriggerAudio");

	Params::UWBP_CC_DynamicSubPanel_Voice_C_TriggerAudio_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.CollectPanelValues
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>OutValues                                                        (Parm, OutParm)
// class FString                      OutPanelName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUID_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetDataReference      CallFunc_GetVoiceSetData_Data                                    (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUID_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs             (None)
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>K2Node_MakeMap_Map                                               (None)

void UWBP_CC_DynamicSubPanel_Voice_C::CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, const struct FGuid& CallFunc_GetUID_ReturnValue, const struct FVoiceSetDataReference& CallFunc_GetVoiceSetData_Data, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const struct FGuid& CallFunc_GetUID_ReturnValue_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "CollectPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Voice_C_CollectPanelValues_Params Parms{};

	Parms.CallFunc_GetUID_ReturnValue = CallFunc_GetUID_ReturnValue;
	Parms.CallFunc_GetVoiceSetData_Data = CallFunc_GetVoiceSetData_Data;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_GetUID_ReturnValue_1 = CallFunc_GetUID_ReturnValue_1;
	Parms.CallFunc_Conv_GuidToString_ReturnValue_1 = CallFunc_Conv_GuidToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

	if (OutPanelName != nullptr)
		*OutPanelName = std::move(Parms.OutPanelName);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.CacheStartingPanelValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoiceSetDataReference      CallFunc_GetVoiceSetData_Data                                    (HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Voice_C::CacheStartingPanelValues(const struct FVoiceSetDataReference& CallFunc_GetVoiceSetData_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "CacheStartingPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Voice_C_CacheStartingPanelValues_Params Parms{};

	Parms.CallFunc_GetVoiceSetData_Data = CallFunc_GetVoiceSetData_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.GetTooltipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Voice_C::GetTooltipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "GetTooltipWidget");

	Params::UWBP_CC_DynamicSubPanel_Voice_C_GetTooltipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.RefreshSelectedOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        L_Details_Extreme                                                (Edit, BlueprintVisible)
// class FText                        L_Details_Hard                                                   (Edit, BlueprintVisible)
// class FText                        L_Details_Med                                                    (Edit, BlueprintVisible)
// class FText                        L_Details_Easy                                                   (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoiceSetDataReference>CallFunc_GetVoicesSorted_Output_Get                              (ReferenceParm)
// struct FVoiceSetDataReference      CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetData               CallFunc_TryGetVoiceSetData_OutData                              (None)
// enum class EGetResult              CallFunc_TryGetVoiceSetData_OutBranches                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetDataReference      CallFunc_GetVoiceSetData_Data                                    (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetData               CallFunc_TryGetVoiceSetData_OutData_1                            (None)
// enum class EGetResult              CallFunc_TryGetVoiceSetData_OutBranches_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Voice_C::RefreshSelectedOption(class FText L_Details_Extreme, class FText L_Details_Hard, class FText L_Details_Med, class FText L_Details_Easy, int32 Temp_int_Array_Index_Variable, TArray<struct FVoiceSetDataReference>& CallFunc_GetVoicesSorted_Output_Get, const struct FVoiceSetDataReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVoiceSetDataReference& CallFunc_GetVoiceSetData_Data, int32 CallFunc_Array_Add_ReturnValue, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData_1, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "RefreshSelectedOption");

	Params::UWBP_CC_DynamicSubPanel_Voice_C_RefreshSelectedOption_Params Parms{};

	Parms.L_Details_Extreme = L_Details_Extreme;
	Parms.L_Details_Hard = L_Details_Hard;
	Parms.L_Details_Med = L_Details_Med;
	Parms.L_Details_Easy = L_Details_Easy;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetVoicesSorted_Output_Get = CallFunc_GetVoicesSorted_Output_Get;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TryGetVoiceSetData_OutData = CallFunc_TryGetVoiceSetData_OutData;
	Parms.CallFunc_TryGetVoiceSetData_OutBranches = CallFunc_TryGetVoiceSetData_OutBranches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVoiceSetData_Data = CallFunc_GetVoiceSetData_Data;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_TryGetVoiceSetData_OutData_1 = CallFunc_TryGetVoiceSetData_OutData_1;
	Parms.CallFunc_TryGetVoiceSetData_OutBranches_1 = CallFunc_TryGetVoiceSetData_OutBranches_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Voice_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_Voice_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Voice_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.BndEvt__WBP_CC_DynamicSubPanel_Voice_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_6_PickerEntryUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Voice_C::BndEvt__WBP_CC_DynamicSubPanel_Voice_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_6_PickerEntryUpdated__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "BndEvt__WBP_CC_DynamicSubPanel_Voice_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_6_PickerEntryUpdated__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Voice_C_BndEvt__WBP_CC_DynamicSubPanel_Voice_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_6_PickerEntryUpdated__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.ReenableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Voice_C::ReenableButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "ReenableButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.BndEvt__WBP_CC_DynamicSubPanel_Voice_Button_Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Voice_C::BndEvt__WBP_CC_DynamicSubPanel_Voice_Button_Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "BndEvt__WBP_CC_DynamicSubPanel_Voice_Button_Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.BndEvt__WBP_CC_DynamicSubPanel_Voice_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Voice_C::BndEvt__WBP_CC_DynamicSubPanel_Voice_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "BndEvt__WBP_CC_DynamicSubPanel_Voice_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Voice_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Voice_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Voice_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Voice
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoiceSetDataReference>CallFunc_GetAllVoiceSetDataReferences_OutReferences              (ReferenceParm)
// struct FVoiceSetDataReference      CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetData               CallFunc_TryGetVoiceSetData_OutData                              (None)
// enum class EGetResult              CallFunc_TryGetVoiceSetData_OutBranches                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Voice_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_Voice(int32 EntryPoint, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 K2Node_ComponentBoundEvent_Index, TArray<struct FVoiceSetDataReference>& CallFunc_GetAllVoiceSetDataReferences_OutReferences, const struct FVoiceSetDataReference& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Voice_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_Voice");

	Params::UWBP_CC_DynamicSubPanel_Voice_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Voice_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.CallFunc_GetAllVoiceSetDataReferences_OutReferences = CallFunc_GetAllVoiceSetDataReferences_OutReferences;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetVoiceSetData_OutData = CallFunc_TryGetVoiceSetData_OutData;
	Parms.CallFunc_TryGetVoiceSetData_OutBranches = CallFunc_TryGetVoiceSetData_OutBranches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


