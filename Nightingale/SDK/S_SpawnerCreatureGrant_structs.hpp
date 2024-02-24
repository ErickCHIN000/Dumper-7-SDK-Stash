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

// 0x58 (0x58 - 0x0)
// UserDefinedStruct S_SpawnerCreatureGrant.S_SpawnerCreatureGrant
struct FS_SpawnerCreatureGrant
{
public:
	bool                                         LeaderOnly_19_D66BA3BE4599E9903EA89B9D06DB01E9;    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C01[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 RequiredTags_22_BFEC5A3C48C46E1812B78791633E9D77;  // 0x8(0x20)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                  GameplayTags_10_B5EC542D4A87246D141447870737B4BE;  // 0x28(0x10)(Edit, BlueprintVisible)
	TArray<struct FGameplayAbilitySpecDef>       GameplayAbilities_4_96A759784B9D0F0C7A278597035D6F0B; // 0x38(0x10)(Edit, BlueprintVisible)
	TArray<class UClass*>                        AIActions_7_37B6DCA042A870792B9348A1481A606F;      // 0x48(0x10)(Edit, BlueprintVisible)
};

}


