#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x139 (0x3D1 - 0x298)
// BlueprintGeneratedClass Buildable_MASTER.Buildable_MASTER_C
class ABuildable_MASTER_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  DummySnapTester;                                   // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  SnapPoints;                                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIOSubjectComponent*                  AIOSubject;                                        // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_JigMultiplayer_C*                  BP_JigMultiplayer;                                 // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  Action_Name;                                       // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Item_Name;                                         // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       Health;                                            // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ItemClass;                                         // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         RequiresPower_;                                    // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CurrentActor;                                      // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InteractingActorLoc;                               // 0x320(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeld;                                            // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Outline_;                                          // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B45[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OffSetDespawn;                                     // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        CraftingMaterials;                                 // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         PoweredOn_;                                        // 0x358(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            PoweredOn;                                         // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            PoweredOff;                                        // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShowGenerator;                                     // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            InteractWithObject;                                // 0x388(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         SpecialDestroy_;                                   // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable_Context_;                                   // 0x399(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B5C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          Options;                                           // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                          Stats;                                             // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            BeginInteract;                                     // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class Enum_BuildingSnapTypes            Type;                                              // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuildable_MASTER_C* GetDefaultObj();

	void GetBuildType(enum class Enum_BuildingSnapTypes* Type);
	void Requires_Power_(bool* Required_);
	void JigMP_GetLootWidget(class UWidget** Result, bool* Valid_);
	void JigMP_OnContainersSwap(class UJSIContainer_C* Container1, class UJSIContainer_C* Container2, bool* Result);
	void JigMP_OnItemDropped(int32 ItemUID, int32 FromContainerUID, class AActor* ActorRef, bool* Result, bool CallFunc_JigMP_OnItemRemoved_Result);
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
	void ComponentsToSave(TArray<class UActorComponent*>* Components);
	void CheckDistanceFromActor(TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_OnInteractActorOverDistance_Result, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void SetInteractDistance(class AActor* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnRep_PoweredOn_();
	void SpawnCraftingMaterials(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
	bool GetAllItemsInContainer(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FContainerPickupsInfo>& CallFunc_GetContainerItems_AllItems, const struct FContainerPickupsInfo& CallFunc_Array_Get_Item, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SpawnItemOnDestroy(class UClass* Class, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
	void UpdateUIHealth(double Health);
	void ActorLoaded();
	void ActorPreSave();
	void ActorSaved();
	void ReceiveBeginPlay();
	void Outline(bool NewValue);
	void Power_On(class AActor* Actor);
	void Power_Off(class AActor* Actor);
	void Pickup();
	void OnExecuteInteract_Dialogue(class AActor* InteractingActor);
	void OnStopExecuteInteract(class AActor* InteractingActor);
	void Event_UpdateTimer();
	void Event_StopTimer();
	void Event_HoldTimer();
	void MC_Destroy(class AActor* Actor);
	void MC_OnInteractBuildable(class AActor* Actor);
	void OnExecuteInteract(class AActor* InteractingActor, int32 OptionIndex);
	void OnServerExecuteInteract(int32 OptionIndex, class AActor* ByActor);
	void OnDestroy(class AActor* Actor);
	void OnExecuteInteractEnded();
	void SetInteractOption(int32 OptionIndex);
	void Svr_Spawn();
	void OnBeginInteract(class AActor* InteractingActor);
	void OnEndInteract();
	void OnInteractBuildable(class AActor* Actor);
	void RemoveModularBuilds();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_Buildable_MASTER(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_NewValue, class AActor* K2Node_Event_Actor_3, class AActor* K2Node_Event_Actor_2, class AHUD_Game_C* CallFunc_GetHUD_HUD, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, class AHUD_Game_C* CallFunc_GetHUD_HUD_1, class AHUD_Game_C* CallFunc_GetHUD_HUD_2, class AHUD_Game_C* CallFunc_GetHUD_HUD_3, class AActor* K2Node_Event_InteractingActor_3, class AActor* K2Node_Event_InteractingActor_2, class AHUD_Game_C* CallFunc_GetHUD_HUD_4, class AHUD_Game_C* CallFunc_GetGameHUD_HUD, class AHUD_Game_C* CallFunc_GetGameHUD_HUD_1, class AActor* K2Node_CustomEvent_Actor_1, TScriptInterface<class IBPI_Buildables_C> K2Node_DynamicCast_AsBPI_Buildables, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_CustomEvent_Actor, TScriptInterface<class IBPI_Buildables_C> K2Node_DynamicCast_AsBPI_Buildables_1, bool K2Node_DynamicCast_bSuccess_2, class AActor* K2Node_Event_InteractingActor_1, int32 K2Node_Event_OptionIndex_2, TScriptInterface<class IBP_MpInteractInterface_C> K2Node_DynamicCast_AsBP_Mp_Interact_Interface, bool K2Node_DynamicCast_bSuccess_3, int32 K2Node_Event_OptionIndex_1, class AActor* K2Node_Event_ByActor, bool CallFunc_IsInventoryVisible__Result, bool K2Node_SwitchInteger_CmpSuccess, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_OnRequestServerInteract_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, class AActor* K2Node_Event_Actor_1, bool CallFunc_IsValidClass_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 K2Node_Event_OptionIndex, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, class AActor* K2Node_Event_InteractingActor, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_GetAllItemsInContainer_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class AActor* K2Node_Event_Actor, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, bool CallFunc_ActorHasTag_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, double K2Node_VariableSet_CurrentTime_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void BeginInteract__DelegateSignature();
	void InteractWithObject__DelegateSignature(class AActor* NewParam);
	void PoweredOff__DelegateSignature();
	void PoweredOn__DelegateSignature();
};

}


