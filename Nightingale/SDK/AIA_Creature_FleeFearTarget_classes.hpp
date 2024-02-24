#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xC0 - 0xC0)
// BlueprintGeneratedClass AIA_Creature_FleeFearTarget.AIA_Creature_FleeFearTarget_C
class UAIA_Creature_FleeFearTarget_C : public UAIA_Creature_Fear_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_FleeFearTarget_C* GetDefaultObj();

	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, class APawn* CallFunc_GetOwnerPawn_ReturnValue, bool CallFunc_CheckOwnerRequirements_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, const struct FGameplayTagContainer& Temp_struct_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, class APawn* CallFunc_GetOwnerPawn_ReturnValue, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess_1, const struct FS_CreatureInfo& CallFunc_GetCreatureInfo_Info, bool CallFunc_HasAnyTags_ReturnValue);
	float GetNormalizedScore(class AActor* Target);
};

}


