#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x170 - 0x148)
// BlueprintGeneratedClass BP_CE_Death_PlayerMesh_Bamf_Out.BP_CE_Death_PlayerMesh_Bamf_Out_C
class UBP_CE_Death_PlayerMesh_Bamf_Out_C : public UBP_CE_TechDeath_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)
	struct FVector                               CurrentObjectLocation;                             // 0x150(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentObjectRadius;                               // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_MaterializeOut;                              // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseRtpc*                            Audio_ObjectScaleRTPC;                             // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CE_Death_PlayerMesh_Bamf_Out_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_BP_CE_Death_PlayerMesh_Bamf_Out(int32 EntryPoint, class AActor* K2Node_Event_Actor, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_GetMaxElement_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue);
};

}


