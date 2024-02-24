#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_StatTitle.UMG_StatTitle_C
// (None)

class UClass* UUMG_StatTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_StatTitle_C");

	return Clss;
}


// UMG_StatTitle_C UMG_StatTitle.Default__UMG_StatTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_StatTitle_C* UUMG_StatTitle_C::GetDefaultObj()
{
	static class UUMG_StatTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_StatTitle_C*>(UUMG_StatTitle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_StatTitle.UMG_StatTitle_C.OnLoaded_912710A14DB31FBA83B4ABB47E06B80D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_StatTitle_C::OnLoaded_912710A14DB31FBA83B4ABB47E06B80D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatTitle_C", "OnLoaded_912710A14DB31FBA83B4ABB47E06B80D");

	Params::UUMG_StatTitle_C_OnLoaded_912710A14DB31FBA83B4ABB47E06B80D_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_StatTitle.UMG_StatTitle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_StatTitle_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatTitle_C", "PreConstruct");

	Params::UUMG_StatTitle_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_StatTitle.UMG_StatTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_StatTitle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatTitle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_StatTitle.UMG_StatTitle_C.UpdateStatValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetOverride                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_StatTitle_C::UpdateStatValue(class AActor* TargetOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatTitle_C", "UpdateStatValue");

	Params::UUMG_StatTitle_C_UpdateStatValue_Params Parms{};

	Parms.TargetOverride = TargetOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_StatTitle.UMG_StatTitle_C.StatValueOverride
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_StatTitle_C::StatValueOverride(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatTitle_C", "StatValueOverride");

	Params::UUMG_StatTitle_C_StatValueOverride_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_StatTitle.UMG_StatTitle_C.ExecuteUbergraph_UMG_StatTitle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusStatContainer*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsRowHandle             CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FIcarusStatDescription      CallFunc_GetStatsStruct_Stats                                    (None)
// enum class EValid                  CallFunc_GetStatsStruct_Paths                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_TargetOverride                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_GetStatTitleBP_TitleDescription                         (None)
// enum class EFunctionOutcome        CallFunc_GetStatTitleBP_Outcome                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FStatsRowHandle             CallFunc_StructToRowHandle_ReturnValue_1                         (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetStatTitleBP_TitleDescription_1                       (None)
// enum class EFunctionOutcome        CallFunc_GetStatTitleBP_Outcome_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// struct FIcarusStatDescription      CallFunc_GetStatsStruct_Stats_1                                  (None)
// enum class EValid                  CallFunc_GetStatsStruct_Paths_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default_3                                          (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_2                      (None)
// struct FSlateBrush                 K2Node_Select_Default_4                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_5                                          (None)
// enum class ESlateVisibility        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_StatTitle_C::ExecuteUbergraph_UMG_StatTitle(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, class UObject* Temp_object_Variable, bool Temp_bool_Variable_5, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable_6, class AActor* Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue_2, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_Event_IsDesignTime, const struct FStatsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusStatDescription& CallFunc_GetStatsStruct_Stats, enum class EValid CallFunc_GetStatsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class AActor* K2Node_CustomEvent_TargetOverride, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_Variable_7, int32 CallFunc_GetStat_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_GetStatTitleBP_TitleDescription, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome, bool K2Node_SwitchEnum_CmpSuccess_1, int32 K2Node_CustomEvent_Value, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_Select_Default_1, const struct FStatsRowHandle& CallFunc_StructToRowHandle_ReturnValue_1, class FText CallFunc_GetStatTitleBP_TitleDescription_1, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome_1, bool K2Node_SwitchEnum_CmpSuccess_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText K2Node_Select_Default_2, const struct FIcarusStatDescription& CallFunc_GetStatsStruct_Stats_1, enum class EValid CallFunc_GetStatsStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, const struct FSlateBrush& K2Node_Select_Default_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, bool CallFunc_IsValid_ReturnValue_5, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2, const struct FSlateBrush& K2Node_Select_Default_4, const struct FSlateBrush& K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility K2Node_Select_Default_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatTitle_C", "ExecuteUbergraph_UMG_StatTitle");

	Params::UUMG_StatTitle_C_ExecuteUbergraph_UMG_StatTitle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetStatsStruct_Stats = CallFunc_GetStatsStruct_Stats;
	Parms.CallFunc_GetStatsStruct_Paths = CallFunc_GetStatsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_CustomEvent_TargetOverride = K2Node_CustomEvent_TargetOverride;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetStatTitleBP_TitleDescription = CallFunc_GetStatTitleBP_TitleDescription;
	Parms.CallFunc_GetStatTitleBP_Outcome = CallFunc_GetStatTitleBP_Outcome;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_StructToRowHandle_ReturnValue_1 = CallFunc_StructToRowHandle_ReturnValue_1;
	Parms.CallFunc_GetStatTitleBP_TitleDescription_1 = CallFunc_GetStatTitleBP_TitleDescription_1;
	Parms.CallFunc_GetStatTitleBP_Outcome_1 = CallFunc_GetStatTitleBP_Outcome_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetStatsStruct_Stats_1 = CallFunc_GetStatsStruct_Stats_1;
	Parms.CallFunc_GetStatsStruct_Paths_1 = CallFunc_GetStatsStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_2 = CallFunc_MakeBrushFromTexture_ReturnValue_2;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


