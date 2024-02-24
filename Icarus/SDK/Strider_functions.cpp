#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Strider.StriderMath
// (None)

class UClass* UStriderMath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StriderMath");

	return Clss;
}


// StriderMath Strider.Default__StriderMath
// (Public, ClassDefaultObject, ArchetypeObject)

class UStriderMath* UStriderMath::GetDefaultObj()
{
	static class UStriderMath* Default = nullptr;

	if (!Default)
		Default = static_cast<UStriderMath*>(UStriderMath::StaticClass()->DefaultObject);

	return Default;
}


// Function Strider.StriderMath.WrapAngle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Angle                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStriderMath::WrapAngle(float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "WrapAngle");

	Params::UStriderMath_WrapAngle_Params Parms{};

	Parms.Angle = Angle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Strider.StriderMath.MoveTowardVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InStart                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelta                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStriderMath::MoveTowardVector(struct FVector* InStart, struct FVector& End, float MaxDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "MoveTowardVector");

	Params::UStriderMath_MoveTowardVector_Params Parms{};

	Parms.End = End;
	Parms.MaxDelta = MaxDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InStart != nullptr)
		*InStart = std::move(Parms.InStart);

}


// Function Strider.StriderMath.MoveTowardAngle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              StartAngle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndAngle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelta                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStriderMath::MoveTowardAngle(float StartAngle, float EndAngle, float MaxDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "MoveTowardAngle");

	Params::UStriderMath_MoveTowardAngle_Params Parms{};

	Parms.StartAngle = StartAngle;
	Parms.EndAngle = EndAngle;
	Parms.MaxDelta = MaxDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Strider.StriderMath.MoveToward
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Start                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              End                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelta                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStriderMath::MoveToward(float Start, float End, float MaxDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "MoveToward");

	Params::UStriderMath_MoveToward_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.MaxDelta = MaxDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Strider.StriderMath.MoveComponentsToward
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InStart                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelta                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStriderMath::MoveComponentsToward(struct FVector* InStart, struct FVector& End, float MaxDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "MoveComponentsToward");

	Params::UStriderMath_MoveComponentsToward_Params Parms{};

	Parms.End = End;
	Parms.MaxDelta = MaxDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InStart != nullptr)
		*InStart = std::move(Parms.InStart);

}


// Function Strider.StriderMath.GetRotationRelativeToVelocity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStriderMath::GetRotationRelativeToVelocity(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "GetRotationRelativeToVelocity");

	Params::UStriderMath_GetRotationRelativeToVelocity_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Strider.StriderMath.GetNextCardinalDirection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              CurrentCardinalDirection                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RelativeDirection                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StepDelta                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SkipDelta                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UStriderMath::GetNextCardinalDirection(int32 CurrentCardinalDirection, float RelativeDirection, float StepDelta, float SkipDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "GetNextCardinalDirection");

	Params::UStriderMath_GetNextCardinalDirection_Params Parms{};

	Parms.CurrentCardinalDirection = CurrentCardinalDirection;
	Parms.RelativeDirection = RelativeDirection;
	Parms.StepDelta = StepDelta;
	Parms.SkipDelta = SkipDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Strider.StriderMath.GetAngleDelta
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              StartAngle                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndAngle                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStriderMath::GetAngleDelta(float StartAngle, float EndAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "GetAngleDelta");

	Params::UStriderMath_GetAngleDelta_Params Parms{};

	Parms.StartAngle = StartAngle;
	Parms.EndAngle = EndAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Strider.StriderMath.CalculateStrideScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              TotalSpeedScale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlayRate                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStriderMath::CalculateStrideScale(float TotalSpeedScale, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "CalculateStrideScale");

	Params::UStriderMath_CalculateStrideScale_Params Parms{};

	Parms.TotalSpeedScale = TotalSpeedScale;
	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Strider.StriderMath.CalculatePlayRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              TotalSpeedScale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackWeight                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinPlayRate                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPlayRate                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStriderMath::CalculatePlayRate(float TotalSpeedScale, float PlaybackWeight, float MinPlayRate, float MaxPlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "CalculatePlayRate");

	Params::UStriderMath_CalculatePlayRate_Params Parms{};

	Parms.TotalSpeedScale = TotalSpeedScale;
	Parms.PlaybackWeight = PlaybackWeight;
	Parms.MinPlayRate = MinPlayRate;
	Parms.MaxPlayRate = MaxPlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Strider.StriderMath.CalculateCircleStrafeDirectionDelta
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              LastDirection                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Direction                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStriderMath::CalculateCircleStrafeDirectionDelta(float LastDirection, float Direction, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "CalculateCircleStrafeDirectionDelta");

	Params::UStriderMath_CalculateCircleStrafeDirectionDelta_Params Parms{};

	Parms.LastDirection = LastDirection;
	Parms.Direction = Direction;
	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Strider.StriderMath.AngleBetween
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     A                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     B                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStriderMath::AngleBetween(struct FVector& A, struct FVector& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StriderMath", "AngleBetween");

	Params::UStriderMath_AngleBetween_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


