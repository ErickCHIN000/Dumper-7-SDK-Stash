#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x340 - 0x2A0)
// BlueprintGeneratedClass BP_ClientResourceProxy.BP_ClientResourceProxy_C
class ABP_ClientResourceProxy_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  ResourceStaticMesh;                                // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            ResourceMesh;                                      // 0x2B8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTransform                            OriginalTransform;                                 // 0x2E0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ClientResourceProxy_C* GetDefaultObj();

	void OnLoaded_3AF7D212478A47BA4C1F1FBA067A9233(class UObject* Loaded);
	void ReceiveBeginPlay();
	void CompleteSetupAfterLoad();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ClientResourceProxy(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, const struct FTransform& CallFunc_GetTransformOneUnitTowardsLocalPlayer_ShiftedTransform, class UObject* Temp_object_Variable, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FTransform& CallFunc_GetTransform_ReturnValue);
};

}


