#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1C8 - 0x198)
// BlueprintGeneratedClass Ability_Shaman_Ward_BogTotem_TotalCrit.Ability_Shaman_Ward_BogTotem_TotalCrit_C
class UAbility_Shaman_Ward_BogTotem_TotalCrit_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	float                                        BogTotemCritScaleValue;                            // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_402E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          BogTotemTimerHandle;                               // 0x1A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FStatusEffectInstanceReference        EnchantmentStatusEffectHandle;                     // 0x1B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UAbility_Shaman_Ward_BogTotem_TotalCrit_C* GetDefaultObj();

	void OnDeactivated();
	void SetManagedBogTotemCount();
	void OnActivated();
	void ExecuteUbergraph_Ability_Shaman_Ward_BogTotem_TotalCrit(int32 EntryPoint, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetManagedActorCount_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


