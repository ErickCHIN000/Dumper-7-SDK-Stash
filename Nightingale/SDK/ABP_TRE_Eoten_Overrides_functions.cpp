#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_TRE_Eoten_Overrides.ABP_TRE_Eoten_Overrides_C
// (None)

class UClass* UABP_TRE_Eoten_Overrides_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_TRE_Eoten_Overrides_C");

	return Clss;
}


// ABP_TRE_Eoten_Overrides_C ABP_TRE_Eoten_Overrides.Default__ABP_TRE_Eoten_Overrides_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_TRE_Eoten_Overrides_C* UABP_TRE_Eoten_Overrides_C::GetDefaultObj()
{
	static class UABP_TRE_Eoten_Overrides_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_TRE_Eoten_Overrides_C*>(UABP_TRE_Eoten_Overrides_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_TRE_Eoten_Overrides.ABP_TRE_Eoten_Overrides_C.Hand IK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     Hand_l                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Hand_l_Alpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Hand_IK                                                          (Parm, OutParm, NoDestructor)

void UABP_TRE_Eoten_Overrides_C::Hand_IK(const struct FPoseLink& Input, const struct FVector& Hand_l, double Hand_l_Alpha, struct FPoseLink* Hand_IK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_TRE_Eoten_Overrides_C", "Hand IK");

	Params::UABP_TRE_Eoten_Overrides_C_Hand_IK_Params Parms{};

	Parms.Input = Input;
	Parms.Hand_l = Hand_l;
	Parms.Hand_l_Alpha = Hand_l_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Hand_IK != nullptr)
		*Hand_IK = std::move(Parms.Hand_IK);

}


// Function ABP_TRE_Eoten_Overrides.ABP_TRE_Eoten_Overrides_C.BoneAdditiveTransform
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_6                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             WorldTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   BoneAdditiveTransform                                            (Parm, OutParm, NoDestructor)

void UABP_TRE_Eoten_Overrides_C::BoneAdditiveTransform(const struct FPoseLink& InPose_6, double WorldTime, struct FPoseLink* BoneAdditiveTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_TRE_Eoten_Overrides_C", "BoneAdditiveTransform");

	Params::UABP_TRE_Eoten_Overrides_C_BoneAdditiveTransform_Params Parms{};

	Parms.InPose_6 = InPose_6;
	Parms.WorldTime = WorldTime;

	UObject::ProcessEvent(Func, &Parms);

	if (BoneAdditiveTransform != nullptr)
		*BoneAdditiveTransform = std::move(Parms.BoneAdditiveTransform);

}


// Function ABP_TRE_Eoten_Overrides.ABP_TRE_Eoten_Overrides_C.Procedural_Walk
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

void UABP_TRE_Eoten_Overrides_C::Procedural_Walk(const struct FPoseLink& InPose_5, bool WalkOn_, const struct FRotator& BodyRot, const struct FLegItem& Leg_ITM_0, const struct FLegItem& Leg_ITM_1, const struct FLegItem& Leg_ITM_2, const struct FLegItem& Leg_ITM_3, const struct FLegItem& Leg_ITM_4, const struct FLegItem& Leg_ITM_5, const struct FLegItem& Leg_ITM_6, const struct FLegItem& Leg_ITM_7, struct FPoseLink* Procedural_Walk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_TRE_Eoten_Overrides_C", "Procedural_Walk");

	Params::UABP_TRE_Eoten_Overrides_C_Procedural_Walk_Params Parms{};

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


// Function ABP_TRE_Eoten_Overrides.ABP_TRE_Eoten_Overrides_C.LookAtTarget
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_4                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             LookAtAlpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    LookAtRot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             EyeAlpha                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LookAtTarget                                                     (Parm, OutParm, NoDestructor)

void UABP_TRE_Eoten_Overrides_C::LookAtTarget(const struct FPoseLink& InPose_4, double LookAtAlpha, const struct FRotator& LookAtRot, double EyeAlpha, struct FPoseLink* LookAtTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_TRE_Eoten_Overrides_C", "LookAtTarget");

	Params::UABP_TRE_Eoten_Overrides_C_LookAtTarget_Params Parms{};

	Parms.InPose_4 = InPose_4;
	Parms.LookAtAlpha = LookAtAlpha;
	Parms.LookAtRot = LookAtRot;
	Parms.EyeAlpha = EyeAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtTarget != nullptr)
		*LookAtTarget = std::move(Parms.LookAtTarget);

}


// Function ABP_TRE_Eoten_Overrides.ABP_TRE_Eoten_Overrides_C.Dynamics
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_3                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             InDynamicsAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Dynamics                                                         (Parm, OutParm, NoDestructor)

void UABP_TRE_Eoten_Overrides_C::Dynamics(const struct FPoseLink& InPose_3, double InDynamicsAlpha, struct FPoseLink* Dynamics)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_TRE_Eoten_Overrides_C", "Dynamics");

	Params::UABP_TRE_Eoten_Overrides_C_Dynamics_Params Parms{};

	Parms.InPose_3 = InPose_3;
	Parms.InDynamicsAlpha = InDynamicsAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Dynamics != nullptr)
		*Dynamics = std::move(Parms.Dynamics);

}


