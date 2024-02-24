#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalEquipComponent.ArsenalEquipComponent_C
// (None)

class UClass* UArsenalEquipComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalEquipComponent_C");

	return Clss;
}


// ArsenalEquipComponent_C ArsenalEquipComponent.Default__ArsenalEquipComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalEquipComponent_C* UArsenalEquipComponent_C::GetDefaultObj()
{
	static class UArsenalEquipComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalEquipComponent_C*>(UArsenalEquipComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.TryStartEquipMode2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsWeaponEquipMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanStartEquipMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTurtleGameInstance_C*       K2Node_DynamicCast_AsTurtle_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalEquipComponent_C::TryStartEquipMode2(bool IsWeaponEquipMode, bool IsLeft, bool CallFunc_CanStartEquipMode_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UTurtleGameInstance_C* K2Node_DynamicCast_AsTurtle_Game_Instance, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "TryStartEquipMode2");

	Params::UArsenalEquipComponent_C_TryStartEquipMode2_Params Parms{};

	Parms.IsWeaponEquipMode = IsWeaponEquipMode;
	Parms.IsLeft = IsLeft;
	Parms.CallFunc_CanStartEquipMode_ReturnValue = CallFunc_CanStartEquipMode_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsTurtle_Game_Instance = K2Node_DynamicCast_AsTurtle_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.TryMoveNext2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLPanelPosition       Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WeaponRackEmptySlot                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLPanelPosition       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLPanelPosition       Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipModeEnabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLInventoryCategory   K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChangeEquipWeaponMode_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanChangeNextWeapon_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetWeaponRackEmptySlot_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTurtleGameInstance_C*       CallFunc_GetGameInstance_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReloading_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUnEquipNextHandWeapon_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanChangeArmCausedByGunArm_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReloading_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalEquipComponent_C::TryMoveNext2(enum class ETTLPanelPosition Position, int32 WeaponRackEmptySlot, enum class ETTLPanelPosition Temp_byte_Variable, enum class ETTLInventoryCategory Temp_byte_Variable1, enum class ETTLInventoryCategory Temp_byte_Variable2, enum class ETTLInventoryCategory Temp_byte_Variable3, enum class ETTLInventoryCategory Temp_byte_Variable4, enum class ETTLInventoryCategory Temp_byte_Variable5, enum class ETTLPanelPosition Temp_byte_Variable6, enum class ETTLInventoryCategory K2Node_Select_Default, enum class ETTLInventoryCategory Temp_byte_Variable7, enum class ETTLInventoryCategory Temp_byte_Variable8, enum class ETTLInventoryCategory Temp_byte_Variable9, enum class ETTLInventoryCategory Temp_byte_Variable10, enum class ETTLInventoryCategory Temp_byte_Variable11, bool CallFunc_IsEquipModeEnabled_ReturnValue, enum class ETTLInventoryCategory K2Node_Select1_Default, bool CallFunc_IsChangeEquipWeaponMode_ReturnValue, bool CallFunc_CanChangeNextWeapon_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetWeaponRackEmptySlot_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsReloading_ReturnValue, bool CallFunc_IsUnEquipNextHandWeapon_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_CanChangeArmCausedByGunArm_ReturnValue, bool CallFunc_IsReloading_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "TryMoveNext2");

	Params::UArsenalEquipComponent_C_TryMoveNext2_Params Parms{};

	Parms.Position = Position;
	Parms.WeaponRackEmptySlot = WeaponRackEmptySlot;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.CallFunc_IsEquipModeEnabled_ReturnValue = CallFunc_IsEquipModeEnabled_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_IsChangeEquipWeaponMode_ReturnValue = CallFunc_IsChangeEquipWeaponMode_ReturnValue;
	Parms.CallFunc_CanChangeNextWeapon_ReturnValue = CallFunc_CanChangeNextWeapon_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetWeaponRackEmptySlot_ReturnValue = CallFunc_GetWeaponRackEmptySlot_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_Result = CallFunc_GetGameInstance_Result;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsReloading_ReturnValue = CallFunc_IsReloading_ReturnValue;
	Parms.CallFunc_IsUnEquipNextHandWeapon_ReturnValue = CallFunc_IsUnEquipNextHandWeapon_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_CanChangeArmCausedByGunArm_ReturnValue = CallFunc_CanChangeArmCausedByGunArm_ReturnValue;
	Parms.CallFunc_IsReloading_ReturnValue1 = CallFunc_IsReloading_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.UpdateHUD2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEquipModeEnabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChangeEquipWeaponMode_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGunArmFromOwnerArm_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGunArmFromOwnerArm_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTurtleGameInstance_C*       CallFunc_GetGameInstance_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLInventoryItem           CallFunc_GetCurrentItem_outItem                                  (NoDestructor)
// struct FTTLInventoryItem           CallFunc_GetCurrentItem_outItem1                                 (NoDestructor)
// struct FTTLInventoryItem           CallFunc_GetCurrentItem_outItem2                                 (NoDestructor)
// enum class ETTLPanelPosition       CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLPanelPosition       CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLInventoryItem           CallFunc_GetCurrentItem_outItem3                                 (NoDestructor)
// struct FTTLInventoryItem           CallFunc_GetCurrentItem_outItem4                                 (NoDestructor)
// struct FTTLInventoryItem           K2Node_MakeStruct_TTLInventoryItem                               (NoDestructor)
// struct FTTLInventoryItem           K2Node_MakeStruct_TTLInventoryItem1                              (NoDestructor)
// struct FTTLInventoryItem           K2Node_Select_Default                                            (NoDestructor)
// enum class ETTLPanelPosition       CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue2  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLPanelPosition       CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue3  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLInventoryItem           CallFunc_GetCurrentItem_outItem5                                 (NoDestructor)
// struct FTTLInventoryItem           CallFunc_GetCurrentItem_outItem6                                 (NoDestructor)
// enum class ETTLPanelPosition       CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue4  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLPanelPosition       CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue5  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLInventoryItem           CallFunc_GetCurrentItem_outItem7                                 (NoDestructor)
// struct FTTLInventoryItem           K2Node_Select1_Default                                           (NoDestructor)

void UArsenalEquipComponent_C::UpdateHUD2(bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_IsEquipModeEnabled_ReturnValue, bool CallFunc_IsChangeEquipWeaponMode_ReturnValue, bool CallFunc_IsGunArmFromOwnerArm_ReturnValue, bool CallFunc_IsGunArmFromOwnerArm_ReturnValue1, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem1, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem2, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue1, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem3, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem4, const struct FTTLInventoryItem& K2Node_MakeStruct_TTLInventoryItem, const struct FTTLInventoryItem& K2Node_MakeStruct_TTLInventoryItem1, const struct FTTLInventoryItem& K2Node_Select_Default, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue2, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue3, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem5, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem6, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue4, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue5, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem7, const struct FTTLInventoryItem& K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "UpdateHUD2");

	Params::UArsenalEquipComponent_C_UpdateHUD2_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_IsEquipModeEnabled_ReturnValue = CallFunc_IsEquipModeEnabled_ReturnValue;
	Parms.CallFunc_IsChangeEquipWeaponMode_ReturnValue = CallFunc_IsChangeEquipWeaponMode_ReturnValue;
	Parms.CallFunc_IsGunArmFromOwnerArm_ReturnValue = CallFunc_IsGunArmFromOwnerArm_ReturnValue;
	Parms.CallFunc_IsGunArmFromOwnerArm_ReturnValue1 = CallFunc_IsGunArmFromOwnerArm_ReturnValue1;
	Parms.CallFunc_GetGameInstance_Result = CallFunc_GetGameInstance_Result;
	Parms.CallFunc_GetCurrentItem_outItem = CallFunc_GetCurrentItem_outItem;
	Parms.CallFunc_GetCurrentItem_outItem1 = CallFunc_GetCurrentItem_outItem1;
	Parms.CallFunc_GetCurrentItem_outItem2 = CallFunc_GetCurrentItem_outItem2;
	Parms.CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue = CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue;
	Parms.CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue1 = CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue1;
	Parms.CallFunc_GetCurrentItem_outItem3 = CallFunc_GetCurrentItem_outItem3;
	Parms.CallFunc_GetCurrentItem_outItem4 = CallFunc_GetCurrentItem_outItem4;
	Parms.K2Node_MakeStruct_TTLInventoryItem = K2Node_MakeStruct_TTLInventoryItem;
	Parms.K2Node_MakeStruct_TTLInventoryItem1 = K2Node_MakeStruct_TTLInventoryItem1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue2 = CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue2;
	Parms.CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue3 = CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue3;
	Parms.CallFunc_GetCurrentItem_outItem5 = CallFunc_GetCurrentItem_outItem5;
	Parms.CallFunc_GetCurrentItem_outItem6 = CallFunc_GetCurrentItem_outItem6;
	Parms.CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue4 = CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue4;
	Parms.CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue5 = CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue5;
	Parms.CallFunc_GetCurrentItem_outItem7 = CallFunc_GetCurrentItem_outItem7;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.TryStartEquipMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsWeaponEquipMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanStartEquipMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTurtleGameInstance_C*       K2Node_DynamicCast_AsTurtle_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalEquipComponent_C::TryStartEquipMode(bool IsWeaponEquipMode, bool CallFunc_CanStartEquipMode_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UTurtleGameInstance_C* K2Node_DynamicCast_AsTurtle_Game_Instance, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "TryStartEquipMode");

	Params::UArsenalEquipComponent_C_TryStartEquipMode_Params Parms{};

	Parms.IsWeaponEquipMode = IsWeaponEquipMode;
	Parms.CallFunc_CanStartEquipMode_ReturnValue = CallFunc_CanStartEquipMode_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsTurtle_Game_Instance = K2Node_DynamicCast_AsTurtle_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.IsUsingHUD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalEquipComponent_C::IsUsingHUD(bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "IsUsingHUD");

	Params::UArsenalEquipComponent_C_IsUsingHUD_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsVisible_Result = CallFunc_IsVisible_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.TryHideHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalEquipComponent_C::TryHideHUD(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "TryHideHUD");

	Params::UArsenalEquipComponent_C_TryHideHUD_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsVisible_Result = CallFunc_IsVisible_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.TryChangeCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Y                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize2D_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegAtan2_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLInventoryCategory   CallFunc_DegreeToCategory_Result                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipComponent_C::TryChangeCategory(float X, float Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegAtan2_ReturnValue, bool CallFunc_IsVisible_Result, enum class ETTLInventoryCategory CallFunc_DegreeToCategory_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "TryChangeCategory");

	Params::UArsenalEquipComponent_C_TryChangeCategory_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_VSize2D_ReturnValue = CallFunc_VSize2D_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_DegAtan2_ReturnValue = CallFunc_DegAtan2_ReturnValue;
	Parms.CallFunc_IsVisible_Result = CallFunc_IsVisible_Result;
	Parms.CallFunc_DegreeToCategory_Result = CallFunc_DegreeToCategory_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.SetCurrentHUDCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLInventoryCategory   Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipComponent_C::SetCurrentHUDCategory(enum class ETTLInventoryCategory Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "SetCurrentHUDCategory");

	Params::UArsenalEquipComponent_C_SetCurrentHUDCategory_Params Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.TryMoveNextOrPrev
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNext                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTurtleGameInstance_C*       CallFunc_GetGameInstance_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGunArmFromPartsID_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGunArmFromPartsID_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalEquipComponent_C::TryMoveNextOrPrev(bool IsNext, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_IsVisible_Result, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result, bool CallFunc_IsGunArmFromPartsID_ReturnValue, bool CallFunc_IsGunArmFromPartsID_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "TryMoveNextOrPrev");

	Params::UArsenalEquipComponent_C_TryMoveNextOrPrev_Params Parms{};

	Parms.IsNext = IsNext;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsVisible_Result = CallFunc_IsVisible_Result;
	Parms.CallFunc_GetGameInstance_Result = CallFunc_GetGameInstance_Result;
	Parms.CallFunc_IsGunArmFromPartsID_ReturnValue = CallFunc_IsGunArmFromPartsID_ReturnValue;
	Parms.CallFunc_IsGunArmFromPartsID_ReturnValue1 = CallFunc_IsGunArmFromPartsID_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.UpdateHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTurtleGameInstance_C*       CallFunc_GetGameInstance_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPagerInfoByCategory_currentPage                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPagerInfoByCategory_maxPage                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLInventoryItem           CallFunc_GetCurrentItem_outItem                                  (NoDestructor)
// struct FTTLInventoryItem           CallFunc_GetCurrentItem_outItem1                                 (NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCloseRangeWeapon_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPagerInfoByCategory_currentPage1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPagerInfoByCategory_maxPage1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipComponent_C::UpdateHUD(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsVisible_Result, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result, int32 CallFunc_GetPagerInfoByCategory_currentPage, int32 CallFunc_GetPagerInfoByCategory_maxPage, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem1, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue1, bool CallFunc_IsCloseRangeWeapon_Result, int32 CallFunc_GetPagerInfoByCategory_currentPage1, int32 CallFunc_GetPagerInfoByCategory_maxPage1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "UpdateHUD");

	Params::UArsenalEquipComponent_C_UpdateHUD_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsVisible_Result = CallFunc_IsVisible_Result;
	Parms.CallFunc_GetGameInstance_Result = CallFunc_GetGameInstance_Result;
	Parms.CallFunc_GetPagerInfoByCategory_currentPage = CallFunc_GetPagerInfoByCategory_currentPage;
	Parms.CallFunc_GetPagerInfoByCategory_maxPage = CallFunc_GetPagerInfoByCategory_maxPage;
	Parms.CallFunc_GetCurrentItem_outItem = CallFunc_GetCurrentItem_outItem;
	Parms.CallFunc_GetCurrentItem_outItem1 = CallFunc_GetCurrentItem_outItem1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue1 = CallFunc_FTrunc_ReturnValue1;
	Parms.CallFunc_IsCloseRangeWeapon_Result = CallFunc_IsCloseRangeWeapon_Result;
	Parms.CallFunc_GetPagerInfoByCategory_currentPage1 = CallFunc_GetPagerInfoByCategory_currentPage1;
	Parms.CallFunc_GetPagerInfoByCategory_maxPage1 = CallFunc_GetPagerInfoByCategory_maxPage1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.TrySwitchHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalEquipComponent_C::TrySwitchHUD(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "TrySwitchHUD");

	Params::UArsenalEquipComponent_C_TrySwitchHUD_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsVisible_Result = CallFunc_IsVisible_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.TTLBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UArsenalEquipComponent_C::TTLBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "TTLBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.UpdateArsenalHandWeaponBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalEquipComponent_C::UpdateArsenalHandWeaponBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "UpdateArsenalHandWeaponBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.UpdateArsenalHandWeaponBPForAI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalEquipComponent_C::UpdateArsenalHandWeaponBPForAI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "UpdateArsenalHandWeaponBPForAI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.CallCalcArsenalParam
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalEquipComponent_C::CallCalcArsenalParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "CallCalcArsenalParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalEquipComponent.ArsenalEquipComponent_C.ExecuteUbergraph_ArsenalEquipComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTTLAIActionArsenalComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalEquipComponent_C::ExecuteUbergraph_ArsenalEquipComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class UTTLAIActionArsenalComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipComponent_C", "ExecuteUbergraph_ArsenalEquipComponent");

	Params::UArsenalEquipComponent_C_ExecuteUbergraph_ArsenalEquipComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


