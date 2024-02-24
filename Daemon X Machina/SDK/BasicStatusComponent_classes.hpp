#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB70 - 0xB68)
// BlueprintGeneratedClass BasicStatusComponent.BasicStatusComponent_C
class UBasicStatusComponent_C : public UTTLBasicStatusComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB68(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBasicStatusComponent_C* GetDefaultObj();

	void ChangeHUDMode(enum class ETTLEHUDMode NewHUDMode, enum class ETTLEHUDMode Temp_byte_Variable, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue2, class FName K2Node_Select_Default, const struct FTTLHUDModeSettingsParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	float CalcFinalDamage(float Damage, float Defence, float ActualDefenceCorrection, float FinalDefence, int32 CallFunc_CalcParticleArmorNum_ReturnValue, float CallFunc_GetBaseDamage_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, class UTTLArsenalParticleArmorComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsExistMyMirage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void ReceiveBeginPlay();
	void OnStatusOverHeat_Event_0();
	void OnStatusQuitOverHeat_Event_0();
	void OnStatusDead_0();
	void ReCalcParameters();
	void ExecuteUbergraph_BasicStatusComponent(int32 EntryPoint, float CallFunc_CalcFemtoUpRateWithFluctuation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character1, bool K2Node_DynamicCast_bSuccess1, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess2, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess3, class UArsenalCatchableActorMovement_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
};

}


