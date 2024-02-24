#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x232 - 0x220)
// BlueprintGeneratedClass BP_DeepOreDepositSpawn.BP_DeepOreDepositSpawn_C
class ABP_DeepOreDepositSpawn_C : public AActor
{
public:
	class UStaticMeshComponent*                  MetaNode;                                          // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnCaveVariant;                                  // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         SpawnIceVariant;                                   // 0x231(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_DeepOreDepositSpawn_C* GetDefaultObj();

};

}


