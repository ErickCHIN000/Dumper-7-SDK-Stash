#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_AttributeEffectSet.DA_AttributeEffectSet_C
// (None)

class UClass* UDA_AttributeEffectSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_AttributeEffectSet_C");

	return Clss;
}


// DA_AttributeEffectSet_C DA_AttributeEffectSet.Default__DA_AttributeEffectSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_AttributeEffectSet_C* UDA_AttributeEffectSet_C::GetDefaultObj()
{
	static class UDA_AttributeEffectSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_AttributeEffectSet_C*>(UDA_AttributeEffectSet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DA_AttributeEffectSet.DA_AttributeEffectSet_C.ApplyAttributeEffectSet
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ModifierContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ModifierTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxAttributeModifierHandle>AppliedAttributeEffects                                          (Parm, OutParm, ZeroConstructor)
// TArray<struct FGbxAttributeModifierHandle>MyAppliedEffects                                                 (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAttributeEffectData        CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_ApplyAttributeEffect_ModifierActionResult               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_ApplyAttributeEffect_ReturnValue                        (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDA_AttributeEffectSet_C::ApplyAttributeEffectSet(class AActor* ModifierContext, class AActor* ModifierTarget, TArray<struct FGbxAttributeModifierHandle>* AppliedAttributeEffects, const TArray<struct FGbxAttributeModifierHandle>& MyAppliedEffects, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FAttributeEffectData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_AttributeEffectSet_C", "ApplyAttributeEffectSet");

	Params::UDA_AttributeEffectSet_C_ApplyAttributeEffectSet_Params Parms{};

	Parms.ModifierContext = ModifierContext;
	Parms.ModifierTarget = ModifierTarget;
	Parms.MyAppliedEffects = MyAppliedEffects;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ApplyAttributeEffect_ModifierActionResult = CallFunc_ApplyAttributeEffect_ModifierActionResult;
	Parms.CallFunc_ApplyAttributeEffect_ReturnValue = CallFunc_ApplyAttributeEffect_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AppliedAttributeEffects != nullptr)
		*AppliedAttributeEffects = std::move(Parms.AppliedAttributeEffects);

}

}


