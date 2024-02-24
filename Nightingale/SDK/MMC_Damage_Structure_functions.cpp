#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MMC_Damage_Structure.MMC_Damage_Structure_C
// (None)

class UClass* UMMC_Damage_Structure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MMC_Damage_Structure_C");

	return Clss;
}


// MMC_Damage_Structure_C MMC_Damage_Structure.Default__MMC_Damage_Structure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMMC_Damage_Structure_C* UMMC_Damage_Structure_C::GetDefaultObj()
{
	static class UMMC_Damage_Structure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMMC_Damage_Structure_C*>(UMMC_Damage_Structure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Hail_Modify
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             InDamage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_EncounterOriginatorTag_EncounterOriginatorTag           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_GetEffectContext_ReturnValue                            (None)
// class AActor*                      CallFunc_EffectContextGetInstigatorActor_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsObjectHailDamageSource_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_CreatureOriginatorTag_CreatureOriginatorTag             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetSourceAggregatedTags_ReturnValue                     (None)
// bool                               CallFunc_ContainerContainsState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainerContainsState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMMC_Damage_Structure_C::Hail_Modify(struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, const struct FGameplayTag& CallFunc_EncounterOriginatorTag_EncounterOriginatorTag, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, bool CallFunc_IsObjectHailDamageSource_ReturnValue, const struct FGameplayTag& CallFunc_CreatureOriginatorTag_CreatureOriginatorTag, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_Damage_Structure_C", "Hail_Modify");

	Params::UMMC_Damage_Structure_C_Hail_Modify_Params Parms{};

	Parms.Spec = Spec;
	Parms.InDamage = InDamage;
	Parms.CallFunc_EncounterOriginatorTag_EncounterOriginatorTag = CallFunc_EncounterOriginatorTag_EncounterOriginatorTag;
	Parms.CallFunc_GetEffectContext_ReturnValue = CallFunc_GetEffectContext_ReturnValue;
	Parms.CallFunc_EffectContextGetInstigatorActor_ReturnValue = CallFunc_EffectContextGetInstigatorActor_ReturnValue;
	Parms.CallFunc_IsObjectHailDamageSource_ReturnValue = CallFunc_IsObjectHailDamageSource_ReturnValue;
	Parms.CallFunc_CreatureOriginatorTag_CreatureOriginatorTag = CallFunc_CreatureOriginatorTag_CreatureOriginatorTag;
	Parms.CallFunc_GetSourceAggregatedTags_ReturnValue = CallFunc_GetSourceAggregatedTags_ReturnValue;
	Parms.CallFunc_ContainerContainsState_ReturnValue = CallFunc_ContainerContainsState_ReturnValue;
	Parms.CallFunc_ContainerContainsState_ReturnValue_1 = CallFunc_ContainerContainsState_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamage != nullptr)
		*OutDamage = Parms.OutDamage;

}


// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Repair_Modify
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             InDamage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetSourceAggregatedTags_ReturnValue                     (None)
// bool                               CallFunc_ContainerContainsState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMMC_Damage_Structure_C::Repair_Modify(struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, const struct FGameplayTag& Temp_struct_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_Damage_Structure_C", "Repair_Modify");

	Params::UMMC_Damage_Structure_C_Repair_Modify_Params Parms{};

	Parms.Spec = Spec;
	Parms.InDamage = InDamage;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetSourceAggregatedTags_ReturnValue = CallFunc_GetSourceAggregatedTags_ReturnValue;
	Parms.CallFunc_ContainerContainsState_ReturnValue = CallFunc_ContainerContainsState_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamage != nullptr)
		*OutDamage = Parms.OutDamage;

}


// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Creature_Modify
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             InDamage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_HailDamageTag_HailDamageTag                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetSourceAggregatedTags_ReturnValue                     (None)
// struct FGameplayTag                CallFunc_CreatureOriginatorTag_CreatureOriginatorTag             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainerContainsState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetSourceAggregatedTags_ReturnValue_1                   (None)
// bool                               CallFunc_ContainerContainsState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMMC_Damage_Structure_C::Creature_Modify(const struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, const struct FGameplayTag& CallFunc_HailDamageTag_HailDamageTag, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, const struct FGameplayTag& CallFunc_CreatureOriginatorTag_CreatureOriginatorTag, bool CallFunc_ContainerContainsState_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue_1, bool CallFunc_ContainerContainsState_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_Damage_Structure_C", "Creature_Modify");

	Params::UMMC_Damage_Structure_C_Creature_Modify_Params Parms{};

	Parms.Spec = Spec;
	Parms.InDamage = InDamage;
	Parms.CallFunc_HailDamageTag_HailDamageTag = CallFunc_HailDamageTag_HailDamageTag;
	Parms.CallFunc_GetSourceAggregatedTags_ReturnValue = CallFunc_GetSourceAggregatedTags_ReturnValue;
	Parms.CallFunc_CreatureOriginatorTag_CreatureOriginatorTag = CallFunc_CreatureOriginatorTag_CreatureOriginatorTag;
	Parms.CallFunc_ContainerContainsState_ReturnValue = CallFunc_ContainerContainsState_ReturnValue;
	Parms.CallFunc_GetSourceAggregatedTags_ReturnValue_1 = CallFunc_GetSourceAggregatedTags_ReturnValue_1;
	Parms.CallFunc_ContainerContainsState_ReturnValue_1 = CallFunc_ContainerContainsState_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamage != nullptr)
		*OutDamage = Parms.OutDamage;

}


// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Encounter_Modify
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             InDamage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_HailDamageTag_HailDamageTag                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetSourceAggregatedTags_ReturnValue                     (None)
// struct FGameplayTag                CallFunc_EncounterOriginatorTag_EncounterOriginatorTag           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainerContainsState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetSourceAggregatedTags_ReturnValue_1                   (None)
// bool                               CallFunc_ContainerContainsState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMMC_Damage_Structure_C::Encounter_Modify(const struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, const struct FGameplayTag& CallFunc_HailDamageTag_HailDamageTag, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, const struct FGameplayTag& CallFunc_EncounterOriginatorTag_EncounterOriginatorTag, bool CallFunc_ContainerContainsState_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue_1, bool CallFunc_ContainerContainsState_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_Damage_Structure_C", "Encounter_Modify");

	Params::UMMC_Damage_Structure_C_Encounter_Modify_Params Parms{};

	Parms.Spec = Spec;
	Parms.InDamage = InDamage;
	Parms.CallFunc_HailDamageTag_HailDamageTag = CallFunc_HailDamageTag_HailDamageTag;
	Parms.CallFunc_GetSourceAggregatedTags_ReturnValue = CallFunc_GetSourceAggregatedTags_ReturnValue;
	Parms.CallFunc_EncounterOriginatorTag_EncounterOriginatorTag = CallFunc_EncounterOriginatorTag_EncounterOriginatorTag;
	Parms.CallFunc_ContainerContainsState_ReturnValue = CallFunc_ContainerContainsState_ReturnValue;
	Parms.CallFunc_GetSourceAggregatedTags_ReturnValue_1 = CallFunc_GetSourceAggregatedTags_ReturnValue_1;
	Parms.CallFunc_ContainerContainsState_ReturnValue_1 = CallFunc_ContainerContainsState_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamage != nullptr)
		*OutDamage = Parms.OutDamage;

}


