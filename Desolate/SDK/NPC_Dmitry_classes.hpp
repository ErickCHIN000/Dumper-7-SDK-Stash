#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1228 - 0x1218)
// BlueprintGeneratedClass NPC_Dmitry.NPC_Dmitry_C
class ANPC_Dmitry_C : public AGenericQuestNPC_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1218(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USHTradeComponent*                     SHTrade;                                           // 0x1220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANPC_Dmitry_C* GetDefaultObj();

	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FS_Selection& K2Node_MakeStruct_S_Selection);
	void OnUseActor(class ASHPlayerCharacter* Character);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NPC_Dmitry(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess);
};

}


