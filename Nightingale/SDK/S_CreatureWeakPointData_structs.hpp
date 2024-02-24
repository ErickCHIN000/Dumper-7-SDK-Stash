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

// 0x58 (0x58 - 0x0)
// UserDefinedStruct S_CreatureWeakPointData.S_CreatureWeakPointData
struct FS_CreatureWeakPointData
{
public:
	float                                        HeadshotDamageMultiplier_13_9B9A24B54F107952A44536A7E20A9EDC; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FS_WeakPointDefinition> WeakPoints_9_79EA130447A19555ABDF80A8AC84ABF2;     // 0x8(0x50)(Edit, BlueprintVisible)
};

}


