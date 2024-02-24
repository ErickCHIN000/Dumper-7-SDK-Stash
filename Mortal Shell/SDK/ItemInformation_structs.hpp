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
// UserDefinedStruct ItemInformation.ItemInformation
struct FItemInformation
{
public:
	class FName                                  ID_35_21A6C172469948671FD3CB8A1BBED0DB;            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Icon_13_6A9B3C3C4B178D114C8AE3A67A83CDA7;          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Name_108_933A963C4D9FCA5BB44069830C37A98D;         // 0x10(0x18)(Edit, BlueprintVisible)
	enum class EItemQuality                      Quality_39_CBD1FAA54940E088B192D7A42622FDA0;       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemType                         Type_106_2234C4474FF1CB3A38572D82501C0E19;         // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22F6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Amount_107_5BD0F40343BC83E7582405A59DEF24E8;       // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


