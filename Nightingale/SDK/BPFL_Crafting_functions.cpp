#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Crafting.BPFL_Crafting_C
// (None)

class UClass* UBPFL_Crafting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Crafting_C");

	return Clss;
}


// BPFL_Crafting_C BPFL_Crafting.Default__BPFL_Crafting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Crafting_C* UBPFL_Crafting_C::GetDefaultObj()
{
	static class UBPFL_Crafting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Crafting_C*>(UBPFL_Crafting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Crafting.BPFL_Crafting_C.CanOverrideSimilarInfusion
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Infusion                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               OverrideOnly                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstanceData_AttributeModifiersCallFunc_TryGetItemAttributeModifiers_Modifiers                  (None)
// enum class EGetResult              CallFunc_TryGetItemAttributeModifiers_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryConstructItemAttributeModifier_Branches              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstancedItemAttributeModifierCallFunc_TryConstructItemAttributeModifier_ReturnValue           (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstancedItemAttributeModifierCallFunc_Array_Get_Item                                          (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FItemAttributeModifierReference_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoAttributeModifiersShareCharacteristic_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::CanOverrideSimilarInfusion(struct FInventoryEntry& Infusion, struct FInventoryEntry& Item, class UObject* __WorldContext, bool* OverrideOnly, bool Temp_bool_True_if_break_was_hit_Variable, const struct FInstanceData_AttributeModifiers& CallFunc_TryGetItemAttributeModifiers_Modifiers, enum class EGetResult CallFunc_TryGetItemAttributeModifiers_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EGetResult CallFunc_TryConstructItemAttributeModifier_Branches, const struct FInstancedItemAttributeModifier& CallFunc_TryConstructItemAttributeModifier_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FInstancedItemAttributeModifier& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_NotEqual_FItemAttributeModifierReference_ReturnValue, bool CallFunc_DoAttributeModifiersShareCharacteristic_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "CanOverrideSimilarInfusion");

	Params::UBPFL_Crafting_C_CanOverrideSimilarInfusion_Params Parms{};

	Parms.Infusion = Infusion;
	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_TryGetItemAttributeModifiers_Modifiers = CallFunc_TryGetItemAttributeModifiers_Modifiers;
	Parms.CallFunc_TryGetItemAttributeModifiers_Branches = CallFunc_TryGetItemAttributeModifiers_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TryConstructItemAttributeModifier_Branches = CallFunc_TryConstructItemAttributeModifier_Branches;
	Parms.CallFunc_TryConstructItemAttributeModifier_ReturnValue = CallFunc_TryConstructItemAttributeModifier_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_NotEqual_FItemAttributeModifierReference_ReturnValue = CallFunc_NotEqual_FItemAttributeModifierReference_ReturnValue;
	Parms.CallFunc_DoAttributeModifiersShareCharacteristic_ReturnValue = CallFunc_DoAttributeModifiersShareCharacteristic_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OverrideOnly != nullptr)
		*OverrideOnly = Parms.OverrideOnly;

}


