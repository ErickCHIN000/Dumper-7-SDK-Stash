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

// 0x70 (0x70 - 0x0)
// UserDefinedStruct st_MinimapInfo.st_MinimapInfo
struct FSt_MinimapInfo
{
public:
	struct FVector2D                             Position_2_8A5F609D439B0CBAA9A897AA8B14B9A5;       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             MaxSize_5_F190C72D4E0B48CB916643983189BF64;        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Image_8_564C24024C8C670689EA78901D6A01BC;          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rotation_11_185A70F74464C0BD17154D952AFC90E2;      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1937[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description_14_32ADFBEF4FAD8AAD531AED9DBB88105D;   // 0x20(0x18)(Edit, BlueprintVisible)
	class FName                                  AssociatedEvent_17_BEBCBB6F4C8D058C13095C9F768CF564; // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Radius_23_33DBBD1247B66B839C10BF9F6CC1812C;        // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCustomMarker_25_8C65DAF441C5180888B37E91D81703FF; // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1944[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class Abp_MinimapTag_C>       Actor_31_0868C5F941C485B291CFD8AD7DF3C326;         // 0x48(0x28)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
};

}


