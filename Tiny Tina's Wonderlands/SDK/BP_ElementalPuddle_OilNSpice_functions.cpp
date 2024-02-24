#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElementalPuddle_OilNSpice.BP_ElementalPuddle_OilNSpice_C
// (Actor)

class UClass* ABP_ElementalPuddle_OilNSpice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElementalPuddle_OilNSpice_C");

	return Clss;
}


// BP_ElementalPuddle_OilNSpice_C BP_ElementalPuddle_OilNSpice.Default__BP_ElementalPuddle_OilNSpice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ElementalPuddle_OilNSpice_C* ABP_ElementalPuddle_OilNSpice_C::GetDefaultObj()
{
	static class ABP_ElementalPuddle_OilNSpice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ElementalPuddle_OilNSpice_C*>(ABP_ElementalPuddle_OilNSpice_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ElementalPuddle_OilNSpice.BP_ElementalPuddle_OilNSpice_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ElementalPuddle_OilNSpice_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElementalPuddle_OilNSpice_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElementalPuddle_OilNSpice.BP_ElementalPuddle_OilNSpice_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ElementalPuddle_OilNSpice_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElementalPuddle_OilNSpice_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElementalPuddle_OilNSpice.BP_ElementalPuddle_OilNSpice_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_0_ElementalInteractionStartedEvent__DelegateSignature_BP_ElementalPuddle_Decal_Oil
// (BlueprintEvent)
// Parameters:
// class UElementalInteractionData*   State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInitialState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ElementalPuddle_OilNSpice_C::BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_0_ElementalInteractionStartedEvent__DelegateSignature_BP_ElementalPuddle_Decal_Oil(class UElementalInteractionData* State, bool bIsInitialState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElementalPuddle_OilNSpice_C", "BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_0_ElementalInteractionStartedEvent__DelegateSignature_BP_ElementalPuddle_Decal_Oil");

	Params::ABP_ElementalPuddle_OilNSpice_C_BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_0_ElementalInteractionStartedEvent__DelegateSignature_BP_ElementalPuddle_Decal_Oil_Params Parms{};

	Parms.State = State;
	Parms.bIsInitialState = bIsInitialState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ElementalPuddle_OilNSpice.BP_ElementalPuddle_OilNSpice_C.ExecuteUbergraph_BP_ElementalPuddle_OilNSpice
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UElementalInteractionData*   K2Node_ComponentBoundEvent_State                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsInitialState                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ABPChar_Player_C*            K2Node_DynamicCast_AsBPChar_Player                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// class AWeapon*                     CallFunc_GetActiveWeapon_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ElementalPuddle_OilNSpice_C::ExecuteUbergraph_BP_ElementalPuddle_OilNSpice(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UElementalInteractionData* K2Node_ComponentBoundEvent_State, bool K2Node_ComponentBoundEvent_bIsInitialState, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FHitResult& Temp_struct_Variable, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElementalPuddle_OilNSpice_C", "ExecuteUbergraph_BP_ElementalPuddle_OilNSpice");

	Params::ABP_ElementalPuddle_OilNSpice_C_ExecuteUbergraph_BP_ElementalPuddle_OilNSpice_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_ComponentBoundEvent_State = K2Node_ComponentBoundEvent_State;
	Parms.K2Node_ComponentBoundEvent_bIsInitialState = K2Node_ComponentBoundEvent_bIsInitialState;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsBPChar_Player = K2Node_DynamicCast_AsBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetActiveWeapon_ReturnValue = CallFunc_GetActiveWeapon_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


