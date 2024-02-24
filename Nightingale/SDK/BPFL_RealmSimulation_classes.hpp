#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_RealmSimulation.BPFL_RealmSimulation_C
class UBPFL_RealmSimulation_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_RealmSimulation_C* GetDefaultObj();

	void FerocityToTag(int32& Footprint, class UObject* __WorldContext, bool* FoundMatch, struct FGameplayTag* Tag, TMap<int32, struct FGameplayTag> FerocityToTagMap, TMap<int32, struct FGameplayTag> K2Node_MakeVariable_MakeVariableOutput, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void BiomeToTag(enum class EBiomeID& Biome, class UObject* __WorldContext, bool* FoundMatch, struct FGameplayTag* Tag, TMap<enum class EBiomeID, struct FGameplayTag> BiomeToTagMap, TMap<enum class EBiomeID, struct FGameplayTag> K2Node_MakeVariable_MakeVariableOutput, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void FootprintToTag(int32& Footprint, class UObject* __WorldContext, bool* FoundMatch, struct FGameplayTag* Tag, TMap<int32, struct FGameplayTag> FootprintToTagMap, TMap<int32, struct FGameplayTag> K2Node_MakeVariable_MakeVariableOutput, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


