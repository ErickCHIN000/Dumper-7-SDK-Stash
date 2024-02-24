#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_PCK_Template.ABP_PCK_Template_C
// (None)

class UClass* UABP_PCK_Template_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_PCK_Template_C");

	return Clss;
}


// ABP_PCK_Template_C ABP_PCK_Template.Default__ABP_PCK_Template_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_PCK_Template_C* UABP_PCK_Template_C::GetDefaultObj()
{
	static class UABP_PCK_Template_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_PCK_Template_C*>(UABP_PCK_Template_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_PCK_Template.ABP_PCK_Template_C.SetAITarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AITarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PCK_Template_C::SetAITarget(class AActor* AITarget, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "SetAITarget");

	Params::UABP_PCK_Template_C_SetAITarget_Params Parms{};

	Parms.AITarget = AITarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.LoiterBehaviour
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   LoiterBehaviour                                                  (Parm, OutParm, NoDestructor)

void UABP_PCK_Template_C::LoiterBehaviour(const struct FPoseLink& InPose, struct FPoseLink* LoiterBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "LoiterBehaviour");

	Params::UABP_PCK_Template_C_LoiterBehaviour_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (LoiterBehaviour != nullptr)
		*LoiterBehaviour = std::move(Parms.LoiterBehaviour);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.Hand IK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     Hand_l                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Hand_l_Alpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Hand_IK                                                          (Parm, OutParm, NoDestructor)

void UABP_PCK_Template_C::Hand_IK(const struct FPoseLink& Input, const struct FVector& Hand_l, double Hand_l_Alpha, struct FPoseLink* Hand_IK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "Hand IK");

	Params::UABP_PCK_Template_C_Hand_IK_Params Parms{};

	Parms.Input = Input;
	Parms.Hand_l = Hand_l;
	Parms.Hand_l_Alpha = Hand_l_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Hand_IK != nullptr)
		*Hand_IK = std::move(Parms.Hand_IK);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.BoneAdditiveTransform
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_6                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             WorldTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   BoneAdditiveTransform                                            (Parm, OutParm, NoDestructor)

void UABP_PCK_Template_C::BoneAdditiveTransform(const struct FPoseLink& InPose_6, double WorldTime, struct FPoseLink* BoneAdditiveTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "BoneAdditiveTransform");

	Params::UABP_PCK_Template_C_BoneAdditiveTransform_Params Parms{};

	Parms.InPose_6 = InPose_6;
	Parms.WorldTime = WorldTime;

	UObject::ProcessEvent(Func, &Parms);

	if (BoneAdditiveTransform != nullptr)
		*BoneAdditiveTransform = std::move(Parms.BoneAdditiveTransform);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.Procedural_Walk
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

void UABP_PCK_Template_C::Procedural_Walk(const struct FPoseLink& InPose_5, bool WalkOn_, const struct FRotator& BodyRot, const struct FLegItem& Leg_ITM_0, const struct FLegItem& Leg_ITM_1, const struct FLegItem& Leg_ITM_2, const struct FLegItem& Leg_ITM_3, const struct FLegItem& Leg_ITM_4, const struct FLegItem& Leg_ITM_5, const struct FLegItem& Leg_ITM_6, const struct FLegItem& Leg_ITM_7, struct FPoseLink* Procedural_Walk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "Procedural_Walk");

	Params::UABP_PCK_Template_C_Procedural_Walk_Params Parms{};

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


// Function ABP_PCK_Template.ABP_PCK_Template_C.LookAtTarget
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_4                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             LookAtAlpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    LookAtRot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             EyeAlpha                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LookAtTarget                                                     (Parm, OutParm, NoDestructor)

void UABP_PCK_Template_C::LookAtTarget(const struct FPoseLink& InPose_4, double LookAtAlpha, const struct FRotator& LookAtRot, double EyeAlpha, struct FPoseLink* LookAtTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "LookAtTarget");

	Params::UABP_PCK_Template_C_LookAtTarget_Params Parms{};

	Parms.InPose_4 = InPose_4;
	Parms.LookAtAlpha = LookAtAlpha;
	Parms.LookAtRot = LookAtRot;
	Parms.EyeAlpha = EyeAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtTarget != nullptr)
		*LookAtTarget = std::move(Parms.LookAtTarget);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.GroundPowerIk
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               PowerIK_Switch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   GroundPowerIk                                                    (Parm, OutParm, NoDestructor)

