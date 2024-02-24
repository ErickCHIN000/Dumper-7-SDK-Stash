#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalHUD2Component.ArsenalHUD2Component_C
// (None)

class UClass* UArsenalHUD2Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalHUD2Component_C");

	return Clss;
}


// ArsenalHUD2Component_C ArsenalHUD2Component.Default__ArsenalHUD2Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalHUD2Component_C* UArsenalHUD2Component_C::GetDefaultObj()
{
	static class UArsenalHUD2Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalHUD2Component_C*>(UArsenalHUD2Component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.UpdateOuterOtherInstrumentsHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_hud_top01_C*            K2Node_DynamicCast_AsMsn_Hud_Top_01                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalHUD2Component_C::UpdateOuterOtherInstrumentsHUD(class UUserWidget* UI, class AActor* OwnerActor, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess, class UMsn_hud_top01_C* K2Node_DynamicCast_AsMsn_Hud_Top_01, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "UpdateOuterOtherInstrumentsHUD");

	Params::UArsenalHUD2Component_C_UpdateOuterOtherInstrumentsHUD_Params Parms{};

	Parms.UI = UI;
	Parms.OwnerActor = OwnerActor;
	Parms.K2Node_DynamicCast_AsOuter_Character = K2Node_DynamicCast_AsOuter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_01 = K2Node_DynamicCast_AsMsn_Hud_Top_01;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.SetVisibilityOuterHUDBPMain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULockonComponent_C*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLCharacterCommon*         K2Node_DynamicCast_AsTTLCharacter_Common                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_hud_top00_C*            K2Node_DynamicCast_AsMsn_Hud_Top_00                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalHUD2Component_C::SetVisibilityOuterHUDBPMain(bool Visibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class ULockonComponent_C* CallFunc_GetComponentByClass_ReturnValue, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "SetVisibilityOuterHUDBPMain");

	Params::UArsenalHUD2Component_C_SetVisibilityOuterHUDBPMain_Params Parms{};

	Parms.Visibility = Visibility;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLCharacter_Common = K2Node_DynamicCast_AsTTLCharacter_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_00 = K2Node_DynamicCast_AsMsn_Hud_Top_00;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationOuterHUDBPMain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsIn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_hud_top00_C*            K2Node_DynamicCast_AsMsn_Hud_Top_00                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalHUD2Component_C::PlayAnimationOuterHUDBPMain(bool IsIn, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable2, enum class EUMGSequencePlayMode Temp_byte_Variable3, bool Temp_bool_Variable1, enum class EUMGSequencePlayMode K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationOuterHUDBPMain");

	Params::UArsenalHUD2Component_C_PlayAnimationOuterHUDBPMain_Params Parms{};

	Parms.IsIn = IsIn;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_00 = K2Node_DynamicCast_AsMsn_Hud_Top_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationArsenalHUDBPMain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsIn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBasicStatusComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_hud_top00_C*            K2Node_DynamicCast_AsMsn_Hud_Top_00                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalHUD2Component_C::PlayAnimationArsenalHUDBPMain(bool IsIn, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class EUMGSequencePlayMode Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, class AActor* CallFunc_GetOwner_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable3, class UTTLBasicStatusComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable1, enum class EUMGSequencePlayMode K2Node_Select1_Default, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationArsenalHUDBPMain");

	Params::UArsenalHUD2Component_C_PlayAnimationArsenalHUDBPMain_Params Parms{};

	Parms.IsIn = IsIn;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_00 = K2Node_DynamicCast_AsMsn_Hud_Top_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.InitSight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLLockonSightType     SightType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsVisibleCrosshairExtend                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue1                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_hud_top00_C*            K2Node_DynamicCast_AsMsn_Hud_Top_00                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLLockonSightType     Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLLockonSightType     Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSystemSettingFloatValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLLockonSightType     Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalHUD2Component_C::InitSight(class UUserWidget* UI, enum class ETTLLockonSightType SightType, const struct FVector2D& Size, bool IsVisibleCrosshairExtend, enum class ESlateVisibility Temp_byte_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class ETTLLockonSightType Temp_byte_Variable2, class FName Temp_name_Variable, class FName Temp_name_Variable1, enum class ETTLLockonSightType Temp_byte_Variable3, class FName K2Node_Select_Default, class FName CallFunc_MakeLiteralName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, float CallFunc_GetSystemSettingFloatValue_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, enum class ETTLLockonSightType Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "InitSight");

	Params::UArsenalHUD2Component_C_InitSight_Params Parms{};

	Parms.UI = UI;
	Parms.SightType = SightType;
	Parms.Size = Size;
	Parms.IsVisibleCrosshairExtend = IsVisibleCrosshairExtend;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X1 = CallFunc_BreakVector2D_X1;
	Parms.CallFunc_BreakVector2D_Y1 = CallFunc_BreakVector2D_Y1;
	Parms.CallFunc_BreakVector2D_X2 = CallFunc_BreakVector2D_X2;
	Parms.CallFunc_BreakVector2D_Y2 = CallFunc_BreakVector2D_Y2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue1 = CallFunc_MakeVector2D_ReturnValue1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_00 = K2Node_DynamicCast_AsMsn_Hud_Top_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_GetSystemSettingFloatValue_ReturnValue = CallFunc_GetSystemSettingFloatValue_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue1 = CallFunc_Less_FloatFloat_ReturnValue1;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAttackAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMsn_hud_sight00_C*          UI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalHUD2Component_C::PlayAttackAnimation(class UMsn_hud_sight00_C* UI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAttackAnimation");

	Params::UArsenalHUD2Component_C_PlayAttackAnimation_Params Parms{};

	Parms.UI = UI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.UpdateArsenalOtherInstrumentsHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMsn_hud_top00_C*            UI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            BaseCharacter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              G                                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LockonTargetAngleDegree                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnabledLockonTarget                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsAttackHit                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              PitchDegree                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RollDegree                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_IsHitCrossHair_outTargetActor                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_IsHitCrossHair_outHitLocation                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHitCrossHair_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalHUD2Component_C::UpdateArsenalOtherInstrumentsHUD(class UMsn_hud_top00_C* UI, class ABaseCharacter_C* BaseCharacter, float G, float LockonTargetAngleDegree, bool IsEnabledLockonTarget, bool IsAttackHit, float PitchDegree, float RollDegree, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue1, class AActor* CallFunc_IsHitCrossHair_outTargetActor, const struct FVector& CallFunc_IsHitCrossHair_outHitLocation, bool CallFunc_IsHitCrossHair_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UWidgetAnimation* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "UpdateArsenalOtherInstrumentsHUD");

	Params::UArsenalHUD2Component_C_UpdateArsenalOtherInstrumentsHUD_Params Parms{};

	Parms.UI = UI;
	Parms.BaseCharacter = BaseCharacter;
	Parms.G = G;
	Parms.LockonTargetAngleDegree = LockonTargetAngleDegree;
	Parms.IsEnabledLockonTarget = IsEnabledLockonTarget;
	Parms.IsAttackHit = IsAttackHit;
	Parms.PitchDegree = PitchDegree;
	Parms.RollDegree = RollDegree;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue1 = CallFunc_NotEqual_IntInt_ReturnValue1;
	Parms.CallFunc_IsHitCrossHair_outTargetActor = CallFunc_IsHitCrossHair_outTargetActor;
	Parms.CallFunc_IsHitCrossHair_outHitLocation = CallFunc_IsHitCrossHair_outHitLocation;
	Parms.CallFunc_IsHitCrossHair_ReturnValue = CallFunc_IsHitCrossHair_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.ChangeModeBPMain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsArsenalMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalHUD2Component_C::ChangeModeBPMain(bool IsArsenalMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "ChangeModeBPMain");

	Params::UArsenalHUD2Component_C_ChangeModeBPMain_Params Parms{};

	Parms.IsArsenalMode = IsArsenalMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.OnAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalHUD2Component_C::OnAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "OnAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.OnMissionTimerChanged_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentTimer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsVisibleHUD                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalHUD2Component_C::OnMissionTimerChanged_0(float CurrentTimer, bool IsVisibleHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "OnMissionTimerChanged_0");

	Params::UArsenalHUD2Component_C_OnMissionTimerChanged_0_Params Parms{};

	Parms.CurrentTimer = CurrentTimer;
	Parms.IsVisibleHUD = IsVisibleHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.UpdatePlayerHUDBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalHUD2Component_C::UpdatePlayerHUDBP(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "UpdatePlayerHUDBP");

	Params::UArsenalHUD2Component_C_UpdatePlayerHUDBP_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationOutArsenalHUDBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalHUD2Component_C::PlayAnimationOutArsenalHUDBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationOutArsenalHUDBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationInOuterHUDBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalHUD2Component_C::PlayAnimationInOuterHUDBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationInOuterHUDBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationOutOuterHUDBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalHUD2Component_C::PlayAnimationOutOuterHUDBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationOutOuterHUDBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationInArsenalHUDBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalHUD2Component_C::PlayAnimationInArsenalHUDBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationInArsenalHUDBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.ChangeModeBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsArsenalMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFirst                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalHUD2Component_C::ChangeModeBP(bool IsArsenalMode, bool IsFirst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "ChangeModeBP");

	Params::UArsenalHUD2Component_C_ChangeModeBP_Params Parms{};

	Parms.IsArsenalMode = IsArsenalMode;
	Parms.IsFirst = IsFirst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.SetVisibilityOuterHUDBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalHUD2Component_C::SetVisibilityOuterHUDBP(bool NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "SetVisibilityOuterHUDBP");

	Params::UArsenalHUD2Component_C_SetVisibilityOuterHUDBP_Params Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationOuterAttackBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalHUD2Component_C::PlayAnimationOuterAttackBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationOuterAttackBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationOuterHitBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalHUD2Component_C::PlayAnimationOuterHitBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationOuterHitBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.TTLBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UArsenalHUD2Component_C::TTLBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "TTLBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationInMissionProgressHUDBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalHUD2Component_C::PlayAnimationInMissionProgressHUDBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationInMissionProgressHUDBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationOutMissionProgressHUDBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalHUD2Component_C::PlayAnimationOutMissionProgressHUDBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationOutMissionProgressHUDBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationSubGoalMissionProgressHUDBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalHUD2Component_C::PlayAnimationSubGoalMissionProgressHUDBP(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationSubGoalMissionProgressHUDBP");

	Params::UArsenalHUD2Component_C_PlayAnimationSubGoalMissionProgressHUDBP_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationShowSupportWeaponHUDBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalHUD2Component_C::PlayAnimationShowSupportWeaponHUDBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationShowSupportWeaponHUDBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.SwitchCoolingAnimation
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalHUD2Component_C::SwitchCoolingAnimation(bool IsOn, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "SwitchCoolingAnimation");

	Params::UArsenalHUD2Component_C_SwitchCoolingAnimation_Params Parms{};

	Parms.IsOn = IsOn;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.PlayAnimationWhenArsenalGotRebooting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalHUD2Component_C::PlayAnimationWhenArsenalGotRebooting(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "PlayAnimationWhenArsenalGotRebooting");

	Params::UArsenalHUD2Component_C_PlayAnimationWhenArsenalGotRebooting_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.StopAnimationWhenArsenalGotRebooting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalHUD2Component_C::StopAnimationWhenArsenalGotRebooting(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "StopAnimationWhenArsenalGotRebooting");

	Params::UArsenalHUD2Component_C_StopAnimationWhenArsenalGotRebooting_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUD2Component.ArsenalHUD2Component_C.ExecuteUbergraph_ArsenalHUD2Component
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayableOgreCharacter_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayableOgreCharacter_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NeedsFemtoGaugeUpdate_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLGameState*               K2Node_DynamicCast_AsTTLGame_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_CurrentTimer                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsVisibleHUD                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isArsenalMode                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isFirst                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_newVisibility                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_hud_top00_C*            K2Node_DynamicCast_AsMsn_Hud_Top_00                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_hud_top00_C*            K2Node_DynamicCast_AsMsn_Hud_Top_001                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsArsenalMode_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsArsenalMode_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_hud_top00_C*            K2Node_DynamicCast_AsMsn_Hud_Top_002                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_hud_top00_C*            K2Node_DynamicCast_AsMsn_Hud_Top_003                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_hud_top00_C*            K2Node_DynamicCast_AsMsn_Hud_Top_004                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isOn                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_widget2                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_hud_gauge01_C*          K2Node_DynamicCast_AsMsn_Hud_Gauge_01                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess11                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_widget1                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_hud_top01_C*            K2Node_DynamicCast_AsMsn_Hud_Top_01                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_hud_top01_C*            K2Node_DynamicCast_AsMsn_Hud_Top_011                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess13                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess14                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTTLHUDMissionMain*          K2Node_DynamicCast_AsTTLHUDMission_Main                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess15                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess16                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetVisibilityAll_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_hud_top00_C*            K2Node_DynamicCast_AsMsn_Hud_Top_005                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess17                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess18                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTTLHUDMissionMain*          K2Node_DynamicCast_AsTTLHUDMission_Main1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess19                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTTLHUDMissionMain*          K2Node_DynamicCast_AsTTLHUDMission_Main2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess20                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBasicStatusComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBasicStatusComponent_C*     CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayableOgreCharacter_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTTLHUDMissionMain*          K2Node_DynamicCast_AsTTLHUDMission_Main3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess21                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UArsenalHUD2Component_C::ExecuteUbergraph_ArsenalHUD2Component(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue1, bool CallFunc_IsPlayableOgreCharacter_ReturnValue, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess1, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_GetOwner_ReturnValue2, bool CallFunc_IsPlayableOgreCharacter_ReturnValue1, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character1, bool K2Node_DynamicCast_bSuccess3, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character1, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_NeedsFemtoGaugeUpdate_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State, bool K2Node_DynamicCast_bSuccess5, float K2Node_CustomEvent_CurrentTimer, bool K2Node_CustomEvent_IsVisibleHUD, float K2Node_Event_DeltaSeconds, bool K2Node_Event_isArsenalMode, bool K2Node_Event_isFirst, bool K2Node_Event_newVisibility, bool CallFunc_IsValid_ReturnValue, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess6, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_001, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_IsArsenalMode_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsArsenalMode_ReturnValue1, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_002, bool K2Node_DynamicCast_bSuccess8, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_003, bool K2Node_DynamicCast_bSuccess9, int32 K2Node_Event_index, bool K2Node_SwitchInteger_CmpSuccess, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_004, bool K2Node_DynamicCast_bSuccess10, bool K2Node_Event_isOn, class UUserWidget* K2Node_Event_widget2, class UMsn_hud_gauge01_C* K2Node_DynamicCast_AsMsn_Hud_Gauge_01, bool K2Node_DynamicCast_bSuccess11, class UUserWidget* K2Node_Event_widget1, class UMsn_hud_top01_C* K2Node_DynamicCast_AsMsn_Hud_Top_01, bool K2Node_DynamicCast_bSuccess12, class UUserWidget* K2Node_Event_Widget, class UMsn_hud_top01_C* K2Node_DynamicCast_AsMsn_Hud_Top_011, bool K2Node_DynamicCast_bSuccess13, bool CallFunc_IsAnimationPlaying_ReturnValue1, bool CallFunc_IsAnimationPlaying_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue3, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character2, bool K2Node_DynamicCast_bSuccess14, class UTTLHUDMissionMain* K2Node_DynamicCast_AsTTLHUDMission_Main, bool K2Node_DynamicCast_bSuccess15, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character2, bool K2Node_DynamicCast_bSuccess16, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetVisibilityAll_ReturnValue, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_005, bool K2Node_DynamicCast_bSuccess17, class AActor* CallFunc_GetOwner_ReturnValue4, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character1, bool K2Node_DynamicCast_bSuccess18, class UTTLHUDMissionMain* K2Node_DynamicCast_AsTTLHUDMission_Main1, bool K2Node_DynamicCast_bSuccess19, class UTTLHUDMissionMain* K2Node_DynamicCast_AsTTLHUDMission_Main2, bool K2Node_DynamicCast_bSuccess20, class AActor* CallFunc_GetOwner_ReturnValue5, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue6, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue7, bool CallFunc_IsPlayableOgreCharacter_ReturnValue2, class UTTLHUDMissionMain* K2Node_DynamicCast_AsTTLHUDMission_Main3, bool K2Node_DynamicCast_bSuccess21, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUD2Component_C", "ExecuteUbergraph_ArsenalHUD2Component");

	Params::UArsenalHUD2Component_C_ExecuteUbergraph_ArsenalHUD2Component_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_IsPlayableOgreCharacter_ReturnValue = CallFunc_IsPlayableOgreCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsOuter_Character = K2Node_DynamicCast_AsOuter_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.CallFunc_IsPlayableOgreCharacter_ReturnValue1 = CallFunc_IsPlayableOgreCharacter_ReturnValue1;
	Parms.K2Node_DynamicCast_AsBase_Character1 = K2Node_DynamicCast_AsBase_Character1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_DynamicCast_AsOuter_Character1 = K2Node_DynamicCast_AsOuter_Character1;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_NeedsFemtoGaugeUpdate_ReturnValue = CallFunc_NeedsFemtoGaugeUpdate_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLGame_State = K2Node_DynamicCast_AsTTLGame_State;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_CustomEvent_CurrentTimer = K2Node_CustomEvent_CurrentTimer;
	Parms.K2Node_CustomEvent_IsVisibleHUD = K2Node_CustomEvent_IsVisibleHUD;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_isArsenalMode = K2Node_Event_isArsenalMode;
	Parms.K2Node_Event_isFirst = K2Node_Event_isFirst;
	Parms.K2Node_Event_newVisibility = K2Node_Event_newVisibility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_00 = K2Node_DynamicCast_AsMsn_Hud_Top_00;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_001 = K2Node_DynamicCast_AsMsn_Hud_Top_001;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_IsArsenalMode_ReturnValue = CallFunc_IsArsenalMode_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsArsenalMode_ReturnValue1 = CallFunc_IsArsenalMode_ReturnValue1;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_002 = K2Node_DynamicCast_AsMsn_Hud_Top_002;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_003 = K2Node_DynamicCast_AsMsn_Hud_Top_003;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.K2Node_Event_index = K2Node_Event_index;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_004 = K2Node_DynamicCast_AsMsn_Hud_Top_004;
	Parms.K2Node_DynamicCast_bSuccess10 = K2Node_DynamicCast_bSuccess10;
	Parms.K2Node_Event_isOn = K2Node_Event_isOn;
	Parms.K2Node_Event_widget2 = K2Node_Event_widget2;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Gauge_01 = K2Node_DynamicCast_AsMsn_Hud_Gauge_01;
	Parms.K2Node_DynamicCast_bSuccess11 = K2Node_DynamicCast_bSuccess11;
	Parms.K2Node_Event_widget1 = K2Node_Event_widget1;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_01 = K2Node_DynamicCast_AsMsn_Hud_Top_01;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_011 = K2Node_DynamicCast_AsMsn_Hud_Top_011;
	Parms.K2Node_DynamicCast_bSuccess13 = K2Node_DynamicCast_bSuccess13;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue1 = CallFunc_IsAnimationPlaying_ReturnValue1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue2 = CallFunc_IsAnimationPlaying_ReturnValue2;
	Parms.CallFunc_GetOwner_ReturnValue3 = CallFunc_GetOwner_ReturnValue3;
	Parms.K2Node_DynamicCast_AsBase_Character2 = K2Node_DynamicCast_AsBase_Character2;
	Parms.K2Node_DynamicCast_bSuccess14 = K2Node_DynamicCast_bSuccess14;
	Parms.K2Node_DynamicCast_AsTTLHUDMission_Main = K2Node_DynamicCast_AsTTLHUDMission_Main;
	Parms.K2Node_DynamicCast_bSuccess15 = K2Node_DynamicCast_bSuccess15;
	Parms.K2Node_DynamicCast_AsOuter_Character2 = K2Node_DynamicCast_AsOuter_Character2;
	Parms.K2Node_DynamicCast_bSuccess16 = K2Node_DynamicCast_bSuccess16;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetVisibilityAll_ReturnValue = CallFunc_SetVisibilityAll_ReturnValue;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_005 = K2Node_DynamicCast_AsMsn_Hud_Top_005;
	Parms.K2Node_DynamicCast_bSuccess17 = K2Node_DynamicCast_bSuccess17;
	Parms.CallFunc_GetOwner_ReturnValue4 = CallFunc_GetOwner_ReturnValue4;
	Parms.K2Node_DynamicCast_AsArsenal_Character1 = K2Node_DynamicCast_AsArsenal_Character1;
	Parms.K2Node_DynamicCast_bSuccess18 = K2Node_DynamicCast_bSuccess18;
	Parms.K2Node_DynamicCast_AsTTLHUDMission_Main1 = K2Node_DynamicCast_AsTTLHUDMission_Main1;
	Parms.K2Node_DynamicCast_bSuccess19 = K2Node_DynamicCast_bSuccess19;
	Parms.K2Node_DynamicCast_AsTTLHUDMission_Main2 = K2Node_DynamicCast_AsTTLHUDMission_Main2;
	Parms.K2Node_DynamicCast_bSuccess20 = K2Node_DynamicCast_bSuccess20;
	Parms.CallFunc_GetOwner_ReturnValue5 = CallFunc_GetOwner_ReturnValue5;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue6 = CallFunc_GetOwner_ReturnValue6;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue7 = CallFunc_GetOwner_ReturnValue7;
	Parms.CallFunc_IsPlayableOgreCharacter_ReturnValue2 = CallFunc_IsPlayableOgreCharacter_ReturnValue2;
	Parms.K2Node_DynamicCast_AsTTLHUDMission_Main3 = K2Node_DynamicCast_AsTTLHUDMission_Main3;
	Parms.K2Node_DynamicCast_bSuccess21 = K2Node_DynamicCast_bSuccess21;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}


