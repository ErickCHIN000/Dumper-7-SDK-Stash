#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C
// (None)

class UClass* UWid_DialogueCompanionStatusPayload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DialogueCompanionStatusPayload_C");

	return Clss;
}


// wid_DialogueCompanionStatusPayload_C wid_DialogueCompanionStatusPayload.Default__wid_DialogueCompanionStatusPayload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DialogueCompanionStatusPayload_C* UWid_DialogueCompanionStatusPayload_C::GetDefaultObj()
{
	static class UWid_DialogueCompanionStatusPayload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DialogueCompanionStatusPayload_C*>(UWid_DialogueCompanionStatusPayload_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.AddBuffColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EBuffType               Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EBuffType               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EBuffType               Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_6                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_7                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWid_DialogueCompanionStatusPayload_C::AddBuffColor(class FText Text, enum class EBuffType Tier, enum class EBuffType Temp_byte_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, enum class EBuffType Temp_byte_Variable_1, const class FString& K2Node_Select_Default, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "AddBuffColor");

	Params::UWid_DialogueCompanionStatusPayload_C_AddBuffColor_Params Parms{};

	Parms.Text = Text;
	Parms.Tier = Tier;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.Get Buff
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                TestedBuffs                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EBuffGroup              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Buff                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                FoundBuffs                                                       (Edit, BlueprintVisible)
// TArray<class FName>                AllBuffs                                                         (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsModifier              CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCompanionsModifiers_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_Select_Default                                            (ReferenceParm)

void UWid_DialogueCompanionStatusPayload_C::Get_Buff(TArray<class FName>& TestedBuffs, enum class EBuffGroup Type, class FName* Buff, const TArray<class FName>& FoundBuffs, const TArray<class FName>& AllBuffs, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FName CallFunc_Array_Get_Item, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetCompanionsModifiers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class FName>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "Get Buff");

	Params::UWid_DialogueCompanionStatusPayload_C_Get_Buff_Params Parms{};

	Parms.TestedBuffs = TestedBuffs;
	Parms.Type = Type;
	Parms.FoundBuffs = FoundBuffs;
	Parms.AllBuffs = AllBuffs;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCompanionsModifiers_ReturnValue = CallFunc_GetCompanionsModifiers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Buff != nullptr)
		*Buff = Parms.Buff;

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.UpdateStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm)

void UWid_DialogueCompanionStatusPayload_C::UpdateStatus(TArray<class FName>& K2Node_MakeArray_Array, TArray<class FName>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "UpdateStatus");

	Params::UWid_DialogueCompanionStatusPayload_C_UpdateStatus_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.UpdateBuff
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                TestedBuffs                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EBuffGroup              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionsPanel_Entry_element_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsModifier              Buff                                                             (Edit, BlueprintVisible)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Buff_Buff                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsModifier              CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuffGroup              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatText_Output                                       (None)
// class FText                        CallFunc_AddBuffColor_ReturnValue                                (None)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueCompanionStatusPayload_C::UpdateBuff(TArray<class FName>& TestedBuffs, enum class EBuffGroup Type, class UWid_CompanionsPanel_Entry_element_C* Widget, const struct FStatsModifier& Buff, class UTexture2D* Temp_object_Variable, class FName CallFunc_Get_Buff_Buff, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, enum class EBuffGroup Temp_byte_Variable, class FText CallFunc_FormatText_Output, class FText CallFunc_AddBuffColor_ReturnValue, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "UpdateBuff");

	Params::UWid_DialogueCompanionStatusPayload_C_UpdateBuff_Params Parms{};

	Parms.TestedBuffs = TestedBuffs;
	Parms.Type = Type;
	Parms.Widget = Widget;
	Parms.Buff = Buff;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Get_Buff_Buff = CallFunc_Get_Buff_Buff;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.CallFunc_AddBuffColor_ReturnValue = CallFunc_AddBuffColor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.UpdateRelationStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AdjustedLoyalty                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuffType               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuffType               Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuffType               Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuffType               Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuffType               Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuffType               Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuffType               Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceBase_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuffType               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        CallFunc_FormatText_Output                                       (None)
// class FText                        CallFunc_AddBuffColor_ReturnValue                                (None)

void UWid_DialogueCompanionStatusPayload_C::UpdateRelationStatus(int32 AdjustedLoyalty, int32 Temp_int_Variable, enum class EBuffType Temp_byte_Variable, enum class EBuffType Temp_byte_Variable_1, enum class EBuffType Temp_byte_Variable_2, enum class EBuffType Temp_byte_Variable_3, enum class EBuffType Temp_byte_Variable_4, enum class EBuffType Temp_byte_Variable_5, enum class EBuffType Temp_byte_Variable_6, int32 Temp_int_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, float CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue, enum class EBuffType K2Node_Select_Default, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText K2Node_Select_Default_1, class FText CallFunc_FormatText_Output, class FText CallFunc_AddBuffColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "UpdateRelationStatus");

	Params::UWid_DialogueCompanionStatusPayload_C_UpdateRelationStatus_Params Parms{};

	Parms.AdjustedLoyalty = AdjustedLoyalty;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.CallFunc_GetCGGameInstanceBase_ReturnValue = CallFunc_GetCGGameInstanceBase_ReturnValue;
	Parms.CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue = CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.CallFunc_AddBuffColor_ReturnValue = CallFunc_AddBuffColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.UpdateCompanionName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceBase_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActorInfo                  CallFunc_K2_GetActorInfo_Info                                    (None)
