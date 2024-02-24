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

// 0x108 (0x108 - 0x0)
// UserDefinedStruct MapSaveState.MapSaveState
struct FMapSaveState
{
public:
	TMap<class FName, struct FEnemySaveState>    EnemySaveStates_10_8DECEC6846927463E2DFC79756D28450; // 0x0(0x50)(Edit, BlueprintVisible)
	enum class ELevelPhases                      LevelPhase_14_676B8AA942B2F4C4D66DBFACEB472E7B;    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            ChangedActorSet_18_5693102B4195695C759F6EB01D21C5E9; // 0x58(0x50)(Edit, BlueprintVisible)
	TMap<class FName, struct FDHActorData>       StoredActorData_24_FCBFEBCE40A3F6ED46FB87A5A52CDEB1; // 0xA8(0x50)(Edit, BlueprintVisible)
	class USoundBase*                            LastMusicTriggered_27_15A9951D43229354711930BF2EFC2FA7; // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            LastAmbientSFXTriggered_29_956E407443825E49004EE6AD9A975489; // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


