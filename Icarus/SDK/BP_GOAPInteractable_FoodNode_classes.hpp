#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x30C - 0x2F8)
// BlueprintGeneratedClass BP_GOAPInteractable_FoodNode.BP_GOAPInteractable_FoodNode_C
class ABP_GOAPInteractable_FoodNode_C : public ABP_GOAPInteractable_Base_C
{
public:
	int32                                        FLODInstanceIndex;                                 // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2C70[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFLODTile*                             FLODTile;                                          // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        FLODRecordInstance;                                // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GOAPInteractable_FoodNode_C* GetDefaultObj();

	void OnInteractionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsValid_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, class UFLODRecord* CallFunc_FindRecordByRecordIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


