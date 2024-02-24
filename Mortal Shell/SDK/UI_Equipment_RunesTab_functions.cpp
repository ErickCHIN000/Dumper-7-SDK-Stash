#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Equipment_RunesTab.UI_Equipment_RunesTab_C
// (None)

class UClass* UUI_Equipment_RunesTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Equipment_RunesTab_C");

	return Clss;
}


// UI_Equipment_RunesTab_C UI_Equipment_RunesTab.Default__UI_Equipment_RunesTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Equipment_RunesTab_C* UUI_Equipment_RunesTab_C::GetDefaultObj()
{
	static class UUI_Equipment_RunesTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Equipment_RunesTab_C*>(UUI_Equipment_RunesTab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.ResetMousePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_RunesTab_C::ResetMousePosition(const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "ResetMousePosition");

	Params::UUI_Equipment_RunesTab_C_ResetMousePosition_Params Parms{};

	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.RunesClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::RunesClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "RunesClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.SetGameplayPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_RunesTab_C::SetGameplayPC(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "SetGameplayPC");

	Params::UUI_Equipment_RunesTab_C_SetGameplayPC_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.HandleBGVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_RunesTab_C::HandleBGVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "HandleBGVisibility");

	Params::UUI_Equipment_RunesTab_C_HandleBGVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.GamepadKB_ZoomIn_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Released                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_RunesTab_C::GamepadKB_ZoomIn_Listen(FDelegateProperty_ Pressed, FDelegateProperty_ Released)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "GamepadKB_ZoomIn_Listen");

	Params::UUI_Equipment_RunesTab_C_GamepadKB_ZoomIn_Listen_Params Parms{};

	Parms.Pressed = Pressed;
	Parms.Released = Released;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.GamepadKB_ZoomOut_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Released                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_RunesTab_C::GamepadKB_ZoomOut_Listen(FDelegateProperty_ Pressed, FDelegateProperty_ Released)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "GamepadKB_ZoomOut_Listen");

	Params::UUI_Equipment_RunesTab_C_GamepadKB_ZoomOut_Listen_Params Parms{};

	Parms.Pressed = Pressed;
	Parms.Released = Released;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.MouseWheel_ZoomOut_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_RunesTab_C::MouseWheel_ZoomOut_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "MouseWheel_ZoomOut_Listen");

	Params::UUI_Equipment_RunesTab_C_MouseWheel_ZoomOut_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.MouseWheel_ZoomIn_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_RunesTab_C::MouseWheel_ZoomIn_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "MouseWheel_ZoomIn_Listen");

	Params::UUI_Equipment_RunesTab_C_MouseWheel_ZoomIn_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Zoom_Out
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_RunesTab_C::Zoom_Out(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Zoom_Out");

	Params::UUI_Equipment_RunesTab_C_Zoom_Out_Params Parms{};

	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Zoom_In
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_RunesTab_C::Zoom_In(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Zoom_In");

	Params::UUI_Equipment_RunesTab_C_Zoom_In_Params Parms{};

	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Handle_Zoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_RunesTab_C::Handle_Zoom(float DeltaTime, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Handle_Zoom");

	Params::UUI_Equipment_RunesTab_C_Handle_Zoom_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Handle_Parallax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_DeltaTime                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetMousePosFromCenterOfScreen_Position                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Vector2DInterpTo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_RunesTab_C::Handle_Parallax(float DeltaTime, float Local_DeltaTime, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_GetMousePosFromCenterOfScreen_Position, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Handle_Parallax");

	Params::UUI_Equipment_RunesTab_C_Handle_Parallax_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Local_DeltaTime = Local_DeltaTime;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_GetMousePosFromCenterOfScreen_Position = CallFunc_GetMousePosFromCenterOfScreen_Position;
	Parms.CallFunc_Vector2DInterpTo_ReturnValue = CallFunc_Vector2DInterpTo_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.MouseWheel_Zoom_In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::MouseWheel_Zoom_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "MouseWheel_Zoom_In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.MouseWheel_Zoom_Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::MouseWheel_Zoom_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "MouseWheel_Zoom_Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.OnOpenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::OnOpenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "OnOpenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.OnCloseEvent_Instinct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DisableVirtualCursor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_RunesTab_C::OnCloseEvent_Instinct(bool DisableVirtualCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "OnCloseEvent_Instinct");

	Params::UUI_Equipment_RunesTab_C_OnCloseEvent_Instinct_Params Parms{};

	Parms.DisableVirtualCursor = DisableVirtualCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Gamepad_KB_Zoom_Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::Gamepad_KB_Zoom_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Gamepad_KB_Zoom_Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Gamepad_KB_Zoom_In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::Gamepad_KB_Zoom_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Gamepad_KB_Zoom_In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Gamepad_KB_Zoom_Out_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::Gamepad_KB_Zoom_Out_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Gamepad_KB_Zoom_Out_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Gamepad_KB_Zoom_In_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::Gamepad_KB_Zoom_In_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Gamepad_KB_Zoom_In_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Gamepad_KB_Zoom_Out_Hold
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::Gamepad_KB_Zoom_Out_Hold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Gamepad_KB_Zoom_Out_Hold");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Gamepad_KB_Zoom_In_Hold
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::Gamepad_KB_Zoom_In_Hold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Gamepad_KB_Zoom_In_Hold");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.OnFadeInEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::OnFadeInEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "OnFadeInEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.MouseWheel_Zoom_In_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::MouseWheel_Zoom_In_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "MouseWheel_Zoom_In_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.MouseWheel_Zoom_Out_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::MouseWheel_Zoom_Out_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "MouseWheel_Zoom_Out_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Gamepad_KB_Zoom_Out_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::Gamepad_KB_Zoom_Out_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Gamepad_KB_Zoom_Out_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Gamepad_KB_Zoom_In_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::Gamepad_KB_Zoom_In_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Gamepad_KB_Zoom_In_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_RunesTab_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Tick");

	Params::UUI_Equipment_RunesTab_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.NavClose_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::NavClose_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "NavClose_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.NavClose_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::NavClose_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "NavClose_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Equipment_RunesTab_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_RunesTab_C::BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::UUI_Equipment_RunesTab_C_BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_RunesTab.UI_Equipment_RunesTab_C.ExecuteUbergraph_UI_Equipment_RunesTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_UI_HoldTimer_ReturnValue                                (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_UI_HoldTimer_ReturnValue_1                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_DisableVirtualCursor                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_RunesTab_C::ExecuteUbergraph_UI_Equipment_RunesTab(int32 EntryPoint, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_CustomEvent_DisableVirtualCursor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_RunesTab_C", "ExecuteUbergraph_UI_Equipment_RunesTab");

	Params::UUI_Equipment_RunesTab_C_ExecuteUbergraph_UI_Equipment_RunesTab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_UI_HoldTimer_ReturnValue = CallFunc_UI_HoldTimer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_UI_HoldTimer_ReturnValue_1 = CallFunc_UI_HoldTimer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_DisableVirtualCursor = K2Node_CustomEvent_DisableVirtualCursor;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1 = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


