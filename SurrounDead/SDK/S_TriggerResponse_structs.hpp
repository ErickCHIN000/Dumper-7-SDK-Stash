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
// UserDefinedStruct S_TriggerResponse.S_TriggerResponse
struct FS_TriggerResponse
{
public:
	TArray<class ABP_AITrigger_C*>               AITrigger_24_49DC991B4C17A8A3352D6BB4ABE6BE28;     // 0x0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class FName>                          ResponseTags_4_92A8027C49F240C6F7B4B78B97DF0993;   // 0x10(0x10)(Edit, BlueprintVisible)
	enum class E_StimuliReaction                 BehaviourResponse_9_296E761B4F70003F9210C7B59E7621AA; // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsResponseTemporary_42_E911759241E1887FA751C7BB242A8FB0; // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1737[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TemporaryTime_43_0CFFE63F4ED4315FF998F7AE8A4DD443; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CancelOverrideBehaviour_30_468531DB4F6419E97193D3AD594363E1; // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_173E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimMontage*>                  Animations_38_2636D7774222DE75D311BDB7517DA641;    // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<class USoundCue*>                     Audio_41_35B9C49B456A90804F446E9F18B12287;         // 0x40(0x10)(Edit, BlueprintVisible)
	bool                                         IgnoreTriggerCooldown_32_A25B264A4DEE60CDBB6DB0B2E5824A03; // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


