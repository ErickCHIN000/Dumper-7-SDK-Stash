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

// 0x59 (0x59 - 0x0)
// UserDefinedStruct S_ItemCreatureGrants.S_ItemCreatureGrants
struct FS_ItemCreatureGrants
{
public:
	TArray<struct FGameplayTag>                  GameplayTags_10_B5EC542D4A87246D141447870737B4BE;  // 0x0(0x10)(Edit, BlueprintVisible)
	TSoftClassPtr<class UNWXGameplayEffect>      GameplayEffectRef_22_631D701E48ADB11C4EEE63B0C85111CE; // 0x10(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  AttackTags_17_655F9CBA49D6305D03BDFC8D24737B87;    // 0x38(0x10)(Edit, BlueprintVisible)
	TArray<class UClass*>                        AIActions_7_37B6DCA042A870792B9348A1481A606F;      // 0x48(0x10)(Edit, BlueprintVisible)
	enum class E_NPC_Item_AnimBank               ItemAnimBank_13_DC80BBAF40C4E52B57C9C6925B6FE9E1;  // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


