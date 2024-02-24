#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x964 - 0x958)
// BlueprintGeneratedClass BPWeaponFireProjectile_Magic_HYP.BPWeaponFireProjectile_Magic_HYP_C
class UBPWeaponFireProjectile_Magic_HYP_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x958(0x8)(Transient, DuplicateTransient)
	int32                                        NShotsFired;                                       // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPWeaponFireProjectile_Magic_HYP_C* GetDefaultObj();

	void ResetShotsFired(const class FString& CallFunc_Conv_IntToString_ReturnValue);
	void K2_OnActivated();
	void WeaponUsed();
	void ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void DebugOut(const class FString& String);
	void BeginRegeneratingAccuracy(const struct FGameResourcePoolReference& ResourcePool);
	void AccuracyFiIlled(const struct FGameResourcePoolReference& ResourcePool);
	void ExecuteUbergraph_BPWeaponFireProjectile_Magic_HYP(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_CustomEvent_bCompleted, bool K2Node_CustomEvent_bAmmoGiven, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWeaponReloadComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, int32 Temp_int_Variable, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& K2Node_CustomEvent_String, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_EqualEqual_ResourcePoolData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue3, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, class AActor* CallFunc_GetOwner_ReturnValue4, bool CallFunc_EqualEqual_ResourcePoolData_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue5, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue6, bool CallFunc_IsZoomed_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue7, bool CallFunc_Not_PreBool_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsZoomed_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1);
};

}


