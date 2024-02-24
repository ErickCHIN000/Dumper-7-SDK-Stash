#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// BlueprintGeneratedClass BP_FoliageInstancedActor.BP_FoliageInstancedActor_C
class ABP_FoliageInstancedActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_FoliageInstancedStaticMesh_C*      BP_FoliageInstancedStaticMesh;                     // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FoliageInstancedActor_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ConvertToBlueprints(bool DestroyActorOnComplete, class UClass* FoliageClass);
	void ExecuteUbergraph_BP_FoliageInstancedActor(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool K2Node_CustomEvent_DestroyActorOnComplete, class UClass* K2Node_CustomEvent_FoliageClass, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_RemoveInstance_ReturnValue, const struct FTransform& CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_GetInstanceCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetInstanceCount_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
};

}


