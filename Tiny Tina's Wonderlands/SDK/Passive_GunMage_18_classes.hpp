#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x320 - 0x2C8)
// BlueprintGeneratedClass Passive_GunMage_18.Passive_GunMage_18_C
class UPassive_GunMage_18_C : public U_Passive_KillSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(Transient, DuplicateTransient)
	struct FDataTableValueHandle                 RetriggerDelay;                                    // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFeat_GunMage_C*                       GunMageFeat;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 Chance;                                            // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 ExtraChance;                                       // 0x308(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UPassive_GunMage_18_C* GetDefaultObj();

	void OnActivated();
	void OnResumed();
	void OakPassiveTriggerKillSkillEffect(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details, bool bWasAutoTrigger);
	void ExecuteUbergraph_Passive_GunMage_18(int32 EntryPoint, TScriptInterface<class IIFeat_GunMage_C> K2Node_DynamicCast_AsIFeat_Gun_Mage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAbilityTimerActive_ReturnValue, int32 CallFunc_GetSpellweavingStacks_Res, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, class UGbxAbility* CallFunc_GetClassFeat_Res, class UFeat_GunMage_C* K2Node_DynamicCast_AsFeat_Gun_Mage, bool K2Node_DynamicCast_bSuccess2, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, bool K2Node_Event_bWasAutoTrigger, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, float CallFunc_Multiply_IntFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


