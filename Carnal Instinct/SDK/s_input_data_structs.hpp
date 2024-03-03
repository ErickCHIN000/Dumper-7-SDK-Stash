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
// UserDefinedStruct s_input_data.s_input_data
struct FS_input_data
{
public:
	TArray<struct FInputChord>                   Positive_keys_96_180232F844B36EF3F264CABA0C6EE4A7; // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<struct FInputChord>                   Negative_keys_97_38255A2D41B5FF3F6ECE8B85A794E151; // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<struct FInputChord>                   Action_keys_98_CC694DAE448F77A122EBB5A0FF12B192;   // 0x20(0x10)(Edit, BlueprintVisible)
};

}


