#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_ElvenBow.ABP_ElvenBow_C
// (None)

class UClass* UABP_ElvenBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_ElvenBow_C");

	return Clss;
}


// ABP_ElvenBow_C ABP_ElvenBow.Default__ABP_ElvenBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_ElvenBow_C* UABP_ElvenBow_C::GetDefaultObj()
{
	static class UABP_ElvenBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_ElvenBow_C*>(UABP_ElvenBow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_ElvenBow.ABP_ElvenBow_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_ElvenBow_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_ElvenBow_C", "AnimGraph");

	Params::UABP_ElvenBow_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_ElvenBow.ABP_ElvenBow_C.UpdateStringLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     L_TargetLocation                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class II_IsArcher_C>K2Node_DynamicCast_AsI_Is_Archer                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetBowStringSocketName_Name                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class II_IsArcher_C>K2Node_DynamicCast_AsI_Is_Archer_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesHoldBowString_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_ElvenBow_C::UpdateStringLocation(const struct FVector& L_TargetLocation, TScriptInterface<class II_IsArcher_C> K2Node_DynamicCast_AsI_Is_Archer, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetBowStringSocketName_Name, TScriptInterface<class II_IsArcher_C> K2Node_DynamicCast_AsI_Is_Archer_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_DoesHoldBowString_Result, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_ElvenBow_C", "UpdateStringLocation");

	Params::UABP_ElvenBow_C_UpdateStringLocation_Params Parms{};

	Parms.L_TargetLocation = L_TargetLocation;
	Parms.K2Node_DynamicCast_AsI_Is_Archer = K2Node_DynamicCast_AsI_Is_Archer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBowStringSocketName_Name = CallFunc_GetBowStringSocketName_Name;
	Parms.K2Node_DynamicCast_AsI_Is_Archer_1 = K2Node_DynamicCast_AsI_Is_Archer_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_DoesHoldBowString_Result = CallFunc_DoesHoldBowString_Result;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_VInterpTo_Constant_ReturnValue = CallFunc_VInterpTo_Constant_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_ElvenBow.ABP_ElvenBow_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_ElvenBow_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_ElvenBow_C", "BlueprintUpdateAnimation");

	Params::UABP_ElvenBow_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_ElvenBow.ABP_ElvenBow_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_ElvenBow_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_ElvenBow_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_ElvenBow.ABP_ElvenBow_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_ElvenBow_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_ElvenBow_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_ElvenBow.ABP_ElvenBow_C.ExecuteUbergraph_ABP_ElvenBow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class II_IsArcher_C>K2Node_DynamicCast_AsI_Is_Archer                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAimAlpha_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_ElvenBow_C::ExecuteUbergraph_ABP_ElvenBow(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class II_IsArcher_C> K2Node_DynamicCast_AsI_Is_Archer, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAimAlpha_Value, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_ElvenBow_C", "ExecuteUbergraph_ABP_ElvenBow");

	Params::UABP_ElvenBow_C_ExecuteUbergraph_ABP_ElvenBow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsI_Is_Archer = K2Node_DynamicCast_AsI_Is_Archer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAimAlpha_Value = CallFunc_GetAimAlpha_Value;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


