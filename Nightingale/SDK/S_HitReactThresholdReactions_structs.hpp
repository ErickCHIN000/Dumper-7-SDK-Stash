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

// 0x18 (0x18 - 0x0)
// UserDefinedStruct S_HitReactThresholdReactions.S_HitReactThresholdReactions
struct FS_HitReactThresholdReactions
{
public:
	bool                                         UseHitReactThresholdReactions_11_3D682FB1451332DDFFB414A0973B47BE; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2518[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HitReactThresholdValue_12_6D2278E04C0D408DE48D0BB06D5CBEBF; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitReactThresholdUpdateRate_14_40023FBA448CD3F24B146D822E703C06; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitReactThresholdDecayRate_15_F92CCB104ED2297B2B679D8DBDDBFAEB; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitReactThresholdIncreasePerReaction_21_CFAF94394C274D4655251A9D18795A4E; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitReactThresholdIncreaseDecayRate_22_7B227BDD4C3ADCC7B705D49D24799334; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


