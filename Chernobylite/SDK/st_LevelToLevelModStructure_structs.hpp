#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// UserDefinedStruct st_LevelToLevelModStructure.st_LevelToLevelModStructure
struct FSt_LevelToLevelModStructure
{
public:
	enum class EEventMap                         Eventmap_2_8550A1234D3977ADF1E2C190C6C160B0;       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2404[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            LevelModCustomHandle_9_73745E86486B496B8DB037BF41E3C029; // 0x8(0x50)(Edit, BlueprintVisible)
	TArray<struct FWorldSoftObjectReference>     LevelModStreamingLevel_21_132E78724378F1594292A084DABDD918; // 0x58(0x10)(Edit, BlueprintVisible)
};

}


