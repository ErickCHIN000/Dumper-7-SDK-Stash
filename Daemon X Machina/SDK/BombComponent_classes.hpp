#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x3C8 - 0x2E0)
// BlueprintGeneratedClass BombComponent.BombComponent_C
class UBombComponent_C : public UTTLBombComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(Transient, DuplicateTransient)
	float                                        Damage;                                            // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BombEffectTime;                                    // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SeaquenceDistance;                                 // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionLength;                                   // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageLength;                                      // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedScale;                                        // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TmpRise;                                           // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDamageRate;                                     // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KnockOut;                                          // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KnockBack;                                         // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSeaquence;                                       // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_76C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnStartSeaquence;                                  // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UParticleSystemComponent*              FlashParticle;                                     // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionTimer;                                    // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionTime;                                     // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTriggerExplosion;                                // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_775[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBasicStatusComponent_C*               BasicStatusComponent;                              // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ManualExplosion;                                   // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_778[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              BombInstance;                                      // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DefaultBlinkRate;                                  // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefaultCylinderColor;                              // 0x35C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExpBlinkRate;                                      // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ExpCylinderColor;                                  // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BombElementIndex;                                  // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FriendlyFireEnable;                                // 0x384(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_788[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class ATTLExplosionActor>      ExplosionClassAsset;                               // 0x388(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                ExplosionClass;                                    // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ExplodeParamName;                                  // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBombComponent_C* GetDefaultObj();

	void ExecuteExplosion(const struct FVector& ExplosionPoint, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UTTLBasicStatusComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AActor* CallFunc_CreateExplosionActor_ReturnValue, class AActor* CallFunc_CreateExplosionActor_ReturnValue1);
	void StartExplosion(bool CallFunc_IsValid_ReturnValue);
	void StartSeaquence(class AActor* TargetActor, class USceneComponent* CallFunc_GetFxAttachComponent_AttachToComponent, class FName CallFunc_GetFxAttachComponent_AttachPointName);
	void OnLoaded_98E6E4804825A134AEADC39C1DAB54E2(class UClass* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnDestoryed(class AActor* DestroyedActor);
	void CallExecuteExplosion();
	void CallStartExplosionFromCPP();
	void ExecuteUbergraph_BombComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsTTLExplosion_Actor, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue2, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue3, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class USceneComponent* CallFunc_GetFxAttachComponent_AttachToComponent, class FName CallFunc_GetFxAttachComponent_AttachPointName, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1);
	void OnStartSeaquence__DelegateSignature(float SpeedScale);
};

}


