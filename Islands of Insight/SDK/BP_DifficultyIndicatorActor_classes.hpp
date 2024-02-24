#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x308 - 0x268)
// BlueprintGeneratedClass BP_DifficultyIndicatorActor.BP_DifficultyIndicatorActor_C
class ABP_DifficultyIndicatorActor_C : public ADifficultyIndicatorActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_RuneDifficulty_Stars;                           // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*         InstancedStaticMesh;                               // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                    Instance_Transforms;                               // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, int32>                   CustomPrimDataMap;                                 // 0x298(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          Colour;                                            // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  ColourList;                                        // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_DifficultyIndicatorActor_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DifficultyIndicatorActor(int32 EntryPoint);
};

}


