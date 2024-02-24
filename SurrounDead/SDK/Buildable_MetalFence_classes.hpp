#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x3E8 - 0x3D1)
// BlueprintGeneratedClass Buildable_MetalFence.Buildable_MetalFence_C
class ABuildable_MetalFence_C : public ABuildable_MASTER_C
{
public:
	uint8                                        Pad_1B03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuildable_MetalFence_C* GetDefaultObj();

	void GetJigMultiplayerComponent(class UBP_JigMultiplayer_C** JigComp);
	void GetItemInfo(struct FFItemInfo* Info, struct FS_RandomStatsConfig* RandomStatsConfig);
	void JigCanInteract(bool* Result);
	void JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result);
	void SetPickupCount(int32 NewCount, bool* Result);
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_MetalFence(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen);
};

}


