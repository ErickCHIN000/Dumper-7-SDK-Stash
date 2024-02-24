#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_VideoSettings_Warning.UI_VideoSettings_Warning_C
// (None)

class UClass* UUI_VideoSettings_Warning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_VideoSettings_Warning_C");

	return Clss;
}


// UI_VideoSettings_Warning_C UI_VideoSettings_Warning.Default__UI_VideoSettings_Warning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_VideoSettings_Warning_C* UUI_VideoSettings_Warning_C::GetDefaultObj()
{
	static class UUI_VideoSettings_Warning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_VideoSettings_Warning_C*>(UUI_VideoSettings_Warning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_VideoSettings_Warning.UI_VideoSettings_Warning_C.InWarningWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsWarningWindow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_VideoSettings_Warning_C::InWarningWindow(bool IsWarningWindow, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Warning_C", "InWarningWindow");

	Params::UUI_VideoSettings_Warning_C_InWarningWindow_Params Parms{};

	Parms.IsWarningWindow = IsWarningWindow;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VideoSettings_Warning.UI_VideoSettings_Warning_C.Window_Dismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VideoSettings_Warning_C::Window_Dismiss(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Warning_C", "Window_Dismiss");

	Params::UUI_VideoSettings_Warning_C_Window_Dismiss_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VideoSettings_Warning.UI_VideoSettings_Warning_C.Dismiss_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Warning_C::Dismiss_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Warning_C", "Dismiss_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Warning.UI_VideoSettings_Warning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Warning_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Warning_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Warning.UI_VideoSettings_Warning_C.Dismiss_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_VideoSettings_Warning_C::Dismiss_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Warning_C", "Dismiss_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_VideoSettings_Warning.UI_VideoSettings_Warning_C.BndEvt__UI_ControllerButton_Dismiss_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VideoSettings_Warning_C::BndEvt__UI_ControllerButton_Dismiss_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Warning_C", "BndEvt__UI_ControllerButton_Dismiss_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::UUI_VideoSettings_Warning_C_BndEvt__UI_ControllerButton_Dismiss_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VideoSettings_Warning.UI_VideoSettings_Warning_C.ExecuteUbergraph_UI_VideoSettings_Warning
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VideoSettings_Warning_C::ExecuteUbergraph_UI_VideoSettings_Warning(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Warning_C", "ExecuteUbergraph_UI_VideoSettings_Warning");

	Params::UUI_VideoSettings_Warning_C_ExecuteUbergraph_UI_VideoSettings_Warning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VideoSettings_Warning.UI_VideoSettings_Warning_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VideoSettings_Warning_C::OnClick__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VideoSettings_Warning_C", "OnClick__DelegateSignature");

	Params::UUI_VideoSettings_Warning_C_OnClick__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


