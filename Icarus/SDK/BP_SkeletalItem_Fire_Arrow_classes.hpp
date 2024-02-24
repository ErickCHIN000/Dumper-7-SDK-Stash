#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x5CC - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C
class ABP_SkeletalItem_Fire_Arrow_C : public ASkeletalItem
{
public:
	uint8                                        Pad_19BF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   FMODFireLoop;                                      // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        LightFade_Float_FB55DCB2435BEBA8D3B4CE898BF4891D;  // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                LightFade__Direction_FB55DCB2435BEBA8D3B4CE898BF4891D; // 0x5A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    LightFade;                                         // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPreviewActor;                                    // 0x5B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	enum class EPreviewActorType                 PreviewType;                                       // 0x5B1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19ED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Intensity;                                         // 0x5B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SFX_TimerHandle;                                   // 0x5B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LocLast;                                           // 0x5C0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Fire_Arrow_C* GetDefaultObj();

	void SFX_KnockedFireMovement(const struct FVector& LocCurrent, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void OnRep_PreviewType();
	void LightFade__FinishedFunc();
	void LightFade__UpdateFunc();
	void ReceiveBeginPlay();
	void InitArrow();
	void BndEvt__Niagara_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component);
	void ExecuteUbergraph_BP_SkeletalItem_Fire_Arrow(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, enum class EValid CallFunc_GetTrait_Paths, class UBP_BallisticBehaviour_Base_C* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EPreviewActorType Temp_wildcard_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, float CallFunc_Lerp_ReturnValue, class UActorComponent* K2Node_ComponentBoundEvent_Component, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1);
};

}


