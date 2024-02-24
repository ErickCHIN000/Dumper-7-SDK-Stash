#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C
// (None)

class UClass* UBP_Flammable_FLODActor_Tree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Flammable_FLODActor_Tree_C");

	return Clss;
}


// BP_Flammable_FLODActor_Tree_C BP_Flammable_FLODActor_Tree.Default__BP_Flammable_FLODActor_Tree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Flammable_FLODActor_Tree_C* UBP_Flammable_FLODActor_Tree_C::GetDefaultObj()
{
	static class UBP_Flammable_FLODActor_Tree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Flammable_FLODActor_Tree_C*>(UBP_Flammable_FLODActor_Tree_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Flammable_FLODActor_Tree_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_FLODActor_Tree_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C.OnUpdateInstanceVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              FireSpread                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FireTemperature                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_FLODActor_Tree_C::OnUpdateInstanceVisuals(float FireSpread, float FireTemperature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_FLODActor_Tree_C", "OnUpdateInstanceVisuals");

	Params::UBP_Flammable_FLODActor_Tree_C_OnUpdateInstanceVisuals_Params Parms{};

	Parms.FireSpread = FireSpread;
	Parms.FireTemperature = FireTemperature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C.OnFlammableInstanceAttached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_FLODActor_Tree_C::OnFlammableInstanceAttached(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_FLODActor_Tree_C", "OnFlammableInstanceAttached");

	Params::UBP_Flammable_FLODActor_Tree_C_OnFlammableInstanceAttached_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C.OnFlammableInstanceDetached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_FLODActor_Tree_C::OnFlammableInstanceDetached(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_FLODActor_Tree_C", "OnFlammableInstanceDetached");

	Params::UBP_Flammable_FLODActor_Tree_C_OnFlammableInstanceDetached_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C.ExecuteUbergraph_BP_Flammable_FLODActor_Tree
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer                    (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer_1                  (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGameplayTagContainer_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_FireSpread                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_FireTemperature                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATreeBase*                   K2Node_DynamicCast_AsTree_Base                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBox                        CallFunc_GetBoundingBox_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTreePrimitiveComponent*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_Event_Instance_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableInstance*          K2Node_Event_Instance                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_FLODActor_Tree_C::ExecuteUbergraph_BP_Flammable_FLODActor_Tree(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_SetGameplayTagContainer_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer_1, bool CallFunc_GetGameplayTagContainer_ReturnValue_1, bool CallFunc_SetGameplayTagContainer_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, float K2Node_Event_FireSpread, float K2Node_Event_FireTemperature, class ATreeBase* K2Node_DynamicCast_AsTree_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, const struct FBox& CallFunc_GetBoundingBox_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UTreePrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFlammableInstance* K2Node_Event_Instance_1, bool CallFunc_Less_IntInt_ReturnValue, class UFlammableInstance* K2Node_Event_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_FLODActor_Tree_C", "ExecuteUbergraph_BP_Flammable_FLODActor_Tree");

	Params::UBP_Flammable_FLODActor_Tree_C_ExecuteUbergraph_BP_Flammable_FLODActor_Tree_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer = CallFunc_GetGameplayTagContainer_OutContainer;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue = CallFunc_GetGameplayTagContainer_ReturnValue;
	Parms.CallFunc_SetGameplayTagContainer_ReturnValue = CallFunc_SetGameplayTagContainer_ReturnValue;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer_1 = CallFunc_GetGameplayTagContainer_OutContainer_1;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue_1 = CallFunc_GetGameplayTagContainer_ReturnValue_1;
	Parms.CallFunc_SetGameplayTagContainer_ReturnValue_1 = CallFunc_SetGameplayTagContainer_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Event_FireSpread = K2Node_Event_FireSpread;
	Parms.K2Node_Event_FireTemperature = K2Node_Event_FireTemperature;
	Parms.K2Node_DynamicCast_AsTree_Base = K2Node_DynamicCast_AsTree_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetBoundingBox_ReturnValue = CallFunc_GetBoundingBox_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_Instance_1 = K2Node_Event_Instance_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_Instance = K2Node_Event_Instance;

	UObject::ProcessEvent(Func, &Parms);

}

}


