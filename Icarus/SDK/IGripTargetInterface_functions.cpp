#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IGripTargetInterface.IGripTargetInterface_C
// (None)

class UClass* IIGripTargetInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IGripTargetInterface_C");

	return Clss;
}


// IGripTargetInterface_C IGripTargetInterface.Default__IGripTargetInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIGripTargetInterface_C* IIGripTargetInterface_C::GetDefaultObj()
{
	static class IIGripTargetInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIGripTargetInterface_C*>(IIGripTargetInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IGripTargetInterface.IGripTargetInterface_C.FindBestCharacterUpAxisDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForLeftHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     UpAxisDirection                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIGripTargetInterface_C::FindBestCharacterUpAxisDirection(class AIcarusPlayerCharacter* Character, bool ForLeftHand, const struct FVector& TargetLocation, bool* Success, struct FVector* UpAxisDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IGripTargetInterface_C", "FindBestCharacterUpAxisDirection");

	Params::IIGripTargetInterface_C_FindBestCharacterUpAxisDirection_Params Parms{};

	Parms.Character = Character;
	Parms.ForLeftHand = ForLeftHand;
	Parms.TargetLocation = TargetLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (UpAxisDirection != nullptr)
		*UpAxisDirection = std::move(Parms.UpAxisDirection);

}


// Function IGripTargetInterface.IGripTargetInterface_C.FindBestCharacterDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForLeftHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     BestDirection                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIGripTargetInterface_C::FindBestCharacterDirection(class AIcarusPlayerCharacter* Character, bool ForLeftHand, const struct FVector& TargetLocation, bool* Success, struct FVector* BestDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IGripTargetInterface_C", "FindBestCharacterDirection");

	Params::IIGripTargetInterface_C_FindBestCharacterDirection_Params Parms{};

	Parms.Character = Character;
	Parms.ForLeftHand = ForLeftHand;
	Parms.TargetLocation = TargetLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (BestDirection != nullptr)
		*BestDirection = std::move(Parms.BestDirection);

}


// Function IGripTargetInterface.IGripTargetInterface_C.FindBestCharacterLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForLeftHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     BestLocation                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIGripTargetInterface_C::FindBestCharacterLocation(class AIcarusPlayerCharacter* Character, bool ForLeftHand, const struct FVector& TargetLocation, bool* Success, struct FVector* BestLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IGripTargetInterface_C", "FindBestCharacterLocation");

	Params::IIGripTargetInterface_C_FindBestCharacterLocation_Params Parms{};

	Parms.Character = Character;
	Parms.ForLeftHand = ForLeftHand;
	Parms.TargetLocation = TargetLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (BestLocation != nullptr)
		*BestLocation = std::move(Parms.BestLocation);

}


// Function IGripTargetInterface.IGripTargetInterface_C.FindBestAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    TargetRotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                GripMontage                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIGripTargetInterface_C::FindBestAnimation(const struct FVector& TargetLocation, const struct FRotator& TargetRotation, bool* Success, class UAnimMontage** GripMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IGripTargetInterface_C", "FindBestAnimation");

	Params::IIGripTargetInterface_C_FindBestAnimation_Params Parms{};

	Parms.TargetLocation = TargetLocation;
	Parms.TargetRotation = TargetRotation;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (GripMontage != nullptr)
		*GripMontage = Parms.GripMontage;

}


// Function IGripTargetInterface.IGripTargetInterface_C.FindBestGripTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForLeftHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    TargetRotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  BestTransform                                                    (Parm, OutParm, IsPlainOldData, NoDestructor)

void IIGripTargetInterface_C::FindBestGripTransform(bool ForLeftHand, const struct FVector& TargetLocation, const struct FRotator& TargetRotation, struct FTransform* BestTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IGripTargetInterface_C", "FindBestGripTransform");

	Params::IIGripTargetInterface_C_FindBestGripTransform_Params Parms{};

	Parms.ForLeftHand = ForLeftHand;
	Parms.TargetLocation = TargetLocation;
	Parms.TargetRotation = TargetRotation;

	UObject::ProcessEvent(Func, &Parms);

	if (BestTransform != nullptr)
		*BestTransform = std::move(Parms.BestTransform);

}

}