// Function BPFL_Crafting.BPFL_Crafting_C.DoItemsShareModifiers
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Item_A                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInventoryEntry             Item_B                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               DoesShare                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryConstructItemAttributeModifier_Branches              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstancedItemAttributeModifierCallFunc_TryConstructItemAttributeModifier_ReturnValue           (None)
// enum class EGetResult              CallFunc_TryConstructItemAttributeModifier_Branches_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstancedItemAttributeModifierCallFunc_TryConstructItemAttributeModifier_ReturnValue_1         (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoAttributeModifiersShareCharacteristic_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::DoItemsShareModifiers(struct FInventoryEntry& Item_A, struct FInventoryEntry& Item_B, class UObject* __WorldContext, bool* DoesShare, enum class EGetResult CallFunc_TryConstructItemAttributeModifier_Branches, const struct FInstancedItemAttributeModifier& CallFunc_TryConstructItemAttributeModifier_ReturnValue, enum class EGetResult CallFunc_TryConstructItemAttributeModifier_Branches_1, const struct FInstancedItemAttributeModifier& CallFunc_TryConstructItemAttributeModifier_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DoAttributeModifiersShareCharacteristic_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "DoItemsShareModifiers");

	Params::UBPFL_Crafting_C_DoItemsShareModifiers_Params Parms{};

	Parms.Item_A = Item_A;
	Parms.Item_B = Item_B;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryConstructItemAttributeModifier_Branches = CallFunc_TryConstructItemAttributeModifier_Branches;
	Parms.CallFunc_TryConstructItemAttributeModifier_ReturnValue = CallFunc_TryConstructItemAttributeModifier_ReturnValue;
	Parms.CallFunc_TryConstructItemAttributeModifier_Branches_1 = CallFunc_TryConstructItemAttributeModifier_Branches_1;
	Parms.CallFunc_TryConstructItemAttributeModifier_ReturnValue_1 = CallFunc_TryConstructItemAttributeModifier_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_DoAttributeModifiersShareCharacteristic_ReturnValue = CallFunc_DoAttributeModifiersShareCharacteristic_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DoesShare != nullptr)
		*DoesShare = Parms.DoesShare;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetDeltaTimer
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Clamped                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Base                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Modifer                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Delta_Result                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UBPFL_Crafting_C::GetDeltaTimer(double Clamped, double Base, double Modifer, class UObject* __WorldContext, double Delta_Result, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetDeltaTimer");

	Params::UBPFL_Crafting_C_GetDeltaTimer_Params Parms{};

	Parms.Clamped = Clamped;
	Parms.Base = Base;
	Parms.Modifer = Modifer;
	Parms.__WorldContext = __WorldContext;
	Parms.Delta_Result = Delta_Result;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetStepRefinementTimerLength
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Crafting_Step_Definition StepData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStationComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Delta                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMinimumCraftingTimeAllowed_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetCurrentRefinementMod_Time                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_RefinementTimerCallFunc_GetStructByType_OutStruct                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructByType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Min_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetDeltaTimer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MathExpression_MinTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MathExpression_TimerBase_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetDeltaTimer_Base_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::GetStepRefinementTimerLength(const struct FS_Crafting_Step_Definition& StepData, class UBP_CraftingStationComponent_C* CraftingStationComponent, const struct FCraftingRecipeReference& RecipeReference, class UObject* __WorldContext, double* Return_Value, double* Delta, float CallFunc_GetMinimumCraftingTimeAllowed_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetCurrentRefinementMod_Time, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, double K2Node_MathExpression_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_FClamp_Min_ImplicitCast, double CallFunc_GetDeltaTimer_ReturnValue, double K2Node_MathExpression_MinTime_ImplicitCast, double K2Node_MathExpression_TimerBase_ImplicitCast, double CallFunc_GetDeltaTimer_Base_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetStepRefinementTimerLength");

	Params::UBPFL_Crafting_C_GetStepRefinementTimerLength_Params Parms{};

	Parms.StepData = StepData;
	Parms.CraftingStationComponent = CraftingStationComponent;
	Parms.RecipeReference = RecipeReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetMinimumCraftingTimeAllowed_ReturnValue = CallFunc_GetMinimumCraftingTimeAllowed_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentRefinementMod_Time = CallFunc_GetCurrentRefinementMod_Time;
	Parms.CallFunc_GetStructByType_OutStruct = CallFunc_GetStructByType_OutStruct;
	Parms.CallFunc_GetStructByType_ReturnValue = CallFunc_GetStructByType_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_FClamp_Min_ImplicitCast = CallFunc_FClamp_Min_ImplicitCast;
	Parms.CallFunc_GetDeltaTimer_ReturnValue = CallFunc_GetDeltaTimer_ReturnValue;
	Parms.K2Node_MathExpression_MinTime_ImplicitCast = K2Node_MathExpression_MinTime_ImplicitCast;
	Parms.K2Node_MathExpression_TimerBase_ImplicitCast = K2Node_MathExpression_TimerBase_ImplicitCast;
	Parms.CallFunc_GetDeltaTimer_Base_ImplicitCast = CallFunc_GetDeltaTimer_Base_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

	if (Delta != nullptr)
		*Delta = Parms.Delta;

}


// Function BPFL_Crafting.BPFL_Crafting_C.DoesPlayerHaveRecipeUnlocked
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsUnlocked                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISkillUnlockInterface>K2Node_DynamicCast_AsSkill_Unlock_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillDataReference         CallFunc_MakeSkillDataReferenceFromCraftingRecipeReference_ReturnValue(HasGetValueTypeHash)
// bool                               CallFunc_HasSkillFullyUnlocked_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::DoesPlayerHaveRecipeUnlocked(class AController* Controller, const struct FCraftingRecipeReference& RecipeReference, class UObject* __WorldContext, bool* bIsUnlocked, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISkillUnlockInterface> K2Node_DynamicCast_AsSkill_Unlock_Interface, bool K2Node_DynamicCast_bSuccess, const struct FSkillDataReference& CallFunc_MakeSkillDataReferenceFromCraftingRecipeReference_ReturnValue, bool CallFunc_HasSkillFullyUnlocked_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "DoesPlayerHaveRecipeUnlocked");

	Params::UBPFL_Crafting_C_DoesPlayerHaveRecipeUnlocked_Params Parms{};

	Parms.Controller = Controller;
	Parms.RecipeReference = RecipeReference;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkill_Unlock_Interface = K2Node_DynamicCast_AsSkill_Unlock_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeSkillDataReferenceFromCraftingRecipeReference_ReturnValue = CallFunc_MakeSkillDataReferenceFromCraftingRecipeReference_ReturnValue;
	Parms.CallFunc_HasSkillFullyUnlocked_ReturnValue = CallFunc_HasSkillFullyUnlocked_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsUnlocked != nullptr)
		*bIsUnlocked = Parms.bIsUnlocked;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeTimeRequired
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_CraftingStationComponent_C*CraftingStationComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              CraftAmount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             OutTimeRequired                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutDeltaTime                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BaseTraitsDelta                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RefinementModifier                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             RecipeData                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// double                             CurrentTimeRequired                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_Definition CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetStepRefinementTimerLength_Return_Value               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetStepRefinementTimerLength_Delta                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::GetRecipeTimeRequired(class UBP_CraftingStationComponent_C* CraftingStationComponent, struct FCraftingRecipeReference& RecipeReference, int32 CraftAmount, class UObject* __WorldContext, double* OutTimeRequired, double* OutDeltaTime, double BaseTraitsDelta, float RefinementModifier, const struct FCraftingRecipe& RecipeData, double CurrentTimeRequired, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Crafting_Step_Definition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_GetStepRefinementTimerLength_Return_Value, double CallFunc_GetStepRefinementTimerLength_Delta, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetRecipeTimeRequired");

	Params::UBPFL_Crafting_C_GetRecipeTimeRequired_Params Parms{};

	Parms.CraftingStationComponent = CraftingStationComponent;
	Parms.RecipeReference = RecipeReference;
	Parms.CraftAmount = CraftAmount;
	Parms.__WorldContext = __WorldContext;
	Parms.BaseTraitsDelta = BaseTraitsDelta;
	Parms.RefinementModifier = RefinementModifier;
	Parms.RecipeData = RecipeData;
	Parms.CurrentTimeRequired = CurrentTimeRequired;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetStepRefinementTimerLength_Return_Value = CallFunc_GetStepRefinementTimerLength_Return_Value;
	Parms.CallFunc_GetStepRefinementTimerLength_Delta = CallFunc_GetStepRefinementTimerLength_Delta;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTimeRequired != nullptr)
		*OutTimeRequired = Parms.OutTimeRequired;

	if (OutDeltaTime != nullptr)
		*OutDeltaTime = Parms.OutDeltaTime;

}


