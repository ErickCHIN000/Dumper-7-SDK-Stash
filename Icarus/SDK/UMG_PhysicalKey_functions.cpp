#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_PhysicalKey.UMG_PhysicalKey_C
// (None)

class UClass* UUMG_PhysicalKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_PhysicalKey_C");

	return Clss;
}


// UMG_PhysicalKey_C UMG_PhysicalKey.Default__UMG_PhysicalKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_PhysicalKey_C* UUMG_PhysicalKey_C::GetDefaultObj()
{
	static class UUMG_PhysicalKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_PhysicalKey_C*>(UUMG_PhysicalKey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_PhysicalKey.UMG_PhysicalKey_C.Set Held
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Held                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhysicalKey_C::Set_Held(bool Held, float Alpha, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKey_C", "Set Held");

	Params::UUMG_PhysicalKey_C_Set_Held_Params Parms{};

	Parms.Held = Held;
	Parms.Alpha = Alpha;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PhysicalKey.UMG_PhysicalKey_C.SetHoldState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhysicalKey_C::SetHoldState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKey_C", "SetHoldState");

	Params::UUMG_PhysicalKey_C_SetHoldState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PhysicalKey.UMG_PhysicalKey_C.Set Key
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        InGamepadKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FKey                        InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Hold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsSet                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        NewKey                                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EControllerIconsSetting Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EControllerIconSet      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EControllerIconSet      Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EControllerIconSet      Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EControllerIconSet      Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EControllerIconSet      Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerUsingControllerStatic_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayNameForKey_ReturnValue                        (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FKey                        K2Node_Select_Default                                            (HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EControllerIconsSetting CallFunc_GetControllerIcons_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EControllerIconSet      K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeyIconData                CallFunc_GetIconsForKey_OutData                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class UTexture2D*                  K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhysicalKey_C::Set_Key(const struct FKey& InGamepadKey, const struct FKey& InKey, bool Hold, bool* IsSet, const struct FKey& NewKey, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, bool Temp_bool_Variable_1, enum class EControllerIconsSetting Temp_byte_Variable, enum class EControllerIconSet Temp_byte_Variable_1, enum class EControllerIconSet Temp_byte_Variable_2, enum class EControllerIconSet Temp_byte_Variable_3, enum class EControllerIconSet Temp_byte_Variable_4, enum class EControllerIconSet Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, class FText CallFunc_GetDisplayNameForKey_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FKey& K2Node_Select_Default, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, bool Temp_bool_Variable_4, enum class EControllerIconsSetting CallFunc_GetControllerIcons_ReturnValue, enum class EControllerIconSet K2Node_Select_Default_1, const struct FKeyIconData& CallFunc_GetIconsForKey_OutData, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UTexture2D* K2Node_Select_Default_3, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float K2Node_Select_Default_4, float K2Node_Select_Default_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKey_C", "Set Key");

	Params::UUMG_PhysicalKey_C_Set_Key_Params Parms{};

	Parms.InGamepadKey = InGamepadKey;
	Parms.InKey = InKey;
	Parms.Hold = Hold;
	Parms.NewKey = NewKey;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsPlayerUsingControllerStatic_ReturnValue = CallFunc_IsPlayerUsingControllerStatic_ReturnValue;
	Parms.CallFunc_GetDisplayNameForKey_ReturnValue = CallFunc_GetDisplayNameForKey_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetControllerIcons_ReturnValue = CallFunc_GetControllerIcons_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetIconsForKey_OutData = CallFunc_GetIconsForKey_OutData;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSet != nullptr)
		*IsSet = Parms.IsSet;

}


// Function UMG_PhysicalKey.UMG_PhysicalKey_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhysicalKey_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKey_C", "PreConstruct");

	Params::UUMG_PhysicalKey_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PhysicalKey.UMG_PhysicalKey_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_PhysicalKey_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKey_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_PhysicalKey.UMG_PhysicalKey_C.Update Hold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                Timer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_PhysicalKey_C::Update_Hold(const struct FTimerHandle& Timer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKey_C", "Update Hold");

	Params::UUMG_PhysicalKey_C_Update_Hold_Params Parms{};

	Parms.Timer = Timer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PhysicalKey.UMG_PhysicalKey_C.InputTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputTypeSetting       Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhysicalKey_C::InputTypeChanged(enum class EInputTypeSetting Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKey_C", "InputTypeChanged");

	Params::UUMG_PhysicalKey_C_InputTypeChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PhysicalKey.UMG_PhysicalKey_C.ExecuteUbergraph_UMG_PhysicalKey
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                K2Node_CustomEvent_Timer                                         (NoDestructor, HasGetValueTypeHash)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputTypeSetting       K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Key_IsSet                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhysicalKey_C::ExecuteUbergraph_UMG_PhysicalKey(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& K2Node_CustomEvent_Timer, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, enum class EInputTypeSetting K2Node_CustomEvent_Value, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Set_Key_IsSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKey_C", "ExecuteUbergraph_UMG_PhysicalKey");

	Params::UUMG_PhysicalKey_C_ExecuteUbergraph_UMG_PhysicalKey_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Timer = K2Node_CustomEvent_Timer;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Set_Key_IsSet = CallFunc_Set_Key_IsSet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PhysicalKey.UMG_PhysicalKey_C.KeyChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSet                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhysicalKey_C::KeyChanged__DelegateSignature(bool IsSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKey_C", "KeyChanged__DelegateSignature");

	Params::UUMG_PhysicalKey_C_KeyChanged__DelegateSignature_Params Parms{};

	Parms.IsSet = IsSet;

	UObject::ProcessEvent(Func, &Parms);

}

}


