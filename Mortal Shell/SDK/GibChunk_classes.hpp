#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x270 - 0x220)
// BlueprintGeneratedClass GibChunk.GibChunk_C
class AGibChunk_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  GibChunkMesh;                                      // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Desintegration_F3D7CB984816FE4953C485ACABA58B0A; // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_F3D7CB984816FE4953C485ACABA58B0A; // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   GibChunkMeshes;                                    // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Vel_z_min;                                         // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Vel_z_max;                                         // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Vel_fwd_min;                                       // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Vel_fwd_max;                                       // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Angular_min;                                       // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Angular_max;                                       // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        GibType;                                           // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGibChunk_C* GetDefaultObj();

	void SetRandomDimensions(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void SetRandomGibChunk(int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, class UStaticMesh* CallFunc_Array_Get_Item, class UStaticMesh* CallFunc_Array_Get_Item_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, class UStaticMesh* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_1, class UStaticMesh* CallFunc_Array_Get_Item_3, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GibChunk(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1);
};

}


