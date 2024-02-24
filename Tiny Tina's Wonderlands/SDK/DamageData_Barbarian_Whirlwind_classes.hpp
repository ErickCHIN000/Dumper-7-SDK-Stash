#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x390 - 0x350)
// BlueprintGeneratedClass DamageData_Barbarian_Whirlwind.DamageData_Barbarian_Whirlwind_C
class UDamageData_Barbarian_Whirlwind_C : public UOakDamageData
{
public:
	class UWwiseEvent*                           Audio_AxeImpact;                                   // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 WhirlwindDamageMultiplierHandle;                   // 0x358(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameplayTagContainer                 MatchingTags;                                      // 0x370(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UDamageData_Barbarian_Whirlwind_C* GetDefaultObj();

	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess2, class UPlayerMeleeStateComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue2, bool Temp_bool_Variable, bool Temp_bool_Variable1, float Temp_float_Variable, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2);
};

}


