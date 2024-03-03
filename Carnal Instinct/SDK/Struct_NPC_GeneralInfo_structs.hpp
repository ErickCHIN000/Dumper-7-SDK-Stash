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

// 0x81 (0x81 - 0x0)
// UserDefinedStruct Struct_NPC_GeneralInfo.Struct_NPC_GeneralInfo
struct FStruct_NPC_GeneralInfo
{
public:
	class FText                                  NPCName_2_965D326B4BDA66A08BC67CBCE33EB215;        // 0x0(0x18)(Edit, BlueprintVisible)
	bool                                         PickRandomName_30_860C3FFA439F30A38BB630A46BBB7850; // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_191A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            DataTablewithnames_33_8F73ED794DF570BC78110884BB19E412; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TotalHP_5_11DEEF2D4A3C6F0167685C8EA90861A7;        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowHUD_28_95E1094B483F57CC12ABC1B35FC47336;       // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1923[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MeshScaleRange_36_3E74DA444A74B978530AE7BF5B86FBEB; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cantakedamage_21_16501F5E49E3624F144372886328F604; // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_192A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_NPC_RunAwayOptions            RunawayOptions_16_7FC2B0EF4DDB78F6514B42ACF5582356; // 0x3C(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DespawnDelay_15_13051161406325A340D10788720B4A3D;  // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  DeathAnimations_23_5E65F7BB4B63D720025363881C4303C3; // 0x60(0x10)(Edit, BlueprintVisible)
	TArray<class USoundBase*>                    DeadSoundClips_26_714AFA7D4A92824EF0ED0B92083B2190; // 0x70(0x10)(Edit, BlueprintVisible)
	bool                                         Ragdollondeath_11_755524BB4E80AE44D55F6F9AC42C1781; // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


