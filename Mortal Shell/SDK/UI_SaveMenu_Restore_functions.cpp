#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SaveMenu_Restore.UI_SaveMenu_Restore_C
// (None)

class UClass* UUI_SaveMenu_Restore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SaveMenu_Restore_C");

	return Clss;
}


// UI_SaveMenu_Restore_C UI_SaveMenu_Restore.Default__UI_SaveMenu_Restore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SaveMenu_Restore_C* UUI_SaveMenu_Restore_C::GetDefaultObj()
{
	static class UUI_SaveMenu_Restore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SaveMenu_Restore_C*>(UUI_SaveMenu_Restore_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.SetRestoreInProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::SetRestoreInProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "SetRestoreInProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.GetText_RestoreMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_SaveMenu_Restore_C::GetText_RestoreMessage(class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "GetText_RestoreMessage");

	Params::UUI_SaveMenu_Restore_C_GetText_RestoreMessage_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.GetBackupDate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetDateTimeText_ReturnValue                             (None)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SaveMenu_Restore_C::GetBackupDate(class FText CallFunc_GetDateTimeText_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "GetBackupDate");

	Params::UUI_SaveMenu_Restore_C_GetBackupDate_Params Parms{};

	Parms.CallFunc_GetDateTimeText_ReturnValue = CallFunc_GetDateTimeText_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.ResetButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SaveMenu_Restore_C::ResetButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UButton* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "ResetButtons");

	Params::UUI_SaveMenu_Restore_C_ResetButtons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.NavSetButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index_Current                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SaveMenu_Restore_C::NavSetButton(int32 Index_Current, bool SkipSound, bool Local_SkipSound, int32 Local_Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetButtons_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "NavSetButton");

	Params::UUI_SaveMenu_Restore_C_NavSetButton_Params Parms{};

	Parms.Index_Current = Index_Current;
	Parms.SkipSound = SkipSound;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_Index = Local_Index;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.GetButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UButton*>             Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_SaveMenu_Restore_C::GetButtons(TArray<class UButton*>* Array, TArray<class UButton*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "GetButtons");

	Params::UUI_SaveMenu_Restore_C_GetButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.Nav_Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::Nav_Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "Nav_Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.Nav_Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::Nav_Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "Nav_Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_SaveMenu_Restore_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.ExecuteUbergraph_UI_SaveMenu_Restore
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SaveMenu_Restore_C::ExecuteUbergraph_UI_SaveMenu_Restore(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "ExecuteUbergraph_UI_SaveMenu_Restore");

	Params::UUI_SaveMenu_Restore_C_ExecuteUbergraph_UI_SaveMenu_Restore_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SaveMenu_Restore.UI_SaveMenu_Restore_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SaveMenu_Restore_C*      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SaveMenu_Restore_C::OnClick__DelegateSignature(int32 Index, int32 Slot, class UUI_SaveMenu_Restore_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SaveMenu_Restore_C", "OnClick__DelegateSignature");

	Params::UUI_SaveMenu_Restore_C_OnClick__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Slot = Slot;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


