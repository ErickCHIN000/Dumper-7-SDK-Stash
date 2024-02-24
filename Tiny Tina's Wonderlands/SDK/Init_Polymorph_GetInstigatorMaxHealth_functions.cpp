#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Polymorph_GetInstigatorMaxHealth.Init_Polymorph_GetInstigatorMaxHealth_C
// (None)

class UClass* UInit_Polymorph_GetInstigatorMaxHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Polymorph_GetInstigatorMaxHealth_C");

	return Clss;
}


// Init_Polymorph_GetInstigatorMaxHealth_C Init_Polymorph_GetInstigatorMaxHealth.Default__Init_Polymorph_GetInstigatorMaxHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Polymorph_GetInstigatorMaxHealth_C* UInit_Polymorph_GetInstigatorMaxHealth_C::GetDefaultObj()
{
	static class UInit_Polymorph_GetInstigatorMaxHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Polymorph_GetInstigatorMaxHealth_C*>(UInit_Polymorph_GetInstigatorMaxHealth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Polymorph_GetInstigatorMaxHealth.Init_Polymorph_GetInstigatorMaxHealth_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Health                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_DynamicCast_AsGbx_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameResourcePoolManagerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameResourceData*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  CallFunc_GetResourcePoolByResource_ReturnValue                   (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakResourcePoolReference_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Polymorph_GetInstigatorMaxHealth_C::CalculateAttributeInitialValue(class UObject* Context, float Health, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class AGbxCharacter* K2Node_DynamicCast_AsGbx_Character, bool K2Node_DynamicCast_bSuccess1, int32 Temp_int_Loop_Counter_Variable, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UGameResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Polymorph_GetInstigatorMaxHealth_C", "CalculateAttributeInitialValue");

	Params::UInit_Polymorph_GetInstigatorMaxHealth_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.Health = Health;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsGbx_Character = K2Node_DynamicCast_AsGbx_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetResourcePoolByResource_ReturnValue = CallFunc_GetResourcePoolByResource_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid = CallFunc_BreakResourcePoolReference_bValid;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue = CallFunc_BreakResourcePoolReference_CurrentValue;
	Parms.CallFunc_BreakResourcePoolReference_MinValue = CallFunc_BreakResourcePoolReference_MinValue;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue = CallFunc_BreakResourcePoolReference_MaxValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


