#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x2A9 - 0x248)
// BlueprintGeneratedClass GenericEnergyMountDevice.GenericEnergyMountDevice_C
class AGenericEnergyMountDevice_C : public AGenericEnergyGenerator_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Ow_Steam;                                       // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USHMountPointComponent*                SHMountPoint;                                      // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AEnergyContainer_C*                    Container;                                         // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             ConnectSound;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             DisconnectSound;                                   // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             StartWorkingSound;                                 // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             StopWorkingSound;                                  // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bContainerAttached;                                // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B21[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnergyContainer_C*                    AttachedContainer;                                 // 0x2A0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableOnlyEnergyContainers;                       // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGenericEnergyMountDevice_C* GetDefaultObj();

	bool ShouldNotBeSaved();
	class FName GetActorState();
	void DisableAttachedContainersEffects(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void EnableAttachedContainersEffects(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void OnRep_AttachedContainer();
	void CanHandleEnergyContainer(bool* Result, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void StopWorkEffects();
	void StartWorkEffects();
	void OnConteinerDetached(class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnConteinerAttached(class AEnergyContainer_C* Container, float CallFunc_GetEnergy_Result, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void IsWorking(bool* Result);
	void BndEvt__SHMountPoint_K2Node_ComponentBoundEvent_1_OnDetachDelegate__DelegateSignature();
	void BndEvt__SHMountPoint_K2Node_ComponentBoundEvent_0_OnAttachDelegate__DelegateSignature(class AActor* Actor);
	void OnStateRestored();
	void BndEvt__Box_K2Node_ComponentBoundEvent_48_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnContainerDropped(class AEnergyContainer_C* Container);
	void OnDestroyed_Event_0(class AActor* DestroyedActor);
	void AttachContainer();
	void SetActorState(class FName StateName);
	void ExecuteUbergraph_GenericEnergyMountDevice(int32 EntryPoint, class AActor* K2Node_ComponentBoundEvent_Actor, bool CallFunc_HasAuthority_ReturnValue, class AEnergyContainer_C* K2Node_DynamicCast_AsEnergy_Container, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AEnergyContainer_C* K2Node_CustomEvent_Container, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, class FName K2Node_Event_StateName, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_CanHandleEnergyContainer_Result, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


