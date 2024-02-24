#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x160 - 0x130)
// BlueprintGeneratedClass RepairCraftTable.RepairCraftTable_C
class URepairCraftTable_C : public USHQuestTask
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class AGenericCraftTable_C>   CraftTable;                                        // 0x138(0x28)(Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URepairCraftTable_C* GetDefaultObj();

	void GetCraftTableName(class FString* CraftTableObjectName, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AGenericCraftTable_C* K2Node_DynamicCast_AsGeneric_Craft_Table, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetObjectName_ReturnValue);
	int32 GetProgressMax();
	void OnActorUsed_Event_0(class ASHPlayerCharacter* Sender, class AActor* InteractedActor, bool IsHoldUsed);
	void OnGivePlayer(class ASHPlayerCharacter* Player);
	void OnRemoveFromPlayer(class ASHPlayerCharacter* Player);
	void ExecuteUbergraph_RepairCraftTable(int32 EntryPoint, class ASHPlayerCharacter* K2Node_CustomEvent_Sender, class AActor* K2Node_CustomEvent_InteractedActor, bool K2Node_CustomEvent_IsHoldUsed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGenericCraftTable_C* K2Node_DynamicCast_AsGeneric_Craft_Table, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Player_1, class ASHPlayerCharacter* K2Node_Event_Player, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
};

}


