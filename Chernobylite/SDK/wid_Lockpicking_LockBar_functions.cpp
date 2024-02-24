#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Lockpicking_LockBar.wid_Lockpicking_LockBar_C
// (None)

class UClass* UWid_Lockpicking_LockBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Lockpicking_LockBar_C");

	return Clss;
}


// wid_Lockpicking_LockBar_C wid_Lockpicking_LockBar.Default__wid_Lockpicking_LockBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Lockpicking_LockBar_C* UWid_Lockpicking_LockBar_C::GetDefaultObj()
{
	static class UWid_Lockpicking_LockBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Lockpicking_LockBar_C*>(UWid_Lockpicking_LockBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Lockpicking_LockBar.wid_Lockpicking_LockBar_C.UpdateHelpers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TargetCode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCharacterAt_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCharacterAt_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Lockpicking_LockBar_C::UpdateHelpers(const class FString& TargetCode, int32 CallFunc_Len_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UImage* CallFunc_Array_Get_Item, class UImage* CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetCharacterAt_ReturnValue, const class FString& CallFunc_GetCharacterAt_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Lockpicking_LockBar_C", "UpdateHelpers");

	Params::UWid_Lockpicking_LockBar_C_UpdateHelpers_Params Parms{};

	Parms.TargetCode = TargetCode;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetCharacterAt_ReturnValue = CallFunc_GetCharacterAt_ReturnValue;
	Parms.CallFunc_GetCharacterAt_ReturnValue_1 = CallFunc_GetCharacterAt_ReturnValue_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Lockpicking_LockBar.wid_Lockpicking_LockBar_C.ToggleHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               New_visible                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Lockpicking_LockBar_C::ToggleHighlight(bool New_visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Lockpicking_LockBar_C", "ToggleHighlight");

	Params::UWid_Lockpicking_LockBar_C_ToggleHighlight_Params Parms{};

	Parms.New_visible = New_visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Lockpicking_LockBar.wid_Lockpicking_LockBar_C.SetCode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Code                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCharacterAt_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Lockpicking_LockBar_C::SetCode(const class FString& Code, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UProgressBar* CallFunc_Array_Get_Item, const class FString& CallFunc_GetCharacterAt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Lockpicking_LockBar_C", "SetCode");

	Params::UWid_Lockpicking_LockBar_C_SetCode_Params Parms{};

	Parms.Code = Code;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCharacterAt_ReturnValue = CallFunc_GetCharacterAt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Lockpicking_LockBar.wid_Lockpicking_LockBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Lockpicking_LockBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Lockpicking_LockBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Lockpicking_LockBar.wid_Lockpicking_LockBar_C.ExecuteUbergraph_wid_Lockpicking_LockBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UProgressBar*>        K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UImage*>              K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)

void UWid_Lockpicking_LockBar_C::ExecuteUbergraph_wid_Lockpicking_LockBar(int32 EntryPoint, TArray<class UProgressBar*>& K2Node_MakeArray_Array, TArray<class UImage*>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Lockpicking_LockBar_C", "ExecuteUbergraph_wid_Lockpicking_LockBar");

	Params::UWid_Lockpicking_LockBar_C_ExecuteUbergraph_wid_Lockpicking_LockBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


