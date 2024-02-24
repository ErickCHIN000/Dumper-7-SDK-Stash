#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x288 - 0x230)
// BlueprintGeneratedClass BP_DeployablePreview.BP_DeployablePreview_C
class ABP_DeployablePreview_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      RotatorWidget;                                     // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BoundsCollider;                                    // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           MeshRef;                                           // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        WidgetDrawSize;                                    // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWorldPlacementType               PlacementType;                                     // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3D80[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ExtentOffset;                                      // 0x258(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               OriginOffset;                                      // 0x264(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               ExtentScale;                                       // 0x270(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         InitialShowRotator;                                // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableShelterChecks;                               // 0x27D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3DA4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShelteredModifierComponent*           ShelterModifier;                                   // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DeployablePreview_C* GetDefaultObj();

	void UpdateMaterials(bool ValidPlacement, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default, int32 CallFunc_GetNumMaterials_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetInitialRotator(bool Visible);
	void ToggleRotationIndicator(bool Enabled, bool SnappingAvailable, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UUMG_DeployableRotationIndicator_C* K2Node_DynamicCast_AsUMG_Deployable_Rotation_Indicator, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UUMG_DeployableRotationIndicator_C* K2Node_DynamicCast_AsUMG_Deployable_Rotation_Indicator_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void UserConstructionScript(enum class EWorldPlacementType Temp_byte_Variable, const struct FVector& Temp_struct_Variable, enum class EWorldPlacementType Temp_byte_Variable_1, const struct FVector& Temp_struct_Variable_1, enum class EWorldPlacementType Temp_byte_Variable_2, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_SetStaticMesh_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_5, const struct FVector& K2Node_Select_Default_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& K2Node_Select_Default_2);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_DeployablePreview(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, class UShelteredModifierComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FTransform& Temp_struct_Variable_1, class UBP_ShelteredComponent_C* CallFunc_AddComponent_ReturnValue_1);
};

}


