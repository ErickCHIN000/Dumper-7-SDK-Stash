#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19E (0x4B0 - 0x312)
// BlueprintGeneratedClass World_Actor.World_Actor_C
class AWorld_Actor_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_30C1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere_0;                                          // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  ID;                                                // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  UniqueId;                                          // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDHDataTableID                        LazyID;                                            // 0x338(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	int32                                        Amount;                                            // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         StartWithPhysicsEnabled;                           // 0x344(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_30E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        InventoryItem;                                     // 0x348(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_30E8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           WorldMesh;                                         // 0x480(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSinglePlayer;                                    // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EItemType                         ItemType;                                          // 0x489(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsDroppedWeapon_;                                  // 0x48A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DestroyOnUse_;                                     // 0x48B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         PickupOnlyOnce;                                    // 0x48C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_30FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnWorldActorPickup;                                // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UGameInfoInstance_C*                   GameInfoInstanceRef;                               // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ItemIcon;                                          // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AWorld_Actor_C* GetDefaultObj();

	void LoadRemainingTime(float* Duration, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void RemoveItemFromRespawningSave(bool CallFunc_Map_Remove_ReturnValue);
	void LoadTimePassedFromPickUpTime(float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void SavePickUpTime(float CallFunc_GetGameTimeInSeconds_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, const struct FTimespan& CallFunc_Add_TimespanTimespan_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue);
	class FName GetItemUniqueID(class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, class FName CallFunc_GetActorName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue);
	void SetRespawningItems(bool K2Node_SwitchName_CmpSuccess);
	void GetItemIcon(const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void ActorVisibility(enum class ECollisionEnabled SphereCollision, enum class ECollisionEnabled MeshCollision);
	void GetGameInfoInstance(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void GetID(class FName* ID);
	void OnActorUsed(class APlayerController* Controller, bool* Success, int32 Local_Slot, const struct FInventoryItem& Local_Item, bool Local_Success, class AGameplayPC_C* Local_GameplayPC, class APlayerController* Local_Controller, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_GetUniqueDHID_ID, bool CallFunc_IsItemJustOnceItem_bYes, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnActorUsed_Success, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_2, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot);
	void OnRep_WorldMesh(bool CallFunc_SetStaticMesh_ReturnValue);
	void UpdateItemAmount(int32 LocalAmount, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void LoadItemFromList(bool* Success, bool CallFunc_HasAuthority_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_LoadItemFromList_Success, bool CallFunc_NotEqual_NameName_ReturnValue);
	void MulticastPotionEffects(const struct FVector& HitLocation, const struct FHitResult& HitResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Respawning_Timer_Bind();
	void Respawning_Timer_End();
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnTimerStart();
	void OnTimerEnd();
	void OnCharBeginOverlap();
	void OnCharEndOverlap();
	void ReceiveBeginPlay();
	void SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel);
	void ExecuteUbergraph_World_Actor(int32 EntryPoint, class FName CallFunc_GetJustOnceItemReplacement_ReplacementID, const struct FVector& K2Node_CustomEvent_HitLocation, const struct FHitResult& K2Node_CustomEvent_HitResult, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class FText CallFunc_Format_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsMyNameInChangedSet_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Array_Contains_ReturnValue, bool K2Node_SwitchName_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class FName CallFunc_GetItemUniqueID_ReturnValue, float CallFunc_LoadRemainingTime_Duration, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class EDHSignificanceLevel K2Node_Event_SignificanceLevel, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsItemJustOnceItem_bYes, class FName CallFunc_GetUniqueDHID_ID, bool CallFunc_LoadItemFromList_Success, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnWorldActorPickup__DelegateSignature();
};

}


