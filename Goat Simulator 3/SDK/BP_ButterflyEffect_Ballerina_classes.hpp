#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0x351 - 0x2B8)
// BlueprintGeneratedClass BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C
class ABP_ButterflyEffect_Ballerina_C : public ASkeletalMeshActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Spinning_AC;                                       // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Hair;                                              // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FemaleBottom;                                      // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Pirroute2Timeline_RotationSpeed_D6838F254025840F17238BA6AF6FADBE; // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Pirroute2Timeline__Direction_D6838F254025840F17238BA6AF6FADBE; // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D76[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Pirroute2Timeline;                                 // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PirrouteTimeline_RotationSpeed_4DFEC45F4F97F5C5E51A8AA123C9B47C; // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PirrouteTimeline__Direction_4DFEC45F4F97F5C5E51A8AA123C9B47C; // 0x2FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D82[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PirrouteTimeline;                                  // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BallerinaTimeline_Alpha_723E67D141BAA38684D6F782CF611D09; // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BallerinaTimeline__Direction_723E67D141BAA38684D6F782CF611D09; // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D85[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BallerinaTimeline;                                 // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              InitialRotationRate;                               // 0x318(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              TargetRotationRate;                                // 0x324(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_            IsSpinningFast;                                    // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        MaxCullDistance;                                   // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsingPirrouteAnim;                                 // 0x344(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UsingPirroute2Anim;                                // 0x345(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DA2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              SpinningPS;                                        // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAttachedToTornado;                               // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ButterflyEffect_Ballerina_C* GetDefaultObj();

	void UserConstructionScript();
	void BallerinaTimeline__FinishedFunc();
	void BallerinaTimeline__UpdateFunc();
	void PirrouteTimeline__FinishedFunc();
	void PirrouteTimeline__UpdateFunc();
	void Pirroute2Timeline__FinishedFunc();
	void Pirroute2Timeline__UpdateFunc();
	void OnNotifyEnd_5C8F8311450EAC1D61CEC5AA7EB27E3C(class FName NotifyName);
	void OnNotifyBegin_5C8F8311450EAC1D61CEC5AA7EB27E3C(class FName NotifyName);
	void OnInterrupted_5C8F8311450EAC1D61CEC5AA7EB27E3C(class FName NotifyName);
	void OnBlendOut_5C8F8311450EAC1D61CEC5AA7EB27E3C(class FName NotifyName);
	void OnCompleted_5C8F8311450EAC1D61CEC5AA7EB27E3C(class FName NotifyName);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void StartSpinning_Minus_Multicast();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void PrepareToAttachToTornado();
	void ExecuteUbergraph_BP_ButterflyEffect_Ballerina(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_RLerp_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool Temp_bool_Has_Been_Initd_Variable, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_1);
	void IsSpinningFast__DelegateSignature();
};

}


