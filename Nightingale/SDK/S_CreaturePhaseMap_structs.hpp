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

// 0xA8 (0xA8 - 0x0)
// UserDefinedStruct S_CreaturePhaseMap.S_CreaturePhaseMap
struct FS_CreaturePhaseMap
{
public:
	float                                        NormalizedHealth_28_A2A8B5944B40AFF006C99A8CE5089B7C; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UClass*>                          AddAIActions_35_FBD99A8E4DB992D76F807C9200175188;  // 0x8(0x50)(Edit, BlueprintVisible)
	TSet<class UClass*>                          RemoveAIActions_34_B19A9E0D4DD3F7A6B4FBE3A230919267; // 0x58(0x50)(Edit, BlueprintVisible)
};

}


