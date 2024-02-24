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

// 0x30 (0x30 - 0x0)
// UserDefinedStruct Struct_WorldActorInventory.Struct_WorldActorInventory
struct FStruct_WorldActorInventory
{
public:
	TArray<struct FS_ReplicatedContainerInfo>    ReplicatedContainers_6_DA110C204443D2AB30E541A1550FC694; // 0x0(0x10)(Edit, BlueprintVisible, SaveGame, ContainsInstancedReference)
	TArray<int32>                                MainUIDs_7_CFDC4BBB4BB8861F7FAD1A9EED2D8711;       // 0x10(0x10)(Edit, BlueprintVisible, SaveGame)
	TArray<struct FS_InvWeight>                  Weights_10_948F84EE41B20820DD51D98A692CD033;       // 0x20(0x10)(Edit, BlueprintVisible, SaveGame)
};

}


