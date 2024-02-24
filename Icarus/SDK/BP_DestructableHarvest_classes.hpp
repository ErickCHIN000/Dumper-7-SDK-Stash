#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x25C - 0x238)
// BlueprintGeneratedClass BP_DestructableHarvest.BP_DestructableHarvest_C
class ABP_DestructableHarvest_C : public ADestructibleActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        OffsetEmitter;                                     // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        NiagaraEmitter;                                    // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmitterHeight;                                     // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeightOffsetMultiplier;                            // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DestructionImpulse;                                // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DestructableHarvest_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void DelayedDestroy();
	void ExecuteUbergraph_BP_DestructableHarvest(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
};

}