// bool                               CallFunc_K2_GetActorInfo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatText_Output                                       (None)

void UWid_DialogueCompanionStatusPayload_C::UpdateCompanionName(class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue, class FText CallFunc_FormatText_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "UpdateCompanionName");

	Params::UWid_DialogueCompanionStatusPayload_C_UpdateCompanionName_Params Parms{};

	Parms.CallFunc_GetCGGameInstanceBase_ReturnValue = CallFunc_GetCGGameInstanceBase_ReturnValue;
	Parms.CallFunc_K2_GetActorInfo_Info = CallFunc_K2_GetActorInfo_Info;
	Parms.CallFunc_K2_GetActorInfo_ReturnValue = CallFunc_K2_GetActorInfo_ReturnValue;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.IsPositiveBaseTier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBuildSystemStatTier    Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_DialogueCompanionStatusPayload_C::IsPositiveBaseTier(enum class EBuildSystemStatTier Index, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "IsPositiveBaseTier");

	Params::UWid_DialogueCompanionStatusPayload_C_IsPositiveBaseTier_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.AddEffectText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSt_OnScreenTooltip         CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueCompanionStatusPayload_C::AddEffectText(class FName RowName, TArray<class FText>& Array, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "AddEffectText");

	Params::UWid_DialogueCompanionStatusPayload_C_AddEffectText_Params Parms{};

	Parms.RowName = RowName;
	Parms.Array = Array;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.SetEffectsValues
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                PositiveEffects                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                NegativeEffects                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      TargetTExt                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// class FText                        CallFunc_Array_Get_Item_1                                        (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_LeftChop_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_TrimTrailing_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueCompanionStatusPayload_C::SetEffectsValues(TArray<class FText>& PositiveEffects, TArray<class FText>& NegativeEffects, const class FString& TargetTExt, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FText CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_LeftChop_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "SetEffectsValues");

	Params::UWid_DialogueCompanionStatusPayload_C_SetEffectsValues_Params Parms{};

	Parms.PositiveEffects = PositiveEffects;
	Parms.NegativeEffects = NegativeEffects;
	Parms.TargetTExt = TargetTExt;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_LeftChop_ReturnValue = CallFunc_LeftChop_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TrimTrailing_ReturnValue = CallFunc_TrimTrailing_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.UpdateEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumberOfBeds                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                EffectsListNegative                                              (Edit, BlueprintVisible)
// TArray<class FText>                EffectsListPositive                                              (Edit, BlueprintVisible)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBuildSystemStatTier    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceBase_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    CallFunc_BuildSystemGetCurrentStatTier_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildSystemStatTier    CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPositiveBaseTier_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPositiveBaseTier_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBuildSystemStatTier    CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPositiveBaseTier_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_Select_Default_5                                          (ReferenceParm)
// TArray<class FText>                K2Node_Select_Default_6                                          (ReferenceParm)
// TArray<class FText>                K2Node_Select_Default_7                                          (ReferenceParm)

