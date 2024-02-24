#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x320 - 0x298)
// BlueprintGeneratedClass Master_AirdropContainer.Master_AirdropContainer_C
class AMaster_AirdropContainer_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Magnifier;                                         // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_JigMultiplayer_C*                  BP_JigMultiplayer;                                 // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Parachute;                                         // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CurrentActor;                                      // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InteractingActorLoc;                               // 0x2D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeld;                                            // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DurationToHold;                                    // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerClose_;                                      // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Inspected;                                         // 0x301(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A1B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          HoldToInteractTimer;                               // 0x308(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          OutlineTimer;                                      // 0x310(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ChanceToProduceNoise;                              // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMaster_AirdropContainer_C* GetDefaultObj();

	void GetSettings(double* ChanceToProduceNoise, double* Default_ChanceToProduceNoise, double* DurationToHold);
	void IsHeld_(bool* Held_);
	void JigMP_GetLootWidget(class UWidget** Result, bool* Valid_);
	void JigMP_OnContainersSwap(class UJSIContainer_C* Container1, class UJSIContainer_C* Container2, bool* Result);
	void JigMP_OnItemDropped(int32 ItemUID, int32 FromContainerUID, class AActor* ActorRef, bool* Result);
	void JigMP_OnItemRemoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* ToComponent, bool* Result);
	void JigMP_OnItemAdded(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* FromComponent, bool* Result);
	void JigMP_OnItemMoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, bool* Result);
	void JigMP_OnMainContainerItemRemoved(int32 FromContainerUID, int32 ItemUID, class FName ContainerName, const struct FRepItemInfo& ItemRemovedInfo, bool* Result);
	void JigMP_OnMainContainerItemAdded(int32 TocontainerUID, int32 ItemUID, class FName ToContainerName, const struct FRepItemInfo& ItemInfo, class FName FromMain, bool* Result, class AActor** ActorRef);
	void JigMP_OnPickupAdded(const struct FRepItemInfo& Info, int32 ItemUID, int32 TocontainerUID, class FName ToContainer, bool* Result);
	void JigMP_OnPickupEquipped(class AActor* ActorRef, class FName ToContainerName, int32 UID, int32 TocontainerUID, const struct FRepItemInfo& Info, bool* Result);
	void JigMP_OnRequestDropItem(const struct FRepItemInfo& ItemInfo, class FName ContainerName, class AActor** ActorRef, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UDataTable* CallFunc_GetDtRef_DTReference, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FFItemInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void JigMP_OnItemConsumed(const struct FRepItemInfo& ConsumedItem, int32 Amount, int32 Remaining, const struct FRepItemInfo& InsideOf, class FName FromContainer, bool* Result);
	void JigMP_OnUpdateChamberUID(int32 NewUID, bool* Result);
	void JigMP_OnTwoContainersSwap(class FName FromContainer, class FName ToContainer, bool* Result);
	void GetInteractOptions(bool* EnableContext_, TArray<class FText>* Options, TArray<class FText>* Stats);
	void OnRequestServerInteract(class AActor* Actor, int32 OptionIndex, bool* Result);
	void GetJigMultiplayerComponent(class UBP_JigMultiplayer_C** JigComp);
	void GetItemInfo(struct FFItemInfo* Info, struct FS_RandomStatsConfig* RandomStatsConfig);
	void JigCanInteract(bool* Result);
	void JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result);
	void SetPickupCount(int32 NewCount, bool* Result);
	void NoiseEvent(class AHUD_Game_C* CallFunc_GetHUD_HUD, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBP_PlayerControllerInterface_C> K2Node_DynamicCast_AsBP_Player_Controller_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPassiveSkillsComponent_C* CallFunc_GetPassiveSkillsComponent_SkillsComponent, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1);
	void HoldToInteract(class AHUD_Game_C* CallFunc_GetHUD_HUD, class AHUD_Game_C* CallFunc_GetHUD_HUD_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, class UPassiveSkillsComponent_C* CallFunc_GetPassiveSkillsComponent_SkillsComponent, TScriptInterface<class IInt_PassiveSkills_C> K2Node_DynamicCast_AsInt_Passive_Skills, bool K2Node_DynamicCast_bSuccess);
	void DistanceOutline(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void SetInspected(class FText InText, bool Inspected_, class AHUD_Game_C* CallFunc_GetHUD_HUD, bool CallFunc_IsValid_ReturnValue);
	void SetInteractDistance(class AActor* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void CheckDistanceFromActor(TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnInteractActorOverDistance_Result, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void OnExecuteInteract_Dialogue(class AActor* InteractingActor);
	void OnServerExecuteInteract(int32 OptionIndex, class AActor* ByActor);
	void SetInteractOption(int32 OptionIndex);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void AirdropNotification(bool NewValue);
	void PauseInteract();
	void Event_Outline();
	void OpenContainer();
	void Event_HoldToInteract();
	void OnStopExecuteInteract(class AActor* InteractingActor);
	void OnExecuteInteractEnded();
	void OnExecuteInteract(class AActor* InteractingActor, int32 OptionIndex);
	void OnBeginInteract(class AActor* InteractingActor);
	void OnEndInteract();
	void ExecuteUbergraph_Master_AirdropContainer(int32 EntryPoint, const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, class AActor* K2Node_Event_InteractingActor_3, int32 K2Node_Event_OptionIndex_2, class AActor* K2Node_Event_ByActor, int32 K2Node_Event_OptionIndex_1, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, TArray<enum class E_MarkerType>& K2Node_MakeArray_Array, class ABP_Marker_Airdrop_C* CallFunc_FinishSpawningActor_ReturnValue, bool Temp_bool_IsClosed_Variable, bool K2Node_CustomEvent_NewValue, class AHUD_Game_C* CallFunc_GetHUD_HUD, class AHUD_Game_C* CallFunc_GetHUD_HUD_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AHUD_Game_C* CallFunc_GetHUD_HUD_2, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPassiveSkillsComponent_C* CallFunc_GetPassiveSkillsComponent_SkillsComponent, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AActor* K2Node_Event_InteractingActor_2, bool CallFunc_GetBoolCVar_ReturnValue_1, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_3, const struct FVector2D& Temp_struct_Variable_1, bool CallFunc_RequestServerData_Result, class AActor* K2Node_Event_InteractingActor_1, int32 K2Node_Event_OptionIndex, class UUserWidget* CallFunc_SetupInventoryWidget_InventoryWidgetRef, bool CallFunc_AddJigWidgetToContent_Result, bool CallFunc_IsInventoryVisible__Result, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_InteractingActor, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
};

}


