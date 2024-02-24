#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C
// (None)

class UClass* UUMG_CheatFunctionBorder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CheatFunctionBorder_C");

	return Clss;
}


// UMG_CheatFunctionBorder_C UMG_CheatFunctionBorder.Default__UMG_CheatFunctionBorder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CheatFunctionBorder_C* UUMG_CheatFunctionBorder_C::GetDefaultObj()
{
	static class UUMG_CheatFunctionBorder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CheatFunctionBorder_C*>(UUMG_CheatFunctionBorder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.UpperChar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsUpper                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      UpperChar                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CheatFunctionBorder_C::UpperChar(const class FString& Char, bool* IsUpper, class FString* UpperChar, const class FString& CallFunc_ToUpper_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatFunctionBorder_C", "UpperChar");

	Params::UUMG_CheatFunctionBorder_C_UpperChar_Params Parms{};

	Parms.Char = Char;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUpper != nullptr)
		*IsUpper = Parms.IsUpper;

	if (UpperChar != nullptr)
		*UpperChar = std::move(Parms.UpperChar);

}


// Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.GenerateDisplayName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUpper                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CharIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Array                                                            (Edit, BlueprintVisible)
// class FString                      Char                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      DisplayString                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUMG_CheatFunctionBorder_C::GenerateDisplayName(bool IsUpper, int32 CharIndex, const TArray<class FString>& Array, const class FString& Char, const class FString& DisplayString, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatFunctionBorder_C", "GenerateDisplayName");

	Params::UUMG_CheatFunctionBorder_C_GenerateDisplayName_Params Parms{};

	Parms.IsUpper = IsUpper;
	Parms.CharIndex = CharIndex;
	Parms.Array = Array;
	Parms.Char = Char;
	Parms.DisplayString = DisplayString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CheatFunctionBorder_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatFunctionBorder_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.Set Function
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheatFunctionBase*          CheatFunction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CheatFunctionBorder_C::Set_Function(class UCheatFunctionBase* CheatFunction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatFunctionBorder_C", "Set Function");

	Params::UUMG_CheatFunctionBorder_C_Set_Function_Params Parms{};

	Parms.CheatFunction = CheatFunction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.Set Top Function
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTop                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CheatFunctionBorder_C::Set_Top_Function(bool IsTop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatFunctionBorder_C", "Set Top Function");

	Params::UUMG_CheatFunctionBorder_C_Set_Top_Function_Params Parms{};

	Parms.IsTop = IsTop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.ExecuteUbergraph_UMG_CheatFunctionBorder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatFunctionBase*          K2Node_CustomEvent_CheatFunction                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCF_Base_C*                  K2Node_DynamicCast_AsCF_Base                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UUMG_CheatFunctionBorder_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (InstancedReference, UObjectWrapper, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsTop                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CheatFunctionBorder_C::ExecuteUbergraph_UMG_CheatFunctionBorder(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCheatFunctionBase* K2Node_CustomEvent_CheatFunction, const struct FMargin& K2Node_MakeStruct_Margin, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UUMG_CheatFunctionBorder_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_CustomEvent_IsTop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatFunctionBorder_C", "ExecuteUbergraph_UMG_CheatFunctionBorder");

	Params::UUMG_CheatFunctionBorder_C_ExecuteUbergraph_UMG_CheatFunctionBorder_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_CheatFunction = K2Node_CustomEvent_CheatFunction;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_DynamicCast_AsCF_Base = K2Node_DynamicCast_AsCF_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_IsTop = K2Node_CustomEvent_IsTop;

	UObject::ProcessEvent(Func, &Parms);

}

}


