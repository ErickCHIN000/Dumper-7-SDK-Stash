#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0x369 - 0x33E)
// BlueprintGeneratedClass fog_chest_consumable_container.fog_chest_consumable_container_C
class AFog_chest_consumable_container_C : public AContainer_Actor_C
{
public:
	uint8                                        Pad_2A44[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  FishChest_Open1;                                   // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_5598F5334ABF9E928A3F839CDF430F89; // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_5598F5334ABF9E928A3F839CDF430F89; // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A58[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDHDataTableID                        ItemId;                                            // 0x360(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	bool                                         DisableUseWhenNoFog_;                              // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AFog_chest_consumable_container_C* GetDefaultObj();

	void DisableFogChest();
	void EnableFogChest();
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success);
	void ContainerLooted(bool* Success, class FName CallFunc_GetUniqueDHID_ID, bool CallFunc_IsItemJustOnceItem_bYes, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_ContainerLooted_Success);
	void InitializeInventory(bool* Success, bool Temp_bool_Variable, class FName CallFunc_GetUniqueDHID_ID, int32 CallFunc_GetNamedPCInt_Value, class FName CallFunc_RowName_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class FName CallFunc_GetJustOnceItemReplacement_ReplacementID, bool CallFunc_IsItemJustOnceItem_bYes, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_Select_Default, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FInventoryItem>& K2Node_MakeArray_Array, bool CallFunc_LoadInventoryItems_Success);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void FogON();
	void FogOFF();
	void FadeEmissiveOnFish();
	void ExecuteUbergraph_fog_chest_consumable_container(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue_1);
};

}


