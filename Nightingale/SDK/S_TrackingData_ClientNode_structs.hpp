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
// UserDefinedStruct S_TrackingData_ClientNode.S_TrackingData_ClientNode
struct FS_TrackingData_ClientNode
{
public:
	enum class E_TrackingNodeType                NodeType_5_C4D5B3504C54B4F7DED1829064E87766;       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CreatureName_2_78027C834BFCBB7E4F1B80926D825F2E;   // 0x8(0x18)(Edit, BlueprintVisible)
	TArray<struct FSplinePoint>                  NavSplineData_10_8F377E1E46A0C0B206D23E841C8D9944; // 0x20(0x10)(Edit, BlueprintVisible)
};

}


