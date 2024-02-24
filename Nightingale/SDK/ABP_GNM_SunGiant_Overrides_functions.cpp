#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C
// (None)

class UClass* UABP_GNM_SunGiant_Overrides_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_GNM_SunGiant_Overrides_C");

	return Clss;
}


// ABP_GNM_SunGiant_Overrides_C ABP_GNM_SunGiant_Overrides.Default__ABP_GNM_SunGiant_Overrides_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_GNM_SunGiant_Overrides_C* UABP_GNM_SunGiant_Overrides_C::GetDefaultObj()
{
	static class UABP_GNM_SunGiant_Overrides_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_GNM_SunGiant_Overrides_C*>(UABP_GNM_SunGiant_Overrides_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.Hand IK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     Hand_l                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Hand_l_Alpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Hand_IK                                                          (Parm, OutParm, NoDestructor)

void UABP_GNM_SunGiant_Overrides_C::Hand_IK(const struct FPoseLink& Input, const struct FVector& Hand_l, double Hand_l_Alpha, struct FPoseLink* Hand_IK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "Hand IK");

	Params::UABP_GNM_SunGiant_Overrides_C_Hand_IK_Params Parms{};

	Parms.Input = Input;
	Parms.Hand_l = Hand_l;
	Parms.Hand_l_Alpha = Hand_l_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Hand_IK != nullptr)
		*Hand_IK = std::move(Parms.Hand_IK);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.GroundPowerIk
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               PowerIK_Switch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   GroundPowerIk                                                    (Parm, OutParm, NoDestructor)

void UABP_GNM_SunGiant_Overrides_C::GroundPowerIk(const struct FPoseLink& InPose_0, bool PowerIK_Switch, struct FPoseLink* GroundPowerIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "GroundPowerIk");

	Params::UABP_GNM_SunGiant_Overrides_C_GroundPowerIk_Params Parms{};

	Parms.InPose_0 = InPose_0;
	Parms.PowerIK_Switch = PowerIK_Switch;

	UObject::ProcessEvent(Func, &Parms);

	if (GroundPowerIk != nullptr)
		*GroundPowerIk = std::move(Parms.GroundPowerIk);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.ControlRig
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsMinHealth_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   ControlRig                                                       (Parm, OutParm, NoDestructor)

void UABP_GNM_SunGiant_Overrides_C::ControlRig(const struct FPoseLink& InPose_1, const struct FRotator& Rotation, bool IsMinHealth_, struct FPoseLink* ControlRig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "ControlRig");

	Params::UABP_GNM_SunGiant_Overrides_C_ControlRig_Params Parms{};

	Parms.InPose_1 = InPose_1;
	Parms.Rotation = Rotation;
	Parms.IsMinHealth_ = IsMinHealth_;

	UObject::ProcessEvent(Func, &Parms);

	if (ControlRig != nullptr)
		*ControlRig = std::move(Parms.ControlRig);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.OffHandIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               InputIKSwitch                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InputIKLocation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   OffHandIK                                                        (Parm, OutParm, NoDestructor)

void UABP_GNM_SunGiant_Overrides_C::OffHandIK(const struct FPoseLink& InPose_2, bool InputIKSwitch, const struct FVector& InputIKLocation, struct FPoseLink* OffHandIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "OffHandIK");

	Params::UABP_GNM_SunGiant_Overrides_C_OffHandIK_Params Parms{};

	Parms.InPose_2 = InPose_2;
	Parms.InputIKSwitch = InputIKSwitch;
	Parms.InputIKLocation = InputIKLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (OffHandIK != nullptr)
		*OffHandIK = std::move(Parms.OffHandIK);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.Dynamics
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_3                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             InDynamicsAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Dynamics                                                         (Parm, OutParm, NoDestructor)

void UABP_GNM_SunGiant_Overrides_C::Dynamics(const struct FPoseLink& InPose_3, double InDynamicsAlpha, struct FPoseLink* Dynamics)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "Dynamics");

	Params::UABP_GNM_SunGiant_Overrides_C_Dynamics_Params Parms{};

	Parms.InPose_3 = InPose_3;
	Parms.InDynamicsAlpha = InDynamicsAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Dynamics != nullptr)
		*Dynamics = std::move(Parms.Dynamics);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.LookAtTarget
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_4                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             LookAtAlpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    LookAtRot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             EyeAlpha                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LookAtTarget                                                     (Parm, OutParm, NoDestructor)

