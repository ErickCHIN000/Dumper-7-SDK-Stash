#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C
// (None)

class UClass* UUI_ShellUpgradeLorePanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ShellUpgradeLorePanel_C");

	return Clss;
}


// UI_ShellUpgradeLorePanel_C UI_ShellUpgradeLorePanel.Default__UI_ShellUpgradeLorePanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ShellUpgradeLorePanel_C* UUI_ShellUpgradeLorePanel_C::GetDefaultObj()
{
	static class UUI_ShellUpgradeLorePanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ShellUpgradeLorePanel_C*>(UUI_ShellUpgradeLorePanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.HandleScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetUIScale_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeLorePanel_C::HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "HandleScale");

	Params::UUI_ShellUpgradeLorePanel_C_HandleScale_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUIScale_ReturnValue = CallFunc_GetUIScale_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.StopAnimText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeLorePanel_C::StopAnimText(class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "StopAnimText");

	Params::UUI_ShellUpgradeLorePanel_C_StopAnimText_Params Parms{};

	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeLorePanel_C::SetText(class FText InText, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "SetText");

	Params::UUI_ShellUpgradeLorePanel_C_SetText_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.AnimFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeLorePanel_C::AnimFadeOut(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "AnimFadeOut");

	Params::UUI_ShellUpgradeLorePanel_C_AnimFadeOut_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.AnimFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeLorePanel_C::AnimFadeIn(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "AnimFadeIn");

	Params::UUI_ShellUpgradeLorePanel_C_AnimFadeIn_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.AnimText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeLorePanel_C::AnimText(float Duration, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "AnimText");

	Params::UUI_ShellUpgradeLorePanel_C_AnimText_Params Parms{};

	Parms.Duration = Duration;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.FadeOutEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeLorePanel_C::FadeOutEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "FadeOutEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeLorePanel_C::BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::UUI_ShellUpgradeLorePanel_C_BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.FadeInEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeLorePanel_C::FadeInEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "FadeInEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.ExecuteUbergraph_UI_ShellUpgradeLorePanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeLorePanel_C::ExecuteUbergraph_UI_ShellUpgradeLorePanel(int32 EntryPoint, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "ExecuteUbergraph_UI_ShellUpgradeLorePanel");

	Params::UUI_ShellUpgradeLorePanel_C_ExecuteUbergraph_UI_ShellUpgradeLorePanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.OnFadeInEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeLorePanel_C::OnFadeInEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "OnFadeInEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.OnLorePanelClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeLorePanel_C::OnLorePanelClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "OnLorePanelClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeLorePanel.UI_ShellUpgradeLorePanel_C.OnFadeOutEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeLorePanel_C::OnFadeOutEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeLorePanel_C", "OnFadeOutEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


