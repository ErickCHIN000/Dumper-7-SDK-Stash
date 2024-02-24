#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C
// (None)

class UClass* UABP_HMU_NPC_Template_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_HMU_NPC_Template_C");

	return Clss;
}


// ABP_HMU_NPC_Template_C ABP_HMU_NPC_Template.Default__ABP_HMU_NPC_Template_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_HMU_NPC_Template_C* UABP_HMU_NPC_Template_C::GetDefaultObj()
{
	static class UABP_HMU_NPC_Template_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_HMU_NPC_Template_C*>(UABP_HMU_NPC_Template_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.GroundPowerIk
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               PowerIK_Switch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   GroundPowerIk                                                    (Parm, OutParm, NoDestructor)

void UABP_HMU_NPC_Template_C::GroundPowerIk(const struct FPoseLink& InPose_0, bool PowerIK_Switch, struct FPoseLink* GroundPowerIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "GroundPowerIk");

	Params::UABP_HMU_NPC_Template_C_GroundPowerIk_Params Parms{};

	Parms.InPose_0 = InPose_0;
	Parms.PowerIK_Switch = PowerIK_Switch;

	UObject::ProcessEvent(Func, &Parms);

	if (GroundPowerIk != nullptr)
		*GroundPowerIk = std::move(Parms.GroundPowerIk);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.ControlRig
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsMinHealth_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   ControlRig                                                       (Parm, OutParm, NoDestructor)

void UABP_HMU_NPC_Template_C::ControlRig(const struct FPoseLink& InPose_1, const struct FRotator& Rotation, bool IsMinHealth_, struct FPoseLink* ControlRig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "ControlRig");

	Params::UABP_HMU_NPC_Template_C_ControlRig_Params Parms{};

	Parms.InPose_1 = InPose_1;
	Parms.Rotation = Rotation;
	Parms.IsMinHealth_ = IsMinHealth_;

	UObject::ProcessEvent(Func, &Parms);

	if (ControlRig != nullptr)
		*ControlRig = std::move(Parms.ControlRig);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.OffHandIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               InputIKSwitch                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InputIKLocation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   OffHandIK                                                        (Parm, OutParm, NoDestructor)

void UABP_HMU_NPC_Template_C::OffHandIK(const struct FPoseLink& InPose_2, bool InputIKSwitch, const struct FVector& InputIKLocation, struct FPoseLink* OffHandIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "OffHandIK");

	Params::UABP_HMU_NPC_Template_C_OffHandIK_Params Parms{};

	Parms.InPose_2 = InPose_2;
	Parms.InputIKSwitch = InputIKSwitch;
	Parms.InputIKLocation = InputIKLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (OffHandIK != nullptr)
		*OffHandIK = std::move(Parms.OffHandIK);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.Dynamics
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_3                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             InDynamicsAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Dynamics                                                         (Parm, OutParm, NoDestructor)

void UABP_HMU_NPC_Template_C::Dynamics(const struct FPoseLink& InPose_3, double InDynamicsAlpha, struct FPoseLink* Dynamics)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "Dynamics");

	Params::UABP_HMU_NPC_Template_C_Dynamics_Params Parms{};

	Parms.InPose_3 = InPose_3;
	Parms.InDynamicsAlpha = InDynamicsAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Dynamics != nullptr)
		*Dynamics = std::move(Parms.Dynamics);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.LookAtTarget
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_4                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             LookAtAlpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    LookAtRot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             EyeAlpha                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LookAtTarget                                                     (Parm, OutParm, NoDestructor)

void UABP_HMU_NPC_Template_C::LookAtTarget(const struct FPoseLink& InPose_4, double LookAtAlpha, const struct FRotator& LookAtRot, double EyeAlpha, struct FPoseLink* LookAtTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "LookAtTarget");

	Params::UABP_HMU_NPC_Template_C_LookAtTarget_Params Parms{};

	Parms.InPose_4 = InPose_4;
	Parms.LookAtAlpha = LookAtAlpha;
	Parms.LookAtRot = LookAtRot;
	Parms.EyeAlpha = EyeAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtTarget != nullptr)
		*LookAtTarget = std::move(Parms.LookAtTarget);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.Procedural_Walk
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

