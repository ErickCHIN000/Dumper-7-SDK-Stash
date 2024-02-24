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

// 0x50 (0x50 - 0x0)
// UserDefinedStruct S_TrackingData_Node.S_TrackingData_Node
struct FS_TrackingData_Node
{
public:
	enum class E_TrackingNodeType                NodeType_20_09E24BB44157CF57A8B6F09F71C863EB;      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NodeID_17_32B2D5344BF0924C0D511CA710C2D56A;        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NodeCreationTime_11_E35FDC9B4BC1AB411E9B80A27CC014B6; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NodeLife_33_DC1B70E24EFF977D572186A902CA8812;      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 SpawnerID_39_EA30B608411AFA189C12D18BFC093119;     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SpawnerClass_7_2AD7A19C456614CC242A3E8EB722F779;   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnerCreationTime_14_DD1A12DF4E39247BB25E79BC4C9CE4F2; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SquadCreatureCount_10_D86117C04C874C3247A85B9C42CC8DC9; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SquadTrackingNode_C*               PrecedingNode_24_8A3F443A41D9F208075D1C80E22D9FAD; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_SquadTrackingNode_C*               SucceedingNode_36_6F3BCC8B4FC8013EF1DDF88B63889E2B; // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSplinePoint>                  NavSplineData_30_BA72279C499538BE404D0D88CBF886C5; // 0x40(0x10)(Edit, BlueprintVisible)
};

}


