#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_BaseInstructionSet.CF_BaseInstructionSet_C
// (None)

class UClass* UCF_BaseInstructionSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_BaseInstructionSet_C");

	return Clss;
}


// CF_BaseInstructionSet_C CF_BaseInstructionSet.Default__CF_BaseInstructionSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_BaseInstructionSet_C* UCF_BaseInstructionSet_C::GetDefaultObj()
{
	static class UCF_BaseInstructionSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_BaseInstructionSet_C*>(UCF_BaseInstructionSet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.UpdateArgs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              InArguments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      CurrentLine                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatOverlayBase*           CallFunc_GetCheatOverlay_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatOverlayBase*           CallFunc_GetCheatOverlay_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ParseCheatLineArguments_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UInstructionRow_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseInstructionSet_C::UpdateArgs(TArray<class FString>& InArguments, const class FString& CurrentLine, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_ParseCheatLineArguments_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UInstructionRow_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseInstructionSet_C", "UpdateArgs");

	Params::UCF_BaseInstructionSet_C_UpdateArgs_Params Parms{};

	Parms.InArguments = InArguments;
	Parms.CurrentLine = CurrentLine;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCheatOverlay_ReturnValue = CallFunc_GetCheatOverlay_ReturnValue;
	Parms.CallFunc_GetCheatOverlay_ReturnValue_1 = CallFunc_GetCheatOverlay_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ParseCheatLineArguments_ReturnValue = CallFunc_ParseCheatLineArguments_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.Set Instructions
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Instructions                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCF_BaseInstructionSet_C::Set_Instructions(TArray<class FString>& Instructions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseInstructionSet_C", "Set Instructions");

	Params::UCF_BaseInstructionSet_C_Set_Instructions_Params Parms{};

	Parms.Instructions = Instructions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_BaseInstructionSet_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseInstructionSet_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCF_BaseInstructionSet_C::BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseInstructionSet_C", "BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.UpdatePreview
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>              Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCF_BaseInstructionSet_C::UpdatePreview(TArray<class FString>& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseInstructionSet_C", "UpdatePreview");

	Params::UCF_BaseInstructionSet_C_UpdatePreview_Params Parms{};

	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.ExecuteUbergraph_CF_BaseInstructionSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_Event_Args                                                (ConstParm, ReferenceParm)
// TArray<class FString>              K2Node_CustomEvent_Instructions                                  (ConstParm, ReferenceParm)

void UCF_BaseInstructionSet_C::ExecuteUbergraph_CF_BaseInstructionSet(int32 EntryPoint, TArray<class FString>& K2Node_Event_Args, TArray<class FString>& K2Node_CustomEvent_Instructions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseInstructionSet_C", "ExecuteUbergraph_CF_BaseInstructionSet");

	Params::UCF_BaseInstructionSet_C_ExecuteUbergraph_CF_BaseInstructionSet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Args = K2Node_Event_Args;
	Parms.K2Node_CustomEvent_Instructions = K2Node_CustomEvent_Instructions;

	UObject::ProcessEvent(Func, &Parms);

}

}


