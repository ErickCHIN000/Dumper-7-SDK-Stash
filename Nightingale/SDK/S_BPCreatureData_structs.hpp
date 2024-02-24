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

// 0x190 (0x190 - 0x0)
// UserDefinedStruct S_BPCreatureData.S_BPCreatureData
struct FS_BPCreatureData
{
public:
	struct FDataTableRowHandle                   AICCreatureData_5_4C3F914F4D9F5FF753D7FA839410B9CE; // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UItemReward*                           ItemRewards_105_F2FAFE4C41443D911A7AF49E33CF86AF;  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 AddedTags_2_C5AB1E914E0203006F2C258CFA79D710;      // 0x18(0x20)(Edit, BlueprintVisible)
	struct FGameplayTag                          HostilityTag_27_8E058A5D40DEC19B67CC649035B59554;  // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Prey_11_C65EC3284577F75E9FE801B23C46468B;          // 0x40(0x20)(Edit, BlueprintVisible)
	double                                       HitReactionThresholdStagger_98_CAED1B4F46E87ECE01E6FCAF72CBE239; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HitReactionThresholdKnockdown_99_0E043984433C32FCADBDB181F6807263; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HitReactionThresholdExplosive_102_F681D9B246B2FB37F6AAF2BD47575BD4; // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowCorpseDamage_39_B02E6CE644AECF6AAD5C76BE25A19FBA; // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayAttribute, double>      GASAttributes_47_D7D5DB844903F7C7243F3BA3DD65BC40; // 0x80(0x50)(Edit, BlueprintVisible)
	struct FS_HitReactThresholdReactions         HitReactThresholdReactions_53_4CA5202E457299B7D756F5855349F67E; // 0xD0(0x18)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EMovementSpeed, double>      MovementSpeeds_58_B5681098453142D99C175ABC409D7C9B; // 0xE8(0x50)(Edit, BlueprintVisible)
	struct FDataTableRowHandle                   WeakPointData_61_C97D6665404AB38EF5A19DB7D85A2064; // 0x138(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   UIData_65_EC03BEAC4A64525471F201B77ABADC02;        // 0x148(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  MeshVariations_78_3498B6A940CC1FEF7AB75986B8BC75FF; // 0x158(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_CreatureSocketTraceData>    SocketTraceData_86_7E3C67E64F42AC0A04A0E190F38C26EF; // 0x168(0x10)(Edit, BlueprintVisible)
	double                                       CorpseCleanupTime_89_88C9EBDB4ED67F9EC13BFA8C68F44301; // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          FamilyTag_92_622830484996C2C36F57A5920FE79FF1;     // 0x180(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        PowerTier_95_90754F82435854FBA2E68FBC64F29752;     // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChallengeRating_97_D9F774424149996AAF3895B82F0370BA; // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


