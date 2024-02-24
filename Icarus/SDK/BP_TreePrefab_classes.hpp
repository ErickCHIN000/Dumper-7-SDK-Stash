#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x4C8 - 0x350)
// BlueprintGeneratedClass BP_TreePrefab.BP_TreePrefab_C
class ABP_TreePrefab_C : public ATreePrefab
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DebugRuntimeInstance;                              // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DebugInstancePhysicsDynamic;                       // 0x359(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4822[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DebugInstanceTreeRootName;                         // 0x35C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4827[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTreeSetupProperties                  SetupProperties;                                   // 0x368(0x140)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UObject*>                       LoadedSubdivideMeshes;                             // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SubdivideMeshesLoaded;                             // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4836[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DebugInstanceFallDirection;                        // 0x4BC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TreePrefab_C* GetDefaultObj();

	void CheckLoadedSubdivideMeshes(int32 SubdivideMeshesCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FTreePrimitiveSubdivideMeshes>& CallFunc_Map_Values_Values, const struct FTreePrimitiveSubdivideMeshes& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void SetupPrimitiveDynamicMaterials(class UPrimitiveComponent* Primitive, const struct FVector& PivotPosition, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void DebugInstanceTreeImp(const struct FTreeRuntimeCreateArguments& Args, const struct FTransform& SpawnTransform, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_VSizeSquared_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, const struct FTreeRuntimeCreateArguments& K2Node_MakeStruct_TreeRuntimeCreateArguments, class USceneComponent* CallFunc_Array_Get_Item, class ATreeBase* CallFunc_CreateTreeRuntime_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class ABP_TreeBase_C* K2Node_DynamicCast_AsBP_Tree_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetObjectName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
	void UserConstructionScript(const struct FVector& BoundsSizeDifference, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_2, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, class UStaticMeshComponent* CallFunc_Array_Get_Item_2, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class FName CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_InvertTransform_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_StartsWith_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3);
	void OnLoaded_725FB44141605CD1726AD5A5598E8E8C(class UObject* Loaded);
	void ReceiveBeginPlay();
	void PreloadSubdivideMeshes();
	void OnCreatedTreeRuntime(class ATreeBase* TreeBase);
	void ExecuteUbergraph_BP_TreePrefab(int32 EntryPoint, class UObject* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, class UObject* K2Node_CustomEvent_Loaded, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<int32>& K2Node_MakeArray_Array, const struct FTreeRuntimeConstructArguments& K2Node_MakeStruct_TreeRuntimeConstructArguments, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FTreeRuntimeCreateArguments& K2Node_MakeStruct_TreeRuntimeCreateArguments, TArray<struct FTreePrimitiveSubdivideMeshes>& CallFunc_Map_Values_Values, class ATreeBase* K2Node_Event_TreeBase, const struct FTreePrimitiveSubdivideMeshes& CallFunc_Array_Get_Item, class ABP_TreeBase_C* K2Node_DynamicCast_AsBP_Tree_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


