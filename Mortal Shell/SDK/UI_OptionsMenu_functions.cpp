#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_OptionsMenu.UI_OptionsMenu_C
// (None)

class UClass* UUI_OptionsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_OptionsMenu_C");

	return Clss;
}


// UI_OptionsMenu_C UI_OptionsMenu.Default__UI_OptionsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_OptionsMenu_C* UUI_OptionsMenu_C::GetDefaultObj()
{
	static class UUI_OptionsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_OptionsMenu_C*>(UUI_OptionsMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_OptionsMenu.UI_OptionsMenu_C.StopListen_Confirm_Video
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::StopListen_Confirm_Video()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "StopListen_Confirm_Video");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.StopListen_ResetToDefault_Video
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::StopListen_ResetToDefault_Video()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "StopListen_ResetToDefault_Video");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.StopListen_ResetToDefault_Gameplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::StopListen_ResetToDefault_Gameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "StopListen_ResetToDefault_Gameplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.StopListen_ResetToDefault_Controls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::StopListen_ResetToDefault_Controls()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "StopListen_ResetToDefault_Controls");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.ClearAllTimers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTimerHandle>        K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::ClearAllTimers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FTimerHandle>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, const struct FTimerHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "ClearAllTimers");

	Params::UUI_OptionsMenu_C_ClearAllTimers_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.UpdateScrollingTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::UpdateScrollingTime(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "UpdateScrollingTime");

	Params::UUI_OptionsMenu_C_UpdateScrollingTime_Params Parms{};

	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.OpenEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::OpenEvents(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "OpenEvents");

	Params::UUI_OptionsMenu_C_OpenEvents_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.UpdatePrompts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::UpdatePrompts(bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "UpdatePrompts");

	Params::UUI_OptionsMenu_C_UpdatePrompts_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.SetMainMenuObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MainMenu_C*              UI_MainMenu                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::SetMainMenuObject(class UUI_MainMenu_C* UI_MainMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "SetMainMenuObject");

	Params::UUI_OptionsMenu_C_SetMainMenuObject_Params Parms{};

	Parms.UI_MainMenu = UI_MainMenu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.ListenForInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::ListenForInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "ListenForInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::NavConfirm(bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavConfirm");

	Params::UUI_OptionsMenu_C_NavConfirm_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavConfirm_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_OptionsMenu_C::NavConfirm_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavConfirm_Listen");

	Params::UUI_OptionsMenu_C_NavConfirm_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::NavRight(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavRight");

	Params::UUI_OptionsMenu_C_NavRight_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::NavLeft(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavLeft");

	Params::UUI_OptionsMenu_C_NavLeft_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavRight_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Released                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_OptionsMenu_C::NavRight_Listen(FDelegateProperty_ Pressed, FDelegateProperty_ Released)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavRight_Listen");

	Params::UUI_OptionsMenu_C_NavRight_Listen_Params Parms{};

	Parms.Pressed = Pressed;
	Parms.Released = Released;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavLeft_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Released                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_OptionsMenu_C::NavLeft_Listen(FDelegateProperty_ Pressed, FDelegateProperty_ Released)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavLeft_Listen");

	Params::UUI_OptionsMenu_C_NavLeft_Listen_Params Parms{};

	Parms.Pressed = Pressed;
	Parms.Released = Released;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUp_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event_Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Event_Released                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_OptionsMenu_C::NavUp_Listen(FDelegateProperty_ Event_Pressed, FDelegateProperty_ Event_Released)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUp_Listen");

	Params::UUI_OptionsMenu_C_NavUp_Listen_Params Parms{};

	Parms.Event_Pressed = Event_Pressed;
	Parms.Event_Released = Event_Released;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::NavUp(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUp");

	Params::UUI_OptionsMenu_C_NavUp_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_1 = K2Node_DynamicCast_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_2 = K2Node_DynamicCast_AsGame_Info_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SetIndex                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::NavDown(bool SetIndex, int32 Index, int32 Local_Index, bool Local_SetIndex, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavDown");

	Params::UUI_OptionsMenu_C_NavDown_Params Parms{};

	Parms.SetIndex = SetIndex;
	Parms.Index = Index;
	Parms.Local_Index = Local_Index;
	Parms.Local_SetIndex = Local_SetIndex;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_1 = K2Node_DynamicCast_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_2 = K2Node_DynamicCast_AsGame_Info_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavDown_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event_Preseed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Event_Released                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_OptionsMenu_C::NavDown_Listen(FDelegateProperty_ Event_Preseed, FDelegateProperty_ Event_Released)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavDown_Listen");

	Params::UUI_OptionsMenu_C_NavDown_Listen_Params Parms{};

	Parms.Event_Preseed = Event_Preseed;
	Parms.Event_Released = Event_Released;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUpperClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Nav_SetButton_CanNavigate                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncDirty_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::NavUpperClick(int32 Index, bool CallFunc_Nav_SetButton_CanNavigate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_IsDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsFramerateDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUpperClick");

	Params::UUI_OptionsMenu_C_NavUpperClick_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Nav_SetButton_CanNavigate = CallFunc_Nav_SetButton_CanNavigate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsVSyncDirty_ReturnValue = CallFunc_IsVSyncDirty_ReturnValue;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue = CallFunc_IsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue = CallFunc_IsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_IsDirty_ReturnValue = CallFunc_IsDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsFramerateDirty_ReturnValue = CallFunc_IsFramerateDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUnsetButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::NavUnsetButton(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUnsetButton");

	Params::UUI_OptionsMenu_C_NavUnsetButton_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_SelectButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::Nav_SelectButton(class USoundBase* Sound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_SelectButton");

	Params::UUI_OptionsMenu_C_Nav_SelectButton_Params Parms{};

	Parms.Sound = Sound;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUpperRight_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_OptionsMenu_C::NavUpperRight_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUpperRight_Listen");

	Params::UUI_OptionsMenu_C_NavUpperRight_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUpperLeft_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_OptionsMenu_C::NavUpperLeft_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUpperLeft_Listen");

	Params::UUI_OptionsMenu_C_NavUpperLeft_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Nav_SetButton_CanNavigate                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::OnOpen(bool Clicking, bool Local_Clicking, bool CallFunc_Nav_SetButton_CanNavigate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "OnOpen");

	Params::UUI_OptionsMenu_C_OnOpen_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.CallFunc_Nav_SetButton_CanNavigate = CallFunc_Nav_SetButton_CanNavigate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUpper_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncDirty_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Nav_SetButton_CanNavigate                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::NavUpper_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_IsDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsFramerateDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Nav_SetButton_CanNavigate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUpper_Right");

	Params::UUI_OptionsMenu_C_NavUpper_Right_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsVSyncDirty_ReturnValue = CallFunc_IsVSyncDirty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue = CallFunc_IsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue = CallFunc_IsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_IsDirty_ReturnValue = CallFunc_IsDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsFramerateDirty_ReturnValue = CallFunc_IsFramerateDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_1 = K2Node_DynamicCast_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_2 = K2Node_DynamicCast_AsGame_Info_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Nav_SetButton_CanNavigate = CallFunc_Nav_SetButton_CanNavigate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUpper_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncDirty_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Nav_SetButton_CanNavigate                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::NavUpper_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_IsDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsFramerateDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Nav_SetButton_CanNavigate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUpper_Left");

	Params::UUI_OptionsMenu_C_NavUpper_Left_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsVSyncDirty_ReturnValue = CallFunc_IsVSyncDirty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue = CallFunc_IsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue = CallFunc_IsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_IsDirty_ReturnValue = CallFunc_IsDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsFramerateDirty_ReturnValue = CallFunc_IsFramerateDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_1 = K2Node_DynamicCast_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_2 = K2Node_DynamicCast_AsGame_Info_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Nav_SetButton_CanNavigate = CallFunc_Nav_SetButton_CanNavigate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_SetActiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SetIndex                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::Nav_SetActiveWidget(bool SetIndex, int32 Index, int32 Local_Index, bool Local_SetIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_SetActiveWidget");

	Params::UUI_OptionsMenu_C_Nav_SetActiveWidget_Params Parms{};

	Parms.SetIndex = SetIndex;
	Parms.Index = Index;
	Parms.Local_Index = Local_Index;
	Parms.Local_SetIndex = Local_SetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_SetButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovering                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanNavigate                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsHovering                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CanNavigate                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsMenu_C::Nav_SetButton(bool IsHovering, bool SkipIndexCheck, int32 Index, class USoundBase* Sound, bool* CanNavigate, bool Local_IsHovering, int32 Local_Index_Temp, bool Local_CanNavigate, int32 Local_Index, bool Local_SkipIndexCheck, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_SetButton");

	Params::UUI_OptionsMenu_C_Nav_SetButton_Params Parms{};

	Parms.IsHovering = IsHovering;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.Index = Index;
	Parms.Sound = Sound;
	Parms.Local_IsHovering = Local_IsHovering;
	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.Local_CanNavigate = Local_CanNavigate;
	Parms.Local_Index = Local_Index;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CanNavigate != nullptr)
		*CanNavigate = Parms.CanNavigate;

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.GetButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_MainMenu_Button_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_OptionsMenu_C::GetButtons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "GetButtons");

	Params::UUI_OptionsMenu_C_GetButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CloseImmediately                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::OnClose(bool CloseImmediately, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "OnClose");

	Params::UUI_OptionsMenu_C_OnClose_Params Parms{};

	Parms.CloseImmediately = CloseImmediately;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::FadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "FadeIn");

	Params::UUI_OptionsMenu_C_FadeIn_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUpper_Right_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::NavUpper_Right_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUpper_Right_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUpper_Left_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::NavUpper_Left_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUpper_Left_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUpper_Left_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::NavUpper_Left_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUpper_Left_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavUpper_Right_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::NavUpper_Right_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavUpper_Right_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionsMenu_C::BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature");

	Params::UUI_OptionsMenu_C_BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Left_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Left_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Left_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Left_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Left_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Left_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Right_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Right_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Right_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Right_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Right_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Right_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Confirm_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Confirm_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Confirm_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Confirm_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Confirm_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Confirm_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavLeft_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::NavLeft_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavLeft_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavLeft_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::NavLeft_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavLeft_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavRight_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::NavRight_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavRight_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.NavRight_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::NavRight_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "NavRight_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Down_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Down_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Down_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Down_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Down_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Down_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Down_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Down_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Down_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Down_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Down_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Down_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Up_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Up_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Up_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Up_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Up_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Up_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Up_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Up_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Up_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.Nav_Up_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_OptionsMenu_C::Nav_Up_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "Nav_Up_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsMenu.UI_OptionsMenu_C.ExecuteUbergraph_UI_OptionsMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_UI_HoldTimer_ReturnValue                                (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_UI_HoldTimer_ReturnValue_1                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_11                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_10                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Nav_SetButton_CanNavigate                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Nav_SetButton_CanNavigate_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_9                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Nav_SetButton_CanNavigate_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Nav_SetButton_CanNavigate_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_UI_HoldTimer_ReturnValue_2                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_UI_HoldTimer_ReturnValue_3                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)

void UUI_OptionsMenu_C::ExecuteUbergraph_UI_OptionsMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, int32 K2Node_ComponentBoundEvent_Index_11, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_11, int32 K2Node_ComponentBoundEvent_Index_10, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_10, bool CallFunc_Nav_SetButton_CanNavigate, bool CallFunc_Nav_SetButton_CanNavigate_1, int32 K2Node_ComponentBoundEvent_Index_9, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_9, int32 K2Node_ComponentBoundEvent_Index_8, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_8, bool CallFunc_Nav_SetButton_CanNavigate_2, bool CallFunc_Nav_SetButton_CanNavigate_3, int32 K2Node_ComponentBoundEvent_Index_7, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_7, int32 K2Node_ComponentBoundEvent_Index_6, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_6, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsMenu_C", "ExecuteUbergraph_UI_OptionsMenu");

	Params::UUI_OptionsMenu_C_ExecuteUbergraph_UI_OptionsMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_UI_HoldTimer_ReturnValue = CallFunc_UI_HoldTimer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_UI_HoldTimer_ReturnValue_1 = CallFunc_UI_HoldTimer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_ComponentBoundEvent_Index_11 = K2Node_ComponentBoundEvent_Index_11;
	Parms.K2Node_ComponentBoundEvent_Widget_11 = K2Node_ComponentBoundEvent_Widget_11;
	Parms.K2Node_ComponentBoundEvent_Index_10 = K2Node_ComponentBoundEvent_Index_10;
	Parms.K2Node_ComponentBoundEvent_Widget_10 = K2Node_ComponentBoundEvent_Widget_10;
	Parms.CallFunc_Nav_SetButton_CanNavigate = CallFunc_Nav_SetButton_CanNavigate;
	Parms.CallFunc_Nav_SetButton_CanNavigate_1 = CallFunc_Nav_SetButton_CanNavigate_1;
	Parms.K2Node_ComponentBoundEvent_Index_9 = K2Node_ComponentBoundEvent_Index_9;
	Parms.K2Node_ComponentBoundEvent_Widget_9 = K2Node_ComponentBoundEvent_Widget_9;
	Parms.K2Node_ComponentBoundEvent_Index_8 = K2Node_ComponentBoundEvent_Index_8;
	Parms.K2Node_ComponentBoundEvent_Widget_8 = K2Node_ComponentBoundEvent_Widget_8;
	Parms.CallFunc_Nav_SetButton_CanNavigate_2 = CallFunc_Nav_SetButton_CanNavigate_2;
	Parms.CallFunc_Nav_SetButton_CanNavigate_3 = CallFunc_Nav_SetButton_CanNavigate_3;
	Parms.K2Node_ComponentBoundEvent_Index_7 = K2Node_ComponentBoundEvent_Index_7;
	Parms.K2Node_ComponentBoundEvent_Widget_7 = K2Node_ComponentBoundEvent_Widget_7;
	Parms.K2Node_ComponentBoundEvent_Index_6 = K2Node_ComponentBoundEvent_Index_6;
	Parms.K2Node_ComponentBoundEvent_Widget_6 = K2Node_ComponentBoundEvent_Widget_6;
	Parms.K2Node_ComponentBoundEvent_Index_5 = K2Node_ComponentBoundEvent_Index_5;
	Parms.K2Node_ComponentBoundEvent_Widget_5 = K2Node_ComponentBoundEvent_Widget_5;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_ComponentBoundEvent_Widget_4 = K2Node_ComponentBoundEvent_Widget_4;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.K2Node_ComponentBoundEvent_Widget_3 = K2Node_ComponentBoundEvent_Widget_3;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_UI_HoldTimer_ReturnValue_2 = CallFunc_UI_HoldTimer_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_UI_HoldTimer_ReturnValue_3 = CallFunc_UI_HoldTimer_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;

	UObject::ProcessEvent(Func, &Parms);

}

}


