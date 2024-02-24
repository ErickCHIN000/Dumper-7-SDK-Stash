#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Gliding.BPFL_Gliding_C
// (None)

class UClass* UBPFL_Gliding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Gliding_C");

	return Clss;
}


// BPFL_Gliding_C BPFL_Gliding.Default__BPFL_Gliding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Gliding_C* UBPFL_Gliding_C::GetDefaultObj()
{
	static class UBPFL_Gliding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Gliding_C*>(UBPFL_Gliding_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Gliding.BPFL_Gliding_C.EndGlide
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_Gliding_C::EndGlide(class ABP_Character_C* Character, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Gliding_C", "EndGlide");

	Params::UBPFL_Gliding_C_EndGlide_Params Parms{};

	Parms.Character = Character;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Gliding.BPFL_Gliding_C.GlideTick
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Roll                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PitchFactor                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             WindSoundPlayer                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Temp_GlideSpeed_C*      GlidingSpeedWidget                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Drag                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DescentSpeed                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Pitch                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             XYAngularDifference                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaximumSpeed                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              XYAcceleration                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NewVelocity                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GroundCheckDistance                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PlayerLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWX_CharacterMovementComponent*CharacterMovement                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPFL_Gliding_C::GlideTick(class ABP_Character_C* Character, double DeltaTime, class UObject* __WorldContext, double Roll, double PitchFactor, class UAudioComponent* WindSoundPlayer, class UWBP_Temp_GlideSpeed_C* GlidingSpeedWidget, double Drag, double DescentSpeed, double Pitch, double XYAngularDifference, int32 MaximumSpeed, class AController* Controller, int32 XYAcceleration, const struct FVector& NewVelocity, double GroundCheckDistance, const struct FVector& PlayerLocation, class UNWX_CharacterMovementComponent* CharacterMovement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Gliding_C", "GlideTick");

	Params::UBPFL_Gliding_C_GlideTick_Params Parms{};

	Parms.Character = Character;
	Parms.DeltaTime = DeltaTime;
	Parms.__WorldContext = __WorldContext;
	Parms.Roll = Roll;
	Parms.PitchFactor = PitchFactor;
	Parms.WindSoundPlayer = WindSoundPlayer;
	Parms.GlidingSpeedWidget = GlidingSpeedWidget;
	Parms.Drag = Drag;
	Parms.DescentSpeed = DescentSpeed;
	Parms.Pitch = Pitch;
	Parms.XYAngularDifference = XYAngularDifference;
	Parms.MaximumSpeed = MaximumSpeed;
	Parms.Controller = Controller;
	Parms.XYAcceleration = XYAcceleration;
	Parms.NewVelocity = NewVelocity;
	Parms.GroundCheckDistance = GroundCheckDistance;
	Parms.PlayerLocation = PlayerLocation;
	Parms.CharacterMovement = CharacterMovement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Gliding.BPFL_Gliding_C.StartGlide
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_Gliding_C::StartGlide(class ABP_Character_C* Character, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Gliding_C", "StartGlide");

	Params::UBPFL_Gliding_C_StartGlide_Params Parms{};

	Parms.Character = Character;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}


