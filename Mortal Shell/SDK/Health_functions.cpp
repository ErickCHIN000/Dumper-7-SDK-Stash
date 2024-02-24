#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Health.Health_C
// (None)

class UClass* UHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Health_C");

	return Clss;
}


// Health_C Health.Default__Health_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHealth_C* UHealth_C::GetDefaultObj()
{
	static class UHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHealth_C*>(UHealth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Health.Health_C.PlayHardenRecharge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::PlayHardenRecharge(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "PlayHardenRecharge");

	Params::UHealth_C_PlayHardenRecharge_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.ScaleBarElementBasedOnHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::ScaleBarElementBasedOnHealth(class UObject* Object, class UCanvasPanelSlot* Target, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_FInterpTo_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "ScaleBarElementBasedOnHealth");

	Params::UHealth_C_ScaleBarElementBasedOnHealth_Params Parms{};

	Parms.Object = Object;
	Parms.Target = Target;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue_1 = CallFunc_GetSize_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.UpdateHealRiposte
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            LocHighlightSlot                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            LocHealthBarSlot                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHealth_C::UpdateHealRiposte(class UCanvasPanelSlot* LocHighlightSlot, class UCanvasPanelSlot* LocHealthBarSlot, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "UpdateHealRiposte");

	Params::UHealth_C_UpdateHealRiposte_Params Parms{};

	Parms.LocHighlightSlot = LocHighlightSlot;
	Parms.LocHealthBarSlot = LocHealthBarSlot;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.PlayHealRiposteAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::PlayHealRiposteAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "PlayHealRiposteAnim");

	Params::UHealth_C_PlayHealRiposteAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.SetHealthCapPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            LocFrameCapSlot                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            LocHealthBarFrameSlot                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::SetHealthCapPos(class UCanvasPanelSlot* LocFrameCapSlot, class UCanvasPanelSlot* LocHealthBarFrameSlot, const struct FVector2D& CallFunc_GetPosition_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "SetHealthCapPos");

	Params::UHealth_C_SetHealthCapPos_Params Parms{};

	Parms.LocFrameCapSlot = LocFrameCapSlot;
	Parms.LocHealthBarFrameSlot = LocHealthBarFrameSlot;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_1 = K2Node_DynamicCast_AsCanvas_Panel_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue_1 = CallFunc_GetPosition_ReturnValue_1;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.ScaleBarElementBasedOnMaxHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::ScaleBarElementBasedOnMaxHealth(class UObject* Object, float Value, float Offset, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetFloatValue_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "ScaleBarElementBasedOnMaxHealth");

	Params::UHealth_C_ScaleBarElementBasedOnMaxHealth_Params Parms{};

	Parms.Object = Object;
	Parms.Value = Value;
	Parms.Offset = Offset;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.SetMaxHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InMaxHealth                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_CurrentHealth                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocMaxHealth                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::SetMaxHealth(float InMaxHealth, float Local_CurrentHealth, float LocMaxHealth, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "SetMaxHealth");

	Params::UHealth_C_SetMaxHealth_Params Parms{};

	Parms.InMaxHealth = InMaxHealth;
	Parms.Local_CurrentHealth = Local_CurrentHealth;
	Parms.LocMaxHealth = LocMaxHealth;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.AddGhostTrailWithHealthValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PreviousHealth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::AddGhostTrailWithHealthValues(float PreviousHealth, float NewHealth, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "AddGhostTrailWithHealthValues");

	Params::UHealth_C_AddGhostTrailWithHealthValues_Params Parms{};

	Parms.PreviousHealth = PreviousHealth;
	Parms.NewHealth = NewHealth;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.GetHealthBarSizeAtPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UHealth_C::GetHealthBarSizeAtPercent(float Percent, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "GetHealthBarSizeAtPercent");

	Params::UHealth_C_GetHealthBarSizeAtPercent_Params Parms{};

	Parms.Percent = Percent;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Health.Health_C.GetHealthBarPosAtPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              AtPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   EndPos                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocHealthBarPercent                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            LocHealthBarSlot                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::GetHealthBarPosAtPercent(float AtPercent, struct FVector2D* EndPos, float LocHealthBarPercent, class UCanvasPanelSlot* LocHealthBarSlot, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "GetHealthBarPosAtPercent");

	Params::UHealth_C_GetHealthBarPosAtPercent_Params Parms{};

	Parms.AtPercent = AtPercent;
	Parms.LocHealthBarPercent = LocHealthBarPercent;
	Parms.LocHealthBarSlot = LocHealthBarSlot;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EndPos != nullptr)
		*EndPos = std::move(Parms.EndPos);

}


