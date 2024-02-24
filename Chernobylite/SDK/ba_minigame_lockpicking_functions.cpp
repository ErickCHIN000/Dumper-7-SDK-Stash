#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_minigame_lockpicking.ba_minigame_lockpicking_C
// (Actor)

class UClass* Aba_minigame_lockpicking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_minigame_lockpicking_C");

	return Clss;
}


// ba_minigame_lockpicking_C ba_minigame_lockpicking.Default__ba_minigame_lockpicking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_minigame_lockpicking_C* Aba_minigame_lockpicking_C::GetDefaultObj()
{
	static class Aba_minigame_lockpicking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_minigame_lockpicking_C*>(Aba_minigame_lockpicking_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.Shake__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_minigame_lockpicking_C::Shake__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "Shake__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.Shake__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_minigame_lockpicking_C::Shake__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "Shake__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Up_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_minigame_lockpicking_C::InpActEvt_UI_Up_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "InpActEvt_UI_Up_K2Node_InputActionEvent_5");

	Params::Aba_minigame_lockpicking_C_InpActEvt_UI_Up_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Down_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_minigame_lockpicking_C::InpActEvt_UI_Down_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "InpActEvt_UI_Down_K2Node_InputActionEvent_4");

	Params::Aba_minigame_lockpicking_C_InpActEvt_UI_Down_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Right_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_minigame_lockpicking_C::InpActEvt_UI_Right_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "InpActEvt_UI_Right_K2Node_InputActionEvent_3");

	Params::Aba_minigame_lockpicking_C_InpActEvt_UI_Right_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Left_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_minigame_lockpicking_C::InpActEvt_UI_Left_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "InpActEvt_UI_Left_K2Node_InputActionEvent_2");

	Params::Aba_minigame_lockpicking_C_InpActEvt_UI_Left_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_minigame_lockpicking_C::InpActEvt_UI_Cancel_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "InpActEvt_UI_Cancel_K2Node_InputActionEvent_1");

	Params::Aba_minigame_lockpicking_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Accept_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_minigame_lockpicking_C::InpActEvt_UI_Accept_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "InpActEvt_UI_Accept_K2Node_InputActionEvent_0");

	Params::Aba_minigame_lockpicking_C_InpActEvt_UI_Accept_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.WidgetShake
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_minigame_lockpicking_C::WidgetShake(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "WidgetShake");

	Params::Aba_minigame_lockpicking_C_WidgetShake_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.StartPuzzle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_minigame_lockpicking_C::StartPuzzle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "StartPuzzle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.Won
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_minigame_lockpicking_C::Won()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "Won");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_minigame_lockpicking_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.ExecuteUbergraph_ba_minigame_lockpicking
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// class UWid_Lockpicking_Main_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_minigame_lockpicking_C::ExecuteUbergraph_ba_minigame_lockpicking(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, class UWid_Lockpicking_Main_C* CallFunc_Create_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key_5, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsInViewport_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsInViewport_ReturnValue_2, bool CallFunc_IsInViewport_ReturnValue_3, bool CallFunc_IsInViewport_ReturnValue_4, class UWidget* K2Node_CustomEvent_Widget, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_lockpicking_C", "ExecuteUbergraph_ba_minigame_lockpicking");

	Params::Aba_minigame_lockpicking_C_ExecuteUbergraph_ba_minigame_lockpicking_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue_1 = CallFunc_IsInViewport_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue_2 = CallFunc_IsInViewport_ReturnValue_2;
	Parms.CallFunc_IsInViewport_ReturnValue_3 = CallFunc_IsInViewport_ReturnValue_3;
	Parms.CallFunc_IsInViewport_ReturnValue_4 = CallFunc_IsInViewport_ReturnValue_4;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


