#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C
// (None)

class UClass* UUI_ConfirmButtonPressAndHold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ConfirmButtonPressAndHold_C");

	return Clss;
}


// UI_ConfirmButtonPressAndHold_C UI_ConfirmButtonPressAndHold.Default__UI_ConfirmButtonPressAndHold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ConfirmButtonPressAndHold_C* UUI_ConfirmButtonPressAndHold_C::GetDefaultObj()
{
	static class UUI_ConfirmButtonPressAndHold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ConfirmButtonPressAndHold_C*>(UUI_ConfirmButtonPressAndHold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.ResetPromptProgress_All
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::ResetPromptProgress_All()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "ResetPromptProgress_All");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.SetColorOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_ConfirmButtonPressAndHold_C::SetColorOpacity(bool Pressed, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "SetColorOpacity");

	Params::UUI_ConfirmButtonPressAndHold_C_SetColorOpacity_Params Parms{};

	Parms.Pressed = Pressed;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.OnButtonReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConfirmButtonPressAndHold_C::OnButtonReleased(float CallFunc_PauseAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "OnButtonReleased");

	Params::UUI_ConfirmButtonPressAndHold_C_OnButtonReleased_Params Parms{};

	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.ResetPromptProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ParameterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConfirmButtonPressAndHold_C::ResetPromptProgress(class UImage* Target, class FName ParameterName, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "ResetPromptProgress");

	Params::UUI_ConfirmButtonPressAndHold_C_ResetPromptProgress_Params Parms{};

	Parms.Target = Target;
	Parms.ParameterName = ParameterName;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.GetIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetButtonIcon_Texture                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConfirmButtonPressAndHold_C::GetIcon(class UTexture2D** Texture, class UTexture2D* CallFunc_GetButtonIcon_Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "GetIcon");

	Params::UUI_ConfirmButtonPressAndHold_C_GetIcon_Params Parms{};

	Parms.CallFunc_GetButtonIcon_Texture = CallFunc_GetButtonIcon_Texture;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.PressStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::PressStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "PressStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.OnReleased_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::OnReleased_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "OnReleased_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConfirmButtonPressAndHold_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "Tick");

	Params::UUI_ConfirmButtonPressAndHold_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.UpdateKeyboardMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::UpdateKeyboardMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "UpdateKeyboardMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.OnKeyboardModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ConfirmButtonPressAndHold_C::OnKeyboardModeChanged(bool KeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "OnKeyboardModeChanged");

	Params::UUI_ConfirmButtonPressAndHold_C_OnKeyboardModeChanged_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.RefreshInputType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::RefreshInputType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "RefreshInputType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.UpdateButtonTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::UpdateButtonTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "UpdateButtonTexture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.Deactivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.OnReleased_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::OnReleased_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "OnReleased_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.RemovePressedAnimBinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::RemovePressedAnimBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "RemovePressedAnimBinding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ConfirmButtonPressAndHold_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "PreConstruct");

	Params::UUI_ConfirmButtonPressAndHold_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.ExecuteUbergraph_UI_ConfirmButtonPressAndHold
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetVirtualAcceptKey_ReturnValue                         (HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_KeyboardMode                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetIcon_Texture                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UTexture2D*                  CallFunc_GetIcon_Texture_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_2          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetVirtualAcceptKey_ReturnValue_1                       (HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ConfirmButtonPressAndHold_C::ExecuteUbergraph_UI_ConfirmButtonPressAndHold(int32 EntryPoint, const struct FKey& CallFunc_GetVirtualAcceptKey_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsInputKeyDown_ReturnValue_1, bool CallFunc_IsInputKeyDown_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_2, bool K2Node_CustomEvent_KeyboardMode, class UTexture2D* CallFunc_GetIcon_Texture, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTexture2D* CallFunc_GetIcon_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_2, bool CallFunc_BooleanAND_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_2, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue_3, const struct FKey& CallFunc_GetVirtualAcceptKey_ReturnValue_1, bool CallFunc_IsInputKeyDown_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "ExecuteUbergraph_UI_ConfirmButtonPressAndHold");

	Params::UUI_ConfirmButtonPressAndHold_C_ExecuteUbergraph_UI_ConfirmButtonPressAndHold_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVirtualAcceptKey_ReturnValue = CallFunc_GetVirtualAcceptKey_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsInputKeyDown_ReturnValue = CallFunc_IsInputKeyDown_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_1 = CallFunc_IsInputKeyDown_ReturnValue_1;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_2 = CallFunc_IsInputKeyDown_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue = CallFunc_IsAnyAnimationPlaying_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CustomEvent_KeyboardMode = K2Node_CustomEvent_KeyboardMode;
	Parms.CallFunc_GetIcon_Texture = CallFunc_GetIcon_Texture;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetIcon_Texture_1 = CallFunc_GetIcon_Texture_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1 = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_2 = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetVirtualAcceptKey_ReturnValue_1 = CallFunc_GetVirtualAcceptKey_ReturnValue_1;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_3 = CallFunc_IsInputKeyDown_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.OnPressStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::OnPressStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "OnPressStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConfirmButtonPressAndHold_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConfirmButtonPressAndHold_C", "OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