void UABP_HMU_NPC_Template_C::Procedural_Walk(const struct FPoseLink& InPose_5, bool WalkOn_, const struct FRotator& BodyRot, const struct FLegItem& Leg_ITM_0, const struct FLegItem& Leg_ITM_1, const struct FLegItem& Leg_ITM_2, const struct FLegItem& Leg_ITM_3, const struct FLegItem& Leg_ITM_4, const struct FLegItem& Leg_ITM_5, const struct FLegItem& Leg_ITM_6, const struct FLegItem& Leg_ITM_7, struct FPoseLink* Procedural_Walk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "Procedural_Walk");

	Params::UABP_HMU_NPC_Template_C_Procedural_Walk_Params Parms{};

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


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.BoneAdditiveTransform
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_6                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             WorldTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   BoneAdditiveTransform                                            (Parm, OutParm, NoDestructor)

void UABP_HMU_NPC_Template_C::BoneAdditiveTransform(const struct FPoseLink& InPose_6, double WorldTime, struct FPoseLink* BoneAdditiveTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "BoneAdditiveTransform");

	Params::UABP_HMU_NPC_Template_C_BoneAdditiveTransform_Params Parms{};

	Parms.InPose_6 = InPose_6;
	Parms.WorldTime = WorldTime;

	UObject::ProcessEvent(Func, &Parms);

	if (BoneAdditiveTransform != nullptr)
		*BoneAdditiveTransform = std::move(Parms.BoneAdditiveTransform);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.Hand IK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     Hand_l                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Hand_l_Alpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Hand_IK                                                          (Parm, OutParm, NoDestructor)

void UABP_HMU_NPC_Template_C::Hand_IK(const struct FPoseLink& Input, const struct FVector& Hand_l, double Hand_l_Alpha, struct FPoseLink* Hand_IK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "Hand IK");

	Params::UABP_HMU_NPC_Template_C_Hand_IK_Params Parms{};

	Parms.Input = Input;
	Parms.Hand_l = Hand_l;
	Parms.Hand_l_Alpha = Hand_l_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Hand_IK != nullptr)
		*Hand_IK = std::move(Parms.Hand_IK);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.BodyMorph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose_0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   BodyMorph                                                        (Parm, OutParm, NoDestructor)

void UABP_HMU_NPC_Template_C::BodyMorph(const struct FPoseLink& InPose_0, struct FPoseLink* BodyMorph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "BodyMorph");

	Params::UABP_HMU_NPC_Template_C_BodyMorph_Params Parms{};

	Parms.InPose_0 = InPose_0;

	UObject::ProcessEvent(Func, &Parms);

	if (BodyMorph != nullptr)
		*BodyMorph = std::move(Parms.BodyMorph);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.EyeMorph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     EyeOffset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   EyeMorph                                                         (Parm, OutParm, NoDestructor)

void UABP_HMU_NPC_Template_C::EyeMorph(const struct FPoseLink& InPose, const struct FVector& EyeOffset, struct FPoseLink* EyeMorph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "EyeMorph");

	Params::UABP_HMU_NPC_Template_C_EyeMorph_Params Parms{};

	Parms.InPose = InPose;
	Parms.EyeOffset = EyeOffset;

	UObject::ProcessEvent(Func, &Parms);

	if (EyeMorph != nullptr)
		*EyeMorph = std::move(Parms.EyeMorph);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.BlendLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   Base_Layer_Input                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Overlay_Layer_Input                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Base_Poses_Input                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   BlendLayer                                                       (Parm, OutParm, NoDestructor)

