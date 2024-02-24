#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x66 (0x378 - 0x312)
// BlueprintGeneratedClass Cathedral_Lamp_Trap.Cathedral_Lamp_Trap_C
class ACathedral_Lamp_Trap_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_2959[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Fire;                                              // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight1;                                       // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LeverBottem;                                       // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LeverTop;                                          // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AWraithSpawner_Cathedral_ButtonTrap_C*> Spawners;                                          // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	float                                        Spawn_Delay;                                       // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2983[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHDataTableID>                ItemId;                                            // 0x358(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                          Item_Id;                                           // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACathedral_Lamp_Trap_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_OnActorUsed_Success, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDHDataTableID& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ReceiveBeginPlay();
	void Give_Item();
	void Spawn_Enemys();
	void ExecuteUbergraph_Cathedral_Lamp_Trap(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 Temp_int_Loop_Counter_Variable_1, TScriptInterface<class IGamePlayPCInterface_C> CallFunc_Util_SaveGame_self_CastInput, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AWraithSpawner_Cathedral_ButtonTrap_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_Array_Get_Item_1, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, const struct FInventoryItem& CallFunc_GetItemFromID_Item, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot);
};

}


