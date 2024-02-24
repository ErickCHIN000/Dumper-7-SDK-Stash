#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x2AC - 0x220)
// BlueprintGeneratedClass Potion_Explosion_BP.Potion_Explosion_BP_C
class APotion_Explosion_BP_C : public AActor
{
public:
	class USphereComponent*                      Sphere;                                            // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PotionMesh;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E06[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InstanceTransform;                                 // 0x240(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        InstanceIndex;                                     // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                WhoThrewThePotion;                                 // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               PotionMeshHitLoc;                                  // 0x280(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                OverlappingInstances;                              // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        IndexOfMaxValue;                                   // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxValue;                                          // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PotionBaseDamage;                                  // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APotion_Explosion_BP_C* GetDefaultObj();

	void ReplaceNearbyFloorWithDM(struct FHitResult& Hit);
};

}


