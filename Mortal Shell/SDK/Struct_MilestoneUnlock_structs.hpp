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

// 0x71 (0x71 - 0x0)
// UserDefinedStruct Struct_MilestoneUnlock.Struct_MilestoneUnlock
struct FStruct_MilestoneUnlock
{
public:
	class FName                                  ID_13_4F439B2E46CBB9F6EEAF2384360961CE;            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text_Reward_20_6A562593449CB817C06E2895A9084D23;   // 0x8(0x18)(Edit, BlueprintVisible)
	class FText                                  Text_Requirement_21_DA3906214997A9BA9DC9FDA1921BFB32; // 0x20(0x18)(Edit, BlueprintVisible)
	bool                                         RequirementTextHasXValue__31_809A505B4FD9E2B4913251B6C0A83246; // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RewardTextHasTier__30_E7EB02D34515D6357F94B1AE33375EDD; // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_440[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                XValueMax_19_0824C40E49A391260E8E87B0FE330035;     // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        RowID_36_6680DB554D18FFB82D77D49CFFCFB4F5;         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ColumnID_34_FAA5907D421C6479AFD461942F603EFF;      // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bResetProgressOnDeath_38_45A67D564823C7EE31EB13B0BBBC5BDE; // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_443[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemToUnlockOnComplete_41_1EB886674DE061483F57E99947559F05; // 0x5C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_445[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            IconToShowOnUnlock_44_06D036A741A9A4412BD530A3D5A7F993; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IconIsShellPortrait_46_8E4E23FF489F2F336E20EC8B4672A1B8; // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