void UWid_DialogueCompanionStatusPayload_C::UpdateEffects(int32 NumberOfBeds, const TArray<class FText>& EffectsListNegative, const TArray<class FText>& EffectsListPositive, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, enum class EBuildSystemStatTier Temp_byte_Variable, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, enum class EBuildSystemStatTier Temp_byte_Variable_1, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName Temp_name_Variable_11, class FName Temp_name_Variable_12, class FName Temp_name_Variable_13, enum class EBuildSystemStatTier Temp_byte_Variable_2, class FName Temp_name_Variable_14, class FName Temp_name_Variable_15, class FName Temp_name_Variable_16, class FName Temp_name_Variable_17, class FName Temp_name_Variable_18, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class EBuildSystemStatTier Temp_byte_Variable_3, class FName Temp_name_Variable_19, class FName Temp_name_Variable_20, class FName Temp_name_Variable_21, class FName Temp_name_Variable_22, class FName Temp_name_Variable_23, class FName Temp_name_Variable_24, enum class EBuildSystemStatTier Temp_byte_Variable_4, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_1, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_2, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_3, class FName K2Node_Select_Default_2, class FName K2Node_Select_Default_3, bool CallFunc_IsPositiveBaseTier_ReturnValue, bool CallFunc_IsPositiveBaseTier_ReturnValue_1, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_4, class FName K2Node_Select_Default_4, bool CallFunc_IsPositiveBaseTier_ReturnValue_2, TArray<class FText>& K2Node_Select_Default_5, TArray<class FText>& K2Node_Select_Default_6, TArray<class FText>& K2Node_Select_Default_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "UpdateEffects");

	Params::UWid_DialogueCompanionStatusPayload_C_UpdateEffects_Params Parms{};

	Parms.NumberOfBeds = NumberOfBeds;
	Parms.EffectsListNegative = EffectsListNegative;
	Parms.EffectsListPositive = EffectsListPositive;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.Temp_name_Variable_7 = Temp_name_Variable_7;
	Parms.Temp_name_Variable_8 = Temp_name_Variable_8;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_name_Variable_9 = Temp_name_Variable_9;
	Parms.Temp_name_Variable_10 = Temp_name_Variable_10;
	Parms.Temp_name_Variable_11 = Temp_name_Variable_11;
	Parms.Temp_name_Variable_12 = Temp_name_Variable_12;
	Parms.Temp_name_Variable_13 = Temp_name_Variable_13;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_name_Variable_14 = Temp_name_Variable_14;
	Parms.Temp_name_Variable_15 = Temp_name_Variable_15;
	Parms.Temp_name_Variable_16 = Temp_name_Variable_16;
	Parms.Temp_name_Variable_17 = Temp_name_Variable_17;
	Parms.Temp_name_Variable_18 = Temp_name_Variable_18;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_name_Variable_19 = Temp_name_Variable_19;
	Parms.Temp_name_Variable_20 = Temp_name_Variable_20;
	Parms.Temp_name_Variable_21 = Temp_name_Variable_21;
	Parms.Temp_name_Variable_22 = Temp_name_Variable_22;
	Parms.Temp_name_Variable_23 = Temp_name_Variable_23;
	Parms.Temp_name_Variable_24 = Temp_name_Variable_24;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_GetCGGameInstanceBase_ReturnValue = CallFunc_GetCGGameInstanceBase_ReturnValue;
	Parms.CallFunc_BuildSystemGetCurrentStatTier_ReturnValue = CallFunc_BuildSystemGetCurrentStatTier_ReturnValue;
	Parms.CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_1 = CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_2 = CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_2;
	Parms.CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_3 = CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_IsPositiveBaseTier_ReturnValue = CallFunc_IsPositiveBaseTier_ReturnValue;
	Parms.CallFunc_IsPositiveBaseTier_ReturnValue_1 = CallFunc_IsPositiveBaseTier_ReturnValue_1;
	Parms.CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_4 = CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_IsPositiveBaseTier_ReturnValue_2 = CallFunc_IsPositiveBaseTier_ReturnValue_2;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.InitPayload
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        CompanionName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueCompanionStatusPayload_C::InitPayload(class FName CompanionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "InitPayload");

	Params::UWid_DialogueCompanionStatusPayload_C_InitPayload_Params Parms{};

	Parms.CompanionName = CompanionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueCompanionStatusPayload_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.RequestDestruct
// (Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueCompanionStatusPayload_C::RequestDestruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "RequestDestruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueCompanionStatusPayload_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "PreConstruct");

	Params::UWid_DialogueCompanionStatusPayload_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.Update
// (Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueCompanionStatusPayload_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.Show
// (Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueCompanionStatusPayload_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.CloseRemoveGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialogueCompanionStatusPayload_C::CloseRemoveGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "CloseRemoveGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.ShowBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialogueCompanionStatusPayload_C::ShowBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "ShowBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.BindPhotomodeToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialogueCompanionStatusPayload_C::BindPhotomodeToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "BindPhotomodeToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.UnbindPhotomodeToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialogueCompanionStatusPayload_C::UnbindPhotomodeToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "UnbindPhotomodeToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.PhotomodeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsActivated                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueCompanionStatusPayload_C::PhotomodeChanged(bool bIsActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "PhotomodeChanged");

	Params::UWid_DialogueCompanionStatusPayload_C_PhotomodeChanged_Params Parms{};

	Parms.bIsActivated = bIsActivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueCompanionStatusPayload_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C.ExecuteUbergraph_wid_DialogueCompanionStatusPayload
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_CompanionName                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatText_Output                                       (None)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGGameModeBase*             CallFunc_GetCGGameModeBase_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsActivated                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueCompanionStatusPayload_C::ExecuteUbergraph_wid_DialogueCompanionStatusPayload(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, class FName K2Node_Event_CompanionName, bool Temp_bool_IsClosed_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_GetEndTime_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_FormatText_Output, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsAnimationPlaying_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, float CallFunc_GetRenderOpacity_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue, bool K2Node_CustomEvent_bIsActivated, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueCompanionStatusPayload_C", "ExecuteUbergraph_wid_DialogueCompanionStatusPayload");

	Params::UWid_DialogueCompanionStatusPayload_C_ExecuteUbergraph_wid_DialogueCompanionStatusPayload_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_CompanionName = K2Node_Event_CompanionName;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCGGameModeBase_ReturnValue = CallFunc_GetCGGameModeBase_ReturnValue;
	Parms.K2Node_CustomEvent_bIsActivated = K2Node_CustomEvent_bIsActivated;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


