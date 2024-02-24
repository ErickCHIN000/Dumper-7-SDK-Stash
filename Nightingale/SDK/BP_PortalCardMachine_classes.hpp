#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x3D0 - 0x378)
// BlueprintGeneratedClass BP_PortalCardMachine.BP_PortalCardMachine_C
class ABP_PortalCardMachine_C : public ARealmCardMachine
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PortalControllerComponent_C*       BP_PortalControllerComponent;                      // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Ambient_Audio_Component_C*         SFX_Amb_Flywheel_Large;                            // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Ambient_Audio_Component_C*         SFX_Amb_Flywheel_Bellows;                          // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Ambient_Audio_Component_C*         SFX_Amb_Flywheel_Small;                            // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableComponent_C*           BP_InteractableComponent;                          // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_DeploymentPortal_C*                TargetPortal;                                      // 0x3B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_PortalEncounter_Tutorial_C*        TargetPortalArch;                                  // 0x3B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetPortalVisuals;                               // 0x3C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ANWXPlayerStart*                       PlayerSpawnPoint;                                  // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PortalCardMachine_C* GetDefaultObj();

	class URealmCardMachineComponent* GetRealmCardMachineComponent();
	struct FTransform GetPlayerSpawnTransform(const struct FTransform& NewLocalVar, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1);
	class UPortalControllerComponent* GetPortalController();
	void CanQueryInteractable(bool* Can_Query);
	void HoldInteractionAvailable(bool* bAvailable);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsInUse_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, bool CallFunc_IsInUse_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, bool CallFunc_HasPermissions_HasPermission);
	void InteractPressed(bool* Success);
	void InteractReleased(bool* Success);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetPlayerStartTag(const class FString& CallFunc_GetSpawnPointUniqueId_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	bool GetInteractionTag(struct FGameplayTag* InteractionTag, const struct FGameplayTag& LocalInteractionTag);
	void ConnectToOriginRealm(class ABP_SimulationStateManager_C* SSM, const class FString& PortalTargetPlayerStartTag, const class FString& PortalTargetDeploymentID, class UPersistedRealmConfig* CallFunc_GetRealmPersistenceObject_AsPersistedRealmConfig, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_SetDestination_ReturnValue);
	void HasPermissions(class AController* Controller, bool* HasPermission, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanUseSupportCommands_ReturnValue);
	void PerformClientSideInteraction(class AController* Controller);
	void ReceiveBeginPlay();
	void SSM_Ready(class AManagerBase* Manager, bool bIsReady);
	void CrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload);
	void OnPersistentDataRestored();
	void ExecuteUbergraph_BP_PortalCardMachine(int32 EntryPoint, const class FString& CallFunc_GetSpawnPointUniqueId_ReturnValue, class AController* K2Node_Event_Controller, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, class ABP_SimulationStateManager_C* K2Node_DynamicCast_AsBP_Simulation_State_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class AManagerBase> Temp_class_Variable, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


