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

// 0xC8 (0xC8 - 0x0)
// UserDefinedStruct S_CreatureInfo.S_CreatureInfo
struct FS_CreatureInfo
{
public:
	class FName                                  Name_2_A510F05A4F18C62C7016D7B29A9843C1;           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  UIName_41_734D7868406460A3064F89A56712DACD;        // 0x8(0x18)(Edit, BlueprintVisible)
	class FText                                  UIDescription_42_050501FC4593E55EE5D4E79BCFA157FD; // 0x20(0x18)(Edit, BlueprintVisible)
	class UTexture2D*                            UIIcon_45_8A1C646947B04873753D0B86DD2719BB;        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Enemies_32_140919D149870370D03839AAFF4A83BD;       // 0x40(0x20)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 Friends_33_CF8788C44FE7F9E6756DF79B74B90362;       // 0x60(0x20)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 Fears_34_7E34EA404A8DF93C70DED4B4D834667F;         // 0x80(0x20)(Edit, BlueprintVisible)
	TSoftClassPtr<class ANWXAICharacter>         DebugSoftCreatureClass_49_1F43B89E439B1570CDDC429A6D5ACDF9; // 0xA0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