// Function MMC_Damage_Structure.MMC_Damage_Structure_C.NWXCalculateBaseMagnitude
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTagValueContainer          MMCIntermediateOutputs                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Damage                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NWXCalculateBaseMagnitude_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_GetEffectContext_ReturnValue                            (None)
// class AActor*                      CallFunc_EffectContextGetInstigatorActor_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsObjectHailDamageSource_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Piece_Modify_OutDamage                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Repair_Modify_OutDamage                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Sledgehammer_Modify_OutDamage                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Piece_Modify_OutDamage_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Schematic_Modify_OutDamage                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Hail_Modify_OutDamage                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Schematic_Modify_InDamage_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMMC_Damage_Structure_C::NWXCalculateBaseMagnitude(struct FGameplayEffectSpec& Spec, struct FTagValueContainer& MMCIntermediateOutputs, double Damage, float CallFunc_NWXCalculateBaseMagnitude_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, bool CallFunc_IsObjectHailDamageSource_ReturnValue, double CallFunc_Piece_Modify_OutDamage, double CallFunc_Repair_Modify_OutDamage, double CallFunc_Sledgehammer_Modify_OutDamage, double CallFunc_Piece_Modify_OutDamage_1, double CallFunc_Schematic_Modify_OutDamage, double CallFunc_Hail_Modify_OutDamage, float K2Node_FunctionResult_ReturnValue_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast_1, double CallFunc_Schematic_Modify_InDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_Damage_Structure_C", "NWXCalculateBaseMagnitude");

	Params::UMMC_Damage_Structure_C_NWXCalculateBaseMagnitude_Params Parms{};

	Parms.Spec = Spec;
	Parms.MMCIntermediateOutputs = MMCIntermediateOutputs;
	Parms.Damage = Damage;
	Parms.CallFunc_NWXCalculateBaseMagnitude_ReturnValue = CallFunc_NWXCalculateBaseMagnitude_ReturnValue;
	Parms.CallFunc_GetEffectContext_ReturnValue = CallFunc_GetEffectContext_ReturnValue;
	Parms.CallFunc_EffectContextGetInstigatorActor_ReturnValue = CallFunc_EffectContextGetInstigatorActor_ReturnValue;
	Parms.CallFunc_IsObjectHailDamageSource_ReturnValue = CallFunc_IsObjectHailDamageSource_ReturnValue;
	Parms.CallFunc_Piece_Modify_OutDamage = CallFunc_Piece_Modify_OutDamage;
	Parms.CallFunc_Repair_Modify_OutDamage = CallFunc_Repair_Modify_OutDamage;
	Parms.CallFunc_Sledgehammer_Modify_OutDamage = CallFunc_Sledgehammer_Modify_OutDamage;
	Parms.CallFunc_Piece_Modify_OutDamage_1 = CallFunc_Piece_Modify_OutDamage_1;
	Parms.CallFunc_Schematic_Modify_OutDamage = CallFunc_Schematic_Modify_OutDamage;
	Parms.CallFunc_Hail_Modify_OutDamage = CallFunc_Hail_Modify_OutDamage;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_1 = K2Node_FunctionResult_ReturnValue_ImplicitCast_1;
	Parms.CallFunc_Schematic_Modify_InDamage_ImplicitCast = CallFunc_Schematic_Modify_InDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Sledgehammer_Modify
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             InDamage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SledgehammerMultiplier                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_SledgehammerTag_SledgehammerTag                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetSourceAggregatedTags_ReturnValue                     (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMMC_Damage_Structure_C::Sledgehammer_Modify(struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, double SledgehammerMultiplier, const struct FGameplayTag& CallFunc_SledgehammerTag_SledgehammerTag, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, bool CallFunc_HasTag_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_Damage_Structure_C", "Sledgehammer_Modify");

	Params::UMMC_Damage_Structure_C_Sledgehammer_Modify_Params Parms{};

	Parms.Spec = Spec;
	Parms.InDamage = InDamage;
	Parms.SledgehammerMultiplier = SledgehammerMultiplier;
	Parms.CallFunc_SledgehammerTag_SledgehammerTag = CallFunc_SledgehammerTag_SledgehammerTag;
	Parms.CallFunc_GetSourceAggregatedTags_ReturnValue = CallFunc_GetSourceAggregatedTags_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamage != nullptr)
		*OutDamage = Parms.OutDamage;

}


// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Piece_Modify
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             InDamage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_PieceHealthTag_PieceHealthTag                           (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSetByCallerMagnitudeInSpec_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSetByCallerMagnitudeInSpec_DefaultIfNotFound_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMMC_Damage_Structure_C::Piece_Modify(struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, const struct FGameplayTag& CallFunc_PieceHealthTag_PieceHealthTag, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetSetByCallerMagnitudeInSpec_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_GetSetByCallerMagnitudeInSpec_DefaultIfNotFound_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_Damage_Structure_C", "Piece_Modify");

	Params::UMMC_Damage_Structure_C_Piece_Modify_Params Parms{};

	Parms.Spec = Spec;
	Parms.InDamage = InDamage;
	Parms.CallFunc_PieceHealthTag_PieceHealthTag = CallFunc_PieceHealthTag_PieceHealthTag;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetSetByCallerMagnitudeInSpec_ReturnValue = CallFunc_GetSetByCallerMagnitudeInSpec_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetSetByCallerMagnitudeInSpec_DefaultIfNotFound_ImplicitCast = CallFunc_GetSetByCallerMagnitudeInSpec_DefaultIfNotFound_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamage != nullptr)
		*OutDamage = Parms.OutDamage;

}


// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Schematic_Modify
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             InDamage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_SchematicTag_SchematicTag                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTargetAggregatedTags_ReturnValue                     (None)
// bool                               CallFunc_ContainerContainsState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMMC_Damage_Structure_C::Schematic_Modify(struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FGameplayTag& CallFunc_SchematicTag_SchematicTag, const struct FGameplayTagContainer& CallFunc_GetTargetAggregatedTags_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_Damage_Structure_C", "Schematic_Modify");

	Params::UMMC_Damage_Structure_C_Schematic_Modify_Params Parms{};

	Parms.Spec = Spec;
	Parms.InDamage = InDamage;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SchematicTag_SchematicTag = CallFunc_SchematicTag_SchematicTag;
	Parms.CallFunc_GetTargetAggregatedTags_ReturnValue = CallFunc_GetTargetAggregatedTags_ReturnValue;
	Parms.CallFunc_ContainerContainsState_ReturnValue = CallFunc_ContainerContainsState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamage != nullptr)
		*OutDamage = Parms.OutDamage;

}

}


