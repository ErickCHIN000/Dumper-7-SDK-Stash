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

// 0x18 (0x18 - 0x0)
// UserDefinedStruct S_RepWeaponAttachment.S_RepWeaponAttachment
struct FS_RepWeaponAttachment
{
public:
	int32                                        MainUID_2_3F7D5E5149793F902437078F3B35819D;        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_285F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_RepAttachmentInfo>          Attachments_6_38F2C7B64C1B85D80C3C35A8B1026969;    // 0x8(0x10)(Edit, BlueprintVisible)
};

}


