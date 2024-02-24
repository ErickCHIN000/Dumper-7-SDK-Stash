#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_HMU_CharacterCustomization_Override.ABP_HMU_CharacterCustomization_Override_C
// (None)

class UClass* UABP_HMU_CharacterCustomization_Override_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_HMU_CharacterCustomization_Override_C");

	return Clss;
}


// ABP_HMU_CharacterCustomization_Override_C ABP_HMU_CharacterCustomization_Override.Default__ABP_HMU_CharacterCustomization_Override_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_HMU_CharacterCustomization_Override_C* UABP_HMU_CharacterCustomization_Override_C::GetDefaultObj()
{
	static class UABP_HMU_CharacterCustomization_Override_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_HMU_CharacterCustomization_Override_C*>(UABP_HMU_CharacterCustomization_Override_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_HMU_CharacterCustomization_Override.ABP_HMU_CharacterCustomization_Override_C.BodyType
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class EBodyType               InBodyType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   BodyType                                                         (Parm, OutParm, NoDestructor)

void UABP_HMU_CharacterCustomization_Override_C::BodyType(const struct FPoseLink& InPose, enum class EBodyType InBodyType, struct FPoseLink* BodyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_CharacterCustomization_Override_C", "BodyType");

	Params::UABP_HMU_CharacterCustomization_Override_C_BodyType_Params Parms{};

	Parms.InPose = InPose;
	Parms.InBodyType = InBodyType;

	UObject::ProcessEvent(Func, &Parms);

	if (BodyType != nullptr)
		*BodyType = std::move(Parms.BodyType);

}


// Function ABP_HMU_CharacterCustomization_Override.ABP_HMU_CharacterCustomization_Override_C.EyeOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   EyeOffset                                                        (Parm, OutParm, NoDestructor)

void UABP_HMU_CharacterCustomization_Override_C::EyeOffset(const struct FPoseLink& InPose_0, const struct FVector& Offset, struct FPoseLink* EyeOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_CharacterCustomization_Override_C", "EyeOffset");

	Params::UABP_HMU_CharacterCustomization_Override_C_EyeOffset_Params Parms{};

	Parms.InPose_0 = InPose_0;
	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

	if (EyeOffset != nullptr)
		*EyeOffset = std::move(Parms.EyeOffset);

}


// Function ABP_HMU_CharacterCustomization_Override.ABP_HMU_CharacterCustomization_Override_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_HMU_CharacterCustomization_Override_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_CharacterCustomization_Override_C", "AnimGraph");

	Params::UABP_HMU_CharacterCustomization_Override_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_HMU_CharacterCustomization_Override.ABP_HMU_CharacterCustomization_Override_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_CharacterCustomization_Override_AnimGraphNode_ModifyBone_5E35D2B84D40BE0F83D2B0ACE50D1AAB
// (BlueprintEvent)
// Parameters:

void UABP_HMU_CharacterCustomization_Override_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_CharacterCustomization_Override_AnimGraphNode_ModifyBone_5E35D2B84D40BE0F83D2B0ACE50D1AAB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_CharacterCustomization_Override_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_CharacterCustomization_Override_AnimGraphNode_ModifyBone_5E35D2B84D40BE0F83D2B0ACE50D1AAB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_HMU_CharacterCustomization_Override.ABP_HMU_CharacterCustomization_Override_C.ExecuteUbergraph_ABP_HMU_CharacterCustomization_Override
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HMU_CharacterCustomization_Override_C::ExecuteUbergraph_ABP_HMU_CharacterCustomization_Override(int32 EntryPoint, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_HMU_CharacterCustomization_Override_C", "ExecuteUbergraph_ABP_HMU_CharacterCustomization_Override");

	Params::UABP_HMU_CharacterCustomization_Override_C_ExecuteUbergraph_ABP_HMU_CharacterCustomization_Override_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


