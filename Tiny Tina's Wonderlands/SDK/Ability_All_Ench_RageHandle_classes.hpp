#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x1E0 - 0x198)
// BlueprintGeneratedClass Ability_All_Ench_RageHandle.Ability_All_Ench_RageHandle_C
class UAbility_All_Ench_RageHandle_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                 TagContainer_Boss;                                 // 0x1A0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsBoss_;                                           // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4560[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 FeralSurgeCDRHandle;                               // 0x1C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_All_Ench_RageHandle_C* GetDefaultObj();

	void Enchantment_CausedMeleeDmg(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_All_Ench_RageHandle(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable1, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, class UClass* CallFunc_GetSlotAbilityClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class AActor* K2Node_Event_DamageInstigator, float K2Node_Event_Damage, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default);
};

}


