#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xA0 - 0x28)
// BlueprintGeneratedClass BP_DB_QuestListEntryData.BP_DB_QuestListEntryData_C
class UBP_DB_QuestListEntryData_C : public UObject
{
public:
	uint8                                        Pad_421A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  QuestAssetReference;                               // 0x30(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBP_DB_QuestListEntryData_C* GetDefaultObj();

};

}


