#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Structure.BPFL_Structure_C
class UBPFL_Structure_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Structure_C* GetDefaultObj();

	void DEVONLY_Initialize_Test_Structure_Proxies(class UObject* __WorldContext, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<class ANWXStructureBuilder*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValid_ReturnValue, class ANWXStructureBuilder* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_WorldStateIsLoadedFromPersistence_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsDevEnvironment_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue);
	void MakeStructureDestructionData(class UObject* Structure, class UObject* __WorldContext, struct FStructureDestructionData* DestructionData, bool IsDeconstruct, class UObject* LStructure, bool CallFunc_IsAnyKindOfStructureObject_IsValidStructure, const struct FGameplayTag& CallFunc_DeconstructTag_DeconstructTag, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, bool CallFunc_IsStateActiveForObject_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetTagsForMeshPhysicalMaterials_ReturnValue, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetStructureOriginTransform_ReturnValue, const struct FVector& CallFunc_GetMeshBounds_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetStructureAssetReference_IsValid, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference, const struct FStructureDestructionData& K2Node_MakeStruct_StructureDestructionData, const class FString& CallFunc_GetFunctionName_ReturnValue);
	void Structure_NWXPrint(class UObject* Structure, const class FString& FunctionName, const class FString& Message, enum class ENWXLogLevel NWXLogLevel, class UObject* __WorldContext, const class FString& StructureName, class UObject* LStructure, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureAssetReference_IsValid, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
	void IsAnyKindOfStructureObject(class UObject* StructureObject, class UObject* __WorldContext, bool* IsValidStructure, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	class FString GetStructureDebugName(class UObject* PieceObject, class UObject* __WorldContext, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetUIData_IsValid, const struct FStructureUIData& CallFunc_GetUIData_OutUIData, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SpawnStructureDestructionVFX(class ANWXStructure* Structure, const struct FStructureDestructionData& StructureDestructionData, class UObject* __WorldContext, const struct FStructureNiagaraDestructionResponse& LDefaultDestructionResponse, const struct FTransform& LSpawnTransform, bool LIsDeconstruct, const struct FGameplayTagContainer& LPhysicsMaterialsTags, const struct FDataTableRowHandle& LRecipeHandle, class UNiagaraComponent* System, class UNiagaraSystem* EffectTemplate, const struct FVector& LStructureBounds, TScriptInterface<class IStructureOriginatorInterface> K2Node_DynamicCast_AsStructure_Originator_Interface, bool K2Node_DynamicCast_bSuccess, enum class EStructureOriginatorType CallFunc_GetStructureOriginatorType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void GetMeshMinAndMax(class UStaticMeshComponent* Mesh, class UObject* __WorldContext, struct FVector* MinWorld, struct FVector* MaxWorld, const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue_1);
	void GetMeshOrigin(class UStaticMeshComponent* Target, class UObject* __WorldContext, struct FVector* LocalLocation, struct FVector* WorldLocation, const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue);
	struct FVector GetMeshBounds(class UStaticMeshComponent* StaticMesh, class UObject* __WorldContext, const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue);
};

}


