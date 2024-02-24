#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48E (0xEC0 - 0xA32)
// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C
class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C : public UBP_ActionableBehaviour_Firearm_Base_C
{
public:
	uint8                                        Pad_6207[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          ReloadTimer;                                       // 0xA40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalCurrentAmmo;                                  // 0xA48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Reloading;                                         // 0xA4C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         RadialOpen;                                        // 0xA4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6216[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnReloadPressed;                                   // 0xA50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            NotifyReloadStart;                                 // 0xA60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            NotifyReloadEnd;                                   // 0xA70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         AbortReloadRequested;                              // 0xA80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AwaitingAutoReload;                                // 0xA81(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6221[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UContextMenuWidget*                    CurrentContextMenu;                                // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  QuickbarInventoryActionId;                         // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BackpackInventoryActionId;                         // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ScaleReloadAnimMontageSectionName;                 // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AmmoSlotIndex;                                     // 0xAA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_622C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             LastAmmoData;                                      // 0xAB0(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FItemData                             ClientAmmoType;                                    // 0xCA0(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         OwnerReady;                                        // 0xE90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InventoryReady;                                    // 0xE91(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6234[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CachedAmmoCount;                                   // 0xE94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CachedAmmoIcon;                                    // 0xE98(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* GetDefaultObj();

	void GetCurrentAmmoInfo(TSoftObjectPtr<class UTexture2D>* AmmoIcon, class FText* CurrentAmmo, class FText* TotalAmmo, class FText CurrentAmmoCount, class FText TotalAmmoCount, TSoftObjectPtr<class UTexture2D> Icon, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1);
	void OnSprintUpdated(bool Sprinting, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_CanAbortReload_CanAbort, bool CallFunc_GetCanSprintCancelReload_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void UpdateCachedAmmoInfo(bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, int32 CallFunc_GetInventoryAmmoCount_Count, bool K2Node_SwitchEnum_CmpSuccess);
	void ClientCheckAmmoTypeChanged(enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool CallFunc_IsSameItem_ReturnValue);
	void FindItemAndMoveToAmmoContainerFromInventory(int32 Amount, const struct FItemData& ItemToFind, class UInventory* SourceInventory, class UInventory* DestinationInventory, int32* RemainingAmount, int32 AmountToTransfer, int32 Remaining, int32 CallFunc_Find_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue);
	void TransferAmmoContainerToInventory(class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, const struct FItemData& CallFunc_RemoveItem_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue);
	void TransferItemToAmmoContainer(const struct FItemData& ItemType, int32 Amount, const struct FItemData& Item, int32 Remaining, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount, int32 CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount_1);
	void FindValidAmmoData(const struct FItemData& AmmoType, bool* Found, struct FItemData* ItemType, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Find_ReturnValue, int32 CallFunc_FindStackTotalWithMatchingData_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_FindStackTotalWithMatchingData_ReturnValue_1, int32 CallFunc_Find_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FItemData& CallFunc_GetItem_ReturnValue_1);
	void GetCurrentAmmoItem(bool* SlotValid, struct FItemData* AmmoItemRef, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetItemRef_bIsValid, const struct FItemData& CallFunc_GetItemRef_ReturnValue);
	void GetWeaponInventoryContainer(class UInventory** Inventory, enum class EValid CallFunc_GetTrait_Paths, class UInventoryContainerComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_Inventory, bool CallFunc_GetInventory_ReturnValue);
	void GetFiredProjectileInfo(bool* HasBallisticData, struct FBallisticData* BallisticData, int32* ProjectileCount, struct FVector2D* ProjectileAccuracy, const struct FVector2D& PerProjectileAccuracy, int32 BallisticCount, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FAmmoTypeData& CallFunc_GetAmmoTypesStruct_AmmoTypes, enum class EValid CallFunc_GetAmmoTypesStruct_Paths, const struct FBallisticData& CallFunc_GetBallisticStruct_Ballistic, enum class EValid CallFunc_GetBallisticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	bool WantsAutoReload(bool CallFunc_HasAmmo_HasAmmo, bool CallFunc_Not_PreBool_ReturnValue);
	void GetAutoReloadTime(float* FireRate, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, float CallFunc_GetFireRate_FireRate);
	void FindAmmoTypeToSwapTo(bool* FoundType, struct FItemData* AmmoType, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetInventoryAmmoCount_Count, bool CallFunc_Greater_IntInt_ReturnValue, const struct FValidAmmoTypes& CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes, enum class EValid CallFunc_GetValidAmmoTypesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_FindValidAmmoDataByStatic_Found, const struct FItemData& CallFunc_FindValidAmmoDataByStatic_ItemType, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdatePersistentAudio(int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_IsValid_ReturnValue);
	class UInventory* GetInventoryFromName(class FName InventoryName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1);
	class FName GetNameForInventory(class UInventory* Inventory, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
	void ContextMenuAmmoSelected(class FName ID, int32 Payload, class UInventory* CallFunc_GetInventoryFromName_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void ContextMenuUnloadSelected(class FName ID, int32 Payload);
	void Open_Ammo_Select_Menu(bool AsRadial, bool* Opened, const TArray<struct FFindAllStacksResult>& AllAmmoTypes, const struct FItemableData& Itemable, const TArray<int32>& AmmoStack, const TArray<struct FFindItemSlotInfo>& Ammo, const TArray<struct FItemsStaticRowHandle>& ValidAmmoTypes, bool ShowUnload, class AContextMenuFactory* ContextMenu, TArray<class UWidget*>& Temp_object_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UUMG_RadialMenu_ImprovedItemIcon_C* CallFunc_Create_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, TArray<class UWidget*>& K2Node_MakeArray_Array, const struct FFirearmData& CallFunc_GetFirearmData_FirearmData, enum class EDataValid CallFunc_GetFirearmData_Paths, const struct FRangedWeaponData& CallFunc_GetRangedWeaponData_RangedWeaponData, enum class EDataValid CallFunc_GetRangedWeaponData_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FValidAmmoTypes& CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes, enum class EValid CallFunc_GetValidAmmoTypesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AContextMenuFactory* CallFunc_CreateContextMenu_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_4, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FFindAllStacksResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsCustomItem_ReturnValue, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_5, TArray<class UWidget*>& K2Node_Select_Default, class FName CallFunc_GetNameForInventory_ReturnValue, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, TArray<struct FFindAllStacksResult>& CallFunc_FindAllUniqueStacks_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFindAllStacksResult>& CallFunc_FindAllUniqueStacks_ReturnValue_1, TArray<struct FFindAllStacksResult>& CallFunc_CombineFindAllStackResults_ReturnValue, TArray<struct FFindAllStacksResult>& CallFunc_CombineFindAllStackResults_ReturnValue_1, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_Greater_IntInt_ReturnValue, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UContextMenuWidget* CallFunc_ShowAsContextMenu_ReturnValue, class UContextMenuWidget* CallFunc_ShowAsRadialMenu_ReturnValue, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FItemableData& CallFunc_GetItemableData_ItemableData_1, enum class EDataValid CallFunc_GetItemableData_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_6, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	void IsAwaitingAutoReload(bool* WaitingReload);
	void CanAbortReload(bool* CanAbort);
	void OnAbortReloadRequested();
	void AutoReload(bool CallFunc_FindAmmoTypeToSwapTo_FoundType, const struct FItemData& CallFunc_FindAmmoTypeToSwapTo_AmmoType, bool CallFunc_HasAnyReserveAmmo_HasAnyReserve);
	void CheckReload(bool CallFunc_WantsAutoReload_ReturnValue, float CallFunc_GetAutoReloadTime_FireRate, bool CallFunc_Greater_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void FindValidAmmoDataByStatic(const struct FItemsStaticRowHandle& AmmoType, bool* Found, struct FItemData* ItemType, bool CallFunc_IsRowHandleValid_ReturnValue, int32 CallFunc_FindStatic_ReturnValue, int32 CallFunc_FindStaticStackTotal_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_FindStaticStackTotal_ReturnValue_1, int32 CallFunc_FindStatic_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FItemData& CallFunc_GetItem_ReturnValue_1);
	void SetCurrentAmmoType(const struct FItemData& AmmoType, const struct FItemData& CallFunc_CreateItem_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool CallFunc_SetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Setup(class AIcarusActor* ForOwner);
	void OnRep_Reloading(bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleShotRollback(int32 OldLocalAmmo, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void CheckAmmo(bool bInitial, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool CallFunc_HasAmmo_HasAmmo, bool CallFunc_Not_PreBool_ReturnValue, const struct FValidAmmoTypes& CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes, enum class EValid CallFunc_GetValidAmmoTypesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_FindValidAmmoDataByStatic_Found, const struct FItemData& CallFunc_FindValidAmmoDataByStatic_ItemType, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateLocalAmmo(bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server);
	void TryReload(bool Force, bool ForceIfReloading, bool CallFunc_FindValidAmmoData_Found, const struct FItemData& CallFunc_FindValidAmmoData_ItemType, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_CanReload_CanReload, bool CallFunc_BooleanOR_ReturnValue);
	void ServerFinishReload(int32 MagAmmo, int32 TotalAmmo, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool CallFunc_GetCurrentAmmoItem_SlotValid_1, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef_1, int32 CallFunc_GetInventoryAmmoCount_Count, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, int32 CallFunc_GetAmmoCapacity_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, int32 K2Node_Select_Default, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount_1);
	float GetReloadAnimPlayRate(class UAnimMontage* Montage, int32 CallFunc_GetStat_Value, float CallFunc_GetPlayLength_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	float GetReloadTimeMultiplier(int32 CallFunc_GetStat_Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
	void ConsumeAmmo(int32 Amount, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void SetCurrentAmmoCount(int32 CurrentAmmo, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, bool CallFunc_SetItemDynamicProperty_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetInventoryAmmoCount(struct FItemData& ItemType, int32* Count, enum class EDataValid CallFunc_ItemDataValid_Paths, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FindStackTotalWithMatchingData_ReturnValue, int32 CallFunc_FindStackTotalWithMatchingData_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
	int32 GetAmmoCapacity(int32 CallFunc_GetStat_Value);
	void GetCurrentAmmoCount(int32* CurrentAmmoCount, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void HasAnyReserveAmmo(bool* HasAnyReserve, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetInventoryAmmoCount_Count, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void IsReloading(bool* Reloading);
	void CanReload(bool* CanReload, bool CallFunc_HasAnyReserveAmmo_HasAnyReserve, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, int32 CallFunc_GetAmmoCapacity_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HasAmmo(bool* HasAmmo, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void OnLoaded_3BD9368B4FF435E753B9509E9B0FBB43(TSubclassOf<class UObject> Loaded);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnInventoryItemAdded(class UInventory* Inventory, int32 Location);
	void ReceiveBeginPlay();
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, class AActor* AnimInstancePawn);
	void OnReloadStart();
	void OnReloadEnd();
	void HandleReloadAnimNotify(const class FString& NotifyName);
	void LoadAndPlayReloadAnims();
	void OnAmmoTypeChanged();
	void Server_UnloadAmmoType();
	void Server_RequestNewAmmoType(const struct FItemData& NewAmmoType);
	void Client_ForceReload();
	void PlayReload();
	void OnWeaponFired();
	void Local_PlayReload();
	void LateSetup();
	void Server_TryReload();
	void TryAbortReload();
	void Server_TryAbortReload();
	void OnAmmoUnloaded();
	void MC_PlayReload();
	void OnShotRollback();
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void SprintToReload();
	void OnWeaponInventoryAvailable();
	void OnWeaponInventoryUpdated();
	void Client_OnReloadEnd(int32 NewAmmoCount);
	void Server_TryReloadWithTimeStamp(float RequestTime);
	void Server_ClientSetReady();
	void Server_CheckInitComplete();
	void OwningPlayerInventoryUpdated(class UInventory* Inventory, int32 Location);
	void Client_OnItemsUpdated();
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_LocalOrServer_Local_2, bool CallFunc_LocalOrServer_Server_2, class UInventory* K2Node_CustomEvent_Inventory_1, int32 K2Node_CustomEvent_Location_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_GetReloadTimeMultiplier_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FAnimNotifyEvent& K2Node_Event_Notify, class AActor* K2Node_Event_AnimInstancePawn, class UIcarusAnimNotify* K2Node_DynamicCast_AsIcarus_Anim_Notify, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_NotifyName, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_LocalOrServer_Local_3, bool CallFunc_LocalOrServer_Server_3, const struct FItemData& K2Node_CustomEvent_NewAmmoType, bool CallFunc_LocalOrServer_Local_4, bool CallFunc_LocalOrServer_Server_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LocalOrServer_Local_5, bool CallFunc_LocalOrServer_Server_5, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LocalOrServer_Local_6, bool CallFunc_LocalOrServer_Server_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_CanReload_CanReload, bool CallFunc_LocalOrServer_Local_7, bool CallFunc_LocalOrServer_Server_7, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_LocalOrServer_Local_8, bool CallFunc_LocalOrServer_Server_8, bool CallFunc_IsReloading_Reloading, bool CallFunc_Not_PreBool_ReturnValue_2, class UClass* Temp_class_Variable, bool CallFunc_Open_Ammo_Select_Menu_Opened, bool CallFunc_IsValid_ReturnValue_1, class UUMG_ContextMenu_Radial_C* K2Node_DynamicCast_AsUMG_Context_Menu_Radial, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetReloadTimeMultiplier_ReturnValue_1, int32 CallFunc_GetStat_Value, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_FMax_ReturnValue, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_FindAmmoTypeToSwapTo_FoundType, const struct FItemData& CallFunc_FindAmmoTypeToSwapTo_AmmoType, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetTimeSeconds_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_LocalOrServer_Local_9, bool CallFunc_LocalOrServer_Server_9, bool CallFunc_LocalOrServer_Local_10, bool CallFunc_LocalOrServer_Server_10, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool CallFunc_IsSameItem_ReturnValue, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, bool CallFunc_GetCurrentAmmoItem_SlotValid_1, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef_1, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FBallisticData& CallFunc_GetBallisticStruct_Ballistic, enum class EValid CallFunc_GetBallisticStruct_Paths, enum class EValid CallFunc_GetTrait_Paths, class UInventoryContainerComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_HasLinkedInventory_Fast_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_IsValidSoftClassReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, int32 K2Node_CustomEvent_NewAmmoCount, float K2Node_CustomEvent_RequestTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_LocalOrServer_Local_11, bool CallFunc_LocalOrServer_Server_11, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_LocalOrServer_Local_12, bool CallFunc_LocalOrServer_Server_12, bool CallFunc_LocalOrServer_Local_13, bool CallFunc_LocalOrServer_Server_13, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool CallFunc_LocalOrServer_Local_14, bool CallFunc_LocalOrServer_Server_14, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1);
	void NotifyReloadEnd__DelegateSignature();
	void NotifyReloadStart__DelegateSignature();
	void OnReloadPressed__DelegateSignature();
};

}


