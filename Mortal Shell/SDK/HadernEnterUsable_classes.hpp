#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x3B0 - 0x330)
// BlueprintGeneratedClass HadernEnterUsable.HadernEnterUsable_C
class AHadernEnterUsable_C : public AUsable_Level_Loader_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  ChildActor;                                        // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       TransformComponent;                                // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StoneWeapon;                                       // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       WeaponTransform;                                   // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Statue;                                            // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       HadernWeaponUsed;                                  // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EComboTypes                       PlayerPreviousWeapon;                              // 0x369(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EF6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AUsable_Weapon_C*                      AttachedUsableWeapon;                              // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ALevelSequenceActor>    LevelSequence;                                     // 0x378(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsEnemyNearby_;                                   // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EComboTypes                       HadernWeaponToSpawn;                               // 0x3A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F03[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AConfigurable_Glowing_Pickup_C*        PickupItem_Ore;                                    // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHadernEnterUsable_C* GetDefaultObj();

	class FName GetStatueSocketName(enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName K2Node_Select_Default);
	enum class EComboTypes GetWeaponToSpawn(enum class EComboTypes Local_WeaponToSpawnLoaded, enum class EComboTypes Local_CurrentWeapon, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EComboTypes CallFunc_GetWeaponToSpawnEnum_ReturnValue, enum class EComboTypes K2Node_Select_Default);
	enum class EComboTypes GetWeaponToSpawnEnum(int32 Temp_int_Variable, enum class EComboTypes Temp_byte_Variable, enum class EComboTypes Temp_byte_Variable_1, enum class EComboTypes Temp_byte_Variable_2, enum class EComboTypes Temp_byte_Variable_3, enum class EComboTypes Temp_byte_Variable_4, enum class EComboTypes Temp_byte_Variable_5, int32 CallFunc_GetMyNamedInt_ReturnValue, enum class EComboTypes K2Node_Select_Default);
	int32 GetWeaponToSpawnID(enum class EComboTypes Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, const struct FInventoryItem& CallFunc_GetMainHandWeapon_EquippedMainHandWeapon, enum class EComboTypes CallFunc_GetCharacterWeaponEnumFromID_Weapon, int32 K2Node_Select_Default);
	void SetGlowingPickupNonInteractibleDestroyChildActor(class AConfigurable_Glowing_Pickup_C* K2Node_DynamicCast_AsConfigurable_Glowing_Pickup, bool K2Node_DynamicCast_bSuccess);
	void SetSpecialMeshForStatueAndWidgetLocation(enum class EComboTypes Index, class UStaticMesh* Temp_object_Variable, class UStaticMesh* Temp_object_Variable_1, class UStaticMesh* Temp_object_Variable_2, class UStaticMesh* Temp_object_Variable_3, class UStaticMesh* Temp_object_Variable_4, class UStaticMesh* Temp_object_Variable_5, class UStaticMesh* Temp_object_Variable_6, enum class EComboTypes Temp_byte_Variable, class UStaticMesh* K2Node_Select_Default, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue);
	void GetIsActorUsable(bool* IsUsable, bool CallFunc_CheckForNearbyEnemies_ReturnValue, bool CallFunc_GetIsActorUsable_IsUsable);
	void AfterLevelSequence(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_OnActorUsed_Success);
	void PlayLevelSequence(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue);
	void OnActorUsed(class APlayerController* Controller, bool* Success, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_CheckForNearbyEnemies_ReturnValue, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, class FName CallFunc_GetActorName_ReturnValue);
	void UserConstructionScript(enum class EComboTypes Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, class UMaterialInterface* Temp_object_Variable_6, enum class EComboTypes Temp_byte_Variable_1, class UStaticMesh* Temp_object_Variable_7, class UStaticMesh* Temp_object_Variable_8, class UStaticMesh* Temp_object_Variable_9, class UStaticMesh* Temp_object_Variable_10, class UStaticMesh* Temp_object_Variable_11, class UStaticMesh* Temp_object_Variable_12, class UStaticMesh* Temp_object_Variable_13, enum class EComboTypes Temp_byte_Variable_2, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, int32 Temp_int_Array_Index_Variable, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMesh* K2Node_Select_Default_1, class FName K2Node_Select_Default_2, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void ForceUpdate();
	void ReceiveBeginPlay();
	void SpawnWeapon();
	void SaveWeaponInt();
	void DestroyOldWEaponAndSpawnNewOne();
	void ResetStatue();
	void SpawnWeapon_Bind();
	void OnActorUsed_Bind();
	void OnWeaponEquipped_Bind();
	void WeaponEquipCancelled_Bind();
	void ExecuteUbergraph_HadernEnterUsable(int32 EntryPoint, enum class EComboTypes Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActorBeingDestroyed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsBeingDestroyed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class FName CallFunc_GetActorName_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AUsable_Weapon_C* CallFunc_FinishSpawningActor_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue, int32 CallFunc_GetWeaponToSpawnID_ReturnValue, int32 K2Node_Select_Default, enum class EComboTypes CallFunc_GetWeaponToSpawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName CallFunc_GetStatueSocketName_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2, bool CallFunc_Greater_IntInt_ReturnValue, class AConfigurable_Glowing_Pickup_C* K2Node_DynamicCast_AsConfigurable_Glowing_Pickup, bool K2Node_DynamicCast_bSuccess);
};

}


