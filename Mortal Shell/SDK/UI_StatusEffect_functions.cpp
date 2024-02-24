#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StatusEffect.UI_StatusEffect_C
// (None)

class UClass* UUI_StatusEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StatusEffect_C");

	return Clss;
}


// UI_StatusEffect_C UI_StatusEffect.Default__UI_StatusEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StatusEffect_C* UUI_StatusEffect_C::GetDefaultObj()
{
	static class UUI_StatusEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StatusEffect_C*>(UUI_StatusEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StatusEffect.UI_StatusEffect_C.RemoveGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StatusEffect_C::RemoveGlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "RemoveGlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StatusEffect.UI_StatusEffect_C.AddGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StatusEffect_C::AddGlow(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "AddGlow");

	Params::UUI_StatusEffect_C_AddGlow_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StatusEffect.UI_StatusEffect_C.InterpToStatusContainerPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Vector2DInterpTo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StatusEffect_C::InterpToStatusContainerPos(float DeltaTime, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "InterpToStatusContainerPos");

	Params::UUI_StatusEffect_C_InterpToStatusContainerPos_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Vector2DInterpTo_ReturnValue = CallFunc_Vector2DInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StatusEffect.UI_StatusEffect_C.SetGridID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ColumnID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RowID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StatusEffect_C::SetGridID(int32 ColumnID, int32 RowID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "SetGridID");

	Params::UUI_StatusEffect_C_SetGridID_Params Parms{};

	Parms.ColumnID = ColumnID;
	Parms.RowID = RowID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StatusEffect.UI_StatusEffect_C.OverrideDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StatusEffect_C::OverrideDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "OverrideDuration");

	Params::UUI_StatusEffect_C_OverrideDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StatusEffect.UI_StatusEffect_C.OnStatusExpired_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StatusEffect_C::OnStatusExpired_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "OnStatusExpired_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StatusEffect.UI_StatusEffect_C.UpdateProgressBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StatusEffect_C::UpdateProgressBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "UpdateProgressBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StatusEffect.UI_StatusEffect_C.OnStatusEffectEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StatusEffect_C::OnStatusEffectEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "OnStatusEffectEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StatusEffect.UI_StatusEffect_C.Pause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StatusEffect_C::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "Pause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StatusEffect.UI_StatusEffect_C.UnPause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StatusEffect_C::UnPause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "UnPause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StatusEffect.UI_StatusEffect_C.OverrideStackNum
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Stack                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StatusEffect_C::OverrideStackNum(int32 Stack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "OverrideStackNum");

	Params::UUI_StatusEffect_C_OverrideStackNum_Params Parms{};

	Parms.Stack = Stack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StatusEffect.UI_StatusEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StatusEffect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StatusEffect.UI_StatusEffect_C.ExecuteUbergraph_UI_StatusEffect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Stack                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StatusEffect_C::ExecuteUbergraph_UI_StatusEffect(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_CustomEvent_Duration, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_CustomEvent_Stack, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "ExecuteUbergraph_UI_StatusEffect");

	Params::UUI_StatusEffect_C_ExecuteUbergraph_UI_StatusEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Stack = K2Node_CustomEvent_Stack;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StatusEffect.UI_StatusEffect_C.OnStatusExpired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_StatusEffect_C*          Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ColumnID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RowID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StatusEffect_C::OnStatusExpired__DelegateSignature(class UUI_StatusEffect_C* Widget, int32 ColumnID, int32 RowID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StatusEffect_C", "OnStatusExpired__DelegateSignature");

	Params::UUI_StatusEffect_C_OnStatusExpired__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.ColumnID = ColumnID;
	Parms.RowID = RowID;

	UObject::ProcessEvent(Func, &Parms);

}

}


