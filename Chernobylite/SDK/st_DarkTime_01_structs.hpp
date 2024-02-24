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
// UserDefinedStruct st_DarkTime_01.st_DarkTime_01
struct FSt_DarkTime_01
{
public:
	bool                                         Enable_1_BDF2AD254146D766739940A5E812880B;         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActivationStep_8_EC5BEB9A4BD001FE22FB44AB20E0EFD4; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeactivationStep_9_A89BE4324673C8F6FBB084BCAD83C924; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AEmitter*>                      Particles_15_B5B7E7F94C8B922C4B6453AB52C8FDFB;     // 0x10(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
};

}


