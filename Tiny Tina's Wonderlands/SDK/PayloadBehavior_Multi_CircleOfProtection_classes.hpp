#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x58 - 0x50)
// BlueprintGeneratedClass PayloadBehavior_Multi_CircleOfProtection.PayloadBehavior_Multi_CircleOfProtection_C
class UPayloadBehavior_Multi_CircleOfProtection_C : public USpellBehavior_MultiCustom
{
public:
	struct FRandomStream                         RandIntStream;                                     // 0x50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UPayloadBehavior_Multi_CircleOfProtection_C* GetDefaultObj();

	TArray<struct FSpellSpawnInfo> GetCustomSpellSpawnInfo(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer, int32 MaxSpawnCount, const struct FTransform& OverrideInitialTransform, int32 IndexToUse, const TArray<struct FTransform>& ConeTransforms, class AOakCharacter_Player* InPlayer, const TArray<struct FSpellSpawnInfo>& SpellStructToUse);
};

}


