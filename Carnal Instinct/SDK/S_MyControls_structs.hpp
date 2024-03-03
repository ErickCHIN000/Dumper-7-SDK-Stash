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

// 0x2D (0x2D - 0x0)
// UserDefinedStruct S_MyControls.S_MyControls
struct FS_MyControls
{
public:
	bool                                         Saved__29_CAE283A04BC9E4DA442146AE98B1FE22;        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D01[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_MyAxisKeys>                 MyAxis_33_F3E2325F401F066598804F91DBBAA863;        // 0x8(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_MyActionKeys>               MyAction_42_07A7E5D0448A6CFEBA5153986414FA07;      // 0x18(0x10)(Edit, BlueprintVisible)
	float                                        Sensitivity_39_1BB1C4D043985DC04ABE78A25E666B5E;   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseInvert__41_9F1385564A2680729DF80BA036F607B7;  // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


