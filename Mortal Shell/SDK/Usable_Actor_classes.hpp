#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE2 (0x312 - 0x230)
// BlueprintGeneratedClass Usable_Actor.Usable_Actor_C
class AUsable_Actor_C : public ASignificanceActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      UsableIndicatorCollisionSphere;                    // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       WidgetLocation;                                    // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  UsableActorNameLocalized;                          // 0x250(0x18)(Edit, BlueprintVisible)
	class FName                                  UsableActorName_Deprecated;                        // 0x268(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Action;                                            // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundCue*                             UsedSound;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUsable;                                          // 0x290(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         WasUsed;                                           // 0x291(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	enum class EItemDescriptors                  AbstractDescription;                               // 0x292(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsIdentifed;                                       // 0x293(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUsableIndicator_C*                    IndicatorWidget;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InteractionIndicatorRadius;                        // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowsOutline;                                     // 0x2A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUsableChanged;                                   // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  UsableActorDefaultName;                            // 0x2B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DefaultAction;                                     // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bDisableWhenEnemiesAreNearby_;                     // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CheckForEnemiesInRadius;                           // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         DoesActorRespawn;                                  // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timer_Duration;                                    // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timer_TotalPickUpTime;                             // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timer_ElapsedTimeFromPickUp;                       // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timer_Max;                                         // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3108[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_Respawning;                                  // 0x308(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInCoolDown;                                      // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIgnoreConditions;                                 // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AUsable_Actor_C* GetDefaultObj();

	void GetInteractionWidgetLocation(struct FVector* WidgetLocation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void GetUnidentifiedText(class FText* UnidentifiedText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_ByteToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void GetID(class FName* ID);
	void GetUseActionText(class FText* ActionText, class FText CallFunc_CheckItemName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_HasAuthority_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_GetUseInteractibleConditions_ReturnValue);
	void BeginOutlineFocus(bool* Success, bool CallFunc_Not_PreBool_ReturnValue);
	void EndOutlineFocus(bool* Success);
	void GetIsActorUsable(bool* IsUsable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetUniqueDHID(class FName* ID, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_GetLevelNameFromActor_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue);
	void CheckNameForLootedSuper(class FName RowToCheckForSuperUnlock1, class FName* ModifiedRowName, class FName RowToCheckForSuperUnlock, bool Temp_bool_Variable, class FName Temp_name_Variable, bool K2Node_SwitchName_CmpSuccess, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool CallFunc_IsUpgradeUnlocked_bUnlocked_1, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_2, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_3, bool CallFunc_IsUpgradeUnlocked_bUnlocked_2, bool CallFunc_IsUpgradeUnlocked_bUnlocked_3, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_4, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_5, bool CallFunc_IsUpgradeUnlocked_bUnlocked_4, bool CallFunc_IsUpgradeUnlocked_bUnlocked_5, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_6, bool CallFunc_IsUpgradeUnlocked_bUnlocked_6, bool CallFunc_CheckPlayerInventoryForItem_Success, class FName K2Node_Select_Default, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_7, bool CallFunc_IsUpgradeUnlocked_bUnlocked_7);
	void AddUsableIndicatorWidget(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUsableIndicator_C* CallFunc_Create_ReturnValue);
	void Usable_Actor_AutoGenFunc(bool CallFunc_CheckForNearbyEnemies_ReturnValue);
	bool CheckForNearbyEnemies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess);
	void OnCharEnteredArea();
	void SetIsUsable(bool bNewUsable, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void HideIndicatorWidget(bool CallFunc_IsValid_ReturnValue);
	void ShowUsableIndicatorIfUsable(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_GetIsActorUsable_IsUsable, bool CallFunc_BooleanAND_ReturnValue);
	void OnWasUsed(bool* Success, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_GetUseInteractibleConditions_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnRep_WasUsed(bool CallFunc_OnWasUsed_Success);
	void UserConstructionScript();
	void BndEvt__UsableIndicatorCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ShowAfterTriggerUsable();
	void OnCharBeginOverlap();
	void OnCharEndOverlap();
	void BndEvt__UsableIndicatorCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel);
	void ExecuteUbergraph_Usable_Actor(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsActorUsable_IsUsable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, enum class EDHSignificanceLevel K2Node_Event_SignificanceLevel, bool K2Node_SwitchEnum_CmpSuccess);
	void OnUsableChanged__DelegateSignature(bool bNewUsable);
};

}


