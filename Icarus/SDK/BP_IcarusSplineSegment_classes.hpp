#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x280 - 0x200)
// BlueprintGeneratedClass BP_IcarusSplineSegment.BP_IcarusSplineSegment_C
class UBP_IcarusSplineSegment_C : public UIcarusSplineSegment
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FIcarusSplineMeshStruct               RepSplineData;                                     // 0x208(0x30)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    RepFinalMaterial;                                  // 0x238(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UStaticMesh*                           RepMesh;                                           // 0x240(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Ghost;                                             // 0x248(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2BDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   RepresentitiveComponent;                           // 0x250(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UClass*                                RepresentitiveClass;                               // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SegmentIndex;                                      // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Debug_begin_play_finished;                         // 0x264(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    RepGhostMaterial;                                  // 0x268(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               RepOffset;                                         // 0x270(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ChangableMaterialIndex;                            // 0x27C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusSplineSegment_C* GetDefaultObj();

	void IsPointCloserToStart(const struct FVector& WorldLocationPoint, bool* CloserToStart, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue);
	void OnRep_RepresentitiveComponent();
	void OnRep_RepFinalMaterial();
	void OnRep_RepGhostMaterial();
	void OnRep_RepOffset();
	void ServerSetStartAndEnd(const struct FVector& Start_Pos, const struct FVector& Start_Tan, const struct FVector& End_Pos, const struct FVector& End_Tan, const struct FIcarusSplineMeshStruct& K2Node_MakeStruct_IcarusSplineMeshStruct);
	void OnRep_Ghost();
	void OnRep_RepMesh();
	void OnRep_RepSplineData();
	void Init();
	void Async_ReInit();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_IcarusSplineSegment(int32 EntryPoint, class UCableComponent* K2Node_DynamicCast_AsCable_Component, bool K2Node_DynamicCast_bSuccess, class USplineMeshComponent* K2Node_DynamicCast_AsSpline_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, class USplineMeshComponent* K2Node_DynamicCast_AsSpline_Mesh_Component_1, bool K2Node_DynamicCast_bSuccess_2, float Temp_float_Variable, bool CallFunc_SetStaticMesh_ReturnValue, float Temp_float_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusSplineActor_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Actor, bool K2Node_DynamicCast_bSuccess_3, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_IcarusSplineActor_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Actor_1, bool K2Node_DynamicCast_bSuccess_5, class UPrimitiveComponent* CallFunc_AddActorComponent_OutComponent, class USceneComponent* K2Node_DynamicCast_AsScene_Component, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_K2_AttachToComponent_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3);
};

}