void UABP_PCK_Template_C::GroundPowerIk(const struct FPoseLink& InPose_0, bool PowerIK_Switch, struct FPoseLink* GroundPowerIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "GroundPowerIk");

	Params::UABP_PCK_Template_C_GroundPowerIk_Params Parms{};

	Parms.InPose_0 = InPose_0;
	Parms.PowerIK_Switch = PowerIK_Switch;

	UObject::ProcessEvent(Func, &Parms);

	if (GroundPowerIk != nullptr)
		*GroundPowerIk = std::move(Parms.GroundPowerIk);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.ControlRig
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsMinHealth_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   ControlRig                                                       (Parm, OutParm, NoDestructor)

void UABP_PCK_Template_C::ControlRig(const struct FPoseLink& InPose_1, const struct FRotator& Rotation, bool IsMinHealth_, struct FPoseLink* ControlRig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "ControlRig");

	Params::UABP_PCK_Template_C_ControlRig_Params Parms{};

	Parms.InPose_1 = InPose_1;
	Parms.Rotation = Rotation;
	Parms.IsMinHealth_ = IsMinHealth_;

	UObject::ProcessEvent(Func, &Parms);

	if (ControlRig != nullptr)
		*ControlRig = std::move(Parms.ControlRig);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.OffHandIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               InputIKSwitch                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InputIKLocation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   OffHandIK                                                        (Parm, OutParm, NoDestructor)

void UABP_PCK_Template_C::OffHandIK(const struct FPoseLink& InPose_2, bool InputIKSwitch, const struct FVector& InputIKLocation, struct FPoseLink* OffHandIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "OffHandIK");

	Params::UABP_PCK_Template_C_OffHandIK_Params Parms{};

	Parms.InPose_2 = InPose_2;
	Parms.InputIKSwitch = InputIKSwitch;
	Parms.InputIKLocation = InputIKLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (OffHandIK != nullptr)
		*OffHandIK = std::move(Parms.OffHandIK);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.Dynamics
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_3                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             InDynamicsAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Dynamics                                                         (Parm, OutParm, NoDestructor)

void UABP_PCK_Template_C::Dynamics(const struct FPoseLink& InPose_3, double InDynamicsAlpha, struct FPoseLink* Dynamics)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "Dynamics");

	Params::UABP_PCK_Template_C_Dynamics_Params Parms{};

	Parms.InPose_3 = InPose_3;
	Parms.InDynamicsAlpha = InDynamicsAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Dynamics != nullptr)
		*Dynamics = std::move(Parms.Dynamics);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_PCK_Template_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "AnimGraph");

	Params::UABP_PCK_Template_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.SetIsInHitResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInHitResponse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PCK_Template_C::SetIsInHitResponse(bool IsInHitResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "SetIsInHitResponse");

	Params::UABP_PCK_Template_C_SetIsInHitResponse_Params Parms{};

	Parms.IsInHitResponse = IsInHitResponse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_PCK_Template_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PCK_Template_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "BlueprintUpdateAnimation");

	Params::UABP_PCK_Template_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_PCK_Template.ABP_PCK_Template_C.ExecuteUbergraph_ABP_PCK_Template
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsInHitResponse                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PCK_Template_C::ExecuteUbergraph_ABP_PCK_Template(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsInHitResponse, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, float CallFunc_Montage_Play_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PCK_Template_C", "ExecuteUbergraph_ABP_PCK_Template");

	Params::UABP_PCK_Template_C_ExecuteUbergraph_ABP_PCK_Template_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_IsInHitResponse = K2Node_Event_IsInHitResponse;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