// Function BPFL_Crafting.BPFL_Crafting_C.IsRecipeMultiCraftable
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue_1                      (None)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::IsRecipeMultiCraftable(const struct FCraftingRecipeReference& RecipeReference, class UObject* __WorldContext, bool* Success, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "IsRecipeMultiCraftable");

	Params::UBPFL_Crafting_C_IsRecipeMultiCraftable_Params Parms{};

	Parms.RecipeReference = RecipeReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue = CallFunc_MakeGameplayTagQuery_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue_1 = CallFunc_MakeGameplayTagQuery_ReturnValue_1;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue_1 = CallFunc_DoesContainerMatchTagQuery_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPFL_Crafting.BPFL_Crafting_C.AreQuantityConstraintsSatisfied
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingConstraintSet      ConstraintSet                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryEntry             InputItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBPFL_Crafting_C::AreQuantityConstraintsSatisfied(const struct FCraftingConstraintSet& ConstraintSet, const struct FInventoryEntry& InputItem, class UObject* __WorldContext, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "AreQuantityConstraintsSatisfied");

	Params::UBPFL_Crafting_C_AreQuantityConstraintsSatisfied_Params Parms{};

	Parms.ConstraintSet = ConstraintSet;
	Parms.InputItem = InputItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.AreCharacteristicConstraintsSatisfied
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FCharacteristicDataReference>CharacteristicConstraints                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCharacteristicDataReference>ItemSecondaryCharacteristics                                     (Edit, BlueprintVisible)
// struct FCharacteristicDataReferenceItemPrimaryCharacteristic                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FCharacteristicDataReferenceCurrentConstraintToSatisfy                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               ConstraintSatisfied                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCharacteristicDataReference>CallFunc_TryGetItemAdditionalCharacteristicsReference_CharacteristicsReference(ReferenceParm)
// enum class EGetResult              CallFunc_TryGetItemAdditionalCharacteristicsReference_Branches   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacteristicDataReferenceCallFunc_TryGetItemPrimaryCharacteristicReference_CharacteristicReference(HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryGetItemPrimaryCharacteristicReference_Branches       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacteristicDataReferenceCallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBPFL_Crafting_C::AreCharacteristicConstraintsSatisfied(const struct FInventoryEntry& ItemEntry, TArray<struct FCharacteristicDataReference>& CharacteristicConstraints, class UObject* __WorldContext, const TArray<struct FCharacteristicDataReference>& ItemSecondaryCharacteristics, const struct FCharacteristicDataReference& ItemPrimaryCharacteristic, const struct FCharacteristicDataReference& CurrentConstraintToSatisfy, bool ConstraintSatisfied, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_Contains_ReturnValue, TArray<struct FCharacteristicDataReference>& CallFunc_TryGetItemAdditionalCharacteristicsReference_CharacteristicsReference, enum class EGetResult CallFunc_TryGetItemAdditionalCharacteristicsReference_Branches, const struct FCharacteristicDataReference& CallFunc_TryGetItemPrimaryCharacteristicReference_CharacteristicReference, enum class EGetResult CallFunc_TryGetItemPrimaryCharacteristicReference_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FCharacteristicDataReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "AreCharacteristicConstraintsSatisfied");

	Params::UBPFL_Crafting_C_AreCharacteristicConstraintsSatisfied_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.CharacteristicConstraints = CharacteristicConstraints;
	Parms.__WorldContext = __WorldContext;
	Parms.ItemSecondaryCharacteristics = ItemSecondaryCharacteristics;
	Parms.ItemPrimaryCharacteristic = ItemPrimaryCharacteristic;
	Parms.CurrentConstraintToSatisfy = CurrentConstraintToSatisfy;
	Parms.ConstraintSatisfied = ConstraintSatisfied;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_TryGetItemAdditionalCharacteristicsReference_CharacteristicsReference = CallFunc_TryGetItemAdditionalCharacteristicsReference_CharacteristicsReference;
	Parms.CallFunc_TryGetItemAdditionalCharacteristicsReference_Branches = CallFunc_TryGetItemAdditionalCharacteristicsReference_Branches;
	Parms.CallFunc_TryGetItemPrimaryCharacteristicReference_CharacteristicReference = CallFunc_TryGetItemPrimaryCharacteristicReference_CharacteristicReference;
	Parms.CallFunc_TryGetItemPrimaryCharacteristicReference_Branches = CallFunc_TryGetItemPrimaryCharacteristicReference_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue = CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.DoesActorHaveCraftingTraits
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingSlotTrait>  Traits                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCraftingRecipe             CraftingRecipe                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingSlotTrait          CurrentEnvironmentalConstraint                                   (Edit, BlueprintVisible, NoDestructor)
// class UAbilitySystemComponent*     ActorASC                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeSlotType     EnvironmentalConstraintSlot                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAllTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FCraftingSlotTrait          CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FCraftingRecipeSlotType     CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::DoesActorHaveCraftingTraits(class AActor* Actor, TArray<struct FCraftingSlotTrait>& Traits, const struct FCraftingRecipe& CraftingRecipe, class UObject* __WorldContext, bool* Success, const struct FCraftingSlotTrait& CurrentEnvironmentalConstraint, class UAbilitySystemComponent* ActorASC, const struct FCraftingRecipeSlotType& EnvironmentalConstraintSlot, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAllTags_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FCraftingSlotTrait& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FCraftingRecipeSlotType& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "DoesActorHaveCraftingTraits");

	Params::UBPFL_Crafting_C_DoesActorHaveCraftingTraits_Params Parms{};

	Parms.Actor = Actor;
	Parms.Traits = Traits;
	Parms.CraftingRecipe = CraftingRecipe;
	Parms.__WorldContext = __WorldContext;
	Parms.CurrentEnvironmentalConstraint = CurrentEnvironmentalConstraint;
	Parms.ActorASC = ActorASC;
	Parms.EnvironmentalConstraintSlot = EnvironmentalConstraintSlot;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAllTags_ReturnValue = CallFunc_HasAllTags_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetDataForSlotType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         SlotTypeRowHandle                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeSlotType     SlotTypeData                                                     (Parm, OutParm)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FCraftingRecipeSlotType     CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// bool                               CallFunc_IsDataTableStructType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::GetDataForSlotType(const struct FDataTableRowHandle& SlotTypeRowHandle, class UObject* __WorldContext, bool* bSuccess, struct FCraftingRecipeSlotType* SlotTypeData, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FCraftingRecipeSlotType& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_ObjectToText_ReturnValue, bool CallFunc_IsDataTableStructType_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetDataForSlotType");

	Params::UBPFL_Crafting_C_GetDataForSlotType_Params Parms{};

	Parms.SlotTypeRowHandle = SlotTypeRowHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.CallFunc_IsDataTableStructType_ReturnValue = CallFunc_IsDataTableStructType_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (SlotTypeData != nullptr)
		*SlotTypeData = std::move(Parms.SlotTypeData);

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingRecipesForDisciplinesFromUnlocked
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGameplayTag>        RequestedDisciplines                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FS_UnlockedRecipes          UnlockedRecipes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingRecipeReference>Recipes                                                          (Parm, OutParm)
// TArray<struct FCraftingRecipeReference>LUnlockedRecipes                                                 (Edit, BlueprintVisible)
// struct FCraftingRecipeReference    CurrentRecipeID                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FCraftingRecipeReference>FoundRecipes                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetRecipeDisciplines_CraftingDisciplines                (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1         (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::GetCraftingRecipesForDisciplinesFromUnlocked(TArray<struct FGameplayTag>& RequestedDisciplines, const struct FS_UnlockedRecipes& UnlockedRecipes, class UObject* __WorldContext, TArray<struct FCraftingRecipeReference>* Recipes, const TArray<struct FCraftingRecipeReference>& LUnlockedRecipes, const struct FCraftingRecipeReference& CurrentRecipeID, const TArray<struct FCraftingRecipeReference>& FoundRecipes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetRecipeDisciplines_CraftingDisciplines, int32 CallFunc_Array_Add_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1, bool CallFunc_HasAnyTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetCraftingRecipesForDisciplinesFromUnlocked");

	Params::UBPFL_Crafting_C_GetCraftingRecipesForDisciplinesFromUnlocked_Params Parms{};

	Parms.RequestedDisciplines = RequestedDisciplines;
	Parms.UnlockedRecipes = UnlockedRecipes;
	Parms.__WorldContext = __WorldContext;
	Parms.LUnlockedRecipes = LUnlockedRecipes;
	Parms.CurrentRecipeID = CurrentRecipeID;
	Parms.FoundRecipes = FoundRecipes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetRecipeDisciplines_CraftingDisciplines = CallFunc_GetRecipeDisciplines_CraftingDisciplines;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1 = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Recipes != nullptr)
		*Recipes = std::move(Parms.Recipes);

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingOutputPreview
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     InputMaterials                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      Crafter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Station                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     PreviewItems                                                     (Parm, OutParm)
// int32                              ResultIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>ItemProcessing                                                   (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FInventoryEntry>     Preview                                                          (Edit, BlueprintVisible)
// class UObject*                     CurrentResultItem                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Crafting_Recipe_Result_Loaded>LoadedCraftingOutputs                                            (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryCreateCraftingContext_Branches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      CallFunc_TryCreateCraftingContext_ReturnValue                    (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_GetCraftingOutputs_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCraftingResultObject*>CallFunc_GetCraftingOutputs_Results                              (ReferenceParm)
// class UCraftingResultObject*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemProcessingObjectInterface>K2Node_DynamicCast_AsItem_Processing_Object_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProcessData_bSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>CallFunc_ProcessData_ReturnValue                                 (ReferenceParm, ContainsInstancedReference)
// class UItemProcessingDataAsset*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCrafting_Result_Items_DataAsset*K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::GetCraftingOutputPreview(const struct FCraftingRecipeReference& RecipeId, int32 Quantity, TArray<struct FInventoryEntry>& InputMaterials, class AActor* Crafter, class AActor* Station, class UObject* __WorldContext, TArray<struct FInventoryEntry>* PreviewItems, int32 ResultIndex, const TArray<class UItemProcessingDataAsset*>& ItemProcessing, const TArray<struct FInventoryEntry>& Preview, class UObject* CurrentResultItem, const TArray<struct FS_Crafting_Recipe_Result_Loaded>& LoadedCraftingOutputs, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class EGetResult CallFunc_TryCreateCraftingContext_Branches, const struct FItemProcessingContext& CallFunc_TryCreateCraftingContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, bool CallFunc_GetCraftingOutputs_Success, TArray<class UCraftingResultObject*>& CallFunc_GetCraftingOutputs_Results, class UCraftingResultObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IItemProcessingObjectInterface> K2Node_DynamicCast_AsItem_Processing_Object_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ProcessData_bSuccess, TArray<class UItemProcessingDataAsset*>& CallFunc_ProcessData_ReturnValue, class UItemProcessingDataAsset* CallFunc_Array_Get_Item_1, class UCrafting_Result_Items_DataAsset* K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetCraftingOutputPreview");

	Params::UBPFL_Crafting_C_GetCraftingOutputPreview_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.Quantity = Quantity;
	Parms.InputMaterials = InputMaterials;
	Parms.Crafter = Crafter;
	Parms.Station = Station;
	Parms.__WorldContext = __WorldContext;
	Parms.ResultIndex = ResultIndex;
	Parms.ItemProcessing = ItemProcessing;
	Parms.Preview = Preview;
	Parms.CurrentResultItem = CurrentResultItem;
	Parms.LoadedCraftingOutputs = LoadedCraftingOutputs;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_TryCreateCraftingContext_Branches = CallFunc_TryCreateCraftingContext_Branches;
	Parms.CallFunc_TryCreateCraftingContext_ReturnValue = CallFunc_TryCreateCraftingContext_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCraftingOutputs_Success = CallFunc_GetCraftingOutputs_Success;
	Parms.CallFunc_GetCraftingOutputs_Results = CallFunc_GetCraftingOutputs_Results;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Processing_Object_Interface = K2Node_DynamicCast_AsItem_Processing_Object_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ProcessData_bSuccess = CallFunc_ProcessData_bSuccess;
	Parms.CallFunc_ProcessData_ReturnValue = CallFunc_ProcessData_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset = K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PreviewItems != nullptr)
		*PreviewItems = std::move(Parms.PreviewItems);

}


