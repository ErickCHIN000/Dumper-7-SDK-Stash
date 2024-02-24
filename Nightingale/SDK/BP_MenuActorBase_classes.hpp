#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x730 - 0x6A0)
// BlueprintGeneratedClass BP_MenuActorBase.BP_MenuActorBase_C
class ABP_MenuActorBase_C : public AInteractableCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      InteractionRange;                                  // 0x6A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNWXAbilitySystemComponent*            AbilitySystem;                                     // 0x6B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PingComponent_C*                   BP_PingComponent;                                  // 0x6B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_NPCComponent_C*                    BP_NPCComponent;                                   // 0x6C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_UI_NPCMenuComponent_C*             NPCMenuComponent;                                  // 0x6C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableComponent_C*           BP_InteractableComponent;                          // 0x6D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OriginalPlayerView;                                // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDialogueStart;                                   // 0x6E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       SphereRadiusLOCAL;                                 // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IndicatorMaterial;                                 // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Indicator_Tint;                                    // 0x700(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Indicator_Icon;                                    // 0x710(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AEncounterBase*                        Associated_Encounter;                              // 0x718(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UDialogue*                             Dialogue;                                          // 0x720(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UDialogue*                             Ambient_Dialogue;                                  // 0x728(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MenuActorBase_C* GetDefaultObj();

	void SetNPCCamera(class AController* Controller, bool* bSuccess);
	void RemoveMenus(bool* bSuccess, bool CallFunc_IsValid_ReturnValue);
	void CreateDialogueEvent(class ABP_PlayerController_C* PlayerController, bool* bSuccess);
	void RestorePlayer(bool* bSuccess, bool CallFunc_RemoveMenus_bSuccess);
	void ShowMerchant(bool* bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetAssociatedEncounter(class AEncounterBase** Associated_Encounter);
	void SetAssociatedEncounter(class AEncounterBase* Associated_Encounter, bool* Success, bool CallFunc_IsServer_ReturnValue);
	void SetDialogue(class UDialogue* Dialogue, bool* Success);
	void SetAmbientDialogue(class UDialogue* AmbientDialogue, bool* Success);
	void UpdateAnimBPValues(bool& bIsMoving, bool& bIsInAir, bool& bIsMinHealth, bool& bActiveBlendspace, bool& bHasTarget, bool& bHasMovementInput, bool& bIsAiming, double& Direction, double& ForwardSpeed, double& TargetToCharacterRotationDifference, double& MovementInputToVelocityDifference, double& AimYawDelta, double& AimYawRate, struct FVector& TargetLocation, struct FVector& Velocity, struct FRotator& CharacterRotation, struct FRotator& LastVelocityRotation, struct FRotator& LastMovementInputRotation, struct FRotator& LookingRotation, enum class EAlertnessLevelType& AlertnessLevel, bool* Success);
	void GetNPCInfoForUIInterface(TScriptInterface<class IBPI_NPCInfoForUI_C>* Interface);
	void GetNPCFriendshipInterface(TScriptInterface<class IBPI_NPCFriendship_C>* Interface);
	void GetNPCContractInterface(TScriptInterface<class IBPI_NPCContract_C>* Interface);
	void GetNPCDialogueInterface(TScriptInterface<class IBPI_NPCDialogue_C>* Interface);
	void GetWeakpointComponent(bool* HasInterface, TScriptInterface<class IBPI_WeakPoint_C>* Interface);
	void GetPingInterface(bool* bHasInterface, TScriptInterface<class IBPI_Ping_C>* PingInterface);
	void GetClothes_Back(class USkeletalMeshComponent** BackComponent);
	void GetClothes_Jewelry(class USkeletalMeshComponent** JewelryComponent);
	void GetClothes_Glasses(class USkeletalMeshComponent** GlassesComponent);
	void GetBodyPart_Teeth(class USkeletalMeshComponent** TeethComponent);
	void GetBodyPart_Eyebrows(class USkeletalMeshComponent** EyebrowsComponent);
	void GetBodyPart_FacialHair(class USkeletalMeshComponent** FacialHairComponent);
	void GetCLothes_Gear(class USkeletalMeshComponent** Gear);
	void GetBody(class USkeletalMeshComponent** BodyComponent);
	void GetClothes_Torso(class USkeletalMeshComponent** TorsoComponent);
	void GetClothes_Bottom(class USkeletalMeshComponent** PantsComponent);
	void GetClothes_Boots(class USkeletalMeshComponent** ShoesComponent);
	void GetBodyPart_Hair(class USkeletalMeshComponent** HairComponent);
	void GetClothes_Head(class USkeletalMeshComponent** HatComponent);
	void GetClothes_Gloves(class USkeletalMeshComponent** GlovesComponent);
	void GetBodyPart_Eyes(class USkeletalMeshComponent** EyeComponent);
	void CanQueryInteractable(bool* Can_Query);
	void HoldInteractionAvailable(bool* bAvailable);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void InteractReleased(bool* Success);
	void InteractPressed(bool* Success);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array_1);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable);
	void OnRep_Ambient_Dialogue();
	void OnRep_Dialogue();
	void OnRep_Associated_Encounter();
	void CrossServerSetAssociatedEncounter(class AEncounterBase* Associated_Encounter);
	void CrossServerSetDialogue(class UDialogue* Dialogue);
	void CrossServerSetAmbientDialogue(class UDialogue* AmbientDialogue);
	void PerformClientSideInteraction(class AController* Controller);
	void CallCrossServerOnInteracted(class AController* InteractingController);
	void ExecuteUbergraph_BP_MenuActorBase(int32 EntryPoint, class AController* K2Node_Event_InteractingController, class AEncounterBase* K2Node_CustomEvent_Associated_Encounter, class UDialogue* K2Node_CustomEvent_Dialogue, class UDialogue* K2Node_CustomEvent_AmbientDialogue, class AController* K2Node_Event_Controller, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_UIMenusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void OnDialogueStart__DelegateSignature();
};

}


