#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALI_HMU_CharacterCustomization.ALI_HMU_CharacterCustomization_C
// (None)

class UClass* IALI_HMU_CharacterCustomization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALI_HMU_CharacterCustomization_C");

	return Clss;
}


// ALI_HMU_CharacterCustomization_C ALI_HMU_CharacterCustomization.Default__ALI_HMU_CharacterCustomization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALI_HMU_CharacterCustomization_C* IALI_HMU_CharacterCustomization_C::GetDefaultObj()
{
	static class IALI_HMU_CharacterCustomization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALI_HMU_CharacterCustomization_C*>(IALI_HMU_CharacterCustomization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALI_HMU_CharacterCustomization.ALI_HMU_CharacterCustomization_C.EyeOffset
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose_0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   EyeOffset                                                        (Parm, OutParm, NoDestructor)

void IALI_HMU_CharacterCustomization_C::EyeOffset(const struct FPoseLink& InPose_0, const struct FVector& Offset, struct FPoseLink* EyeOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_HMU_CharacterCustomization_C", "EyeOffset");

	Params::IALI_HMU_CharacterCustomization_C_EyeOffset_Params Parms{};

	Parms.InPose_0 = InPose_0;
	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

	if (EyeOffset != nullptr)
		*EyeOffset = std::move(Parms.EyeOffset);

}


// Function ALI_HMU_CharacterCustomization.ALI_HMU_CharacterCustomization_C.BodyType
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class EBodyType               InBodyType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   BodyType                                                         (Parm, OutParm, NoDestructor)

void IALI_HMU_CharacterCustomization_C::BodyType(const struct FPoseLink& InPose, enum class EBodyType InBodyType, struct FPoseLink* BodyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_HMU_CharacterCustomization_C", "BodyType");

	Params::IALI_HMU_CharacterCustomization_C_BodyType_Params Parms{};

	Parms.InPose = InPose;
	Parms.InBodyType = InBodyType;

	UObject::ProcessEvent(Func, &Parms);

	if (BodyType != nullptr)
		*BodyType = std::move(Parms.BodyType);

}

}


