#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x790 - 0x774)
// WidgetBlueprintGeneratedClass UMG_OutpostListEntry.UMG_OutpostListEntry_C
class UUMG_OutpostListEntry_C : public UUMG_BasicButton_2_C
{
public:
	uint8                                        Pad_5259[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ExistingOutpostPath;                               // 0x778(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EMissionDifficulty                ExistingOutpostDifficulty;                         // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_5264[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ExistingOutpostDropIndex;                          // 0x78C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_OutpostListEntry_C* GetDefaultObj();

};

}


