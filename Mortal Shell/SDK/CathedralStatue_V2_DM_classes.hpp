#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x238 - 0x220)
// BlueprintGeneratedClass CathedralStatue_V2_DM.CathedralStatue_V2_DM_C
class ACathedralStatue_V2_DM_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDestructibleComponent*                Destructible;                                      // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACathedralStatue_V2_DM_C* GetDefaultObj();

	void Destroy();
	void ExecuteUbergraph_CathedralStatue_V2_DM(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


