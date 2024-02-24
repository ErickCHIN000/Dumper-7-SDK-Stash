#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x370 - 0x350)
// BlueprintGeneratedClass DamageData_Rogue_LivingBlade.DamageData_Rogue_LivingBlade_C
class UDamageData_Rogue_LivingBlade_C : public UOakDamageData
{
public:
	struct FDataTableValueHandle                 LivingBladeDamageMultiplierHandle;                 // 0x350(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWwiseEvent*                           Audio_DamageImp;                                   // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDamageData_Rogue_LivingBlade_C* GetDefaultObj();

	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, class UPlayerMeleeStateComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue);
	void OnKilledEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details);
};

}


