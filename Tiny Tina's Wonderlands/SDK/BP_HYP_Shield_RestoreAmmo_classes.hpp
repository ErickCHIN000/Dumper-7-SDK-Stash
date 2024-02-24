#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x360 - 0x358)
// BlueprintGeneratedClass BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C
class UBP_HYP_Shield_RestoreAmmo_C : public UBP_HYP_Shield_Basic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_HYP_Shield_RestoreAmmo_C* GetDefaultObj();

	void OnShieldCreated();
	void OnTakeWeaponShieldDamage(class UDamageComponent* DamageReceiver, float ShieldDamage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser);
	void ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue1, class UDamageComponent* K2Node_CustomEvent_DamageReceiver, float K2Node_CustomEvent_ShieldDamage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AController* K2Node_CustomEvent_InstigatedBy, class UDamageCauserComponent* K2Node_CustomEvent_DamageCauser, class AWeapon* CallFunc_GetWeapon_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


