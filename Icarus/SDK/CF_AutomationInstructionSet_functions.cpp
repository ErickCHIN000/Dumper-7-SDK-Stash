#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_AutomationInstructionSet.CF_AutomationInstructionSet_C
// (None)

class UClass* UCF_AutomationInstructionSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_AutomationInstructionSet_C");

	return Clss;
}


// CF_AutomationInstructionSet_C CF_AutomationInstructionSet.Default__CF_AutomationInstructionSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_AutomationInstructionSet_C* UCF_AutomationInstructionSet_C::GetDefaultObj()
{
	static class UCF_AutomationInstructionSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_AutomationInstructionSet_C*>(UCF_AutomationInstructionSet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_AutomationInstructionSet.CF_AutomationInstructionSet_C.Set Instructions
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Instructions                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCF_AutomationInstructionSet_C::Set_Instructions(TArray<class FString>& Instructions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AutomationInstructionSet_C", "Set Instructions");

	Params::UCF_AutomationInstructionSet_C_Set_Instructions_Params Parms{};

	Parms.Instructions = Instructions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_AutomationInstructionSet.CF_AutomationInstructionSet_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCF_AutomationInstructionSet_C::BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AutomationInstructionSet_C", "BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_AutomationInstructionSet.CF_AutomationInstructionSet_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_AutomationInstructionSet_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AutomationInstructionSet_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_AutomationInstructionSet.CF_AutomationInstructionSet_C.ExecuteUbergraph_CF_AutomationInstructionSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatOverlayBase*           CallFunc_GetCheatOverlay_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInstructionRow_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_CustomEvent_Instructions                                  (ConstParm, ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatOverlayBase*           CallFunc_GetCheatOverlay_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShowing_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_AutomationInstructionSet_C::ExecuteUbergraph_CF_AutomationInstructionSet(int32 EntryPoint, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UInstructionRow_C* CallFunc_Create_ReturnValue, TArray<class FString>& K2Node_CustomEvent_Instructions, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue_1, bool CallFunc_IsShowing_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AutomationInstructionSet_C", "ExecuteUbergraph_CF_AutomationInstructionSet");

	Params::UCF_AutomationInstructionSet_C_ExecuteUbergraph_CF_AutomationInstructionSet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCheatOverlay_ReturnValue = CallFunc_GetCheatOverlay_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Instructions = K2Node_CustomEvent_Instructions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetCheatOverlay_ReturnValue_1 = CallFunc_GetCheatOverlay_ReturnValue_1;
	Parms.CallFunc_IsShowing_ReturnValue = CallFunc_IsShowing_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


