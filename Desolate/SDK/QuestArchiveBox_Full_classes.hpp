#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x3A0 - 0x38E)
// BlueprintGeneratedClass QuestArchiveBox_Full.QuestArchiveBox_Full_C
class AQuestArchiveBox_Full_C : public AGlobalLootContainer_C
{
public:
	uint8                                        Pad_1902[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UArrowComponent*                       Arrow;                                             // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AQuestArchiveBox_Full_C* GetDefaultObj();

};

}


