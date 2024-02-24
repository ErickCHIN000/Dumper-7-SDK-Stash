#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x241 - 0x220)
// BlueprintGeneratedClass BP_DestructibleMeshActor.BP_DestructibleMeshActor_C
class ABP_DestructibleMeshActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDestructibleComponent*                Destructible;                                      // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDestructibleMesh*                     DestructibleMesh;                                  // 0x238(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         FaultFound;                                        // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_DestructibleMeshActor_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void CheckMaterials();
	void ExecuteUbergraph_BP_DestructibleMeshActor(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Array_Index_Variable, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue);
};

}


