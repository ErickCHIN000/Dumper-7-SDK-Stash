#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary
// (None)

class UClass* UGbxBlueprintFunctionLibrariesBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxBlueprintFunctionLibrariesBPLibrary");

	return Clss;
}


// GbxBlueprintFunctionLibrariesBPLibrary GbxBlueprintFunctionLibraries.Default__GbxBlueprintFunctionLibrariesBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxBlueprintFunctionLibrariesBPLibrary* UGbxBlueprintFunctionLibrariesBPLibrary::GetDefaultObj()
{
	static class UGbxBlueprintFunctionLibrariesBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxBlueprintFunctionLibrariesBPLibrary*>(UGbxBlueprintFunctionLibrariesBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SortActorListByDistance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorList                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxBlueprintFunctionLibrariesBPLibrary::SortActorListByDistance(class AActor* TargetActor, TArray<class AActor*>& ActorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "SortActorListByDistance");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_SortActorListByDistance_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.ActorList = ActorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise4D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector4                    Location                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxBlueprintFunctionLibrariesBPLibrary::SimplexNoise4D(struct FVector4& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "SimplexNoise4D");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise4D_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise3D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxBlueprintFunctionLibrariesBPLibrary::SimplexNoise3D(struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "SimplexNoise3D");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise3D_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   Location                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxBlueprintFunctionLibrariesBPLibrary::SimplexNoise2D(struct FVector2D& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "SimplexNoise2D");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise2D_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise1D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxBlueprintFunctionLibrariesBPLibrary::SimplexNoise1D(float Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "SimplexNoise1D");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise1D_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SetForceMipLevelsToBeResidentForMaterialArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UMaterialInterface*>  MaterialArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               OverrideForceMiplevelsToBeResident                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceMiplevelsToBeResidentValue                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForceDuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CinematicTextureGroups                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxBlueprintFunctionLibrariesBPLibrary::SetForceMipLevelsToBeResidentForMaterialArray(TArray<class UMaterialInterface*>& MaterialArray, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "SetForceMipLevelsToBeResidentForMaterialArray");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_SetForceMipLevelsToBeResidentForMaterialArray_Params Parms{};

	Parms.MaterialArray = MaterialArray;
	Parms.OverrideForceMiplevelsToBeResident = OverrideForceMiplevelsToBeResident;
	Parms.bForceMiplevelsToBeResidentValue = bForceMiplevelsToBeResidentValue;
	Parms.ForceDuration = ForceDuration;
	Parms.CinematicTextureGroups = CinematicTextureGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Octaves                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Persistence                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Amplitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxBlueprintFunctionLibrariesBPLibrary::PerlinNoise2D(const struct FVector2D& Location, int32 Octaves, float Persistence, float Amplitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "PerlinNoise2D");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_PerlinNoise2D_Params Parms{};

	Parms.Location = Location;
	Parms.Octaves = Octaves;
	Parms.Persistence = Persistence;
	Parms.Amplitude = Amplitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise1D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Octaves                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Persistence                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Amplitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxBlueprintFunctionLibrariesBPLibrary::PerlinNoise1D(float X, int32 Octaves, float Persistence, float Amplitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "PerlinNoise1D");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_PerlinNoise1D_Params Parms{};

	Parms.X = X;
	Parms.Octaves = Octaves;
	Parms.Persistence = Persistence;
	Parms.Amplitude = Amplitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsWithinRangeAndAngle
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Source                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Range                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Angle                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxBlueprintFunctionLibrariesBPLibrary::IsWithinRangeAndAngle(struct FTransform& Source, class AActor* Target, float Range, float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "IsWithinRangeAndAngle");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_IsWithinRangeAndAngle_Params Parms{};

	Parms.Source = Source;
	Parms.Target = Target;
	Parms.Range = Range;
	Parms.Angle = Angle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsInEditorMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxBlueprintFunctionLibrariesBPLibrary::IsInEditorMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "IsInEditorMode");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_IsInEditorMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsEditorLoadingPackage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxBlueprintFunctionLibrariesBPLibrary::IsEditorLoadingPackage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "IsEditorLoadingPackage");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_IsEditorLoadingPackage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.GbxBlueprintFunctionLibrariesSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Param                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxBlueprintFunctionLibrariesBPLibrary::GbxBlueprintFunctionLibrariesSampleFunction(float Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "GbxBlueprintFunctionLibrariesSampleFunction");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_GbxBlueprintFunctionLibrariesSampleFunction_Params Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FloatDamp
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Current                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentVelocity                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SmoothDuration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxSpeed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxBlueprintFunctionLibrariesBPLibrary::FloatDamp(float Current, float Target, float& CurrentVelocity, float SmoothDuration, float MaxSpeed, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "FloatDamp");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_FloatDamp_Params Parms{};

	Parms.Current = Current;
	Parms.Target = Target;
	Parms.CurrentVelocity = CurrentVelocity;
	Parms.SmoothDuration = SmoothDuration;
	Parms.MaxSpeed = MaxSpeed;
	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestPlayerCharacter
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     RefLocation                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACharacter*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ACharacter* UGbxBlueprintFunctionLibrariesBPLibrary::FindClosestPlayerCharacter(class UObject* WorldContextObject, struct FVector& RefLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "FindClosestPlayerCharacter");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_FindClosestPlayerCharacter_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.RefLocation = RefLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestActor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      ActorArray                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     RefLocation                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ClosestActor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxBlueprintFunctionLibrariesBPLibrary::FindClosestActor(TArray<int32>& ActorArray, struct FVector& RefLocation, int32* ClosestActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "FindClosestActor");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_FindClosestActor_Params Parms{};

	Parms.ActorArray = ActorArray;
	Parms.RefLocation = RefLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClosestActor != nullptr)
		*ClosestActor = Parms.ClosestActor;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.ExecuteEditorConsoleCommand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Command                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxBlueprintFunctionLibrariesBPLibrary::ExecuteEditorConsoleCommand(const class FString& Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "ExecuteEditorConsoleCommand");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_ExecuteEditorConsoleCommand_Params Parms{};

	Parms.Command = Command;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.EditorLoadAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UObject>      Asset                                                            (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGbxBlueprintFunctionLibrariesBPLibrary::EditorLoadAsset(TSoftObjectPtr<class UObject>& Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "EditorLoadAsset");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_EditorLoadAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.BroadcastRemoteEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EventName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxBlueprintFunctionLibrariesBPLibrary::BroadcastRemoteEvent(class UObject* WorldContextObject, class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxBlueprintFunctionLibrariesBPLibrary", "BroadcastRemoteEvent");

	Params::UGbxBlueprintFunctionLibrariesBPLibrary_BroadcastRemoteEvent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxBlueprintFunctionLibraries.HitResultFunctionLibrary
// (None)

class UClass* UHitResultFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitResultFunctionLibrary");

	return Clss;
}


// HitResultFunctionLibrary GbxBlueprintFunctionLibraries.Default__HitResultFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UHitResultFunctionLibrary* UHitResultFunctionLibrary::GetDefaultObj()
{
	static class UHitResultFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitResultFunctionLibrary*>(UHitResultFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.IsBlockingHit
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHitResultFunctionLibrary::IsBlockingHit(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitResultFunctionLibrary", "IsBlockingHit");

	Params::UHitResultFunctionLibrary_IsBlockingHit_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetPhysMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPhysicalMaterial* UHitResultFunctionLibrary::GetPhysMaterial(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitResultFunctionLibrary", "GetPhysMaterial");

	Params::UHitResultFunctionLibrary_GetPhysMaterial_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitNormal
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UHitResultFunctionLibrary::GetHitNormal(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitResultFunctionLibrary", "GetHitNormal");

	Params::UHitResultFunctionLibrary_GetHitNormal_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UHitResultFunctionLibrary::GetHitLocation(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitResultFunctionLibrary", "GetHitLocation");

	Params::UHitResultFunctionLibrary_GetHitLocation_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHitResultFunctionLibrary::GetHitDistance(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitResultFunctionLibrary", "GetHitDistance");

	Params::UHitResultFunctionLibrary_GetHitDistance_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UHitResultFunctionLibrary::GetHitComponent(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitResultFunctionLibrary", "GetHitComponent");

	Params::UHitResultFunctionLibrary_GetHitComponent_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UHitResultFunctionLibrary::GetHitActor(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitResultFunctionLibrary", "GetHitActor");

	Params::UHitResultFunctionLibrary_GetHitActor_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetBoneName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UHitResultFunctionLibrary::GetBoneName(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitResultFunctionLibrary", "GetBoneName");

	Params::UHitResultFunctionLibrary_GetBoneName_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxBlueprintFunctionLibraries.TagsFunctionLibrary
// (None)

class UClass* UTagsFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TagsFunctionLibrary");

	return Clss;
}


// TagsFunctionLibrary GbxBlueprintFunctionLibraries.Default__TagsFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTagsFunctionLibrary* UTagsFunctionLibrary::GetDefaultObj()
{
	static class UTagsFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTagsFunctionLibrary*>(UTagsFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*             Target                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTagsFunctionLibrary::RemoveTagFromComponent(class UActorComponent* Target, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TagsFunctionLibrary", "RemoveTagFromComponent");

	Params::UTagsFunctionLibrary_RemoveTagFromComponent_Params Parms{};

	Parms.Target = Target;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTagsFunctionLibrary::RemoveTagFromActor(class AActor* Target, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TagsFunctionLibrary", "RemoveTagFromActor");

	Params::UTagsFunctionLibrary_RemoveTagFromActor_Params Parms{};

	Parms.Target = Target;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ComponentContainsTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActorComponent*             Target                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTagsFunctionLibrary::ComponentContainsTag(class UActorComponent* Target, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TagsFunctionLibrary", "ComponentContainsTag");

	Params::UTagsFunctionLibrary_ComponentContainsTag_Params Parms{};

	Parms.Target = Target;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareComponentTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActorComponent*             FirstComponent                                                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             SecondComponent                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECompareTag             Branches                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UTagsFunctionLibrary::CompareComponentTags(class UActorComponent* FirstComponent, class UActorComponent* SecondComponent, enum class ECompareTag* Branches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TagsFunctionLibrary", "CompareComponentTags");

	Params::UTagsFunctionLibrary_CompareComponentTags_Params Parms{};

	Parms.FirstComponent = FirstComponent;
	Parms.SecondComponent = SecondComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Branches != nullptr)
		*Branches = Parms.Branches;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTagsWithComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECompareTag             Branches                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UTagsFunctionLibrary::CompareActorTagsWithComponent(class AActor* Actor, class UActorComponent* Component, enum class ECompareTag* Branches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TagsFunctionLibrary", "CompareActorTagsWithComponent");

	Params::UTagsFunctionLibrary_CompareActorTagsWithComponent_Params Parms{};

	Parms.Actor = Actor;
	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Branches != nullptr)
		*Branches = Parms.Branches;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      FirstActor                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SecondActor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECompareTag             Branches                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UTagsFunctionLibrary::CompareActorTags(class AActor* FirstActor, class AActor* SecondActor, enum class ECompareTag* Branches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TagsFunctionLibrary", "CompareActorTags");

	Params::UTagsFunctionLibrary_CompareActorTags_Params Parms{};

	Parms.FirstActor = FirstActor;
	Parms.SecondActor = SecondActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Branches != nullptr)
		*Branches = Parms.Branches;

	return Parms.ReturnValue;

}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*             Target                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTagsFunctionLibrary::AddTagToComponent(class UActorComponent* Target, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TagsFunctionLibrary", "AddTagToComponent");

	Params::UTagsFunctionLibrary_AddTagToComponent_Params Parms{};

	Parms.Target = Target;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTagsFunctionLibrary::AddTagToActor(class AActor* Target, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TagsFunctionLibrary", "AddTagToActor");

	Params::UTagsFunctionLibrary_AddTagToActor_Params Parms{};

	Parms.Target = Target;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ActorContainsTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Target                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTagsFunctionLibrary::ActorContainsTag(class AActor* Target, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TagsFunctionLibrary", "ActorContainsTag");

	Params::UTagsFunctionLibrary_ActorContainsTag_Params Parms{};

	Parms.Target = Target;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