void UABP_GNM_SunGiant_Overrides_C::LookAtTarget(const struct FPoseLink& InPose_4, double LookAtAlpha, const struct FRotator& LookAtRot, double EyeAlpha, struct FPoseLink* LookAtTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "LookAtTarget");

	Params::UABP_GNM_SunGiant_Overrides_C_LookAtTarget_Params Parms{};

	Parms.InPose_4 = InPose_4;
	Parms.LookAtAlpha = LookAtAlpha;
	Parms.LookAtRot = LookAtRot;
	Parms.EyeAlpha = EyeAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtTarget != nullptr)
		*LookAtTarget = std::move(Parms.LookAtTarget);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.Procedural_Walk
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_5                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               WalkOn_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    BodyRot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLegItem                    Leg_ITM_0                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FLegItem                    Leg_ITM_1                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FLegItem                    Leg_ITM_2                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FLegItem                    Leg_ITM_3                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FLegItem                    Leg_ITM_4                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FLegItem                    Leg_ITM_5                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FLegItem                    Leg_ITM_6                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FLegItem                    Leg_ITM_7                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Procedural_Walk                                                  (Parm, OutParm, NoDestructor)

void UABP_GNM_SunGiant_Overrides_C::Procedural_Walk(const struct FPoseLink& InPose_5, bool WalkOn_, const struct FRotator& BodyRot, const struct FLegItem& Leg_ITM_0, const struct FLegItem& Leg_ITM_1, const struct FLegItem& Leg_ITM_2, const struct FLegItem& Leg_ITM_3, const struct FLegItem& Leg_ITM_4, const struct FLegItem& Leg_ITM_5, const struct FLegItem& Leg_ITM_6, const struct FLegItem& Leg_ITM_7, struct FPoseLink* Procedural_Walk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "Procedural_Walk");

	Params::UABP_GNM_SunGiant_Overrides_C_Procedural_Walk_Params Parms{};

	Parms.InPose_5 = InPose_5;
	Parms.WalkOn_ = WalkOn_;
	Parms.BodyRot = BodyRot;
	Parms.Leg_ITM_0 = Leg_ITM_0;
	Parms.Leg_ITM_1 = Leg_ITM_1;
	Parms.Leg_ITM_2 = Leg_ITM_2;
	Parms.Leg_ITM_3 = Leg_ITM_3;
	Parms.Leg_ITM_4 = Leg_ITM_4;
	Parms.Leg_ITM_5 = Leg_ITM_5;
	Parms.Leg_ITM_6 = Leg_ITM_6;
	Parms.Leg_ITM_7 = Leg_ITM_7;

	UObject::ProcessEvent(Func, &Parms);

	if (Procedural_Walk != nullptr)
		*Procedural_Walk = std::move(Parms.Procedural_Walk);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.BoneAdditiveTransform
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_6                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             WorldTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   BoneAdditiveTransform                                            (Parm, OutParm, NoDestructor)

void UABP_GNM_SunGiant_Overrides_C::BoneAdditiveTransform(const struct FPoseLink& InPose_6, double WorldTime, struct FPoseLink* BoneAdditiveTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "BoneAdditiveTransform");

	Params::UABP_GNM_SunGiant_Overrides_C_BoneAdditiveTransform_Params Parms{};

	Parms.InPose_6 = InPose_6;
	Parms.WorldTime = WorldTime;

	UObject::ProcessEvent(Func, &Parms);

	if (BoneAdditiveTransform != nullptr)
		*BoneAdditiveTransform = std::move(Parms.BoneAdditiveTransform);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_GNM_SunGiant_Overrides_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "AnimGraph");

	Params::UABP_GNM_SunGiant_Overrides_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GNM_SunGiant_Overrides_AnimGraphNode_Fabrik_6070A0414811648B5B814A870930A190
// (BlueprintEvent)
// Parameters:

void UABP_GNM_SunGiant_Overrides_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GNM_SunGiant_Overrides_AnimGraphNode_Fabrik_6070A0414811648B5B814A870930A190()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GNM_SunGiant_Overrides_AnimGraphNode_Fabrik_6070A0414811648B5B814A870930A190");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_GNM_SunGiant_Overrides_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "BlueprintUpdateAnimation");

	Params::UABP_GNM_SunGiant_Overrides_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_GNM_SunGiant_Overrides_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.ExecuteUbergraph_ABP_GNM_SunGiant_Overrides
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyMontagePlaying_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_GNM_SunGiant_Overrides_C::ExecuteUbergraph_ABP_GNM_SunGiant_Overrides(int32 EntryPoint, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_IsAnyMontagePlaying_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_SunGiant_Overrides_C", "ExecuteUbergraph_ABP_GNM_SunGiant_Overrides");

	Params::UABP_GNM_SunGiant_Overrides_C_ExecuteUbergraph_ABP_GNM_SunGiant_Overrides_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_IsAnyMontagePlaying_ReturnValue = CallFunc_IsAnyMontagePlaying_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast = K2Node_StructMemberSet_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


