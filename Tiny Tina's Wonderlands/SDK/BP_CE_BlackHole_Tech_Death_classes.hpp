#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x160 - 0x148)
// BlueprintGeneratedClass BP_CE_BlackHole_Tech_Death.BP_CE_BlackHole_Tech_Death_C
class UBP_CE_BlackHole_Tech_Death_C : public UBP_CE_TechDeath_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)
	class AActor*                                MyActor;                                           // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_BlackHole;                                   // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CE_BlackHole_Tech_Death_C* GetDefaultObj();

	void PlayBlackholeAudio(TArray<class AActor*>& K2Node_MakeArray_Array, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, class UGbxStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetMaxElement_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue1);
	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_BP_CE_BlackHole_Tech_Death(int32 EntryPoint, class AActor* K2Node_Event_Actor);
};

}


