#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x460 - 0x3D8)
// BlueprintGeneratedClass BP_DeploymentPortal.BP_DeploymentPortal_C
class ABP_DeploymentPortal_C : public ADeploymentPortal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  billboardsmc;                                      // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialBillboardComponent*           MaterialBillboard;                                 // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Collider;                                          // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Destination_Image;                                 // 0x3F8(0x28)(Edit, BlueprintVisible, Net, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowDebugPortal;                                   // 0x420(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_5F4C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PortalUniqueID;                                    // 0x424(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            PlayerTravelled;                                   // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         GateByPlayerEstate;                                // 0x440(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  NWXPlayerController;                               // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OverlappingActor;                                  // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkStateValue*                         LoadingMusicStateOverride;                         // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DeploymentPortal_C* GetDefaultObj();

	void Confirm_Player_Travelled();
	void RemotePlayerEnterPortalAudio(const struct FVector& ActorLocation, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue);
	void CanActorTravel(class AActor* Actor, bool* Result, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ANWXTravelController* K2Node_DynamicCast_AsNWXTravel_Controller, bool K2Node_DynamicCast_bSuccess_1);
	void TriggerPortalAudio(class AActor* Actor, const struct FVector& ActorLocation, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class UMusicManager* CallFunc_Get_Music_Manager_MusicManager, bool CallFunc_IsLocallyControlled_ReturnValue, class UBP_Music_Manager_C* K2Node_DynamicCast_AsBP_Music_Manager, bool K2Node_DynamicCast_bSuccess_1);
	void TriggerPlayerPortalTravel(class AActor* OverlappingActor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesPlayerHaveRespitePoint_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsInAnyDeathState_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	void SetShowDebugPortal(bool bShowDebugPortal);
	void SetColliderEnabled(bool ColliderEnabled);
	void OverridePortalConfig(const struct FTemporalConfig& PortalConfig);
	void ReceiveBeginPlay();
	void BndEvt__Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Trigger_Portal_Audio(class AActor* Actor);
	void ExecuteUbergraph_BP_DeploymentPortal(int32 EntryPoint, class AActor* K2Node_CustomEvent_Actor, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_CanActorTravel_Result, bool CallFunc_IsServer_ReturnValue);
	void PlayerTravelled__DelegateSignature();
};

}


