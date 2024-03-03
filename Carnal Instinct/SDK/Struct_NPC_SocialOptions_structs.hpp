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

// 0x6C (0x6C - 0x0)
// UserDefinedStruct Struct_NPC_SocialOptions.Struct_NPC_SocialOptions
struct FStruct_NPC_SocialOptions
{
public:
	bool                                         CaninteractwithPlayer_26_B06BEC494413B9C97C035892A9EA7ED9; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxPlayerInteractionTime_35_0A6A762748281D198BE4AB8A56186530; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CaninteractwithotherNPCs_24_BB327E9E4FC0766B0190C884C300C9A0; // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_190B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          InteractionTagList_39_A243E1E2434727FB2109D4A8186F766B; // 0x10(0x10)(Edit, BlueprintVisible)
	float                                        Percentchanceofstartinganinteraction_8_26D00A9D4E55D47305955C9689BD138E; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1915[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            DialogueDataTable_29_C7EBAAFF4E2489D3771499A5EC29588D; // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_NPC_DialogueIntroOutro        GreetingandGoodByeSubMinusCategories_32_0F5BE2F24781E7F3843CE0BC8801FCDD; // 0x30(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FStruct_NPC_AllowedDialogue>   AllowedDialogue_19_9E7D581E480B3E9C477BB3BB62C6B7F8; // 0x50(0x10)(Edit, BlueprintVisible)
	class FName                                  VoiceID_23_F6E416254EF27585147DEFBAAC4BA957;       // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InteractionCooldown_15_FC19161444467A81A160E087B48210C6; // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


