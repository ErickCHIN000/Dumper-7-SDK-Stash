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

// 0x28 (0x28 - 0x0)
// UserDefinedStruct S_RepAttachmentInfo.S_RepAttachmentInfo
struct FS_RepAttachmentInfo
{
public:
	class FName                                  AttachmentID_2_84163C9E4A907293E46F1888C9CBB5C8;   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AttachmentUID_5_C9C3B4D343E900A444D5DD870C104204;  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AttachmentContainerIndex_14_13E8F2B740F8A6C0E8AF539039840CA2; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ParentUID_12_9FAD2D1149DFF8D1239C3F90FFDE2A2C;     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_ItemStat>                   Stats_18_68B034314BEB7EDAE0C223A03FE6E474;         // 0x18(0x10)(Edit, BlueprintVisible)
};

}


