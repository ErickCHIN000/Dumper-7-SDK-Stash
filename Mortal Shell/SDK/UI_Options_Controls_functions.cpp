#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Options_Controls.UI_Options_Controls_C
// (None)

class UClass* UUI_Options_Controls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Options_Controls_C");

	return Clss;
}


// UI_Options_Controls_C UI_Options_Controls.Default__UI_Options_Controls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Options_Controls_C* UUI_Options_Controls_C::GetDefaultObj()
{
	static class UUI_Options_Controls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Options_Controls_C*>(UUI_Options_Controls_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Options_Controls.UI_Options_Controls_C.ResetInputActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAction>        CallFunc_GetAllRebindableInputActions_Actions                    (ReferenceParm, HasGetValueTypeHash)
// struct FInputAction                CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_RemoveActionBinding_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAction                CallFunc_Array_Get_Item_1                                        (None)
// struct FInputAction                CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Options_Controls_C::ResetInputActions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, TArray<struct FInputAction>& CallFunc_GetAllRebindableInputActions_Actions, const struct FInputAction& CallFunc_Array_Get_Item, bool CallFunc_RemoveActionBinding_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FInputAction& CallFunc_Array_Get_Item_1, const struct FInputAction& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "ResetInputActions");

	Params::UUI_Options_Controls_C_ResetInputActions_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetAllRebindableInputActions_Actions = CallFunc_GetAllRebindableInputActions_Actions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_RemoveActionBinding_ReturnValue = CallFunc_RemoveActionBinding_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.ResetInputAxis
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxis                  CallFunc_Array_Get_Item                                          (None)
// struct FInputAxis                  CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputAxis>          CallFunc_GetInputAxis_Array                                      (ReferenceParm, HasGetValueTypeHash)

void UUI_Options_Controls_C::ResetInputAxis(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInputAxis& CallFunc_Array_Get_Item, const struct FInputAxis& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FInputAxis>& CallFunc_GetInputAxis_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "ResetInputAxis");

	Params::UUI_Options_Controls_C_ResetInputAxis_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetInputAxis_Array = CallFunc_GetInputAxis_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.Get_Text_ControllerScheme
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EPlatform               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UUI_Options_Controls_C::Get_Text_ControllerScheme(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "Get_Text_ControllerScheme");

	Params::UUI_Options_Controls_C_Get_Text_ControllerScheme_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Options_Controls.UI_Options_Controls_C.StopListen_ResetToDefault_KeyBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_Controls_C::StopListen_ResetToDefault_KeyBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "StopListen_ResetToDefault_KeyBindings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Options_Controls.UI_Options_Controls_C.ResetControllerButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_KeyBind_New_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Options_Controls_C::ResetControllerButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_KeyBind_New_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "ResetControllerButtons");

	Params::UUI_Options_Controls_C_ResetControllerButtons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.SetVisibilityBasedOnPlatform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Options_Controls_C::SetVisibilityBasedOnPlatform(bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "SetVisibilityBasedOnPlatform");

	Params::UUI_Options_Controls_C_SetVisibilityBasedOnPlatform_Params Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.Get_Text_Controller
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EPlatform               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UUI_Options_Controls_C::Get_Text_Controller(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "Get_Text_Controller");

	Params::UUI_Options_Controls_C_Get_Text_Controller_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Options_Controls.UI_Options_Controls_C.GetPlatform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsConsole_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Options_Controls_C::GetPlatform(bool CallFunc_IsConsole_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "GetPlatform");

	Params::UUI_Options_Controls_C_GetPlatform_Params Parms{};

	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.ConfirmSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_Controls_C::ConfirmSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "ConfirmSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Options_Controls.UI_Options_Controls_C.ClickSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_Controls_C::ClickSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "ClickSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Options_Controls.UI_Options_Controls_C.SetWaitingForKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsWaitingForKey_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::SetWaitingForKey(bool IsWaitingForKey_, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "SetWaitingForKey");

	Params::UUI_Options_Controls_C_SetWaitingForKey_Params Parms{};

	Parms.IsWaitingForKey_ = IsWaitingForKey_;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.Get Current Key Bind
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_KeyBind_New_C*          AsWBP_Key_Bind_New                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_KeyBind_New_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::Get_Current_Key_Bind(class UWBP_KeyBind_New_C** AsWBP_Key_Bind_New, class UWBP_KeyBind_New_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "Get Current Key Bind");

	Params::UUI_Options_Controls_C_Get_Current_Key_Bind_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (AsWBP_Key_Bind_New != nullptr)
		*AsWBP_Key_Bind_New = Parms.AsWBP_Key_Bind_New;

}


// Function UI_Options_Controls.UI_Options_Controls_C.CreateInputDetector
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Rebind_KeyType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Rebind_InputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWBP_KeyBind_New_C*          UI_KeyBind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_InputDetector_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAction>        CallFunc_GetAllRebindableInputActions_Actions                    (ReferenceParm, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::CreateInputDetector(const class FString& Rebind_KeyType, const class FString& Rebind_InputType, class UWBP_KeyBind_New_C* UI_KeyBind, class UUI_InputDetector_C* CallFunc_Create_ReturnValue, TArray<struct FInputAction>& CallFunc_GetAllRebindableInputActions_Actions, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "CreateInputDetector");

	Params::UUI_Options_Controls_C_CreateInputDetector_Params Parms{};

	Parms.Rebind_KeyType = Rebind_KeyType;
	Parms.Rebind_InputType = Rebind_InputType;
	Parms.UI_KeyBind = UI_KeyBind;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllRebindableInputActions_Actions = CallFunc_GetAllRebindableInputActions_Actions;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.ChangeControllerKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KeyBind_New_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Options_Controls_C::ChangeControllerKey(class UWBP_KeyBind_New_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "ChangeControllerKey");

	Params::UUI_Options_Controls_C_ChangeControllerKey_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.GetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_Options_Controls_C::GetIndex(int32 Index, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "GetIndex");

	Params::UUI_Options_Controls_C_GetIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Options_Controls.UI_Options_Controls_C.Nav_Set_UpDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovering                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_KeyBind_New_C*          Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Hovering                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_SelectedIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_KeyBind_New_C*          Local_SelectedWidget                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetIndex_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_KeyBind_New_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Options_Controls_C::Nav_Set_UpDown(bool IsHovering, bool UseWidget, class UWBP_KeyBind_New_C* Widget, bool CustomIndex, int32 Index, int32 Delta, bool Local_Hovering, int32 Local_Delta, int32 Local_SelectedIndex, bool Local_CustomIndex, class UWBP_KeyBind_New_C* Local_SelectedWidget, bool Local_UseWidget, int32 Local_Index, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetIndex_ReturnValue, class UWBP_KeyBind_New_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "Nav_Set_UpDown");

	Params::UUI_Options_Controls_C_Nav_Set_UpDown_Params Parms{};

	Parms.IsHovering = IsHovering;
	Parms.UseWidget = UseWidget;
	Parms.Widget = Widget;
	Parms.CustomIndex = CustomIndex;
	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Local_Hovering = Local_Hovering;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SelectedIndex = Local_SelectedIndex;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_SelectedWidget = Local_SelectedWidget;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.Local_Index = Local_Index;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetIndex_ReturnValue = CallFunc_GetIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.SetIndexMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::SetIndexMax(int32 CallFunc_Array_LastIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "SetIndexMax");

	Params::UUI_Options_Controls_C_SetIndexMax_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.CreateControls
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_InputName                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_GetPhotoModeEnabled_Enabled                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputAxis                  CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_KeyBind_New_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_KeyBind_New_C*          CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxis>          CallFunc_GetInputAxis_Array                                      (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct FInputAction>CallFunc_GetInputActions_InputActionsKBM                         (None)
// TMap<class FString, struct FInputAction>CallFunc_GetInputActions_InputActionController                   (None)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FInputAction                CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputAction                CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::CreateControls(class FName Local_InputName, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FText Temp_text_Variable_3, int32 Temp_int_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default, bool CallFunc_GetPhotoModeEnabled_Enabled, class FName Temp_name_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FInputAxis& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWBP_KeyBind_New_C* CallFunc_Create_ReturnValue, class UWBP_KeyBind_New_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FInputAxis>& CallFunc_GetInputAxis_Array, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TMap<class FString, struct FInputAction> CallFunc_GetInputActions_InputActionsKBM, TMap<class FString, struct FInputAction> CallFunc_GetInputActions_InputActionController, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_Array_Add_ReturnValue, class FName Temp_name_Variable_3, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FInputAction& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FInputAction& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 Temp_int_Variable_1, class FName K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "CreateControls");

	Params::UUI_Options_Controls_C_CreateControls_Params Parms{};

	Parms.Local_InputName = Local_InputName;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPhotoModeEnabled_Enabled = CallFunc_GetPhotoModeEnabled_Enabled;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetInputAxis_Array = CallFunc_GetInputAxis_Array;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetInputActions_InputActionsKBM = CallFunc_GetInputActions_InputActionsKBM;
	Parms.CallFunc_GetInputActions_InputActionController = CallFunc_GetInputActions_InputActionController;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Options_Controls_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "PreConstruct");

	Params::UUI_Options_Controls_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.Navigate_UpDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::Navigate_UpDown(bool CustomIndex, int32 Index, int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "Navigate_UpDown");

	Params::UUI_Options_Controls_C_Navigate_UpDown_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.Index = Index;
	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.OnControllerButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_Controls_C::OnControllerButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnControllerButtonPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Options_Controls.UI_Options_Controls_C.OnControllerKeyChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_Controls_C::OnControllerKeyChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnControllerKeyChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Options_Controls.UI_Options_Controls_C.OnKeyboardButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWBP_KeyBind_New_C*          KeyBind                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::OnKeyboardButtonClicked(const class FString& InputType, class UWBP_KeyBind_New_C* KeyBind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnKeyboardButtonClicked");

	Params::UUI_Options_Controls_C_OnKeyboardButtonClicked_Params Parms{};

	Parms.InputType = InputType;
	Parms.KeyBind = KeyBind;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.OnKBMKeyChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_Controls_C::OnKBMKeyChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnKBMKeyChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Options_Controls.UI_Options_Controls_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_Controls_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Options_Controls.UI_Options_Controls_C.InterruptKeyChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_Controls_C::InterruptKeyChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "InterruptKeyChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Options_Controls.UI_Options_Controls_C.OnControllerButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KeyBind_New_C*          KeyBind                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::OnControllerButtonClicked(class UWBP_KeyBind_New_C* KeyBind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnControllerButtonClicked");

	Params::UUI_Options_Controls_C_OnControllerButtonClicked_Params Parms{};

	Parms.KeyBind = KeyBind;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.OnControllerButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KeyBind_New_C*          KeyBind                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::OnControllerButtonHovered(class UWBP_KeyBind_New_C* KeyBind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnControllerButtonHovered");

	Params::UUI_Options_Controls_C_OnControllerButtonHovered_Params Parms{};

	Parms.KeyBind = KeyBind;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Controls.UI_Options_Controls_C.OnControllerButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_Controls_C::OnControllerButtonUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnControllerButtonUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Options_Controls.UI_Options_Controls_C.OnResetToDefault_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_Controls_C::OnResetToDefault_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnResetToDefault_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Options_Controls.UI_Options_Controls_C.OnResetToDefault_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_Controls_C::OnResetToDefault_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnResetToDefault_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Options_Controls.UI_Options_Controls_C.ExecuteUbergraph_UI_Options_Controls
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CustomIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Delta                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_KeyBind_New_C*          CallFunc_Get_Current_Key_Bind_AsWBP_Key_Bind_New                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_InputType                                     (ZeroConstructor, HasGetValueTypeHash)
// class UWBP_KeyBind_New_C*          K2Node_CustomEvent_KeyBind_2                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_KeyBind_New_C*          K2Node_CustomEvent_KeyBind_1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_KeyBind_New_C*          K2Node_CustomEvent_KeyBind                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGamepadAttached_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Options_Controls_C::ExecuteUbergraph_UI_Options_Controls(int32 EntryPoint, bool K2Node_CustomEvent_CustomIndex, int32 K2Node_CustomEvent_Index, int32 K2Node_CustomEvent_Delta, class UWBP_KeyBind_New_C* CallFunc_Get_Current_Key_Bind_AsWBP_Key_Bind_New, const class FString& K2Node_CustomEvent_InputType, class UWBP_KeyBind_New_C* K2Node_CustomEvent_KeyBind_2, bool K2Node_Event_IsDesignTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UWBP_KeyBind_New_C* K2Node_CustomEvent_KeyBind_1, class UWBP_KeyBind_New_C* K2Node_CustomEvent_KeyBind, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsGamepadAttached_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_3, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Controls_C", "ExecuteUbergraph_UI_Options_Controls");

	Params::UUI_Options_Controls_C_ExecuteUbergraph_UI_Options_Controls_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_CustomIndex = K2Node_CustomEvent_CustomIndex;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_Delta = K2Node_CustomEvent_Delta;
	Parms.CallFunc_Get_Current_Key_Bind_AsWBP_Key_Bind_New = CallFunc_Get_Current_Key_Bind_AsWBP_Key_Bind_New;
	Parms.K2Node_CustomEvent_InputType = K2Node_CustomEvent_InputType;
	Parms.K2Node_CustomEvent_KeyBind_2 = K2Node_CustomEvent_KeyBind_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_KeyBind_1 = K2Node_CustomEvent_KeyBind_1;
	Parms.K2Node_CustomEvent_KeyBind = K2Node_CustomEvent_KeyBind;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_1 = K2Node_DynamicCast_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsGamepadAttached_ReturnValue = CallFunc_IsGamepadAttached_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_2 = K2Node_DynamicCast_AsGame_Info_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_3 = K2Node_DynamicCast_AsGame_Info_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


