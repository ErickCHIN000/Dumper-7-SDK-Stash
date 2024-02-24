#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MarketingCamera.BPFinder
// (None)

class UClass* UBPFinder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFinder");

	return Clss;
}


// BPFinder MarketingCamera.Default__BPFinder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBPFinder* UBPFinder::GetDefaultObj()
{
	static class UBPFinder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFinder*>(UBPFinder::StaticClass()->DefaultObject);

	return Default;
}


// Class MarketingCamera.MarketingCameraActor
// (Actor)

class UClass* AMarketingCameraActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MarketingCameraActor");

	return Clss;
}


// MarketingCameraActor MarketingCamera.Default__MarketingCameraActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AMarketingCameraActor* AMarketingCameraActor::GetDefaultObj()
{
	static class AMarketingCameraActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AMarketingCameraActor*>(AMarketingCameraActor::StaticClass()->DefaultObject);

	return Default;
}


// Function MarketingCamera.MarketingCameraActor.UpdateUpLook
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              AxisValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMarketingCameraActor::UpdateUpLook(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "UpdateUpLook");

	Params::AMarketingCameraActor_UpdateUpLook_Params Parms{};

	Parms.AxisValue = AxisValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.UpdateRightMovement
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              AxisValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMarketingCameraActor::UpdateRightMovement(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "UpdateRightMovement");

	Params::AMarketingCameraActor_UpdateRightMovement_Params Parms{};

	Parms.AxisValue = AxisValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.UpdateRightLook
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              AxisValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMarketingCameraActor::UpdateRightLook(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "UpdateRightLook");

	Params::AMarketingCameraActor_UpdateRightLook_Params Parms{};

	Parms.AxisValue = AxisValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.UpdateForwardMovement
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              AxisValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMarketingCameraActor::UpdateForwardMovement(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "UpdateForwardMovement");

	Params::AMarketingCameraActor_UpdateForwardMovement_Params Parms{};

	Parms.AxisValue = AxisValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ToggleLookPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ToggleLookPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ToggleLookPlayer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ToggleFollowPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ToggleFollowPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ToggleFollowPlayer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ToggleFocalDistanceFollow
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ToggleFocalDistanceFollow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ToggleFocalDistanceFollow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ToggleAlternateControls
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ToggleAlternateControls()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ToggleAlternateControls");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.SetAperture
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::SetAperture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "SetAperture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ResetTimeDefault
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ResetTimeDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ResetTimeDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ResetSpeedDefaults
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ResetSpeedDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ResetSpeedDefaults");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ResetRollDefault
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ResetRollDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ResetRollDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ResetPositionDefault
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ResetPositionDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ResetPositionDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ResetInterpolationDefaults
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ResetInterpolationDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ResetInterpolationDefaults");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ResetFOVDefault
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ResetFOVDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ResetFOVDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ResetDOFDefault
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ResetDOFDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ResetDOFDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ResetAllDefaults
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ResetAllDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ResetAllDefaults");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ReleaseRollRight
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ReleaseRollRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ReleaseRollRight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ReleaseRollLeft
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ReleaseRollLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ReleaseRollLeft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ReleaseMoveUp
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ReleaseMoveUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ReleaseMoveUp");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ReleaseMoveDown
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ReleaseMoveDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ReleaseMoveDown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ReleaseIncreaseFOV
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ReleaseIncreaseFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ReleaseIncreaseFOV");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ReleaseIncreaseDOF
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ReleaseIncreaseDOF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ReleaseIncreaseDOF");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ReleaseDecreaseFOV
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ReleaseDecreaseFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ReleaseDecreaseFOV");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.ReleaseDecreaseDOF
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::ReleaseDecreaseDOF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "ReleaseDecreaseDOF");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.PayRespect
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::PayRespect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "PayRespect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.IncreaseVerticalSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::IncreaseVerticalSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "IncreaseVerticalSpeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.IncreaseTimeDilation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::IncreaseTimeDilation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "IncreaseTimeDilation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.IncreaseMoveSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::IncreaseMoveSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "IncreaseMoveSpeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.IncreaseMoveSmoothing
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::IncreaseMoveSmoothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "IncreaseMoveSmoothing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.IncreaseLookSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::IncreaseLookSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "IncreaseLookSpeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.IncreaseLookSmoothing
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::IncreaseLookSmoothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "IncreaseLookSmoothing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.IncreaseFOVSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::IncreaseFOVSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "IncreaseFOVSpeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.IncreaseDOFSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::IncreaseDOFSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "IncreaseDOFSpeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.IncreaseAperture
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::IncreaseAperture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "IncreaseAperture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.HoldRollRight
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::HoldRollRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "HoldRollRight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.HoldRollLeft
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::HoldRollLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "HoldRollLeft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.HoldMoveUp
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::HoldMoveUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "HoldMoveUp");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.HoldMoveDown
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::HoldMoveDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "HoldMoveDown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.HoldIncreaseFOV
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::HoldIncreaseFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "HoldIncreaseFOV");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.HoldIncreaseDOF
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::HoldIncreaseDOF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "HoldIncreaseDOF");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.HoldDecreaseFOV
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::HoldDecreaseFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "HoldDecreaseFOV");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.HoldDecreaseDOF
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::HoldDecreaseDOF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "HoldDecreaseDOF");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.GetDOF
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AMarketingCameraActor::GetDOF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "GetDOF");

	Params::AMarketingCameraActor_GetDOF_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MarketingCamera.MarketingCameraActor.DecreaseVerticalSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::DecreaseVerticalSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "DecreaseVerticalSpeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.DecreaseTimeDilation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::DecreaseTimeDilation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "DecreaseTimeDilation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.DecreaseMoveSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::DecreaseMoveSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "DecreaseMoveSpeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.DecreaseMoveSmoothing
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::DecreaseMoveSmoothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "DecreaseMoveSmoothing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.DecreaseLookSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::DecreaseLookSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "DecreaseLookSpeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.DecreaseLookSmoothing
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::DecreaseLookSmoothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "DecreaseLookSmoothing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.DecreaseFOVSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::DecreaseFOVSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "DecreaseFOVSpeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.DecreaseDOFSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::DecreaseDOFSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "DecreaseDOFSpeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.DecreaseAperture
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::DecreaseAperture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "DecreaseAperture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MarketingCamera.MarketingCameraActor.CycleLockAxis
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMarketingCameraActor::CycleLockAxis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraActor", "CycleLockAxis");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


