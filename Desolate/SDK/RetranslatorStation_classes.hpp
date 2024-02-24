#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x2C0 - 0x2B2)
// BlueprintGeneratedClass RetranslatorStation.RetranslatorStation_C
class ARetranslatorStation_C : public AGenericCraftTable_C
{
public:
	uint8                                        Pad_1C14[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ARetranslatorStation_C* GetDefaultObj();

	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, const struct FS_Selection& CallFunc_GetSelectionInfo_result, bool K2Node_SwitchEnum_CmpSuccess);
	void OnUseActor(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_RetranslatorStation(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, class ASHPlayerCharacter* K2Node_Event_Character);
};

}


