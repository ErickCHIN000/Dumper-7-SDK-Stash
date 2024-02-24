#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x590 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_Fish.BP_SkeletalItem_Fish_C
class ABP_SkeletalItem_Fish_C : public ASkeletalItem
{
public:
	uint8                                        Pad_14CD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                VisualFish;                                        // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Fish_C* GetDefaultObj();

	void OnLoaded_D1E6FED94206F8C01D702FB25448C4EF(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkeletalItem_Fish(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, const struct FMeshableData& CallFunc_GetMeshableData_MeshableData, enum class EDataValid CallFunc_GetMeshableData_Paths, float CallFunc_GetFishScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FHitResult& CallFunc_K2_AddWorldOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, enum class EValid CallFunc_GetTrait_Paths, class UBP_FocusableBehaviour_C* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


