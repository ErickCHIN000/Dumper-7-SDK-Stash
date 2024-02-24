#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x188 - 0x148)
// BlueprintGeneratedClass BP_CE_BAMF_Player_StandIn_CC.BP_CE_BAMF_Player_StandIn_CC_C
class UBP_CE_BAMF_Player_StandIn_CC_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)
	class UWwiseEvent*                           Audio_PoofFX;                                      // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_Materialize;                                 // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                MyActor;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_SmallPoof;                                   // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_MediumPoof;                                  // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_LargePoof;                                   // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseRtpc*                            Audio_ObjectScaleRTPC;                             // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CE_BAMF_Player_StandIn_CC_C* GetDefaultObj();

	void PlayMaterialAudio(class UWwiseAudioComponent* ComponentFromInstance, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_GetMaxElement_ReturnValue, class UGbxStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue1, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue2);
	void PlayPoofAudio(const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_GetMaxElement_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1);
	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_BP_CE_BAMF_Player_StandIn_CC(int32 EntryPoint, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, class AActor* K2Node_Event_Actor, float CallFunc_VSize_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
};

}


