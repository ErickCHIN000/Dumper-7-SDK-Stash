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
// UserDefinedStruct S_SaveStats.S_SaveStats
struct FS_SaveStats
{
public:
	float                                        Gold_2_CB5039AB4B616E1D78C18C9AF649AC8C;           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentInventoryWeight_21_5DDCE55148DB8B112CBBED8B7ECCADD9; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxInventoryWeight_4_C7E3FBF24DCE35EC69A22E83BB6D44AA; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentHealth_6_50695DB4490B3E9856D8ED99FF94CE05;  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentStamina_10_0B62F12E4DA28F41A4A78BBC0DCD39A5; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EEF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FF_Stat>                       PlayerStats_26_39F5D3F048B6586D9A7451B19473F92D;   // 0x18(0x10)(Edit, BlueprintVisible)
};

}


