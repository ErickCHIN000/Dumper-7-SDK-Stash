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

// 0xC0 (0xC0 - 0x0)
// UserDefinedStruct S_UpdaterNotificatorInfo.S_UpdaterNotificatorInfo
struct FS_UpdaterNotificatorInfo
{
public:
	class UObject*                               Icon_3_B708E5D440250E722536638194D23315;           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  NotifyHeadline_12_0F29D2E443629A61AF7FECB6F4C7EAB9; // 0x8(0x18)(Edit, BlueprintVisible)
	class FText                                  NotifyText_11_E299A4784C506DAE626EB5ABFC1AEF96;    // 0x20(0x18)(Edit, BlueprintVisible)
	struct FLinearColor                          IconFrameColor_6_563CD1824E5762594B3AE4B3E7485999; // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NotifyFrameColor_15_83C6021749BA483DC040E990E6844916; // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HighlightsColor_26_207E256048A66A4F109F479B2BD0C93F; // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Particles__22_96E976054159DB255D777383B66DE038;    // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ParticlesColor_24_A38BAFEE45B9A2E29F1E7D99A2B68D3D; // 0x6C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UInputAction>           AssociatedInput_31_1F63799349D469A91F665FB22CB43A26; // 0x80(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FText                                  AssociatedInputDescription_34_ED8C31A64376C447453D49887A286FCF; // 0xA8(0x18)(Edit, BlueprintVisible)
};

}


