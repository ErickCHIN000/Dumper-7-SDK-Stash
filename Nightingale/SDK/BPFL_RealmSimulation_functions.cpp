#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_RealmSimulation.BPFL_RealmSimulation_C
// (None)

class UClass* UBPFL_RealmSimulation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_RealmSimulation_C");

	return Clss;
}


// BPFL_RealmSimulation_C BPFL_RealmSimulation.Default__BPFL_RealmSimulation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_RealmSimulation_C* UBPFL_RealmSimulation_C::GetDefaultObj()
{
	static class UBPFL_RealmSimulation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_RealmSimulation_C*>(UBPFL_RealmSimulation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_RealmSimulation.BPFL_RealmSimulation_C.FerocityToTag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Footprint                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               FoundMatch                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// TMap<int32, struct FGameplayTag>   FerocityToTagMap                                                 (Edit, BlueprintVisible)
// TMap<int32, struct FGameplayTag>   K2Node_MakeVariable_MakeVariableOutput                           (None)
// struct FGameplayTag                CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_RealmSimulation_C::FerocityToTag(int32& Footprint, class UObject* __WorldContext, bool* FoundMatch, struct FGameplayTag* Tag, TMap<int32, struct FGameplayTag> FerocityToTagMap, TMap<int32, struct FGameplayTag> K2Node_MakeVariable_MakeVariableOutput, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_RealmSimulation_C", "FerocityToTag");

	Params::UBPFL_RealmSimulation_C_FerocityToTag_Params Parms{};

	Parms.Footprint = Footprint;
	Parms.__WorldContext = __WorldContext;
	Parms.FerocityToTagMap = FerocityToTagMap;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundMatch != nullptr)
		*FoundMatch = Parms.FoundMatch;

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

}


// Function BPFL_RealmSimulation.BPFL_RealmSimulation_C.BiomeToTag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBiomeID                Biome                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               FoundMatch                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EBiomeID, struct FGameplayTag>BiomeToTagMap                                                    (Edit, BlueprintVisible)
// TMap<enum class EBiomeID, struct FGameplayTag>K2Node_MakeVariable_MakeVariableOutput                           (None)
// struct FGameplayTag                CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_RealmSimulation_C::BiomeToTag(enum class EBiomeID& Biome, class UObject* __WorldContext, bool* FoundMatch, struct FGameplayTag* Tag, TMap<enum class EBiomeID, struct FGameplayTag> BiomeToTagMap, TMap<enum class EBiomeID, struct FGameplayTag> K2Node_MakeVariable_MakeVariableOutput, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_RealmSimulation_C", "BiomeToTag");

	Params::UBPFL_RealmSimulation_C_BiomeToTag_Params Parms{};

	Parms.Biome = Biome;
	Parms.__WorldContext = __WorldContext;
	Parms.BiomeToTagMap = BiomeToTagMap;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundMatch != nullptr)
		*FoundMatch = Parms.FoundMatch;

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

}


// Function BPFL_RealmSimulation.BPFL_RealmSimulation_C.FootprintToTag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Footprint                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               FoundMatch                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// TMap<int32, struct FGameplayTag>   FootprintToTagMap                                                (Edit, BlueprintVisible)
// TMap<int32, struct FGameplayTag>   K2Node_MakeVariable_MakeVariableOutput                           (None)
// struct FGameplayTag                CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_RealmSimulation_C::FootprintToTag(int32& Footprint, class UObject* __WorldContext, bool* FoundMatch, struct FGameplayTag* Tag, TMap<int32, struct FGameplayTag> FootprintToTagMap, TMap<int32, struct FGameplayTag> K2Node_MakeVariable_MakeVariableOutput, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_RealmSimulation_C", "FootprintToTag");

	Params::UBPFL_RealmSimulation_C_FootprintToTag_Params Parms{};

	Parms.Footprint = Footprint;
	Parms.__WorldContext = __WorldContext;
	Parms.FootprintToTagMap = FootprintToTagMap;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundMatch != nullptr)
		*FoundMatch = Parms.FoundMatch;

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

}

}


