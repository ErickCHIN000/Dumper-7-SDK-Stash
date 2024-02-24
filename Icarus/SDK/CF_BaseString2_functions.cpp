#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_BaseString2.CF_BaseString2_C
// (None)

class UClass* UCF_BaseString2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_BaseString2_C");

	return Clss;
}


// CF_BaseString2_C CF_BaseString2.Default__CF_BaseString2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_BaseString2_C* UCF_BaseString2_C::GetDefaultObj()
{
	static class UCF_BaseString2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_BaseString2_C*>(UCF_BaseString2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_BaseString2.CF_BaseString2_C.GetFloatValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UCF_BaseString2_C::GetFloatValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseString2_C", "GetFloatValue");

	Params::UCF_BaseString2_C_GetFloatValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_BaseString2.CF_BaseString2_C.UpdatePreview
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>              Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCF_BaseString2_C::UpdatePreview(TArray<class FString>& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseString2_C", "UpdatePreview");

	Params::UCF_BaseString2_C_UpdatePreview_Params Parms{};

	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseString2.CF_BaseString2_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCF_BaseString2_C::BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseString2_C", "BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_BaseString2.CF_BaseString2_C.ExecuteUbergraph_CF_BaseString2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_Event_Args                                                (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// TArray<class UEditableText*>       K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UEditableText*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseString2_C::ExecuteUbergraph_CF_BaseString2(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& K2Node_Event_Args, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, TArray<class UEditableText*>& K2Node_MakeArray_Array, class UEditableText* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseString2_C", "ExecuteUbergraph_CF_BaseString2");

	Params::UCF_BaseString2_C_ExecuteUbergraph_CF_BaseString2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Args = K2Node_Event_Args;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


