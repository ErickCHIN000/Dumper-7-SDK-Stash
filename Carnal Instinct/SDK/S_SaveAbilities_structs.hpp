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

// 0x1B8 (0x1B8 - 0x0)
// UserDefinedStruct S_SaveAbilities.S_SaveAbilities
struct FS_SaveAbilities
{
public:
	int32                                        AbilityPoints_2_D461A96F495B1B81541912B5C7063B38;  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1471[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FS_AbilityData>           AbilitiesInBar_6_D6F636044BB77B1DFD9F28A6BF2A7DBA; // 0x8(0x50)(Edit, BlueprintVisible)
	TSet<class UClass*>                          Activated_11_F431EBD14C9974A35D52AFB54577D41D;     // 0x58(0x50)(Edit, BlueprintVisible)
	TSet<class UClass*>                          Unlocked_13_2F785B024AA10B4B5085BFBE537D7350;      // 0xA8(0x50)(Edit, BlueprintVisible)
	TSet<class UClass*>                          PermUnlocked_15_F81C3FE64DC395119AF95889B1D3D490;  // 0xF8(0x50)(Edit, BlueprintVisible)
	struct FS_AbilityData                        ActiveSlotData_19_402E0BD343F340E676A4F5A4D176B85D; // 0x148(0x70)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


