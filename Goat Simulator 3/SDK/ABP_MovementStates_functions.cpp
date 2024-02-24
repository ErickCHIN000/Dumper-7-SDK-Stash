#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_MovementStates.ABP_MovementStates_C
// (None)

class UClass* UABP_MovementStates_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_MovementStates_C");

	return Clss;
}


// ABP_MovementStates_C ABP_MovementStates.Default__ABP_MovementStates_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_MovementStates_C* UABP_MovementStates_C::GetDefaultObj()
{
	static class UABP_MovementStates_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_MovementStates_C*>(UABP_MovementStates_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_MovementStates.ABP_MovementStates_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   Ground_State                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_MovementStates_C::AnimGraph(const struct FPoseLink& Ground_State, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MovementStates_C", "AnimGraph");

	Params::UABP_MovementStates_C_AnimGraph_Params Parms{};

	Parms.Ground_State = Ground_State;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_MovementStates.ABP_MovementStates_C.AnimNotify_Jump
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_MovementStates_C::AnimNotify_Jump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MovementStates_C", "AnimNotify_Jump");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_MovementStates.ABP_MovementStates_C.AnimNotify_Land
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_MovementStates_C::AnimNotify_Land()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MovementStates_C", "AnimNotify_Land");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_MovementStates.ABP_MovementStates_C.On Movement Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMovementMode           NewMode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           PrevMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              NewCustomMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              PrevCustomMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULSCharacterMovementComponent*MovementComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MovementStates_C::On_Movement_Mode_Changed(enum class EMovementMode NewMode, enum class EMovementMode PrevMode, uint8 NewCustomMode, uint8 PrevCustomMode, class ULSCharacterMovementComponent* MovementComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MovementStates_C", "On Movement Mode Changed");

	Params::UABP_MovementStates_C_On_Movement_Mode_Changed_Params Parms{};

	Parms.NewMode = NewMode;
	Parms.PrevMode = PrevMode;
	Parms.NewCustomMode = NewCustomMode;
	Parms.PrevCustomMode = PrevCustomMode;
	Parms.MovementComp = MovementComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_MovementStates.ABP_MovementStates_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_MovementStates_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MovementStates_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_MovementStates.ABP_MovementStates_C.AnimNotify_Footstep_B_L
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_MovementStates_C::AnimNotify_Footstep_B_L()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MovementStates_C", "AnimNotify_Footstep_B_L");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_MovementStates.ABP_MovementStates_C.AnimNotify_Footstep_B_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_MovementStates_C::AnimNotify_Footstep_B_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MovementStates_C", "AnimNotify_Footstep_B_R");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_MovementStates.ABP_MovementStates_C.AnimNotify_Footstep_F_L
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_MovementStates_C::AnimNotify_Footstep_F_L()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MovementStates_C", "AnimNotify_Footstep_F_L");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_MovementStates.ABP_MovementStates_C.AnimNotify_Footstep_F_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_MovementStates_C::AnimNotify_Footstep_F_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MovementStates_C", "AnimNotify_Footstep_F_R");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_MovementStates.ABP_MovementStates_C.ExecuteUbergraph_ABP_MovementStates
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_NewMode                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_PrevMode                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_NewCustomMode                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_PrevCustomMode                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULSCharacterMovementComponent*K2Node_CustomEvent_MovementComp                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGoatMovementComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_MovementStates_C::ExecuteUbergraph_ABP_MovementStates(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class AActor* CallFunc_GetOwningActor_ReturnValue_2, class AGGGoat* K2Node_DynamicCast_AsGGGoat_1, bool K2Node_DynamicCast_bSuccess_1, class AGGGoat* K2Node_DynamicCast_AsGGGoat_2, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwningActor_ReturnValue_3, enum class EMovementMode K2Node_CustomEvent_NewMode, enum class EMovementMode K2Node_CustomEvent_PrevMode, uint8 K2Node_CustomEvent_NewCustomMode, uint8 K2Node_CustomEvent_PrevCustomMode, class ULSCharacterMovementComponent* K2Node_CustomEvent_MovementComp, class UGGGoatMovementComponent* CallFunc_GetComponentByClass_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class AActor* CallFunc_GetOwningActor_ReturnValue_4, class AGGGoat* K2Node_DynamicCast_AsGGGoat_3, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActor_ReturnValue_5, class AActor* CallFunc_GetOwningActor_ReturnValue_6, class AGGGoat* K2Node_DynamicCast_AsGGGoat_4, bool K2Node_DynamicCast_bSuccess_4, class AGGGoat* K2Node_DynamicCast_AsGGGoat_5, bool K2Node_DynamicCast_bSuccess_5, class AActor* CallFunc_GetOwningActor_ReturnValue_7, class AGGGoat* K2Node_DynamicCast_AsGGGoat_6, bool K2Node_DynamicCast_bSuccess_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MovementStates_C", "ExecuteUbergraph_ABP_MovementStates");

	Params::UABP_MovementStates_C_ExecuteUbergraph_ABP_MovementStates_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGGoat = K2Node_DynamicCast_AsGGGoat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningActor_ReturnValue_1 = CallFunc_GetOwningActor_ReturnValue_1;
	Parms.CallFunc_GetOwningActor_ReturnValue_2 = CallFunc_GetOwningActor_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGGGoat_1 = K2Node_DynamicCast_AsGGGoat_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGGGoat_2 = K2Node_DynamicCast_AsGGGoat_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwningActor_ReturnValue_3 = CallFunc_GetOwningActor_ReturnValue_3;
	Parms.K2Node_CustomEvent_NewMode = K2Node_CustomEvent_NewMode;
	Parms.K2Node_CustomEvent_PrevMode = K2Node_CustomEvent_PrevMode;
	Parms.K2Node_CustomEvent_NewCustomMode = K2Node_CustomEvent_NewCustomMode;
	Parms.K2Node_CustomEvent_PrevCustomMode = K2Node_CustomEvent_PrevCustomMode;
	Parms.K2Node_CustomEvent_MovementComp = K2Node_CustomEvent_MovementComp;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetOwningActor_ReturnValue_4 = CallFunc_GetOwningActor_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGGGoat_3 = K2Node_DynamicCast_AsGGGoat_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningActor_ReturnValue_5 = CallFunc_GetOwningActor_ReturnValue_5;
	Parms.CallFunc_GetOwningActor_ReturnValue_6 = CallFunc_GetOwningActor_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsGGGoat_4 = K2Node_DynamicCast_AsGGGoat_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsGGGoat_5 = K2Node_DynamicCast_AsGGGoat_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetOwningActor_ReturnValue_7 = CallFunc_GetOwningActor_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsGGGoat_6 = K2Node_DynamicCast_AsGGGoat_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


