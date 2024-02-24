#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C
// (None)

class UClass* UUI_VideoSettings_Confirm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_VideoSettings_Confirm_C");

	return Clss;
}


// UI_VideoSettings_Confirm_C UI_VideoSettings_Confirm.Default__UI_VideoSettings_Confirm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_VideoSettings_Confirm_C* UUI_VideoSettings_Confirm_C::GetDefaultObj()
{
	static class UUI_VideoSettings_Confirm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_VideoSettings_Confirm_C*>(UUI_VideoSettings_Confirm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.Discard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VideoSettings_Confirm_C::Discard(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "Discard");

	Params::UUI_VideoSettings_Confirm_C_Discard_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.Apply
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VideoSettings_Confirm_C::Apply(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "Apply");

	Params::UUI_VideoSettings_Confirm_C_Apply_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.ResetButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_VideoSettings_Confirm_C::ResetButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UButton* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "ResetButtons");

	Params::UUI_VideoSettings_Confirm_C_ResetButtons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.NavSetButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index_Current                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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

void UUI_VideoSettings_Confirm_C::NavSetButton(int32 Index_Current, int32 Local_Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetButtons_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "NavSetButton");

	Params::UUI_VideoSettings_Confirm_C_NavSetButton_Params Parms{};

	Parms.Index_Current = Index_Current;
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


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.GetButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UButton*>             Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_VideoSettings_Confirm_C::GetButtons(TArray<class UButton*>* Array, TArray<class UButton*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "GetButtons");

	Params::UUI_VideoSettings_Confirm_C_GetButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.Nav_Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::Nav_Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "Nav_Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.Nav_Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::Nav_Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "Nav_Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.Confirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::Confirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "Confirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.OnAnimEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::OnAnimEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "OnAnimEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.UnbindAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Confirm_C::UnbindAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "UnbindAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.ExecuteUbergraph_UI_VideoSettings_Confirm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VideoSettings_Confirm_C::ExecuteUbergraph_UI_VideoSettings_Confirm(int32 EntryPoint, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "ExecuteUbergraph_UI_VideoSettings_Confirm");

	Params::UUI_VideoSettings_Confirm_C_ExecuteUbergraph_UI_VideoSettings_Confirm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VideoSettings_Confirm_C::OnClick__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Confirm_C", "OnClick__DelegateSignature");

	Params::UUI_VideoSettings_Confirm_C_OnClick__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


