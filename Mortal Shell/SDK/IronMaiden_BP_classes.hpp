#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x76 (0x388 - 0x312)
// BlueprintGeneratedClass IronMaiden_BP.IronMaiden_BP_C
class AIronMaiden_BP_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_1EE5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     Capsule;                                           // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_IronMaiden;                                     // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SharedRoot;                                        // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class Enum_MaidenTrap_Type              MaidenType;                                        // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MaidenUniqueID;                                    // 0x344(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AShadowKnightSpawner_C*>        Spawners;                                          // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	float                                        SpawnDelay;                                        // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHDataTableID>                ItemsToDrop;                                       // 0x368(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                          ItemNames;                                         // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AIronMaiden_BP_C* GetDefaultObj();

	void Disable();
	void AddItemNames(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDHDataTableID& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void SetAsClosedUnusable();
	void SetAsOpenUnusable();
	void SpawnEnemyEffects(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void GiveItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_GetItemFromID_Item, bool CallFunc_Less_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TScriptInterface<class IGamePlayPCInterface_C> CallFunc_Util_SaveGame_self_CastInput, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot);
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success, class FName CallFunc_MakeLiteralName_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void UserConstructionScript();
	void OnIronMaidenUsed();
	void ReceiveBeginPlay();
	void SpawnEnemy();
	void Maiden_UpdateType();
	void ExecuteUbergraph_IronMaiden_BP(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AShadowKnightSpawner_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


