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
// UserDefinedStruct S_SaveSlotDetails.S_SaveSlotDetails
struct FS_SaveSlotDetails
{
public:
	class FString                                SlotName_5_26B2C6A740C041E1A5CFDA8A0CE284D8;       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                             DataTime_7_A1C5ED304D9DC7944647F9B24F002790;       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_SaveType                        SaveType_10_396F2DD14260F24F6EF651BD59FA8541;      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2234[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Image_18_5EE14BF04AA3D108F197A3B2C06429E7;         // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ImageFileName_21_F08C19564E2F6BEA96D915A307D904CE; // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                QuestName_27_2D7DC82B402B4D9BA06E2D8ECDA8987C;     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Version_30_37CC4E894C4ACBCB4396E1A281DB63B6;       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};

}


