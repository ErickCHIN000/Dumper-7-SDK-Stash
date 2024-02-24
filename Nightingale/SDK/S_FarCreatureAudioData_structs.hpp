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
// UserDefinedStruct S_FarCreatureAudioData.S_FarCreatureAudioData
struct FS_FarCreatureAudioData
{
public:
	int32                                        Priority_7_C29A8E1847E4DFA91EDA1B9F4AEB2CF1;       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinRange_2_C6FAB7374DA8EEE701AA98BBE2E9ECBC;       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxRange_4_EC178F9D4FD60061BDA4B0863FC55FFF;       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_146A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAkAudioEvent>          AudioEvent_11_505C21224C2A0D91B10D1DAC96EA88D5;    // 0x10(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


