#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_CC_FamilyMember.AnimBP_CC_FamilyMember_C
// (None)

class UClass* UAnimBP_CC_FamilyMember_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_CC_FamilyMember_C");

	return Clss;
}


// AnimBP_CC_FamilyMember_C AnimBP_CC_FamilyMember.Default__AnimBP_CC_FamilyMember_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_CC_FamilyMember_C* UAnimBP_CC_FamilyMember_C::GetDefaultObj()
{
	static class UAnimBP_CC_FamilyMember_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_CC_FamilyMember_C*>(UAnimBP_CC_FamilyMember_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_CC_FamilyMember.AnimBP_CC_FamilyMember_C.BodyMorph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose_0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   BodyMorph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_CC_FamilyMember_C::BodyMorph(const struct FPoseLink& InPose_0, struct FPoseLink* BodyMorph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_CC_FamilyMember_C", "BodyMorph");

	Params::UAnimBP_CC_FamilyMember_C_BodyMorph_Params Parms{};

	Parms.InPose_0 = InPose_0;

	UObject::ProcessEvent(Func, &Parms);

	if (BodyMorph != nullptr)
		*BodyMorph = std::move(Parms.BodyMorph);

}


// Function AnimBP_CC_FamilyMember.AnimBP_CC_FamilyMember_C.EyeMorph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   EyeMorph                                                         (Parm, OutParm, NoDestructor)

void UAnimBP_CC_FamilyMember_C::EyeMorph(const struct FPoseLink& InPose, struct FPoseLink* EyeMorph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_CC_FamilyMember_C", "EyeMorph");

	Params::UAnimBP_CC_FamilyMember_C_EyeMorph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (EyeMorph != nullptr)
		*EyeMorph = std::move(Parms.EyeMorph);

}


// Function AnimBP_CC_FamilyMember.AnimBP_CC_FamilyMember_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_CC_FamilyMember_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_CC_FamilyMember_C", "AnimGraph");

	Params::UAnimBP_CC_FamilyMember_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_CC_FamilyMember.AnimBP_CC_FamilyMember_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CC_FamilyMember_AnimGraphNode_ModifyBone_8E07728A4D1795754500AB8218E5839C
// (BlueprintEvent)
// Parameters:

void UAnimBP_CC_FamilyMember_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CC_FamilyMember_AnimGraphNode_ModifyBone_8E07728A4D1795754500AB8218E5839C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_CC_FamilyMember_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CC_FamilyMember_AnimGraphNode_ModifyBone_8E07728A4D1795754500AB8218E5839C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_CC_FamilyMember.AnimBP_CC_FamilyMember_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_CC_FamilyMember_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_CC_FamilyMember_C", "BlueprintUpdateAnimation");

	Params::UAnimBP_CC_FamilyMember_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimBP_CC_FamilyMember.AnimBP_CC_FamilyMember_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UAnimBP_CC_FamilyMember_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_CC_FamilyMember_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_CC_FamilyMember.AnimBP_CC_FamilyMember_C.ExecuteUbergraph_AnimBP_CC_FamilyMember
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C*K2Node_DynamicCast_AsBP_Character_Creation_Proxy_Char_Child_Ancestry(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_CC_FamilyMember_C::ExecuteUbergraph_AnimBP_CC_FamilyMember(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C* K2Node_DynamicCast_AsBP_Character_Creation_Proxy_Char_Child_Ancestry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_CC_FamilyMember_C", "ExecuteUbergraph_AnimBP_CC_FamilyMember");

	Params::UAnimBP_CC_FamilyMember_C_ExecuteUbergraph_AnimBP_CC_FamilyMember_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character_Creation_Proxy_Char_Child_Ancestry = K2Node_DynamicCast_AsBP_Character_Creation_Proxy_Char_Child_Ancestry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


