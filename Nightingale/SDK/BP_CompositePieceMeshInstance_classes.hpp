#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xD8 - 0xD0)
// BlueprintGeneratedClass BP_CompositePieceMeshInstance.BP_CompositePieceMeshInstance_C
class UBP_CompositePieceMeshInstance_C : public UCompositePieceInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_CompositePieceMeshInstance_C* GetDefaultObj();

	void IsComponentOptionalMesh(class UMeshComponent* MeshComponent, bool* bIsOptional, bool CallFunc_ComponentHasTag_ReturnValue);
	void SetDamagePercent(double DamagePercent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetMeshes_OutMeshes, int32 CallFunc_Array_Length_ReturnValue, class UMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast);
	void ToggleMeshVisibility(bool IsVisible, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetMeshes_OutMeshes, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsComponentOptionalMesh_bIsOptional, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetIsNavigationRelevant(bool IsNavigationRelevant, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetMeshes_OutMeshes, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetInitMaterial(class UMaterialInstance* CallFunc_GetPlacementFeedbackMaterial_ReturnValue);
	void SetSchematicMaterial(bool HasResourcesAdded, class UMaterialInterface* Confirmed_Material, class UMaterialInterface* Schematic_Material, bool Temp_bool_Variable, class UMaterialInstance* CallFunc_GetPlacementFeedbackMaterial_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInstance* CallFunc_GetPlacementFeedbackMaterial_ReturnValue_1);
	void UpdateSchematicMaterial(class UMaterialInterface* NewMaterial, class UMeshComponent* Mesh, bool CallFunc_ShouldOverrideMeshMaterial_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class UStaticMeshComponent*>& CallFunc_GetMeshes_OutMeshes, int32 Temp_int_Loop_Counter_Variable_1, class UMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void UpdateMeshesCollision(enum class EStructureState State, bool IsCompleted, class UMeshComponent* Mesh, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsComponentOptionalMesh_bIsOptional, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, TArray<class UStaticMeshComponent*>& CallFunc_GetMeshes_OutMeshes, class UMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_GetCollisionProfileName_ProfileName, bool Temp_bool_Variable, class FName CallFunc_GetCollisionProfileName_ProfileName_1, class FName CallFunc_GetCollisionProfileName_ProfileName_2, class FName K2Node_Select_Default, bool CallFunc_ComponentHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2);
	void K2_OnInitialized();
	void ExecuteUbergraph_BP_CompositePieceMeshInstance(int32 EntryPoint);
};

}


