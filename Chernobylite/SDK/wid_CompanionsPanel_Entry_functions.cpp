#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C
// (None)

class UClass* UWid_CompanionsPanel_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionsPanel_Entry_C");

	return Clss;
}


// wid_CompanionsPanel_Entry_C wid_CompanionsPanel_Entry.Default__wid_CompanionsPanel_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionsPanel_Entry_C* UWid_CompanionsPanel_Entry_C::GetDefaultObj()
{
	static class UWid_CompanionsPanel_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionsPanel_Entry_C*>(UWid_CompanionsPanel_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.GetSmallNameText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionDefinition        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWid_CompanionsPanel_Entry_C::GetSmallNameText(bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FCompanionDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "GetSmallNameText");

	Params::UWid_CompanionsPanel_Entry_C_GetSmallNameText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.SetArrow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetBuffsToReportForCompanion_Output_new                 (ReferenceParm)
// TArray<class FName>                CallFunc_GetBuffsToReportForCompanion_Output_ex                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionsPanel_Entry_C::SetArrow(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_new, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_ex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "SetArrow");

	Params::UWid_CompanionsPanel_Entry_C_SetArrow_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetBuffsToReportForCompanion_Output_new = CallFunc_GetBuffsToReportForCompanion_Output_new;
	Parms.CallFunc_GetBuffsToReportForCompanion_Output_ex = CallFunc_GetBuffsToReportForCompanion_Output_ex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.UpdatePercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrEventID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEventMap               CallFunc_GetMapForActiveEvent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AEventSystemBackend*> CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AEventSystemBackend*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateEffectiveness_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_CompanionsPanel_Entry_C::UpdatePercentage(class FName CurrEventID, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class EEventMap CallFunc_GetMapForActiveEvent_ReturnValue, TArray<class AEventSystemBackend*>& CallFunc_GetAllActorsOfClass_OutActors, class AEventSystemBackend* CallFunc_Array_Get_Item, float CallFunc_CalculateEffectiveness_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "UpdatePercentage");

	Params::UWid_CompanionsPanel_Entry_C_UpdatePercentage_Params Parms{};

	Parms.CurrEventID = CurrEventID;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetMapForActiveEvent_ReturnValue = CallFunc_GetMapForActiveEvent_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CalculateEffectiveness_ReturnValue = CallFunc_CalculateEffectiveness_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.SetEventAndMap2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Mission                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Locaton                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<enum class EBuffType>       K2Node_MakeArray_Array                                           (ReferenceParm)

void UWid_CompanionsPanel_Entry_C::SetEventAndMap2(const class FString& Mission, const class FString& Locaton, TArray<enum class EBuffType>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "SetEventAndMap2");

	Params::UWid_CompanionsPanel_Entry_C_SetEventAndMap2_Params Parms{};

	Parms.Mission = Mission;
	Parms.Locaton = Locaton;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.GetBuffString
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FirstSet                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EBuffType>       HightestBuffType                                                 (Edit, BlueprintVisible)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EBuffType>       K2Node_MakeArray_Array                                           (ReferenceParm)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FStatsModifier              CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FStatsModifier              CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHealthPhase            CallFunc_GetCurrentHealthPhase_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCompanionsModifiers_ReturnValue                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsModifier              CallFunc_GetDataTableRowFromName_OutRow_2                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_C::GetBuffString(bool FirstSet, const TArray<enum class EBuffType>& HightestBuffType, class FName Temp_name_Variable, class FName Temp_name_Variable_1, int32 Temp_int_Loop_Counter_Variable, class FName Temp_name_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, uint8 Temp_byte_Variable, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, TArray<enum class EBuffType>& K2Node_MakeArray_Array, class FName K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class EHealthPhase CallFunc_GetCurrentHealthPhase_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetCompanionsModifiers_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "GetBuffString");

	Params::UWid_CompanionsPanel_Entry_C_GetBuffString_Params Parms{};

	Parms.FirstSet = FirstSet;
	Parms.HightestBuffType = HightestBuffType;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurrentHealthPhase_ReturnValue = CallFunc_GetCurrentHealthPhase_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_2 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCompanionsModifiers_ReturnValue = CallFunc_GetCompanionsModifiers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.GetCanBeSend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               CanBeSend                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionsPanel_Entry_C::GetCanBeSend(bool* CanBeSend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "GetCanBeSend");

	Params::UWid_CompanionsPanel_Entry_C_GetCanBeSend_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanBeSend != nullptr)
		*CanBeSend = Parms.CanBeSend;

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.SetEventAndMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EvID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      BaseName                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FActiveQuestInfo            Local                                                            (Edit, BlueprintVisible, NoDestructor)
// TMap<enum class EEventMap, struct FStruct_MapInformation>Temp_byte_Variable                                               (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EBuffType>       K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<enum class EBuffType>       K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue                             (None)
// TArray<enum class EEventMap>       CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// TArray<struct FActiveQuestInfo>    CallFunc_Map_Values_Values                                       (ReferenceParm)
// struct FActiveQuestInfo            CallFunc_Array_Get_Item                                          (NoDestructor)
// struct FQuestInfoInput             CallFunc_GetQuestInfoBP_ReturnValue                              (None)
// struct FDescriptionInfo            CallFunc_GetQuestDescription_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionsPanel_Entry_C::SetEventAndMap(class FName EvID, const class FString& BaseName, const struct FActiveQuestInfo& Local, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_EqualEqual_NameName_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<enum class EBuffType>& K2Node_MakeArray_Array, TArray<enum class EBuffType>& K2Node_MakeArray_Array_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys, TArray<struct FActiveQuestInfo>& CallFunc_Map_Values_Values, const struct FActiveQuestInfo& CallFunc_Array_Get_Item, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "SetEventAndMap");

	Params::UWid_CompanionsPanel_Entry_C_SetEventAndMap_Params Parms{};

	Parms.EvID = EvID;
	Parms.BaseName = BaseName;
	Parms.Local = Local;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetActiveQuests_ReturnValue = CallFunc_GetActiveQuests_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetQuestInfoBP_ReturnValue = CallFunc_GetQuestInfoBP_ReturnValue;
	Parms.CallFunc_GetQuestDescription_ReturnValue = CallFunc_GetQuestDescription_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionsPanel_Entry_C::Select(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "Select");

	Params::UWid_CompanionsPanel_Entry_C_Select_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.ShowInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FColor                      BackgroundColor                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_C::ShowInfo(bool Show, const struct FColor& BackgroundColor, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "ShowInfo");

	Params::UWid_CompanionsPanel_Entry_C_ShowInfo_Params Parms{};

	Parms.Show = Show;
	Parms.BackgroundColor = BackgroundColor;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_CompanionsPanel_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewName                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        NameID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_C::Init(class UTexture2D* Image, class FText NewName, class FName NameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "Init");

	Params::UWid_CompanionsPanel_Entry_C_Init_Params Parms{};

	Parms.Image = Image;
	Parms.NewName = NewName;
	Parms.NameID = NameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_CompanionsPanel_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_CompanionsPanel_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionsPanel_Entry.wid_CompanionsPanel_Entry_C.ExecuteUbergraph_wid_CompanionsPanel_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCompanionsModifiers_ReturnValue                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsModifier              CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_CustomEvent_Image                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_NewName                                       (None)
// class FName                        K2Node_CustomEvent_NameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IWorkshopUIApp_C>CallFunc_Accept_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EBuffType>       K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_C::ExecuteUbergraph_wid_CompanionsPanel_Entry(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FName>& CallFunc_GetCompanionsModifiers_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* K2Node_CustomEvent_Image, class FText K2Node_CustomEvent_NewName, class FName K2Node_CustomEvent_NameID, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_Accept_self_CastInput, TArray<enum class EBuffType>& K2Node_MakeArray_Array, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_C", "ExecuteUbergraph_wid_CompanionsPanel_Entry");

	Params::UWid_CompanionsPanel_Entry_C_ExecuteUbergraph_wid_CompanionsPanel_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetCompanionsModifiers_ReturnValue = CallFunc_GetCompanionsModifiers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Image = K2Node_CustomEvent_Image;
	Parms.K2Node_CustomEvent_NewName = K2Node_CustomEvent_NewName;
	Parms.K2Node_CustomEvent_NameID = K2Node_CustomEvent_NameID;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Accept_self_CastInput = CallFunc_Accept_self_CastInput;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


