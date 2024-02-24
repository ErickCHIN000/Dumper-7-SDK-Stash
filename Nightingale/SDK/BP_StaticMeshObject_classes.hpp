#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass BP_StaticMeshObject.BP_StaticMeshObject_C
class UBP_StaticMeshObject_C : public UMeshObject
{
public:
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_StaticMeshObject_C* GetDefaultObj();

	struct FVector GetMeshWorldExtents(const struct FVector& CallFunc_GetMeshMinAndMax_MinLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MaxLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MinWorld, const struct FVector& CallFunc_GetMeshMinAndMax_MaxWorld, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void GetMeshTransform(struct FTransform* WorldTransform, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation, class UStaticMeshComponent* CallFunc_GetStaticMesh_StaticMesh, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void GetMeshMinAndMax(struct FVector* MinLocal, struct FVector* MaxLocal, struct FVector* MinWorld, struct FVector* MaxWorld, const struct FVector& CallFunc_GetMeshMinAndMax_MinWorld, const struct FVector& CallFunc_GetMeshMinAndMax_MaxWorld, const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max);
	void TEMP_HasTag(class FName& Tag, bool* HasTag, class UStaticMeshComponent* CallFunc_GetStaticMesh_StaticMesh, bool CallFunc_ComponentHasTag_ReturnValue);
	void GetStaticMesh(class UStaticMeshComponent** StaticMesh);
	void GetMeshOrigin(struct FVector* LocalLocation, struct FVector* WorldLocation, class UStaticMeshComponent* CallFunc_GetStaticMesh_StaticMesh, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation);
	struct FVector GetMeshBounds(class UStaticMeshComponent* CallFunc_GetStaticMesh_StaticMesh, const struct FVector& CallFunc_GetMeshBounds_ReturnValue);
};

}