void UABP_HMU_NPC_Template_C::BlendLayer(const struct FPoseLink& Base_Layer_Input, const struct FPoseLink& Overlay_Layer_Input, const struct FPoseLink& Base_Poses_Input, struct FPoseLink* BlendLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "BlendLayer");

	Params::UABP_HMU_NPC_Template_C_BlendLayer_Params Parms{};

	Parms.Base_Layer_Input = Base_Layer_Input;
	Parms.Overlay_Layer_Input = Overlay_Layer_Input;
	Parms.Base_Poses_Input = Base_Poses_Input;

	UObject::ProcessEvent(Func, &Parms);

	if (BlendLayer != nullptr)
		*BlendLayer = std::move(Parms.BlendLayer);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_HMU_NPC_Template_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "AnimGraph");

	Params::UABP_HMU_NPC_Template_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.SetAnimOverlayUnarmed
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      WarningMessage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EAlertnessLevelType     CallFunc_GetCachedAlertness_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::SetAnimOverlayUnarmed(const class FString& WarningMessage, enum class EAlertnessLevelType CallFunc_GetCachedAlertness_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "SetAnimOverlayUnarmed");

	Params::UABP_HMU_NPC_Template_C_SetAnimOverlayUnarmed_Params Parms{};

	Parms.WarningMessage = WarningMessage;
	Parms.CallFunc_GetCachedAlertness_ReturnValue = CallFunc_GetCachedAlertness_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.UpdateAnimOverlayBank
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         AnimDataHandle                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// enum class EAlertnessLevelType     CallFunc_GetCachedAlertness_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FS_OverlayBankSet           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::UpdateAnimOverlayBank(struct FDataTableRowHandle& AnimDataHandle, enum class EAlertnessLevelType CallFunc_GetCachedAlertness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FS_OverlayBankSet& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "UpdateAnimOverlayBank");

	Params::UABP_HMU_NPC_Template_C_UpdateAnimOverlayBank_Params Parms{};

	Parms.AnimDataHandle = AnimDataHandle;
	Parms.CallFunc_GetCachedAlertness_ReturnValue = CallFunc_GetCachedAlertness_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.SetOverlayAnimBank_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UOverlay_AnimB_Base_C>RequestedAnimOverlay                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UClass*                      LoadedClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsOverlay_Anim_B_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay_AnimB_Base_C*       CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::SetOverlayAnimBank_Internal(TSoftClassPtr<class UOverlay_AnimB_Base_C> RequestedAnimOverlay, class UClass* LoadedClass, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsOverlay_Anim_B_Base, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UOverlay_AnimB_Base_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "SetOverlayAnimBank_Internal");

	Params::UABP_HMU_NPC_Template_C_SetOverlayAnimBank_Internal_Params Parms{};

	Parms.RequestedAnimOverlay = RequestedAnimOverlay;
	Parms.LoadedClass = LoadedClass;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsOverlay_Anim_B_Base = K2Node_ClassDynamicCast_AsOverlay_Anim_B_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.GetCurveValuesThreadSafe
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_16                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Arm_R_Add_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Arm_L_Add_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Head_Add_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Spine_Add_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_BasePose_Crouch_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_BasePose_Stand_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Arm_L_LS_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Arm_R_LS_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Pelvis_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Legs_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Hand_R_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Hand_L_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::GetCurveValuesThreadSafe(float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_3, float CallFunc_GetCurveValue_ReturnValue_4, float CallFunc_GetCurveValue_ReturnValue_5, float CallFunc_GetCurveValue_ReturnValue_6, float CallFunc_GetCurveValue_ReturnValue_7, double CallFunc_Lerp_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_8, float CallFunc_GetCurveValue_ReturnValue_9, float CallFunc_GetCurveValue_ReturnValue_10, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_11, float CallFunc_GetCurveValue_ReturnValue_12, float CallFunc_GetCurveValue_ReturnValue_13, float CallFunc_GetCurveValue_ReturnValue_14, float CallFunc_GetCurveValue_ReturnValue_15, float CallFunc_GetCurveValue_ReturnValue_16, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double K2Node_VariableSet_Arm_R_Add_ImplicitCast, double K2Node_VariableSet_Arm_L_Add_ImplicitCast, double K2Node_VariableSet_Head_Add_ImplicitCast, double K2Node_VariableSet_Spine_Add_ImplicitCast, double K2Node_VariableSet_BasePose_Crouch_ImplicitCast, double K2Node_VariableSet_BasePose_Stand_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_2, double K2Node_VariableSet_Arm_L_LS_ImplicitCast, double K2Node_VariableSet_Arm_R_LS_ImplicitCast, double K2Node_VariableSet_Pelvis_ImplicitCast, double K2Node_VariableSet_Legs_ImplicitCast, double K2Node_VariableSet_Hand_R_ImplicitCast, double K2Node_VariableSet_Hand_L_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "GetCurveValuesThreadSafe");

	Params::UABP_HMU_NPC_Template_C_GetCurveValuesThreadSafe_Params Parms{};

	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue_1 = CallFunc_GetCurveValue_ReturnValue_1;
	Parms.CallFunc_GetCurveValue_ReturnValue_2 = CallFunc_GetCurveValue_ReturnValue_2;
	Parms.CallFunc_GetCurveValue_ReturnValue_3 = CallFunc_GetCurveValue_ReturnValue_3;
	Parms.CallFunc_GetCurveValue_ReturnValue_4 = CallFunc_GetCurveValue_ReturnValue_4;
	Parms.CallFunc_GetCurveValue_ReturnValue_5 = CallFunc_GetCurveValue_ReturnValue_5;
	Parms.CallFunc_GetCurveValue_ReturnValue_6 = CallFunc_GetCurveValue_ReturnValue_6;
	Parms.CallFunc_GetCurveValue_ReturnValue_7 = CallFunc_GetCurveValue_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue_8 = CallFunc_GetCurveValue_ReturnValue_8;
	Parms.CallFunc_GetCurveValue_ReturnValue_9 = CallFunc_GetCurveValue_ReturnValue_9;
	Parms.CallFunc_GetCurveValue_ReturnValue_10 = CallFunc_GetCurveValue_ReturnValue_10;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_GetCurveValue_ReturnValue_11 = CallFunc_GetCurveValue_ReturnValue_11;
	Parms.CallFunc_GetCurveValue_ReturnValue_12 = CallFunc_GetCurveValue_ReturnValue_12;
	Parms.CallFunc_GetCurveValue_ReturnValue_13 = CallFunc_GetCurveValue_ReturnValue_13;
	Parms.CallFunc_GetCurveValue_ReturnValue_14 = CallFunc_GetCurveValue_ReturnValue_14;
	Parms.CallFunc_GetCurveValue_ReturnValue_15 = CallFunc_GetCurveValue_ReturnValue_15;
	Parms.CallFunc_GetCurveValue_ReturnValue_16 = CallFunc_GetCurveValue_ReturnValue_16;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.K2Node_VariableSet_Arm_R_Add_ImplicitCast = K2Node_VariableSet_Arm_R_Add_ImplicitCast;
	Parms.K2Node_VariableSet_Arm_L_Add_ImplicitCast = K2Node_VariableSet_Arm_L_Add_ImplicitCast;
	Parms.K2Node_VariableSet_Head_Add_ImplicitCast = K2Node_VariableSet_Head_Add_ImplicitCast;
	Parms.K2Node_VariableSet_Spine_Add_ImplicitCast = K2Node_VariableSet_Spine_Add_ImplicitCast;
	Parms.K2Node_VariableSet_BasePose_Crouch_ImplicitCast = K2Node_VariableSet_BasePose_Crouch_ImplicitCast;
	Parms.K2Node_VariableSet_BasePose_Stand_ImplicitCast = K2Node_VariableSet_BasePose_Stand_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast_1 = CallFunc_Lerp_B_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.K2Node_VariableSet_Arm_L_LS_ImplicitCast = K2Node_VariableSet_Arm_L_LS_ImplicitCast;
	Parms.K2Node_VariableSet_Arm_R_LS_ImplicitCast = K2Node_VariableSet_Arm_R_LS_ImplicitCast;
	Parms.K2Node_VariableSet_Pelvis_ImplicitCast = K2Node_VariableSet_Pelvis_ImplicitCast;
	Parms.K2Node_VariableSet_Legs_ImplicitCast = K2Node_VariableSet_Legs_ImplicitCast;
	Parms.K2Node_VariableSet_Hand_R_ImplicitCast = K2Node_VariableSet_Hand_R_ImplicitCast;
	Parms.K2Node_VariableSet_Hand_L_ImplicitCast = K2Node_VariableSet_Hand_L_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "BlueprintThreadSafeUpdateAnimation");

	Params::UABP_HMU_NPC_Template_C_BlueprintThreadSafeUpdateAnimation_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.InitializeAnimBanks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay_AnimB_Unarmed_C*    CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOverlay_AnimB_Unarmed_C*    CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::InitializeAnimBanks(class UOverlay_AnimB_Unarmed_C* CallFunc_SpawnObject_ReturnValue, class UOverlay_AnimB_Unarmed_C* CallFunc_SpawnObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "InitializeAnimBanks");

	Params::UABP_HMU_NPC_Template_C_InitializeAnimBanks_Params Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.SetCharacterEyeScale
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::SetCharacterEyeScale(float& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "SetCharacterEyeScale");

	Params::UABP_HMU_NPC_Template_C_SetCharacterEyeScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.LinkAndUpdateAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_HMU_NPC_Template_C::LinkAndUpdateAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "LinkAndUpdateAnimations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.InitializeReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_HMU_NPC_Template_C::InitializeReferences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "InitializeReferences");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.OnLoaded_B1D25BAB4E7EBDE224C3A7B4A75F10A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::OnLoaded_B1D25BAB4E7EBDE224C3A7B4A75F10A8(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "OnLoaded_B1D25BAB4E7EBDE224C3A7B4A75F10A8");

	Params::UABP_HMU_NPC_Template_C_OnLoaded_B1D25BAB4E7EBDE224C3A7B4A75F10A8_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_020FB67D4347BD7C26918FAA3F065ED3
