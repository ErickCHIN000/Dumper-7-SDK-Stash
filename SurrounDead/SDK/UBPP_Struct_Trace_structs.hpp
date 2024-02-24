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
// UserDefinedStruct UBPP_Struct_Trace.UBPP_Struct_Trace
struct FUBPP_Struct_Trace
{
public:
	TArray<class AActor*>                        ActorstoIgnore_11_59C868654E8EA627D004178C0BDB17CC; // 0x0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	enum class EDrawDebugTrace                   DrawDebugType_18_2DF5AFE84B80E0506192068839BAE11A; // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreSelf_17_39A7384449C24B2F0E0AC791E8C53C0D;    // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_130A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TraceColor_2_39F0CF91492D0BC525B3FDA56C286A0F;     // 0x14(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TraceHitColor_4_7E31B0934E2BD6B1163589A9E9F51153;  // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DrawTime_7_2314DB4F469D2CA55CBDC1BB60FF1274;       // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


