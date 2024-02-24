#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xA50 - 0x9C8)
// BlueprintGeneratedClass BP_FishingRod.BP_FishingRod_C
class ABP_FishingRod_C : public ABP_EquippableItemBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScopedAkComponent*                    Ak_FishingRod_Scoped;                              // 0x9D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Lerp_MoveBobber_1FDB91ED43B8C3137B3D958B74578D9B; // 0x9D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Lerp__Direction_1FDB91ED43B8C3137B3D958B74578D9B; // 0x9DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_786D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Lerp;                                     // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       LineTension;                                       // 0x9E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReeling;                                         // 0x9F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7888[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       As_BP_Character;                                   // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_FishingBobber_C*                   Bobber;                                            // 0xA00(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            On_Cast_Finished;                                  // 0xA08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Bobber_Invalid_Location;                        // 0xA18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                               BobberLocation;                                    // 0xA28(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOwningClient;                                    // 0xA40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_78B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     NSSplash;                                          // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FishingRod_C* GetDefaultObj();

	void OnRep_Bobber();
	void UpdateFishStrength_Bobber(double Fish_Strength, bool CallFunc_IsValid_ReturnValue);
	void UpdateLineTension(double LineTension, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
	void Timeline_Lerp__FinishedFunc();
	void Timeline_Lerp__UpdateFunc();
	void SetupBobber_Server(const struct FVector& Start, const struct FVector& End);
	void CleanupBobberAndLine();
	void CastComplete();
	void BobberOutside();
	void UpdateBobberLocation(const struct FVector& BobberLocation);
	void UpdateBobberLocation_Multi(const struct FVector& Bobber_Location);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Client_SetupBobber_Multicast();
	void ExecuteUbergraph_BP_FishingRod(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& K2Node_CustomEvent_Start, const struct FVector& K2Node_CustomEvent_End, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_FishingBobber_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& K2Node_CustomEvent_BobberLocation, const struct FVector& K2Node_CustomEvent_Bobber_Location, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_5);
	void On_Bobber_Invalid_Location__DelegateSignature();
	void On_Cast_Finished__DelegateSignature();
};

}


