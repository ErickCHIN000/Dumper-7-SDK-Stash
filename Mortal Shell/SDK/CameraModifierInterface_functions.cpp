#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraModifierInterface.CameraModifierInterface_C
// (None)

class UClass* ICameraModifierInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModifierInterface_C");

	return Clss;
}


// CameraModifierInterface_C CameraModifierInterface.Default__CameraModifierInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICameraModifierInterface_C* ICameraModifierInterface_C::GetDefaultObj()
{
	static class ICameraModifierInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICameraModifierInterface_C*>(ICameraModifierInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraModifierInterface.CameraModifierInterface_C.CameraModifier_UpdateFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICameraModifierInterface_C::CameraModifier_UpdateFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifierInterface_C", "CameraModifier_UpdateFOV");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CameraModifierInterface.CameraModifierInterface_C.CameraModifier_UpdateMotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICameraModifierInterface_C::CameraModifier_UpdateMotionBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifierInterface_C", "CameraModifier_UpdateMotionBlur");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CameraModifierInterface.CameraModifierInterface_C.CameraModifier_UpdateBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICameraModifierInterface_C::CameraModifier_UpdateBrightness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifierInterface_C", "CameraModifier_UpdateBrightness");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CameraModifierInterface.CameraModifierInterface_C.CameraModifier_UpdateFilmGrain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICameraModifierInterface_C::CameraModifier_UpdateFilmGrain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifierInterface_C", "CameraModifier_UpdateFilmGrain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CameraModifierInterface.CameraModifierInterface_C.CameraModifier_UpdatePixelMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICameraModifierInterface_C::CameraModifier_UpdatePixelMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifierInterface_C", "CameraModifier_UpdatePixelMode");



	UObject::ProcessEvent(Func, nullptr);

}

}


