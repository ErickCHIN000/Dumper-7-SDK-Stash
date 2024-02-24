#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C
// (None)

class UClass* UUMG_KeyBind_TextOnly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_KeyBind_TextOnly_C");

	return Clss;
}


// UMG_KeyBind_TextOnly_C UMG_KeyBind_TextOnly.Default__UMG_KeyBind_TextOnly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_KeyBind_TextOnly_C* UUMG_KeyBind_TextOnly_C::GetDefaultObj()
{
	static class UUMG_KeyBind_TextOnly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_KeyBind_TextOnly_C*>(UUMG_KeyBind_TextOnly_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.GetDefaultKey
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

void UUMG_KeyBind_TextOnly_C::GetDefaultKey(struct FKey* Key, class UGameUserSettingsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetDefaultAxisMapping_Paths, const struct FInputAxisKeyMapping& CallFunc_GetDefaultAxisMapping_ReturnValue, enum class EValid CallFunc_GetDefaultActionMapping_Paths, const struct FInputActionKeyMapping& CallFunc_GetDefaultActionMapping_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyBind_TextOnly_C", "GetDefaultKey");

	Params::UUMG_KeyBind_TextOnly_C_GetDefaultKey_Params Parms{};

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


// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.GetKey
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

void UUMG_KeyBind_TextOnly_C::GetKey(struct FKey* Key, class UGameUserSettingsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, const struct FInputActionKeyMapping& CallFunc_GetCurrentActionMapping_Out, enum class EValid CallFunc_GetCurrentActionMapping_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FInputAxisKeyMapping& CallFunc_GetCurrentAxisMapping_Out, enum class EValid CallFunc_GetCurrentAxisMapping_Paths, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyBind_TextOnly_C", "GetKey");

	Params::UUMG_KeyBind_TextOnly_C_GetKey_Params Parms{};

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


// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.Set Keybind
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

void UUMG_KeyBind_TextOnly_C::Set_Keybind(const struct FKeybindingsRowHandle& InKey, bool Hold, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, const struct FKey& CallFunc_GetKey_Key, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, bool CallFunc_Set_Key_IsSet, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyBind_TextOnly_C", "Set Keybind");

	Params::UUMG_KeyBind_TextOnly_C_Set_Keybind_Params Parms{};

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


// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_KeyBind_TextOnly_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyBind_TextOnly_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.Input Type Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputTypeSetting       Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_KeyBind_TextOnly_C::Input_Type_Changed(enum class EInputTypeSetting Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyBind_TextOnly_C", "Input Type Changed");

	Params::UUMG_KeyBind_TextOnly_C_Input_Type_Changed_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.ExecuteUbergraph_UMG_KeyBind_TextOnly
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputTypeSetting       K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_KeyBind_TextOnly_C::ExecuteUbergraph_UMG_KeyBind_TextOnly(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, enum class EInputTypeSetting K2Node_CustomEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyBind_TextOnly_C", "ExecuteUbergraph_UMG_KeyBind_TextOnly");

	Params::UUMG_KeyBind_TextOnly_C_ExecuteUbergraph_UMG_KeyBind_TextOnly_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.OnKeyBindChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSet                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_KeyBind_TextOnly_C::OnKeyBindChanged__DelegateSignature(bool IsSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyBind_TextOnly_C", "OnKeyBindChanged__DelegateSignature");

	Params::UUMG_KeyBind_TextOnly_C_OnKeyBindChanged__DelegateSignature_Params Parms{};

	Parms.IsSet = IsSet;

	UObject::ProcessEvent(Func, &Parms);

}

}


