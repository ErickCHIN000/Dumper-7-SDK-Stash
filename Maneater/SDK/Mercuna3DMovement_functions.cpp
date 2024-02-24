#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Mercuna3DMovement.Mercuna3DMovementComponent
// (None)

class UClass* UMercuna3DMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mercuna3DMovementComponent");

	return Clss;
}


// Mercuna3DMovementComponent Mercuna3DMovement.Default__Mercuna3DMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMercuna3DMovementComponent* UMercuna3DMovementComponent::GetDefaultObj()
{
	static class UMercuna3DMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercuna3DMovementComponent*>(UMercuna3DMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna3DMovement.Mercuna3DMovementComponent.SetVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewVelocity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercuna3DMovementComponent::SetVelocity(const struct FVector& NewVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mercuna3DMovementComponent", "SetVelocity");

	Params::UMercuna3DMovementComponent_SetVelocity_Params Parms{};

	Parms.NewVelocity = NewVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna3DMovement.Mercuna3DMovementComponent.SetAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewAngVel                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercuna3DMovementComponent::SetAngularVelocity(const struct FVector& NewAngVel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mercuna3DMovementComponent", "SetAngularVelocity");

	Params::UMercuna3DMovementComponent_SetAngularVelocity_Params Parms{};

	Parms.NewAngVel = NewAngVel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMercuna3DMovementComponent::GetLocalVelocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mercuna3DMovementComponent", "GetLocalVelocity");

	Params::UMercuna3DMovementComponent_GetLocalVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalRotationRate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UMercuna3DMovementComponent::GetLocalRotationRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mercuna3DMovementComponent", "GetLocalRotationRate");

	Params::UMercuna3DMovementComponent_GetLocalRotationRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna3DMovement.Mercuna3DMovementComponent.AddImpulse
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Impulse                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercuna3DMovementComponent::AddImpulse(const struct FVector& Impulse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mercuna3DMovementComponent", "AddImpulse");

	Params::UMercuna3DMovementComponent_AddImpulse_Params Parms{};

	Parms.Impulse = Impulse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Mercuna3DMovement.Mercuna3DMovementInterface
// (None)

class UClass* IMercuna3DMovementInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mercuna3DMovementInterface");

	return Clss;
}


// Mercuna3DMovementInterface Mercuna3DMovement.Default__Mercuna3DMovementInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMercuna3DMovementInterface* IMercuna3DMovementInterface::GetDefaultObj()
{
	static class IMercuna3DMovementInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMercuna3DMovementInterface*>(IMercuna3DMovementInterface::StaticClass()->DefaultObject);

	return Default;
}

}


