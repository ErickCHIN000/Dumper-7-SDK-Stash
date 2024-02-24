#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_KeyBind.UMG_Keybind_C
// (None)

class UClass* UUMG_Keybind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Keybind_C");

	return Clss;
}


// UMG_Keybind_C UMG_KeyBind.Default__UMG_Keybind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Keybind_C* UUMG_Keybind_C::GetDefaultObj()
{
	static class UUMG_Keybind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Keybind_C*>(UUMG_Keybind_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_KeyBind.UMG_Keybind_C.GetDefaultKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (Parm, OutParm, HasGetValueTypeHash)
// class UGameUserSettingsSubsystem*  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerUsingControllerStatic_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKeybindData                CallFunc_GetKeybindingsStruct_Keybindings                        (None)
// enum class EValid                  CallFunc_GetKeybindingsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetDefaultAxisMapping_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        CallFunc_GetDefaultAxisMapping_ReturnValue                       (None)
// enum class EValid                  CallFunc_GetDefaultActionMapping_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetDefaultActionMapping_ReturnValue                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Keybind_C::GetDefaultKey(struct FKey* Key, class UGameUserSettingsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetDefaultAxisMapping_Paths, const struct FInputAxisKeyMapping& CallFunc_GetDefaultAxisMapping_ReturnValue, enum class EValid CallFunc_GetDefaultActionMapping_Paths, const struct FInputActionKeyMapping& CallFunc_GetDefaultActionMapping_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Keybind_C", "GetDefaultKey");

	Params::UUMG_Keybind_C_GetDefaultKey_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsPlayerUsingControllerStatic_ReturnValue = CallFunc_IsPlayerUsingControllerStatic_ReturnValue;
	Parms.CallFunc_GetKeybindingsStruct_Keybindings = CallFunc_GetKeybindingsStruct_Keybindings;
	Parms.CallFunc_GetKeybindingsStruct_Paths = CallFunc_GetKeybindingsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDefaultAxisMapping_Paths = CallFunc_GetDefaultAxisMapping_Paths;
	Parms.CallFunc_GetDefaultAxisMapping_ReturnValue = CallFunc_GetDefaultAxisMapping_ReturnValue;
	Parms.CallFunc_GetDefaultActionMapping_Paths = CallFunc_GetDefaultActionMapping_Paths;
	Parms.CallFunc_GetDefaultActionMapping_ReturnValue = CallFunc_GetDefaultActionMapping_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

}


// Function UMG_KeyBind.UMG_Keybind_C.GetKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (Parm, OutParm, HasGetValueTypeHash)
// class UGameUserSettingsSubsystem*  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeybindData                CallFunc_GetKeybindingsStruct_Keybindings                        (None)
// enum class EValid                  CallFunc_GetKeybindingsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetCurrentActionMapping_Out                             (None)
// enum class EValid                  CallFunc_GetCurrentActionMapping_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputAxisKeyMapping        CallFunc_GetCurrentAxisMapping_Out                               (None)
// enum class EValid                  CallFunc_GetCurrentAxisMapping_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Keybind_C::GetKey(struct FKey* Key, class UGameUserSettingsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, const struct FInputActionKeyMapping& CallFunc_GetCurrentActionMapping_Out, enum class EValid CallFunc_GetCurrentActionMapping_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FInputAxisKeyMapping& CallFunc_GetCurrentAxisMapping_Out, enum class EValid CallFunc_GetCurrentAxisMapping_Paths, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Keybind_C", "GetKey");

	Params::UUMG_Keybind_C_GetKey_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetKeybindingsStruct_Keybindings = CallFunc_GetKeybindingsStruct_Keybindings;
	Parms.CallFunc_GetKeybindingsStruct_Paths = CallFunc_GetKeybindingsStruct_Paths;
	Parms.CallFunc_GetCurrentActionMapping_Out = CallFunc_GetCurrentActionMapping_Out;
	Parms.CallFunc_GetCurrentActionMapping_Paths = CallFunc_GetCurrentActionMapping_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetCurrentAxisMapping_Out = CallFunc_GetCurrentAxisMapping_Out;
	Parms.CallFunc_GetCurrentAxisMapping_Paths = CallFunc_GetCurrentAxisMapping_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

}


// Function UMG_KeyBind.UMG_Keybind_C.Set Keybind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeybindingsRowHandle       InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Hold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerUsingControllerStatic_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_Key                                              (HasGetValueTypeHash)
// struct FKeybindData                CallFunc_GetKeybindingsStruct_Keybindings                        (None)
// enum class EValid                  CallFunc_GetKeybindingsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Key_IsSet                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Keybind_C::Set_Keybind(const struct FKeybindingsRowHandle& InKey, bool Hold, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, const struct FKey& CallFunc_GetKey_Key, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, bool CallFunc_Set_Key_IsSet, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Keybind_C", "Set Keybind");

	Params::UUMG_Keybind_C_Set_Keybind_Params Parms{};

	Parms.InKey = InKey;
	Parms.Hold = Hold;
	Parms.CallFunc_IsPlayerUsingControllerStatic_ReturnValue = CallFunc_IsPlayerUsingControllerStatic_ReturnValue;
	Parms.CallFunc_GetKey_Key = CallFunc_GetKey_Key;
	Parms.CallFunc_GetKeybindingsStruct_Keybindings = CallFunc_GetKeybindingsStruct_Keybindings;
	Parms.CallFunc_GetKeybindingsStruct_Paths = CallFunc_GetKeybindingsStruct_Paths;
	Parms.CallFunc_Set_Key_IsSet = CallFunc_Set_Key_IsSet;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeyBind.UMG_Keybind_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Keybind_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Keybind_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_KeyBind.UMG_Keybind_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Keybind_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Keybind_C", "Tick");

	Params::UUMG_Keybind_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeyBind.UMG_Keybind_C.Input Type Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputTypeSetting       Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Keybind_C::Input_Type_Changed(enum class EInputTypeSetting Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Keybind_C", "Input Type Changed");

	Params::UUMG_Keybind_C_Input_Type_Changed_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeyBind.UMG_Keybind_C.ExecuteUbergraph_UMG_Keybind
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputTypeSetting       K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_GetHoldTimer_TimerHandle                                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHoldTimer_bValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Keybind_C::ExecuteUbergraph_UMG_Keybind(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, enum class EInputTypeSetting K2Node_CustomEvent_Value, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_GetHoldTimer_TimerHandle, bool CallFunc_GetHoldTimer_bValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Keybind_C", "ExecuteUbergraph_UMG_Keybind");

	Params::UUMG_Keybind_C_ExecuteUbergraph_UMG_Keybind_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetHoldTimer_TimerHandle = CallFunc_GetHoldTimer_TimerHandle;
	Parms.CallFunc_GetHoldTimer_bValid = CallFunc_GetHoldTimer_bValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeyBind.UMG_Keybind_C.OnKeyBindChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSet                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Keybind_C::OnKeyBindChanged__DelegateSignature(bool IsSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Keybind_C", "OnKeyBindChanged__DelegateSignature");

	Params::UUMG_Keybind_C_OnKeyBindChanged__DelegateSignature_Params Parms{};

	Parms.IsSet = IsSet;

	UObject::ProcessEvent(Func, &Parms);

}

}