// (BlueprintEvent)
// Parameters:

void UABP_HMU_NPC_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_020FB67D4347BD7C26918FAA3F065ED3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_020FB67D4347BD7C26918FAA3F065ED3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_9BAD81CB4DBD6F3756397BA18B8FCC15
// (BlueprintEvent)
// Parameters:

void UABP_HMU_NPC_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_9BAD81CB4DBD6F3756397BA18B8FCC15()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_9BAD81CB4DBD6F3756397BA18B8FCC15");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_A932E5D642FE7AF7B898588EF29F7AE9
// (BlueprintEvent)
// Parameters:

void UABP_HMU_NPC_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_A932E5D642FE7AF7B898588EF29F7AE9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_A932E5D642FE7AF7B898588EF29F7AE9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_C3F963F64C5461D250CA2AAC99C0688E
// (BlueprintEvent)
// Parameters:

void UABP_HMU_NPC_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_C3F963F64C5461D250CA2AAC99C0688E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_C3F963F64C5461D250CA2AAC99C0688E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_ModifyBone_C84170DE436CCCFC578254847C437853
// (BlueprintEvent)
// Parameters:

void UABP_HMU_NPC_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_ModifyBone_C84170DE436CCCFC578254847C437853()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_ModifyBone_C84170DE436CCCFC578254847C437853");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_HMU_NPC_Template_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.Event Set Overlay Anim Bank (Async Load)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UOverlay_AnimB_Base_C>Requested_Overlay_Bank                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::Event_Set_Overlay_Anim_Bank__Async_Load_(TSoftClassPtr<class UOverlay_AnimB_Base_C> Requested_Overlay_Bank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "Event Set Overlay Anim Bank (Async Load)");

	Params::UABP_HMU_NPC_Template_C_Event_Set_Overlay_Anim_Bank__Async_Load__Params Parms{};

	Parms.Requested_Overlay_Bank = Requested_Overlay_Bank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.SetCharacterEyeOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Offset                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::SetCharacterEyeOffset(struct FVector& Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "SetCharacterEyeOffset");

	Params::UABP_HMU_NPC_Template_C_SetCharacterEyeOffset_Params Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.SetCharacterBodyType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBodyType               Type                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::SetCharacterBodyType(enum class EBodyType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "SetCharacterBodyType");

	Params::UABP_HMU_NPC_Template_C_SetCharacterBodyType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_HMU_NPC_Template_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.OnDownChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDown_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::OnDownChange(bool IsDown_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "OnDownChange");

	Params::UABP_HMU_NPC_Template_C_OnDownChange_Params Parms{};

	Parms.IsDown_ = IsDown_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C.ExecuteUbergraph_ABP_HMU_NPC_Template
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Scale                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsOverlay_Anim_B_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UOverlay_AnimB_Base_C>K2Node_CustomEvent_Requested_Overlay_Bank                        (HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Offset                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBodyType               K2Node_Event_Type                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsDown_                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_Human_C*    K2Node_DynamicCast_AsBP_Creature_NPC_Human                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HMU_NPC_Template_C::ExecuteUbergraph_ABP_HMU_NPC_Template(int32 EntryPoint, float K2Node_Event_Scale, class UClass* Temp_class_Variable, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* K2Node_ClassDynamicCast_AsOverlay_Anim_B_Base, bool K2Node_ClassDynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSoftClassPtr<class UOverlay_AnimB_Base_C> K2Node_CustomEvent_Requested_Overlay_Bank, const struct FVector& K2Node_Event_Offset, enum class EBodyType K2Node_Event_Type, bool K2Node_CustomEvent_IsDown_, class ABP_Creature_NPC_Human_C* K2Node_DynamicCast_AsBP_Creature_NPC_Human, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_NPC_Template_C", "ExecuteUbergraph_ABP_HMU_NPC_Template");

	Params::UABP_HMU_NPC_Template_C_ExecuteUbergraph_ABP_HMU_NPC_Template_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Scale = K2Node_Event_Scale;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_ClassDynamicCast_AsOverlay_Anim_B_Base = K2Node_ClassDynamicCast_AsOverlay_Anim_B_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Requested_Overlay_Bank = K2Node_CustomEvent_Requested_Overlay_Bank;
	Parms.K2Node_Event_Offset = K2Node_Event_Offset;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_CustomEvent_IsDown_ = K2Node_CustomEvent_IsDown_;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC_Human = K2Node_DynamicCast_AsBP_Creature_NPC_Human;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


