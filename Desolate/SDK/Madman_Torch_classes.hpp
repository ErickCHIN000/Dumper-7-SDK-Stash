#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xA98 - 0xA58)
// BlueprintGeneratedClass Madman_Torch.Madman_Torch_C
class AMadman_Torch_C : public ASHWeapon_Melee
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio1;                                            // 0xA60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DisableTorchGlowTimeline_Glow_D094A4954757ED2BFDC1E5A27D73B1D8; // 0xA68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                DisableTorchGlowTimeline__Direction_D094A4954757ED2BFDC1E5A27D73B1D8; // 0xA6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_547[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    DisableTorchGlowTimeline;                          // 0xA70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EnableTorchGlowTimeline_Glow_B5890A7C4D20CE33CC6367A16119A6E4; // 0xA78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnableTorchGlowTimeline__Direction_B5890A7C4D20CE33CC6367A16119A6E4; // 0xA7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnableTorchGlowTimeline;                           // 0xA80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              TorchMaterial;                                     // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              TorchEmitter;                                      // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMadman_Torch_C* GetDefaultObj();

	void EnableTorchGlowTimeline__FinishedFunc();
	void EnableTorchGlowTimeline__UpdateFunc();
	void DisableTorchGlowTimeline__FinishedFunc();
	void DisableTorchGlowTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void CustomEvent_0();
	void SpawnTorchEffects();
	void CustomEvent_1();
	void DestroyTorchEffect();
	void EnableTorchGlow();
	void EnableTorchGlowSmoothly();
	void DisableTorchGlow();
	void DisableTorchGlowSmoothly();
	void ExecuteUbergraph_Madman_Torch(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAttachedToPawn_ReturnValue, class UStaticMeshComponent* CallFunc_GetStaticMesh_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UStaticMeshComponent* CallFunc_GetStaticMesh_ReturnValue_1, class UStaticMeshComponent* CallFunc_GetStaticMesh_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6);
};

}


