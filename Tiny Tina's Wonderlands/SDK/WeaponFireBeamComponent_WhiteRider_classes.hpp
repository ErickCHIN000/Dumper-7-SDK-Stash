#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0xA30 - 0x938)
// BlueprintGeneratedClass WeaponFireBeamComponent_WhiteRider.WeaponFireBeamComponent_WhiteRider_C
class UWeaponFireBeamComponent_WhiteRider_C : public UWeaponFireBeamComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(Transient, DuplicateTransient)
	class AWeapon*                               OwningWeapon;                                      // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          WhiteRiderTimerHandle;                             // 0x948(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       Query_WhiteRider;                                  // 0x950(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AActor*                                SecondBeamTarget;                                  // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        AvailableTargets;                                  // 0xA10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                BestActorTarget;                                   // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BeamID;                                            // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWeaponFireBeamComponent_WhiteRider_C* GetDefaultObj();

	void BindActorOnDeath(class AActor* TargetActor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue);
	void ClearAndInvalidateMultiBeams();
	void CleanupExtraBeams();
	class AActor* GetLockedTarget(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetLockedTarget_ReturnValue);
	TSubclassOf<class ULightBeamData> GetShotLightBeamData(uint8 Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* K2Node_Select_Default);
	void ReceiveBeginPlay();
	void Event_NotifyUseStarted();
	void Event_NotifyUseFinished();
	void WhiteRiderTargetingTimer();
	void K2_OnDeactivated();
	void OnDeath_SecondTarget(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnDeath_BestTarget(class AActor* DamageReceiver, class AActor* DamageCauser);
	void DefineNewBeamTargets();
	void ExecuteUbergraph_WeaponFireBeamComponent_WhiteRider(int32 EntryPoint, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AWeapon* CallFunc_GetWeapon_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* K2Node_CustomEvent_DamageReceiver1, class AActor* K2Node_CustomEvent_DamageCauser1, bool CallFunc_BooleanAND_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue3, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment1, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FOakLightBeamInitializationData& K2Node_MakeStruct_OakLightBeamInitializationData, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FLightBeamQueryData& K2Node_MakeStruct_LightBeamQueryData, bool CallFunc_DoesLightBeamExist_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item1, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue4, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue5, class AActor* CallFunc_Array_Get_Item2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_Array_RemoveItem_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1);
};

}


