#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x4A0 - 0x494)
// BlueprintGeneratedClass BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C
class ABP_DropShip_RespawnPod_C : public ABP_DropShip_C
{
public:
	uint8                                        Pad_4442[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_DropShip_RespawnPod_C* GetDefaultObj();

	void SetInteraction(bool Active);
	void GetDropshipLoadoutItems(struct FItemData* TopPart, struct FItemData* MidPart, struct FItemData* BottomPart, const struct FItemData& K2Node_MakeStruct_ItemData);
	void CheckClientPartsReady(bool* PartsReady, bool Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ReceiveBeginPlay();
	void SpawnShipParts();
	void ExecuteUbergraph_BP_DropShip_RespawnPod(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& Temp_struct_Variable, const struct FVector& Temp_struct_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FVector& Temp_struct_Variable_2, const struct FVector& K2Node_Select_Default, TArray<class AIcarusRocketPart*>& CallFunc_GetParts_ReturnValue, class AIcarusRocketPart* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AIcarusPlayerControllerSurvival* CallFunc_GetAssignedPlayer_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