// Function BPFL_Crafting.BPFL_Crafting_C.UpdateDynamicStructVariable
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicTypedStructs        DynamicStruct                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FJsonStruct                 Update                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDynamicTypedStructs        CallFunc_UpdateDynamicStructs_DynamicStructOut                   (None)

void UBPFL_Crafting_C::UpdateDynamicStructVariable(struct FDynamicTypedStructs& DynamicStruct, const struct FJsonStruct& Update, class UObject* __WorldContext, const struct FDynamicTypedStructs& CallFunc_UpdateDynamicStructs_DynamicStructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "UpdateDynamicStructVariable");

	Params::UBPFL_Crafting_C_UpdateDynamicStructVariable_Params Parms{};

	Parms.DynamicStruct = DynamicStruct;
	Parms.Update = Update;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_UpdateDynamicStructs_DynamicStructOut = CallFunc_UpdateDynamicStructs_DynamicStructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingStepsForRecipe
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> RecipeSteps                                                      (Parm, OutParm)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::GetCraftingStepsForRecipe(const struct FCraftingRecipeReference& RecipeId, class UObject* __WorldContext, bool* Success, TArray<struct FDataTableRowHandle>* RecipeSteps, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetCraftingStepsForRecipe");

	Params::UBPFL_Crafting_C_GetCraftingStepsForRecipe_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (RecipeSteps != nullptr)
		*RecipeSteps = std::move(Parms.RecipeSteps);

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeFromHandle
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         RecipeHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// struct FCraftingRecipe             RecipeDefinition                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FCraftingRecipe             CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FCraftingRecipe UBPFL_Crafting_C::GetRecipeFromHandle(const struct FDataTableRowHandle& RecipeHandle, class UObject* __WorldContext, bool* Success, const struct FCraftingRecipe& RecipeDefinition, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetRecipeFromHandle");

	Params::UBPFL_Crafting_C_GetRecipeFromHandle_Params Parms{};

	Parms.RecipeHandle = RecipeHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.RecipeDefinition = RecipeDefinition;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetStepDefinitionFromHandle
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StepHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_Definition ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_Crafting_Step_Definition StepData                                                         (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_Crafting_Step_Definition CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FS_Crafting_Step_Definition UBPFL_Crafting_C::GetStepDefinitionFromHandle(const struct FDataTableRowHandle& StepHandle, class UObject* __WorldContext, bool* Success, const struct FS_Crafting_Step_Definition& StepData, const struct FS_Crafting_Step_Definition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetStepDefinitionFromHandle");

	Params::UBPFL_Crafting_C_GetStepDefinitionFromHandle_Params Parms{};

	Parms.StepHandle = StepHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.StepData = StepData;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeVariants
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingRecipeReference>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<struct FCraftingRecipeReference>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<struct FCraftingRecipeReference> UBPFL_Crafting_C::GetRecipeVariants(const struct FCraftingRecipeReference& RecipeId, class UObject* __WorldContext, bool* Success, TArray<struct FCraftingRecipeReference>& K2Node_MakeArray_Array, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetRecipeVariants");

	Params::UBPFL_Crafting_C_GetRecipeVariants_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.FindBestCraftingRecipeVariant
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Crafter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    BaseRecipeID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              RequestedQuantity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     InputItems                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CurrentVariantID                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<int32>                      InputSlotQuantities                                              (Edit, BlueprintVisible)
// TArray<class FName>                InputSlotItemIDs                                                 (Edit, BlueprintVisible)
// int32                              InputQuantity                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    DiscoveredRecipe                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRecipeVariants_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingRecipeReference>CallFunc_GetRecipeVariants_ReturnValue                           (ReferenceParm)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe_1                   (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRecipeSatisfied_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRecipeSatisfied_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FCraftingRecipeReference UBPFL_Crafting_C::FindBestCraftingRecipeVariant(class AActor* Crafter, class AActor* CraftingStation, const struct FCraftingRecipeReference& BaseRecipeID, int32 RequestedQuantity, TArray<struct FInventoryEntry>& InputItems, class UObject* __WorldContext, bool* Success, const struct FCraftingRecipeReference& CurrentVariantID, const TArray<int32>& InputSlotQuantities, const TArray<class FName>& InputSlotItemIDs, int32 InputQuantity, const struct FCraftingRecipeReference& DiscoveredRecipe, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetRecipeVariants_Success, TArray<struct FCraftingRecipeReference>& CallFunc_GetRecipeVariants_ReturnValue, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe_1, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsRecipeSatisfied_ReturnValue, bool CallFunc_IsRecipeSatisfied_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "FindBestCraftingRecipeVariant");

	Params::UBPFL_Crafting_C_FindBestCraftingRecipeVariant_Params Parms{};

	Parms.Crafter = Crafter;
	Parms.CraftingStation = CraftingStation;
	Parms.BaseRecipeID = BaseRecipeID;
	Parms.RequestedQuantity = RequestedQuantity;
	Parms.InputItems = InputItems;
	Parms.__WorldContext = __WorldContext;
	Parms.CurrentVariantID = CurrentVariantID;
	Parms.InputSlotQuantities = InputSlotQuantities;
	Parms.InputSlotItemIDs = InputSlotItemIDs;
	Parms.InputQuantity = InputQuantity;
	Parms.DiscoveredRecipe = DiscoveredRecipe;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetRecipeVariants_Success = CallFunc_GetRecipeVariants_Success;
	Parms.CallFunc_GetRecipeVariants_ReturnValue = CallFunc_GetRecipeVariants_ReturnValue;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe_1 = CallFunc_TryGetCraftingRecipe_CraftingRecipe_1;
	Parms.CallFunc_TryGetCraftingRecipe_Branches_1 = CallFunc_TryGetCraftingRecipe_Branches_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsRecipeSatisfied_ReturnValue = CallFunc_IsRecipeSatisfied_ReturnValue;
	Parms.CallFunc_IsRecipeSatisfied_ReturnValue_1 = CallFunc_IsRecipeSatisfied_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.IsRecipeVariant
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBPFL_Crafting_C::IsRecipeVariant(const struct FCraftingRecipeReference& RecipeId, class UObject* __WorldContext, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "IsRecipeVariant");

	Params::UBPFL_Crafting_C_IsRecipeVariant_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingRecipesForDisciplines
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGameplayTag>        RequestedDisciplines                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingRecipeReference>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FDataTableRowHandle         CurrentRecipeID                                                  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> FoundRecipes                                                     (Edit, BlueprintVisible)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// TArray<struct FCraftingRecipeReference>CallFunc_FindAllCraftingRecipesWithDisciplines_ReturnValue       (ReferenceParm)

TArray<struct FCraftingRecipeReference> UBPFL_Crafting_C::GetCraftingRecipesForDisciplines(TArray<struct FGameplayTag>& RequestedDisciplines, class UObject* __WorldContext, const struct FDataTableRowHandle& CurrentRecipeID, const TArray<struct FDataTableRowHandle>& FoundRecipes, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, TArray<struct FCraftingRecipeReference>& CallFunc_FindAllCraftingRecipesWithDisciplines_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetCraftingRecipesForDisciplines");

	Params::UBPFL_Crafting_C_GetCraftingRecipesForDisciplines_Params Parms{};

	Parms.RequestedDisciplines = RequestedDisciplines;
	Parms.__WorldContext = __WorldContext;
	Parms.CurrentRecipeID = CurrentRecipeID;
	Parms.FoundRecipes = FoundRecipes;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_FindAllCraftingRecipesWithDisciplines_ReturnValue = CallFunc_FindAllCraftingRecipesWithDisciplines_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeDisciplines
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CraftingDisciplines                                              (Parm, OutParm)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::GetRecipeDisciplines(const struct FCraftingRecipeReference& RecipeReference, class UObject* __WorldContext, TArray<struct FGameplayTag>* CraftingDisciplines, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetRecipeDisciplines");

	Params::UBPFL_Crafting_C_GetRecipeDisciplines_Params Parms{};

	Parms.RecipeReference = RecipeReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CraftingDisciplines != nullptr)
		*CraftingDisciplines = std::move(Parms.CraftingDisciplines);

}


// Function BPFL_Crafting.BPFL_Crafting_C.IsConstraintSlotSatisfiedByNumber
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              ConstraintSlotNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InputItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRecipeSlots_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingConstraintSlot>CallFunc_GetRecipeSlots_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// struct FCraftingConstraintSlot     CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_IsConstraintSlotSatisfied_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBPFL_Crafting_C::IsConstraintSlotSatisfiedByNumber(const struct FCraftingRecipeReference& RecipeId, int32 ConstraintSlotNumber, const struct FInventoryEntry& InputItem, class UObject* __WorldContext, bool CallFunc_GetRecipeSlots_Success, TArray<struct FCraftingConstraintSlot>& CallFunc_GetRecipeSlots_ReturnValue, const struct FCraftingConstraintSlot& CallFunc_Array_Get_Item, bool CallFunc_IsConstraintSlotSatisfied_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "IsConstraintSlotSatisfiedByNumber");

	Params::UBPFL_Crafting_C_IsConstraintSlotSatisfiedByNumber_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.ConstraintSlotNumber = ConstraintSlotNumber;
	Parms.InputItem = InputItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRecipeSlots_Success = CallFunc_GetRecipeSlots_Success;
	Parms.CallFunc_GetRecipeSlots_ReturnValue = CallFunc_GetRecipeSlots_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsConstraintSlotSatisfied_Success = CallFunc_IsConstraintSlotSatisfied_Success;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeSlotCount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SlotCount                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRecipeSlots_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingConstraintSlot>CallFunc_GetRecipeSlots_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::GetRecipeSlotCount(const struct FCraftingRecipeReference& RecipeId, class UObject* __WorldContext, bool* Success, int32* SlotCount, bool CallFunc_GetRecipeSlots_Success, TArray<struct FCraftingConstraintSlot>& CallFunc_GetRecipeSlots_ReturnValue, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetRecipeSlotCount");

	Params::UBPFL_Crafting_C_GetRecipeSlotCount_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRecipeSlots_Success = CallFunc_GetRecipeSlots_Success;
	Parms.CallFunc_GetRecipeSlots_ReturnValue = CallFunc_GetRecipeSlots_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SlotCount != nullptr)
		*SlotCount = Parms.SlotCount;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeSlots
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingConstraintSlot>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<struct FCraftingConstraintSlot>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<struct FCraftingConstraintSlot> UBPFL_Crafting_C::GetRecipeSlots(const struct FCraftingRecipeReference& RecipeId, class UObject* __WorldContext, bool* Success, TArray<struct FCraftingConstraintSlot>& K2Node_MakeArray_Array, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetRecipeSlots");

	Params::UBPFL_Crafting_C_GetRecipeSlots_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeDisplayName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Display_Name                                                     (Parm, OutParm)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::GetRecipeDisplayName(const struct FCraftingRecipeReference& RecipeId, class UObject* __WorldContext, class FText* Display_Name, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetRecipeDisplayName");

	Params::UBPFL_Crafting_C_GetRecipeDisplayName_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Display_Name != nullptr)
		*Display_Name = Parms.Display_Name;

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingOutputs
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCraftingResultObject*>Results                                                          (Parm, OutParm)
// class FString                      Suffix                                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<int32>                      RecipeResultAmounts                                              (Edit, BlueprintVisible)
// TArray<class FName>                RecipeResultIDs                                                  (Edit, BlueprintVisible)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentResult                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_ItemWithQuantity> ResultItems                                                      (Edit, BlueprintVisible)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::GetCraftingOutputs(const struct FCraftingRecipeReference& RecipeId, int32 Quantity, class UObject* __WorldContext, bool* Success, TArray<class UCraftingResultObject*>* Results, const class FString& Suffix, const TArray<int32>& RecipeResultAmounts, const TArray<class FName>& RecipeResultIDs, int32 CurrentIndex, class FName CurrentResult, const TArray<struct FS_ItemWithQuantity>& ResultItems, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetCraftingOutputs");

	Params::UBPFL_Crafting_C_GetCraftingOutputs_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.Quantity = Quantity;
	Parms.__WorldContext = __WorldContext;
	Parms.Suffix = Suffix;
	Parms.RecipeResultAmounts = RecipeResultAmounts;
	Parms.RecipeResultIDs = RecipeResultIDs;
	Parms.CurrentIndex = CurrentIndex;
	Parms.CurrentResult = CurrentResult;
	Parms.ResultItems = ResultItems;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Results != nullptr)
		*Results = std::move(Parms.Results);

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetUniqueItemQuantities
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ItemIDs                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      ItemQuantities                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                UniqueIDs                                                        (Parm, OutParm)
// TArray<int32>                      TotalQuantities                                                  (Parm, OutParm)
// int32                              CurrentFoundValue                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentFoundIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Totals                                                           (Edit, BlueprintVisible)
// TArray<class FName>                FoundIDs                                                         (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::GetUniqueItemQuantities(TArray<class FName>& ItemIDs, TArray<int32>& ItemQuantities, class UObject* __WorldContext, TArray<class FName>* UniqueIDs, TArray<int32>* TotalQuantities, int32 CurrentFoundValue, int32 CurrentFoundIndex, const TArray<int32>& Totals, const TArray<class FName>& FoundIDs, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetUniqueItemQuantities");

	Params::UBPFL_Crafting_C_GetUniqueItemQuantities_Params Parms{};

	Parms.ItemIDs = ItemIDs;
	Parms.ItemQuantities = ItemQuantities;
	Parms.__WorldContext = __WorldContext;
	Parms.CurrentFoundValue = CurrentFoundValue;
	Parms.CurrentFoundIndex = CurrentFoundIndex;
	Parms.Totals = Totals;
	Parms.FoundIDs = FoundIDs;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UniqueIDs != nullptr)
		*UniqueIDs = std::move(Parms.UniqueIDs);

	if (TotalQuantities != nullptr)
		*TotalQuantities = std::move(Parms.TotalQuantities);

}


// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingRecipe
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// bool                               CallFunc_IsDataTableStructType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FCraftingRecipe UBPFL_Crafting_C::GetCraftingRecipe(const struct FDataTableRowHandle& RecipeId, class UObject* __WorldContext, bool* Success, bool CallFunc_IsDataTableStructType_ReturnValue, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "GetCraftingRecipe");

	Params::UBPFL_Crafting_C_GetCraftingRecipe_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsDataTableStructType_ReturnValue = CallFunc_IsDataTableStructType_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function BPFL_Crafting.BPFL_Crafting_C.IsValidRecipe
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidRowHandle_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDataTableStructType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::IsValidRecipe(const struct FDataTableRowHandle& RecipeId, class UObject* __WorldContext, bool* Success, bool CallFunc_IsValidRowHandle_IsValid, bool CallFunc_IsDataTableStructType_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "IsValidRecipe");

	Params::UBPFL_Crafting_C_IsValidRecipe_Params Parms{};

	Parms.RecipeId = RecipeId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValidRowHandle_IsValid = CallFunc_IsValidRowHandle_IsValid;
	Parms.CallFunc_IsDataTableStructType_ReturnValue = CallFunc_IsDataTableStructType_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPFL_Crafting.BPFL_Crafting_C.HasGameplayTagByName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        TagName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        TagArray                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasTag                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSubstring_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::HasGameplayTagByName(class FName TagName, TArray<struct FGameplayTag>& TagArray, class UObject* __WorldContext, bool* Success, bool HasTag, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "HasGameplayTagByName");

	Params::UBPFL_Crafting_C_HasGameplayTagByName_Params Parms{};

	Parms.TagName = TagName;
	Parms.TagArray = TagArray;
	Parms.__WorldContext = __WorldContext;
	Parms.HasTag = HasTag;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_FindSubstring_ReturnValue = CallFunc_FindSubstring_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPFL_Crafting.BPFL_Crafting_C.IsConstraintSlotSatisfied
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCraftingConstraintSlot     ConstraintSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FInventoryEntry             InputItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraintMatchData    CallFunc_IsItemConstraintMet_OutMatchData                        (NoDestructor)
// enum class EGetResult              CallFunc_IsItemConstraintMet_OutBranch                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::IsConstraintSlotSatisfied(const struct FCraftingConstraintSlot& ConstraintSlot, const struct FInventoryEntry& InputItem, class UObject* __WorldContext, bool* Success, const struct FItemConstraintMatchData& CallFunc_IsItemConstraintMet_OutMatchData, enum class EGetResult CallFunc_IsItemConstraintMet_OutBranch, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "IsConstraintSlotSatisfied");

	Params::UBPFL_Crafting_C_IsConstraintSlotSatisfied_Params Parms{};

	Parms.ConstraintSlot = ConstraintSlot;
	Parms.InputItem = InputItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsItemConstraintMet_OutMatchData = CallFunc_IsItemConstraintMet_OutMatchData;
	Parms.CallFunc_IsItemConstraintMet_OutBranch = CallFunc_IsItemConstraintMet_OutBranch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPFL_Crafting.BPFL_Crafting_C.IsConstraintGroupStatisfied
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FCraftingConstraintSet>ConstraintGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInventoryEntry             InputItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingConstraintSet      SatisfiedConstraintSet                                           (Parm, OutParm)
// bool                               FoundMatchingSet                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bMatchFound                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingConstraintSet      CurrentMatch                                                     (Edit, BlueprintVisible)
// struct FCraftingConstraintSet      CurrentConstraintSet                                             (Edit, BlueprintVisible)
// bool                               ConstraintGroupSatisfied                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingConstraintSet      CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConstraintSetSatisfied_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConstraintSetSatisfied_MatchesSet                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::IsConstraintGroupStatisfied(TArray<struct FCraftingConstraintSet>& ConstraintGroup, const struct FInventoryEntry& InputItem, class UObject* __WorldContext, bool* Success, struct FCraftingConstraintSet* SatisfiedConstraintSet, bool* FoundMatchingSet, bool bMatchFound, const struct FCraftingConstraintSet& CurrentMatch, const struct FCraftingConstraintSet& CurrentConstraintSet, bool ConstraintGroupSatisfied, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCraftingConstraintSet& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsConstraintSetSatisfied_Success, bool CallFunc_IsConstraintSetSatisfied_MatchesSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "IsConstraintGroupStatisfied");

	Params::UBPFL_Crafting_C_IsConstraintGroupStatisfied_Params Parms{};

	Parms.ConstraintGroup = ConstraintGroup;
	Parms.InputItem = InputItem;
	Parms.__WorldContext = __WorldContext;
	Parms.bMatchFound = bMatchFound;
	Parms.CurrentMatch = CurrentMatch;
	Parms.CurrentConstraintSet = CurrentConstraintSet;
	Parms.ConstraintGroupSatisfied = ConstraintGroupSatisfied;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsConstraintSetSatisfied_Success = CallFunc_IsConstraintSetSatisfied_Success;
	Parms.CallFunc_IsConstraintSetSatisfied_MatchesSet = CallFunc_IsConstraintSetSatisfied_MatchesSet;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SatisfiedConstraintSet != nullptr)
		*SatisfiedConstraintSet = std::move(Parms.SatisfiedConstraintSet);

	if (FoundMatchingSet != nullptr)
		*FoundMatchingSet = Parms.FoundMatchingSet;

}


