#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C
// (None)

class UClass* UUMG_GOAPWorldStats_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_GOAPWorldStats_Entry_C");

	return Clss;
}


// UMG_GOAPWorldStats_Entry_C UMG_GOAPWorldStats_Entry.Default__UMG_GOAPWorldStats_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_GOAPWorldStats_Entry_C* UUMG_GOAPWorldStats_Entry_C::GetDefaultObj()
{
	static class UUMG_GOAPWorldStats_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_GOAPWorldStats_Entry_C*>(UUMG_GOAPWorldStats_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// struct FAISetupRowHandle           CallFunc_MakeLiteralAISetup_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FRowHandleFRowHandle_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAISetupEnum                CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// class FName                        CallFunc_BreakAISetupEnum_Name                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakAISetupEnum_Index                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_GOAPWorldStats_Entry_C::UpdateName(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, const struct FAISetupRowHandle& CallFunc_MakeLiteralAISetup_ReturnValue, bool CallFunc_EqualEqual_FRowHandleFRowHandle_ReturnValue, const struct FAISetupEnum& CallFunc_RowHandleToStruct_ReturnValue, class FName CallFunc_BreakAISetupEnum_Name, int32 CallFunc_BreakAISetupEnum_Index, const struct FLinearColor& K2Node_Select_Default, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_GOAPWorldStats_Entry_C", "UpdateName");

	Params::UUMG_GOAPWorldStats_Entry_C_UpdateName_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_MakeLiteralAISetup_ReturnValue = CallFunc_MakeLiteralAISetup_ReturnValue;
	Parms.CallFunc_EqualEqual_FRowHandleFRowHandle_ReturnValue = CallFunc_EqualEqual_FRowHandleFRowHandle_ReturnValue;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_BreakAISetupEnum_Name = CallFunc_BreakAISetupEnum_Name;
	Parms.CallFunc_BreakAISetupEnum_Index = CallFunc_BreakAISetupEnum_Index;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C.UpdateCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_GOAPWorldStats_Entry_C::UpdateCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_GOAPWorldStats_Entry_C", "UpdateCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_GOAPWorldStats_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_GOAPWorldStats_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C.ExecuteUbergraph_UMG_GOAPWorldStats_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AIcarusNPCGOAPCharacter*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_GOAPWorldStats_Entry_C::ExecuteUbergraph_UMG_GOAPWorldStats_Entry(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, TArray<class AIcarusNPCGOAPCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_GOAPWorldStats_Entry_C", "ExecuteUbergraph_UMG_GOAPWorldStats_Entry");

	Params::UUMG_GOAPWorldStats_Entry_C_ExecuteUbergraph_UMG_GOAPWorldStats_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


