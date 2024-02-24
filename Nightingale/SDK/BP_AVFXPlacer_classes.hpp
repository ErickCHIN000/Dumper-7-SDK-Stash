#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x320 - 0x2A0)
// BlueprintGeneratedClass BP_AVFXPlacer.BP_AVFXPlacer_C
class ABP_AVFXPlacer_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     SpawnedNiagaraComponent;                           // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40FC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Spawn_System_Transform;                            // 0x2C0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AVFXPlacer_C* GetDefaultObj();

	void BindGPUOcclusionTexture(class UNiagaraComponent* NiagaraSystem, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UStructureOcclusionSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class UTexture* CallFunc_GetOcclusionTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Async_Load_Spawn_VFX(TSoftObjectPtr<class UNiagaraSystem>& AssetSoftPtr, const struct FTransform& SystemTransform);
	void OnNiagaraAsyncLoadCompleteEvent(class UNiagaraSystem* Asset);
	void ExecuteUbergraph_BP_AVFXPlacer(int32 EntryPoint, TSoftObjectPtr<class UNiagaraSystem> K2Node_CustomEvent_AssetSoftPtr, const struct FTransform& K2Node_CustomEvent_SystemTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UNiagaraSystem* K2Node_CustomEvent_Asset, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


