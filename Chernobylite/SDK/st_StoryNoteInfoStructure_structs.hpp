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

// 0x208 (0x208 - 0x0)
// UserDefinedStruct st_StoryNoteInfoStructure.st_StoryNoteInfoStructure
struct FSt_StoryNoteInfoStructure
{
public:
	class FText                                  Name_38_96789C2F459A18D311A5EEB69857B6F1;          // 0x0(0x18)(Edit, BlueprintVisible)
	struct FDataTableRowHandle                   InvestigationBoardID_53_17F990FF4BD87357D7932FA6E9481CF9; // 0x18(0x10)(Edit, BlueprintVisible, NoDestructor)
	TSoftObjectPtr<class UStaticMesh>            Meshlowpoly_60_0917B13C48391F7F4F38A199CD8627EE;   // 0x28(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FRotator                              LowPolyRotationOffset_19_3FEA8CEA4655713C120E2D8D2D3D7A29; // 0x50(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInstance>      Lowpolymaterial_64_016F3B5F46B18E3E564465AC6D7E27B3; // 0x60(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Textureenglish_57_7A1BEB3945597C8A344908BDF7969952; // 0x88(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Texturerussian_58_63B275744E8D1F471812B2BE28C090B2; // 0xB0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            Highpolymesh_61_A447966D40CEED649028A7B7EC6567ED;  // 0xD8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FRotator                              HighPolyRotationOffset_22_9C692C4C448A2A093EC791B902C76AA5; // 0x100(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NoteDescription_41_DB7B89324AE2A7385D5F889AF30C087B; // 0x110(0x18)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>             Image_59_BF8E03364E30C632DA38D0B1D61E5D1D;         // 0x128(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundBase>             SoundToPlay_63_B43AAFAA4E30954DC16875A8F8AB848E;   // 0x150(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         ThreeD_49_DC9DF80C413FA5A4EEEB27948D3BE453;        // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LongDesc_52_AA5047D04F7B2D3C8FEA7AB2EED28DA6;      // 0x180(0x18)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UStaticMesh>            CustomBoardMesh_62_5928EB7340A380C3B3B562B31178BB97; // 0x198(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CustomBoardTexture_67_78C14E3A4AFE41865D515B954F309879; // 0x1C0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CustomExperienceHandle_70_1386DF324ABD913F24E8D1B41426C34E; // 0x1E8(0x10)(Edit, BlueprintVisible, NoDestructor)
	enum class EEventMap                         Map_73_61DF828242E01418A46114AE2E43D337;           // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ThreeDNotePivotOffset_76_C9AB86F64C4E51DEB4EDE386893C3D43; // 0x1FC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


