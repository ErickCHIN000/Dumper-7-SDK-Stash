#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Boss_HealthBar.Boss_HealthBar_C
// (None)

class UClass* UBoss_HealthBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Boss_HealthBar_C");

	return Clss;
}


// Boss_HealthBar_C Boss_HealthBar.Default__Boss_HealthBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBoss_HealthBar_C* UBoss_HealthBar_C::GetDefaultObj()
{
	static class UBoss_HealthBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoss_HealthBar_C*>(UBoss_HealthBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Boss_HealthBar.Boss_HealthBar_C.GetCurrentBoss_2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AEnemyCharacter_C*           CurrentBoss                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBoss_HealthBar_C::GetCurrentBoss_2(class AEnemyCharacter_C** CurrentBoss, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "GetCurrentBoss_2");

	Params::UBoss_HealthBar_C_GetCurrentBoss_2_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentBoss != nullptr)
		*CurrentBoss = Parms.CurrentBoss;

}


// Function Boss_HealthBar.Boss_HealthBar_C.GetCurrentBoss_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AEnemyCharacter_C*           CurrentBoss                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBoss_HealthBar_C::GetCurrentBoss_1(class AEnemyCharacter_C** CurrentBoss, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "GetCurrentBoss_1");

	Params::UBoss_HealthBar_C_GetCurrentBoss_1_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentBoss != nullptr)
		*CurrentBoss = Parms.CurrentBoss;

}


// Function Boss_HealthBar.Boss_HealthBar_C.UpdateDamageNumbersState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBoss_HealthBar_C::UpdateDamageNumbersState(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "UpdateDamageNumbersState");

	Params::UBoss_HealthBar_C_UpdateDamageNumbersState_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.GetDamageNumbers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Output_Get                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDamageNumbers_Show                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBoss_HealthBar_C::GetDamageNumbers(bool* Output_Get, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDamageNumbers_Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "GetDamageNumbers");

	Params::UBoss_HealthBar_C_GetDamageNumbers_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDamageNumbers_Show = CallFunc_GetDamageNumbers_Show;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;

}


// Function Boss_HealthBar.Boss_HealthBar_C.ResetTextDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBoss_HealthBar_C::ResetTextDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "ResetTextDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Boss_HealthBar.Boss_HealthBar_C.SetTextDamageOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBoss_HealthBar_C::SetTextDamageOpacity(float DeltaTime, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "SetTextDamageOpacity");

	Params::UBoss_HealthBar_C_SetTextDamageOpacity_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.SetBarOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBoss_HealthBar_C::SetBarOpacity(float DeltaTime, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "SetBarOpacity");

	Params::UBoss_HealthBar_C_SetBarOpacity_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.AddGhostTrailWhenNeeded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBoss_HealthBar_C::AddGhostTrailWhenNeeded(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "AddGhostTrailWhenNeeded");

	Params::UBoss_HealthBar_C_AddGhostTrailWhenNeeded_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.GetHealthBarPosAtPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              HealthBarPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   HealthBarPos                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocHealthBarPercent                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            LocHealthBarSlot                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBoss_HealthBar_C::GetHealthBarPosAtPercent(float HealthBarPercent, struct FVector2D* HealthBarPos, float LocHealthBarPercent, class UCanvasPanelSlot* LocHealthBarSlot, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "GetHealthBarPosAtPercent");

	Params::UBoss_HealthBar_C_GetHealthBarPosAtPercent_Params Parms{};

	Parms.HealthBarPercent = HealthBarPercent;
	Parms.LocHealthBarPercent = LocHealthBarPercent;
	Parms.LocHealthBarSlot = LocHealthBarSlot;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HealthBarPos != nullptr)
		*HealthBarPos = std::move(Parms.HealthBarPos);

}


