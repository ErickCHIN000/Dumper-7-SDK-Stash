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

// 0x51 (0x51 - 0x0)
// UserDefinedStruct Struct_NPC_StationMontages.Struct_NPC_StationMontages
struct FStruct_NPC_StationMontages
{
public:
	TArray<class UAnimMontage*>                  IntroClip_5_7F895300472F4CEC983CB783DC9994F6;      // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<class UAnimMontage*>                  LoopClips_6_FF582F0F4D069449D03412AFAAA6D329;      // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<class UAnimMontage*>                  OutroClips_8_A3B53BCD462C74F759731B867D1269CD;     // 0x20(0x10)(Edit, BlueprintVisible)
	TArray<struct FStruct_NPC_SoundInfo>         SoundClips_14_4B048A3C44F60BA507479B9E81B73AAE;    // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FStruct_Station_PropOptions>   PropList_28_2278E53C49429966F5D904AC94E7F858;      // 0x40(0x10)(Edit, BlueprintVisible)
	bool                                         RandomProp_32_28532BF34984ED0686AB23B2A0D4B031;    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


