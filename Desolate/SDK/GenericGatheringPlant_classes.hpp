#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x448 - 0x432)
// BlueprintGeneratedClass GenericGatheringPlant.GenericGatheringPlant_C
class AGenericGatheringPlant_C : public AGenericGathering_C
{
public:
	uint8                                        Pad_187B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextRenderComponent*                  TextRender;                                        // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x440(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenericGatheringPlant_C* GetDefaultObj();

	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FS_Selection& K2Node_MakeStruct_S_Selection);
	int32 GetPickupItemCount(class ASHInventory* Inventory, class ASHPlayerCharacter* PickupCharacter, int32 CallFunc_GetPickupItemCount_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RollSecondPlantDrop_ReturnValue);
};

}