// Function Health.Health_C.AddGhostTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PreviousHealthPercent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealthPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocPreviousPercent                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            LocGhostPanelCanvasSlot                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocNewPercent                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetHealthBarPosAtPercent_EndPos                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetHealthBarPosAtPercent_EndPos_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetHealthBarPosAtPercent_EndPos_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::AddGhostTrail(float PreviousHealthPercent, float NewHealthPercent, float LocPreviousPercent, class UCanvasPanelSlot* LocGhostPanelCanvasSlot, float LocNewPercent, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_EndPos, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_EndPos_1, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_EndPos_2, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "AddGhostTrail");

	Params::UHealth_C_AddGhostTrail_Params Parms{};

	Parms.PreviousHealthPercent = PreviousHealthPercent;
	Parms.NewHealthPercent = NewHealthPercent;
	Parms.LocPreviousPercent = LocPreviousPercent;
	Parms.LocGhostPanelCanvasSlot = LocGhostPanelCanvasSlot;
	Parms.LocNewPercent = LocNewPercent;
	Parms.CallFunc_GetHealthBarPosAtPercent_EndPos = CallFunc_GetHealthBarPosAtPercent_EndPos;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetHealthBarPosAtPercent_EndPos_1 = CallFunc_GetHealthBarPosAtPercent_EndPos_1;
	Parms.CallFunc_GetHealthBarPosAtPercent_EndPos_2 = CallFunc_GetHealthBarPosAtPercent_EndPos_2;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.CreateAndAssignHealthBarMat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 CallFunc_MakeBrushFromMaterial_ReturnValue                       (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::CreateAndAssignHealthBarMat(const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "CreateAndAssignHealthBarMat");

	Params::UHealth_C_CreateAndAssignHealthBarMat_Params Parms{};

	Parms.CallFunc_MakeBrushFromMaterial_ReturnValue = CallFunc_MakeBrushFromMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.UpdateStoneFormRecharge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStoneFormOnCooldown__StoneFormOnCooldown_             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHealth_C::UpdateStoneFormRecharge(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsStoneFormOnCooldown__StoneFormOnCooldown_, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "UpdateStoneFormRecharge");

	Params::UHealth_C_UpdateStoneFormRecharge_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsStoneFormOnCooldown__StoneFormOnCooldown_ = CallFunc_IsStoneFormOnCooldown__StoneFormOnCooldown_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.UpdateHighlightPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            LocHighlightSlot                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            LocHealthBarSlot                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHealth_C::UpdateHighlightPosition(class UCanvasPanelSlot* LocHighlightSlot, class UCanvasPanelSlot* LocHealthBarSlot, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "UpdateHighlightPosition");

	Params::UHealth_C_UpdateHighlightPosition_Params Parms{};

	Parms.LocHighlightSlot = LocHighlightSlot;
	Parms.LocHealthBarSlot = LocHealthBarSlot;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_1 = K2Node_DynamicCast_AsCanvas_Panel_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.OnCharacterEnteredStoneForm_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealth_C::OnCharacterEnteredStoneForm_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "OnCharacterEnteredStoneForm_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Health.Health_C.OnCharacterLeftStoneForm_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealth_C::OnCharacterLeftStoneForm_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "OnCharacterLeftStoneForm_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Health.Health_C.OnStoneFormOnCooldown_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealth_C::OnStoneFormOnCooldown_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "OnStoneFormOnCooldown_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Health.Health_C.OnStoneformRecharged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealth_C::OnStoneformRecharged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "OnStoneformRecharged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Health.Health_C.OnPlayerHealthChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PreviousHealth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::OnPlayerHealthChanged_Event_0(float PreviousHealth, float NewHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "OnPlayerHealthChanged_Event_0");

	Params::UHealth_C_OnPlayerHealthChanged_Event_0_Params Parms{};

	Parms.PreviousHealth = PreviousHealth;
	Parms.NewHealth = NewHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewPercent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::SetPercent(float NewPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "SetPercent");

	Params::UHealth_C_SetPercent_Params Parms{};

	Parms.NewPercent = NewPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealth_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "Tick");

	Params::UHealth_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.OnTrueDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealth_C::OnTrueDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "OnTrueDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Health.Health_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHealth_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Health.Health_C.OnStoneFormReady_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealth_C::OnStoneFormReady_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "OnStoneFormReady_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Health.Health_C.OnStoneFormReady_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealth_C::OnStoneFormReady_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "OnStoneFormReady_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Health.Health_C.OnPoisonBuffChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bStart                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHealth_C::OnPoisonBuffChange(bool bStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "OnPoisonBuffChange");

	Params::UHealth_C_OnPoisonBuffChange_Params Parms{};

	Parms.bStart = bStart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHealth_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "PreConstruct");

	Params::UHealth_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Health.Health_C.ExecuteUbergraph_Health
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PreviousHealth                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_NewPercent                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bStart                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHealth_C::ExecuteUbergraph_Health(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, float K2Node_CustomEvent_PreviousHealth, float K2Node_CustomEvent_NewHealth, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_NewPercent, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_Conv_IntToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_bStart, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_StormModeIsActive_ReturnValue, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Health_C", "ExecuteUbergraph_Health");

	Params::UHealth_C_ExecuteUbergraph_Health_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_PreviousHealth = K2Node_CustomEvent_PreviousHealth;
	Parms.K2Node_CustomEvent_NewHealth = K2Node_CustomEvent_NewHealth;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NewPercent = K2Node_CustomEvent_NewPercent;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_bStart = K2Node_CustomEvent_bStart;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