// Function Boss_HealthBar.Boss_HealthBar_C.AddGhostTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PreviousPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewPercent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            LocGhostPanelCanvasSlot                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocNewPercent                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocPreviousPercent                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetHealthBarPosAtPercent_HealthBarPos                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetHealthBarPosAtPercent_HealthBarPos_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetHealthBarPosAtPercent_HealthBarPos_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBoss_HealthBar_C::AddGhostTrail(float PreviousPercent, float NewPercent, class UCanvasPanelSlot* LocGhostPanelCanvasSlot, float LocNewPercent, float LocPreviousPercent, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_HealthBarPos, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_HealthBarPos_1, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_HealthBarPos_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "AddGhostTrail");

	Params::UBoss_HealthBar_C_AddGhostTrail_Params Parms{};

	Parms.PreviousPercent = PreviousPercent;
	Parms.NewPercent = NewPercent;
	Parms.LocGhostPanelCanvasSlot = LocGhostPanelCanvasSlot;
	Parms.LocNewPercent = LocNewPercent;
	Parms.LocPreviousPercent = LocPreviousPercent;
	Parms.CallFunc_GetHealthBarPosAtPercent_HealthBarPos = CallFunc_GetHealthBarPosAtPercent_HealthBarPos;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetHealthBarPosAtPercent_HealthBarPos_1 = CallFunc_GetHealthBarPosAtPercent_HealthBarPos_1;
	Parms.CallFunc_GetHealthBarPosAtPercent_HealthBarPos_2 = CallFunc_GetHealthBarPosAtPercent_HealthBarPos_2;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.UpdateHighlightPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            LocGradientSlot                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            LocHighlightSlot                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            LocHealthBarSlot                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBoss_HealthBar_C::UpdateHighlightPosition(class UCanvasPanelSlot* LocGradientSlot, class UCanvasPanelSlot* LocHighlightSlot, class UCanvasPanelSlot* LocHealthBarSlot, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_2, bool K2Node_DynamicCast_bSuccess_2, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "UpdateHighlightPosition");

	Params::UBoss_HealthBar_C_UpdateHighlightPosition_Params Parms{};

	Parms.LocGradientSlot = LocGradientSlot;
	Parms.LocHighlightSlot = LocHighlightSlot;
	Parms.LocHealthBarSlot = LocHealthBarSlot;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_1 = K2Node_DynamicCast_AsCanvas_Panel_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_2 = K2Node_DynamicCast_AsCanvas_Panel_Slot_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.GetBossName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AEnemyCharacter_C*           CallFunc_GetCurrentBoss_2_CurrentBoss                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetName_Name                                            (None)
// class AEnemyCharacter_C*           CallFunc_GetCurrentBoss_1_CurrentBoss                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetName_Name_1                                          (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UBoss_HealthBar_C::GetBossName(class AEnemyCharacter_C* CallFunc_GetCurrentBoss_2_CurrentBoss, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_GetName_Name, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_1_CurrentBoss, class FText CallFunc_GetName_Name_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "GetBossName");

	Params::UBoss_HealthBar_C_GetBossName_Params Parms{};

	Parms.CallFunc_GetCurrentBoss_2_CurrentBoss = CallFunc_GetCurrentBoss_2_CurrentBoss;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetName_Name = CallFunc_GetName_Name;
	Parms.CallFunc_GetCurrentBoss_1_CurrentBoss = CallFunc_GetCurrentBoss_1_CurrentBoss;
	Parms.CallFunc_GetName_Name_1 = CallFunc_GetName_Name_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Boss_HealthBar.Boss_HealthBar_C.Set_UI_HP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           CallFunc_GetCurrentBoss_2_CurrentBoss                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_GetCurrentBoss_1_CurrentBoss                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBoss_HealthBar_C::Set_UI_HP(class AEnemyCharacter_C* CallFunc_GetCurrentBoss_2_CurrentBoss, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_1_CurrentBoss, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "Set_UI_HP");

	Params::UBoss_HealthBar_C_Set_UI_HP_Params Parms{};

	Parms.CallFunc_GetCurrentBoss_2_CurrentBoss = CallFunc_GetCurrentBoss_2_CurrentBoss;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurrentBoss_1_CurrentBoss = CallFunc_GetCurrentBoss_1_CurrentBoss;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.Get_StaminaFixed_Percent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBoss_HealthBar_C::Get_StaminaFixed_Percent(class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "Get_StaminaFixed_Percent");

	Params::UBoss_HealthBar_C_Get_StaminaFixed_Percent_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Boss_HealthBar.Boss_HealthBar_C.Set_UI_Stamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Get_Stamina_Percent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBoss_HealthBar_C::Set_UI_Stamina(float CallFunc_Get_Stamina_Percent_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "Set_UI_Stamina");

	Params::UBoss_HealthBar_C_Set_UI_Stamina_Params Parms{};

	Parms.CallFunc_Get_Stamina_Percent_ReturnValue = CallFunc_Get_Stamina_Percent_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.Get_Stamina_Percent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

float UBoss_HealthBar_C::Get_Stamina_Percent(class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "Get_Stamina_Percent");

	Params::UBoss_HealthBar_C_Get_Stamina_Percent_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Boss_HealthBar.Boss_HealthBar_C.Get_StaminaBar_FillColorAndOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBoss_HealthBar_C::Get_StaminaBar_FillColorAndOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "Get_StaminaBar_FillColorAndOpacity");

	Params::UBoss_HealthBar_C_Get_StaminaBar_FillColorAndOpacity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Boss_HealthBar.Boss_HealthBar_C.Get_Health_FillColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UBoss_HealthBar_C::Get_Health_FillColorAndOpacity_0(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "Get_Health_FillColorAndOpacity_0");

	Params::UBoss_HealthBar_C_Get_Health_FillColorAndOpacity_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Boss_HealthBar.Boss_HealthBar_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_DetectDragIfPressed_ReturnValue                         (None)