// Function BPFL_Crafting.BPFL_Crafting_C.IsConstraintSetSatisfied
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCraftingConstraintSet      ConstraintSet                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryEntry             InputItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MatchesSet                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NonQuantitySatisfied                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               QuantitySatisfied                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Traits                                                           (Edit, BlueprintVisible)
// bool                               CallFunc_AreQuantityConstraintsSatisfied_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crafting_C::IsConstraintSetSatisfied(const struct FCraftingConstraintSet& ConstraintSet, const struct FInventoryEntry& InputItem, class UObject* __WorldContext, bool* Success, bool* MatchesSet, bool NonQuantitySatisfied, bool QuantitySatisfied, const struct FGameplayTagContainer& Traits, bool CallFunc_AreQuantityConstraintsSatisfied_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Crafting_C", "IsConstraintSetSatisfied");

	Params::UBPFL_Crafting_C_IsConstraintSetSatisfied_Params Parms{};

	Parms.ConstraintSet = ConstraintSet;
	Parms.InputItem = InputItem;
	Parms.__WorldContext = __WorldContext;
	Parms.NonQuantitySatisfied = NonQuantitySatisfied;
	Parms.QuantitySatisfied = QuantitySatisfied;
	Parms.Traits = Traits;
	Parms.CallFunc_AreQuantityConstraintsSatisfied_ReturnValue = CallFunc_AreQuantityConstraintsSatisfied_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (MatchesSet != nullptr)
		*MatchesSet = Parms.MatchesSet;

}

}