// Function ABP_TRE_Eoten_Overrides.ABP_TRE_Eoten_Overrides_C.GroundPowerIk
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               PowerIK_Switch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   GroundPowerIk                                                    (Parm, OutParm, NoDestructor)

void UABP_TRE_Eoten_Overrides_C::GroundPowerIk(const struct FPoseLink& InPose_0, bool PowerIK_Switch, struct FPoseLink* GroundPowerIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_TRE_Eoten_Overrides_C", "GroundPowerIk");

	Params::UABP_TRE_Eoten_Overrides_C_GroundPowerIk_Params Parms{};

	Parms.InPose_0 = InPose_0;
	Parms.PowerIK_Switch = PowerIK_Switch;

	UObject::ProcessEvent(Func, &Parms);

	if (GroundPowerIk != nullptr)
		*GroundPowerIk = std::move(Parms.GroundPowerIk);

}


// Function ABP_TRE_Eoten_Overrides.ABP_TRE_Eoten_Overrides_C.ControlRig
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsMinHealth_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   ControlRig                                                       (Parm, OutParm, NoDestructor)

void UABP_TRE_Eoten_Overrides_C::ControlRig(const struct FPoseLink& InPose_1, const struct FRotator& Rotation, bool IsMinHealth_, struct FPoseLink* ControlRig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_TRE_Eoten_Overrides_C", "ControlRig");

	Params::UABP_TRE_Eoten_Overrides_C_ControlRig_Params Parms{};

	Parms.InPose_1 = InPose_1;
	Parms.Rotation = Rotation;
	Parms.IsMinHealth_ = IsMinHealth_;

	UObject::ProcessEvent(Func, &Parms);

	if (ControlRig != nullptr)
		*ControlRig = std::move(Parms.ControlRig);

}


// Function ABP_TRE_Eoten_Overrides.ABP_TRE_Eoten_Overrides_C.OffHandIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               InputIKSwitch                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InputIKLocation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   OffHandIK                                                        (Parm, OutParm, NoDestructor)

void UABP_TRE_Eoten_Overrides_C::OffHandIK(const struct FPoseLink& InPose_2, bool InputIKSwitch, const struct FVector& InputIKLocation, struct FPoseLink* OffHandIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_TRE_Eoten_Overrides_C", "OffHandIK");

	Params::UABP_TRE_Eoten_Overrides_C_OffHandIK_Params Parms{};

	Parms.InPose_2 = InPose_2;
	Parms.InputIKSwitch = InputIKSwitch;
	Parms.InputIKLocation = InputIKLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (OffHandIK != nullptr)
		*OffHandIK = std::move(Parms.OffHandIK);

}


// Function ABP_TRE_Eoten_Overrides.ABP_TRE_Eoten_Overrides_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_TRE_Eoten_Overrides_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_TRE_Eoten_Overrides_C", "AnimGraph");

	Params::UABP_TRE_Eoten_Overrides_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_TRE_Eoten_Overrides.ABP_TRE_Eoten_Overrides_C.ExecuteUbergraph_ABP_TRE_Eoten_Overrides
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_TRE_Eoten_Overrides_C::ExecuteUbergraph_ABP_TRE_Eoten_Overrides(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_TRE_Eoten_Overrides_C", "ExecuteUbergraph_ABP_TRE_Eoten_Overrides");

	Params::UABP_TRE_Eoten_Overrides_C_ExecuteUbergraph_ABP_TRE_Eoten_Overrides_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


