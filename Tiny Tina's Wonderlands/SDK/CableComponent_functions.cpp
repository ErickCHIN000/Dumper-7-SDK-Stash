#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CableComponent.CableActor
// (Actor)

class UClass* ACableActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CableActor");

	return Clss;
}


// CableActor CableComponent.Default__CableActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ACableActor* ACableActor::GetDefaultObj()
{
	static class ACableActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ACableActor*>(ACableActor::StaticClass()->DefaultObject);

	return Default;
}


// Class CableComponent.CableComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UCableComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CableComponent");

	return Clss;
}


// CableComponent CableComponent.Default__CableComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCableComponent* UCableComponent::GetDefaultObj()
{
	static class UCableComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCableComponent*>(UCableComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CableComponent.CableComponent.SetAttachEndTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ComponentProperty                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCableComponent::SetAttachEndTo(class AActor* Actor, class FName ComponentProperty, class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "SetAttachEndTo");

	Params::UCableComponent_SetAttachEndTo_Params Parms{};

	Parms.Actor = Actor;
	Parms.ComponentProperty = ComponentProperty;
	Parms.SocketName = SocketName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CableComponent.CableComponent.GetTransformAtRatio
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Ratio                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     RefUp                                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UCableComponent::GetTransformAtRatio(float Ratio, const struct FVector& RefUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "GetTransformAtRatio");

	Params::UCableComponent_GetTransformAtRatio_Params Parms{};

	Parms.Ratio = Ratio;
	Parms.RefUp = RefUp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CableComponent.CableComponent.GetTransformAtDistance
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     RefUp                                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutIsAtEnd                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UCableComponent::GetTransformAtDistance(float Distance, const struct FVector& RefUp, bool* bOutIsAtEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "GetTransformAtDistance");

	Params::UCableComponent_GetTransformAtDistance_Params Parms{};

	Parms.Distance = Distance;
	Parms.RefUp = RefUp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOutIsAtEnd != nullptr)
		*bOutIsAtEnd = Parms.bOutIsAtEnd;

	return Parms.ReturnValue;

}


// Function CableComponent.CableComponent.GetSimulatedCableLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCableComponent::GetSimulatedCableLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "GetSimulatedCableLength");

	Params::UCableComponent_GetSimulatedCableLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CableComponent.CableComponent.GetCableParticleLocations
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             Locations                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCableComponent::GetCableParticleLocations(TArray<struct FVector>* Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "GetCableParticleLocations");

	Params::UCableComponent_GetCableParticleLocations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Locations != nullptr)
		*Locations = std::move(Parms.Locations);

}


// Function CableComponent.CableComponent.GetAttachedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USceneComponent* UCableComponent::GetAttachedComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "GetAttachedComponent");

	Params::UCableComponent_GetAttachedComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CableComponent.CableComponent.GetAttachedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UCableComponent::GetAttachedActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CableComponent", "GetAttachedActor");

	Params::UCableComponent_GetAttachedActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CableComponent.FollowCableMovementComponent
// (None)

class UClass* UFollowCableMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FollowCableMovementComponent");

	return Clss;
}


// FollowCableMovementComponent CableComponent.Default__FollowCableMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFollowCableMovementComponent* UFollowCableMovementComponent::GetDefaultObj()
{
	static class UFollowCableMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFollowCableMovementComponent*>(UFollowCableMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CableComponent.FollowCableMovementComponent.EnableMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResetPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFollowCableMovementComponent::EnableMovement(bool bEnable, bool bResetPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FollowCableMovementComponent", "EnableMovement");

	Params::UFollowCableMovementComponent_EnableMovement_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.bResetPosition = bResetPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


