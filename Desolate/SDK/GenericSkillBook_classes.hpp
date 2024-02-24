#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x410 - 0x408)
// BlueprintGeneratedClass GenericSkillBook.GenericSkillBook_C
class AGenericSkillBook_C : public ASHSkillBookItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGenericSkillBook_C* GetDefaultObj();

	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FS_Selection& K2Node_MakeStruct_S_Selection);
	void OnPickup(class ASHInventory* Inventory, class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_GenericSkillBook(int32 EntryPoint, class ASHInventory* K2Node_Event_Inventory, class ASHPlayerCharacter* K2Node_Event_Character, bool CallFunc_Use_ReturnValue);
};

}


