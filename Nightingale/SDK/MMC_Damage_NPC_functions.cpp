#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MMC_Damage_NPC.MMC_Damage_NPC_C
// (None)

class UClass* UMMC_Damage_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MMC_Damage_NPC_C");

	return Clss;
}


// MMC_Damage_NPC_C MMC_Damage_NPC.Default__MMC_Damage_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMMC_Damage_NPC_C* UMMC_Damage_NPC_C::GetDefaultObj()
{
	static class UMMC_Damage_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMMC_Damage_NPC_C*>(UMMC_Damage_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MMC_Damage_NPC.MMC_Damage_NPC_C.NWXCalculateBaseMagnitude
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTagValueContainer          MMCIntermediateOutputs                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NWXCalculateBaseMagnitude_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_Modify_OutDamage                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_Modify_InDamage_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMMC_Damage_NPC_C::NWXCalculateBaseMagnitude(struct FGameplayEffectSpec& Spec, struct FTagValueContainer& MMCIntermediateOutputs, float CallFunc_NWXCalculateBaseMagnitude_ReturnValue, double CallFunc_NPC_Modify_OutDamage, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_NPC_Modify_InDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_Damage_NPC_C", "NWXCalculateBaseMagnitude");

	Params::UMMC_Damage_NPC_C_NWXCalculateBaseMagnitude_Params Parms{};

	Parms.Spec = Spec;
	Parms.MMCIntermediateOutputs = MMCIntermediateOutputs;
	Parms.CallFunc_NWXCalculateBaseMagnitude_ReturnValue = CallFunc_NWXCalculateBaseMagnitude_ReturnValue;
	Parms.CallFunc_NPC_Modify_OutDamage = CallFunc_NPC_Modify_OutDamage;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.CallFunc_NPC_Modify_InDamage_ImplicitCast = CallFunc_NPC_Modify_InDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MMC_Damage_NPC.MMC_Damage_NPC_C.NPC_Modify
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             InDamage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             InstigatorItem                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// float                              TotalMagicPower                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       SourceAggregatedTags                                             (Edit, BlueprintVisible)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Healing_Touch_Perk_Maximum_Heal_Value_Maximum_Heal  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Healing_Touch_Perk_Dealing_Multiplication_Curve_Healing_Multiplier(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateItemAttributeValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_GetEffectContext_ReturnValue                            (None)
// class AActor*                      CallFunc_EffectContextGetInstigatorActor_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetSourceAggregatedTags_ReturnValue                     (None)
// struct FGameplayTag                CallFunc_PlayerOwnedTag_PlayerOwnedTag                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_PlayerControlledTag_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainerContainsState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainerContainsState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Healing_Touch_Perk_Dealing_Multiplication_Curve_Magic_Power_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_TotalMagicPower_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMMC_Damage_NPC_C::NPC_Modify(const struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, class AEquippableItem* InstigatorItem, float TotalMagicPower, class AActor* Instigator, const struct FGameplayTagContainer& SourceAggregatedTags, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AEquippableItem* Temp_object_Variable, bool CallFunc_HasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Get_Healing_Touch_Perk_Maximum_Heal_Value_Maximum_Heal, double CallFunc_Get_Healing_Touch_Perk_Dealing_Multiplication_Curve_Healing_Multiplier, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAttribute& Temp_struct_Variable, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, float CallFunc_CalculateItemAttributeValue_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, const struct FGameplayTag& CallFunc_PlayerOwnedTag_PlayerOwnedTag, const struct FGameplayTag& CallFunc_PlayerControlledTag_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Get_Healing_Touch_Perk_Dealing_Multiplication_Curve_Magic_Power_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_TotalMagicPower_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MMC_Damage_NPC_C", "NPC_Modify");

	Params::UMMC_Damage_NPC_C_NPC_Modify_Params Parms{};

	Parms.Spec = Spec;
	Parms.InDamage = InDamage;
	Parms.InstigatorItem = InstigatorItem;
	Parms.TotalMagicPower = TotalMagicPower;
	Parms.Instigator = Instigator;
	Parms.SourceAggregatedTags = SourceAggregatedTags;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Healing_Touch_Perk_Maximum_Heal_Value_Maximum_Heal = CallFunc_Get_Healing_Touch_Perk_Maximum_Heal_Value_Maximum_Heal;
	Parms.CallFunc_Get_Healing_Touch_Perk_Dealing_Multiplication_Curve_Healing_Multiplier = CallFunc_Get_Healing_Touch_Perk_Dealing_Multiplication_Curve_Healing_Multiplier;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_CalculateItemAttributeValue_ReturnValue = CallFunc_CalculateItemAttributeValue_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetEffectContext_ReturnValue = CallFunc_GetEffectContext_ReturnValue;
	Parms.CallFunc_EffectContextGetInstigatorActor_ReturnValue = CallFunc_EffectContextGetInstigatorActor_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetSourceAggregatedTags_ReturnValue = CallFunc_GetSourceAggregatedTags_ReturnValue;
	Parms.CallFunc_PlayerOwnedTag_PlayerOwnedTag = CallFunc_PlayerOwnedTag_PlayerOwnedTag;
	Parms.CallFunc_PlayerControlledTag_ReturnValue = CallFunc_PlayerControlledTag_ReturnValue;
	Parms.CallFunc_ContainerContainsState_ReturnValue = CallFunc_ContainerContainsState_ReturnValue;
	Parms.CallFunc_ContainerContainsState_ReturnValue_1 = CallFunc_ContainerContainsState_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Get_Healing_Touch_Perk_Dealing_Multiplication_Curve_Magic_Power_ImplicitCast = CallFunc_Get_Healing_Touch_Perk_Dealing_Multiplication_Curve_Magic_Power_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_TotalMagicPower_ImplicitCast = K2Node_VariableSet_TotalMagicPower_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamage != nullptr)
		*OutDamage = Parms.OutDamage;

}

}


