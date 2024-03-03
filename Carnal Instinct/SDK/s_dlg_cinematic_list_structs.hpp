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

// 0x20 (0x20 - 0x0)
// UserDefinedStruct s_dlg_cinematic_list.s_dlg_cinematic_list
struct FS_dlg_cinematic_list
{
public:
	bool                                         Is_loop_1_7C024F634473D4626F2FAAB480F49E5B;        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_183C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Cinematic_id_16_C34B56DA4CCB98A67CAE63B55332E238;  // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Start_time_5_202C86E54021DDD5D760C2BB4F014F07;     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        End_time_8_FFC8CAAA41EFE93471DDD2868F178BFA;       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1846[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        Cinematic_sequence_13_95A0CB9D419D0EE8BCBE279316FA7AB1; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


