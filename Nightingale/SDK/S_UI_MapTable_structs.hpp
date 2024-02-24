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
// UserDefinedStruct S_UI_MapTable.S_UI_MapTable
struct FS_UI_MapTable
{
public:
	class FText                                  MapLevelName_4_EF38BD374C6F99EEDB738D9D7F3B3FA0;   // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  LevelDescription_9_596542194D55ACEB821750848EDF3217; // 0x18(0x18)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>             MapTexture_33_DFB813A646E362EDE7BC4F9233465B4B;    // 0x30(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class E_MapRotation                     MapRotationOverride_24_3DAEA750498C9819F08A52BDF6B19963; // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2298[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaximumRealmHeight_32_B45E17E94EE4203017049EA6819E791D; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


