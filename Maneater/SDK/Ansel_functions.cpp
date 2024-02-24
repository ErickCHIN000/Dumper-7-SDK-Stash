#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Ansel.AnselFunctionLibrary
// (None)

class UClass* UAnselFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnselFunctionLibrary");

	return Clss;
}


// AnselFunctionLibrary Ansel.Default__AnselFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnselFunctionLibrary* UAnselFunctionLibrary::GetDefaultObj()
{
	static class UAnselFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnselFunctionLibrary*>(UAnselFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Ansel.AnselFunctionLibrary.StopSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::StopSession(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "StopSession");

	Params::UAnselFunctionLibrary_StopSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Ansel.AnselFunctionLibrary.StartSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::StartSession(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "StartSession");

	Params::UAnselFunctionLibrary_StartSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Ansel.AnselFunctionLibrary.SetUIControlVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUIControlEffectTarget  UIControlTarget                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsVisible                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetUIControlVisibility(class UObject* WorldContextObject, enum class EUIControlEffectTarget UIControlTarget, bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "SetUIControlVisibility");

	Params::UAnselFunctionLibrary_SetUIControlVisibility_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.UIControlTarget = UIControlTarget;
	Parms.bIsVisible = bIsVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Ansel.AnselFunctionLibrary.SetSettleFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              NumSettleFrames                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetSettleFrames(int32 NumSettleFrames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "SetSettleFrames");

	Params::UAnselFunctionLibrary_SetSettleFrames_Params Parms{};

	Parms.NumSettleFrames = NumSettleFrames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIsPhotographyAllowed                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetIsPhotographyAllowed(bool bIsPhotographyAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "SetIsPhotographyAllowed");

	Params::UAnselFunctionLibrary_SetIsPhotographyAllowed_Params Parms{};

	Parms.bIsPhotographyAllowed = bIsPhotographyAllowed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              TranslationSpeed                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetCameraMovementSpeed(float TranslationSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "SetCameraMovementSpeed");

	Params::UAnselFunctionLibrary_SetCameraMovementSpeed_Params Parms{};

	Parms.TranslationSpeed = TranslationSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              MaxCameraDistance                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetCameraConstraintDistance(float MaxCameraDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "SetCameraConstraintDistance");

	Params::UAnselFunctionLibrary_SetCameraConstraintDistance_Params Parms{};

	Parms.MaxCameraDistance = MaxCameraDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              CameraSize                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetCameraConstraintCameraSize(float CameraSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "SetCameraConstraintCameraSize");

	Params::UAnselFunctionLibrary_SetCameraConstraintCameraSize_Params Parms{};

	Parms.CameraSize = CameraSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Ansel.AnselFunctionLibrary.SetAutoPostprocess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldAutoPostprocess                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetAutoPostprocess(bool bShouldAutoPostprocess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "SetAutoPostprocess");

	Params::UAnselFunctionLibrary_SetAutoPostprocess_Params Parms{};

	Parms.bShouldAutoPostprocess = bShouldAutoPostprocess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Ansel.AnselFunctionLibrary.SetAutoPause
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldAutoPause                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::SetAutoPause(bool bShouldAutoPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "SetAutoPause");

	Params::UAnselFunctionLibrary_SetAutoPause_Params Parms{};

	Parms.bShouldAutoPause = bShouldAutoPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnselFunctionLibrary::IsPhotographyAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "IsPhotographyAvailable");

	Params::UAnselFunctionLibrary_IsPhotographyAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnselFunctionLibrary::IsPhotographyAllowed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "IsPhotographyAllowed");

	Params::UAnselFunctionLibrary_IsPhotographyAllowed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NewCameraLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PreviousCameraLocation                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OriginalCameraLocation                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutCameraLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "ConstrainCameraByGeometry");

	Params::UAnselFunctionLibrary_ConstrainCameraByGeometry_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NewCameraLocation = NewCameraLocation;
	Parms.PreviousCameraLocation = PreviousCameraLocation;
	Parms.OriginalCameraLocation = OriginalCameraLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = std::move(Parms.OutCameraLocation);

}


// Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NewCameraLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PreviousCameraLocation                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OriginalCameraLocation                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutCameraLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnselFunctionLibrary::ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation, float MaxDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnselFunctionLibrary", "ConstrainCameraByDistance");

	Params::UAnselFunctionLibrary_ConstrainCameraByDistance_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NewCameraLocation = NewCameraLocation;
	Parms.PreviousCameraLocation = PreviousCameraLocation;
	Parms.OriginalCameraLocation = OriginalCameraLocation;
	Parms.MaxDistance = MaxDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = std::move(Parms.OutCameraLocation);

}

}


