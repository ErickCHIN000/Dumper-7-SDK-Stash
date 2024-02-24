#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FocusableBehaviour_Corpse.BP_FocusableBehaviour_Corpse_C
// (None)

class UClass* UBP_FocusableBehaviour_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FocusableBehaviour_Corpse_C");

	return Clss;
}


// BP_FocusableBehaviour_Corpse_C BP_FocusableBehaviour_Corpse.Default__BP_FocusableBehaviour_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FocusableBehaviour_Corpse_C* UBP_FocusableBehaviour_Corpse_C::GetDefaultObj()
{
	static class UBP_FocusableBehaviour_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FocusableBehaviour_Corpse_C*>(UBP_FocusableBehaviour_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FocusableBehaviour_Corpse.BP_FocusableBehaviour_Corpse_C.OnFocused
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FocusableBehaviour_Corpse_C::OnFocused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FocusableBehaviour_Corpse_C", "OnFocused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FocusableBehaviour_Corpse.BP_FocusableBehaviour_Corpse_C.ExecuteUbergraph_BP_FocusableBehaviour_Corpse
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 CallFunc_GetOwnerIcarusItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class ABP_GOAP_Corpse_C*           K2Node_DynamicCast_AsBP_GOAP_Corpse                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMeshComponent*>K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPhysicsAsset*               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddActorLocalRotation_SweepHitResult                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddActorLocalOffset_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_FocusableBehaviour_Corpse_C::ExecuteUbergraph_BP_FocusableBehaviour_Corpse(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class AIcarusItem* CallFunc_GetOwnerIcarusItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable_1, TArray<class USkeletalMeshComponent*>& K2Node_Select_Default, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UPhysicsAsset* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorLocalRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddActorLocalOffset_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FocusableBehaviour_Corpse_C", "ExecuteUbergraph_BP_FocusableBehaviour_Corpse");

	Params::UBP_FocusableBehaviour_Corpse_C_ExecuteUbergraph_BP_FocusableBehaviour_Corpse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwnerIcarusItem_ReturnValue = CallFunc_GetOwnerIcarusItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsBP_GOAP_Corpse = K2Node_DynamicCast_AsBP_GOAP_Corpse;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_AddActorLocalRotation_SweepHitResult = CallFunc_K2_AddActorLocalRotation_SweepHitResult;
	Parms.CallFunc_K2_AddActorLocalOffset_SweepHitResult = CallFunc_K2_AddActorLocalOffset_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


