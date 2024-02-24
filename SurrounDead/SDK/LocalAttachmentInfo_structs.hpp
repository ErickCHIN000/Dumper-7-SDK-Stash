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

// 0x38 (0x38 - 0x0)
// UserDefinedStruct LocalAttachmentInfo.LocalAttachmentInfo
struct FLocalAttachmentInfo
{
public:
	class FName                                  ID_2_4DA0CF2942895386F52084A1D28A4027;             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AttachToSocket_4_A5A08E204D11061A84706A9E8320F750; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_LocalAttContainerIndexSocket> AttachToSocketByContainerIndex_18_2227433A47B436A3C79ABD95570DFB92; // 0x10(0x10)(Edit, BlueprintVisible)
	class FName                                  AttachToCharacterHandSocket_21_1F0293C44D7873ED0C6982B2D61FD58E; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAttachmentType                   Type_10_9E9516A445138A2C6FEAF5939163ABF5;          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_286E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AttachmentClass_12_4CE231EC49348DC43D358A9D7AB94180; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}


