#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x481 - 0x470)
// BlueprintGeneratedClass ba_aa_melee_00.ba_aa_melee_00_C
class Aba_aa_melee_00_C : public ACGActiveItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         bSide;                                             // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Aba_aa_melee_00_C* GetDefaultObj();

	void OnNotifyEnd_3C04733A4EA242DA3342C19D69410481(class FName NotifyName);
	void OnNotifyBegin_3C04733A4EA242DA3342C19D69410481(class FName NotifyName);
	void OnInterrupted_3C04733A4EA242DA3342C19D69410481(class FName NotifyName);
	void OnBlendOut_3C04733A4EA242DA3342C19D69410481(class FName NotifyName);
	void OnCompleted_3C04733A4EA242DA3342C19D69410481(class FName NotifyName);
	void MeleeDamageDealt(class ACGCharacter* InHitCharacter, class ACGActiveItem* InActiveItem);
	void ActivateItem();
	void ExecuteUbergraph_ba_aa_melee_00(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAnimSequenceBase* Temp_object_Variable_2, class UAnimSequenceBase* Temp_object_Variable_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAnimMontage* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UAnimSequenceBase* K2Node_Select_Default_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACGCharacter* K2Node_CustomEvent_InHitCharacter, class ACGActiveItem* K2Node_CustomEvent_InActiveItem, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