struct FEventReply UBoss_HealthBar_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "OnMouseButtonDown");

	Params::UBoss_HealthBar_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_DetectDragIfPressed_ReturnValue = CallFunc_DetectDragIfPressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Boss_HealthBar.Boss_HealthBar_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragWidget_C*               CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToLocal_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBoss_HealthBar_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragWidget_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "OnDragDetected");

	Params::UBoss_HealthBar_C_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_AbsoluteToLocal_ReturnValue = CallFunc_AbsoluteToLocal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function Boss_HealthBar.Boss_HealthBar_C.Get_HealthBar_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UBoss_HealthBar_C::Get_HealthBar_Text(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "Get_HealthBar_Text");

	Params::UBoss_HealthBar_C_Get_HealthBar_Text_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Boss_HealthBar.Boss_HealthBar_C.Get_HealthBar_Percent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBoss_HealthBar_C::Get_HealthBar_Percent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "Get_HealthBar_Percent");

	Params::UBoss_HealthBar_C_Get_HealthBar_Percent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Boss_HealthBar.Boss_HealthBar_C.Get_Name_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UBoss_HealthBar_C::Get_Name_Text(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "Get_Name_Text");

	Params::UBoss_HealthBar_C_Get_Name_Text_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Boss_HealthBar.Boss_HealthBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBoss_HealthBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "Tick");

	Params::UBoss_HealthBar_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.FadeNameOnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBoss_HealthBar_C::FadeNameOnDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "FadeNameOnDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Boss_HealthBar.Boss_HealthBar_C.PlayBossNameFadeInAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBoss_HealthBar_C::PlayBossNameFadeInAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "PlayBossNameFadeInAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Boss_HealthBar.Boss_HealthBar_C.FadeHPBarIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBoss_HealthBar_C::FadeHPBarIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "FadeHPBarIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Boss_HealthBar.Boss_HealthBar_C.FadeHPBarOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBoss_HealthBar_C::FadeHPBarOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "FadeHPBarOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Boss_HealthBar.Boss_HealthBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBoss_HealthBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Boss_HealthBar.Boss_HealthBar_C.OnAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBoss_HealthBar_C::OnAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "OnAnyDamage");

	Params::UBoss_HealthBar_C_OnAnyDamage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.DamageText_Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBoss_HealthBar_C::DamageText_Update(float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "DamageText_Update");

	Params::UBoss_HealthBar_C_DamageText_Update_Params Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.DamageText_Remove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBoss_HealthBar_C::DamageText_Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "DamageText_Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Boss_HealthBar.Boss_HealthBar_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBoss_HealthBar_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Boss_HealthBar.Boss_HealthBar_C.OnDamageNumbersChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBoss_HealthBar_C::OnDamageNumbersChanged(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "OnDamageNumbersChanged");

	Params::UBoss_HealthBar_C_OnDamageNumbersChanged_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Boss_HealthBar.Boss_HealthBar_C.ExecuteUbergraph_Boss_HealthBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDamageNumbers_Output_Get                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Show                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           CallFunc_GetCurrentBoss_1_CurrentBoss                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_GetCurrentBoss_1_CurrentBoss_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           CallFunc_GetCurrentBoss_2_CurrentBoss                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           CallFunc_GetCurrentBoss_2_CurrentBoss_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBoss_HealthBar_C::ExecuteUbergraph_Boss_HealthBar(int32 EntryPoint, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage_1, class UDamageType* K2Node_CustomEvent_DamageType, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, float K2Node_CustomEvent_Damage, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_GetDamageNumbers_Output_Get, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_Show, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_1_CurrentBoss, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_1_CurrentBoss_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_2_CurrentBoss, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Divide_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_2_CurrentBoss_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Boss_HealthBar_C", "ExecuteUbergraph_Boss_HealthBar");

	Params::UBoss_HealthBar_C_ExecuteUbergraph_Boss_HealthBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage_1 = K2Node_CustomEvent_Damage_1;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetDamageNumbers_Output_Get = CallFunc_GetDamageNumbers_Output_Get;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Show = K2Node_CustomEvent_Show;
	Parms.CallFunc_GetCurrentBoss_1_CurrentBoss = CallFunc_GetCurrentBoss_1_CurrentBoss;
	Parms.CallFunc_GetCurrentBoss_1_CurrentBoss_1 = CallFunc_GetCurrentBoss_1_CurrentBoss_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentBoss_2_CurrentBoss = CallFunc_GetCurrentBoss_2_CurrentBoss;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurrentBoss_2_CurrentBoss_1 = CallFunc_GetCurrentBoss_2_CurrentBoss_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


