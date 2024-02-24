#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x400 - 0x3F0)
// BlueprintGeneratedClass ArsenalEquipComponent.ArsenalEquipComponent_C
class UArsenalEquipComponent_C : public UTTLArsenalEquipComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class AArsenalCharacter_C*                   OwnerArsenalCharacter;                             // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UArsenalEquipComponent_C* GetDefaultObj();

	void TryStartEquipMode2(bool IsWeaponEquipMode, bool IsLeft, bool CallFunc_CanStartEquipMode_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UTurtleGameInstance_C* K2Node_DynamicCast_AsTurtle_Game_Instance, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue);
	void TryMoveNext2(enum class ETTLPanelPosition Position, int32 WeaponRackEmptySlot, enum class ETTLPanelPosition Temp_byte_Variable, enum class ETTLInventoryCategory Temp_byte_Variable1, enum class ETTLInventoryCategory Temp_byte_Variable2, enum class ETTLInventoryCategory Temp_byte_Variable3, enum class ETTLInventoryCategory Temp_byte_Variable4, enum class ETTLInventoryCategory Temp_byte_Variable5, enum class ETTLPanelPosition Temp_byte_Variable6, enum class ETTLInventoryCategory K2Node_Select_Default, enum class ETTLInventoryCategory Temp_byte_Variable7, enum class ETTLInventoryCategory Temp_byte_Variable8, enum class ETTLInventoryCategory Temp_byte_Variable9, enum class ETTLInventoryCategory Temp_byte_Variable10, enum class ETTLInventoryCategory Temp_byte_Variable11, bool CallFunc_IsEquipModeEnabled_ReturnValue, enum class ETTLInventoryCategory K2Node_Select1_Default, bool CallFunc_IsChangeEquipWeaponMode_ReturnValue, bool CallFunc_CanChangeNextWeapon_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetWeaponRackEmptySlot_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsReloading_ReturnValue, bool CallFunc_IsUnEquipNextHandWeapon_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_CanChangeArmCausedByGunArm_ReturnValue, bool CallFunc_IsReloading_ReturnValue1);
	void UpdateHUD2(bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_IsEquipModeEnabled_ReturnValue, bool CallFunc_IsChangeEquipWeaponMode_ReturnValue, bool CallFunc_IsGunArmFromOwnerArm_ReturnValue, bool CallFunc_IsGunArmFromOwnerArm_ReturnValue1, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem1, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem2, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue1, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem3, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem4, const struct FTTLInventoryItem& K2Node_MakeStruct_TTLInventoryItem, const struct FTTLInventoryItem& K2Node_MakeStruct_TTLInventoryItem1, const struct FTTLInventoryItem& K2Node_Select_Default, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue2, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue3, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem5, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem6, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue4, enum class ETTLPanelPosition CallFunc_ConvertPanelPositionFromInventoryCategory_ReturnValue5, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem7, const struct FTTLInventoryItem& K2Node_Select1_Default);
	void TryStartEquipMode(bool IsWeaponEquipMode, bool CallFunc_CanStartEquipMode_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UTurtleGameInstance_C* K2Node_DynamicCast_AsTurtle_Game_Instance, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue);
	void IsUsingHUD(bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_Result);
	void TryHideHUD(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_Result);
	void TryChangeCategory(float X, float Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegAtan2_ReturnValue, bool CallFunc_IsVisible_Result, enum class ETTLInventoryCategory CallFunc_DegreeToCategory_Result);
	void SetCurrentHUDCategory(enum class ETTLInventoryCategory Category);
	void TryMoveNextOrPrev(bool IsNext, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_IsVisible_Result, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result, bool CallFunc_IsGunArmFromPartsID_ReturnValue, bool CallFunc_IsGunArmFromPartsID_ReturnValue1);
	void UpdateHUD(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsVisible_Result, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result, int32 CallFunc_GetPagerInfoByCategory_currentPage, int32 CallFunc_GetPagerInfoByCategory_maxPage, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem, const struct FTTLInventoryItem& CallFunc_GetCurrentItem_outItem1, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue1, bool CallFunc_IsCloseRangeWeapon_Result, int32 CallFunc_GetPagerInfoByCategory_currentPage1, int32 CallFunc_GetPagerInfoByCategory_maxPage1);
	void TrySwitchHUD(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_Result);
	void TTLBeginPlay();
	void UpdateArsenalHandWeaponBP();
	void UpdateArsenalHandWeaponBPForAI();
	void CallCalcArsenalParam();
	void ExecuteUbergraph_ArsenalEquipComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class UTTLAIActionArsenalComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


