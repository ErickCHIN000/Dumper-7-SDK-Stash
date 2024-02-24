#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VanguardBPLibrary.VanguardBPFunctionLibrary
// (None)

class UClass* UVanguardBPFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VanguardBPFunctionLibrary");

	return Clss;
}


// VanguardBPFunctionLibrary VanguardBPLibrary.Default__VanguardBPFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UVanguardBPFunctionLibrary* UVanguardBPFunctionLibrary::GetDefaultObj()
{
	static class UVanguardBPFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UVanguardBPFunctionLibrary*>(UVanguardBPFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SpawnActorOfClass
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      WorldContext                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  SpawnTransform                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESpawnActorCollisionHandlingMethodCollisionHandlingOverride                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       Instigator                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OutActor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::SpawnActorOfClass(class AActor* WorldContext, TSubclassOf<class AActor> Class, const struct FTransform& SpawnTransform, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class APawn* Instigator, class AActor** OutActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SpawnActorOfClass");

	Params::UVanguardBPFunctionLibrary_SpawnActorOfClass_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Class = Class;
	Parms.SpawnTransform = SpawnTransform;
	Parms.CollisionHandlingOverride = CollisionHandlingOverride;
	Parms.Owner = Owner;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortVectorArrayByDistanceFromOrigin
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             Locations                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseMinDistance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseMaxDistance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreZ                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UVanguardBPFunctionLibrary::SortVectorArrayByDistanceFromOrigin(TArray<struct FVector>& Locations, struct FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SortVectorArrayByDistanceFromOrigin");

	Params::UVanguardBPFunctionLibrary_SortVectorArrayByDistanceFromOrigin_Params Parms{};

	Parms.Locations = Locations;
	Parms.Origin = Origin;
	Parms.bUseMinDistance = bUseMinDistance;
	Parms.MinDistance = MinDistance;
	Parms.bUseMaxDistance = bUseMaxDistance;
	Parms.MaxDistance = MaxDistance;
	Parms.bIgnoreZ = bIgnoreZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortTransformArrayByDistanceFromOrigin
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FTransform>          Transforms                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseMinDistance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseMaxDistance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreZ                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTransform> UVanguardBPFunctionLibrary::SortTransformArrayByDistanceFromOrigin(TArray<struct FTransform>& Transforms, struct FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SortTransformArrayByDistanceFromOrigin");

	Params::UVanguardBPFunctionLibrary_SortTransformArrayByDistanceFromOrigin_Params Parms{};

	Parms.Transforms = Transforms;
	Parms.Origin = Origin;
	Parms.bUseMinDistance = bUseMinDistance;
	Parms.MinDistance = MinDistance;
	Parms.bUseMaxDistance = bUseMaxDistance;
	Parms.MaxDistance = MaxDistance;
	Parms.bIgnoreZ = bIgnoreZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortStringArrayAlphabetically
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InStringArray                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UVanguardBPFunctionLibrary::SortStringArrayAlphabetically(TArray<class FString>& InStringArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SortStringArrayAlphabetically");

	Params::UVanguardBPFunctionLibrary_SortStringArrayAlphabetically_Params Parms{};

	Parms.InStringArray = InStringArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortComponentsByDistanceFromOrigin
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class USceneComponent*>     SceneComponents                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USceneComponent*>     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class USceneComponent*> UVanguardBPFunctionLibrary::SortComponentsByDistanceFromOrigin(TArray<class USceneComponent*>& SceneComponents, struct FVector& Origin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SortComponentsByDistanceFromOrigin");

	Params::UVanguardBPFunctionLibrary_SortComponentsByDistanceFromOrigin_Params Parms{};

	Parms.SceneComponents = SceneComponents;
	Parms.Origin = Origin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorsByPathCostFromOrigin
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreUnreachable                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UVanguardBPFunctionLibrary::SortActorsByPathCostFromOrigin(class UObject* WorldContextObject, TArray<class AActor*>& Actors, struct FVector& Origin, bool bIgnoreUnreachable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SortActorsByPathCostFromOrigin");

	Params::UVanguardBPFunctionLibrary_SortActorsByPathCostFromOrigin_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Actors = Actors;
	Parms.Origin = Origin;
	Parms.bIgnoreUnreachable = bIgnoreUnreachable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorsByDistanceFromOrigin
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class AActor*>              Actors                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseMinDistance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseMaxDistance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreZ                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UVanguardBPFunctionLibrary::SortActorsByDistanceFromOrigin(TArray<class AActor*>& Actors, struct FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SortActorsByDistanceFromOrigin");

	Params::UVanguardBPFunctionLibrary_SortActorsByDistanceFromOrigin_Params Parms{};

	Parms.Actors = Actors;
	Parms.Origin = Origin;
	Parms.bUseMinDistance = bUseMinDistance;
	Parms.MinDistance = MinDistance;
	Parms.bUseMaxDistance = bUseMaxDistance;
	Parms.MaxDistance = MaxDistance;
	Parms.bIgnoreZ = bIgnoreZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorComponentsByDistanceFromOrigin
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class UActorComponent*>     ActorComponents                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseMaxDistance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreZ                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActorComponent*>     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UActorComponent*> UVanguardBPFunctionLibrary::SortActorComponentsByDistanceFromOrigin(TArray<class UActorComponent*>& ActorComponents, struct FVector& Origin, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SortActorComponentsByDistanceFromOrigin");

	Params::UVanguardBPFunctionLibrary_SortActorComponentsByDistanceFromOrigin_Params Parms{};

	Parms.ActorComponents = ActorComponents;
	Parms.Origin = Origin;
	Parms.bUseMaxDistance = bUseMaxDistance;
	Parms.MaxDistance = MaxDistance;
	Parms.bIgnoreZ = bIgnoreZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetSplineMeshSmoothInterpRollScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USplineMeshComponent*        SplineMeshComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseSmoothInterpRollScale                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUpdateMesh                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::SetSplineMeshSmoothInterpRollScale(class USplineMeshComponent* SplineMeshComponent, bool bUseSmoothInterpRollScale, bool bUpdateMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SetSplineMeshSmoothInterpRollScale");

	Params::UVanguardBPFunctionLibrary_SetSplineMeshSmoothInterpRollScale_Params Parms{};

	Parms.SplineMeshComponent = SplineMeshComponent;
	Parms.bUseSmoothInterpRollScale = bUseSmoothInterpRollScale;
	Parms.bUpdateMesh = bUpdateMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetRenderInDepthPass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::SetRenderInDepthPass(class UPrimitiveComponent* Component, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SetRenderInDepthPass");

	Params::UVanguardBPFunctionLibrary_SetRenderInDepthPass_Params Parms{};

	Parms.Component = Component;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetRenderFocusOutline
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::SetRenderFocusOutline(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SetRenderFocusOutline");

	Params::UVanguardBPFunctionLibrary_SetRenderFocusOutline_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetLandscapeRVTSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ALandscapeProxy*             LandscapeProxy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class URuntimeVirtualTexture*>VirtualTextures                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              NumLOD                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LODBias                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::SetLandscapeRVTSettings(class ALandscapeProxy* LandscapeProxy, TArray<class URuntimeVirtualTexture*>& VirtualTextures, int32 NumLOD, int32 LODBias)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SetLandscapeRVTSettings");

	Params::UVanguardBPFunctionLibrary_SetLandscapeRVTSettings_Params Parms{};

	Parms.LandscapeProxy = LandscapeProxy;
	Parms.VirtualTextures = VirtualTextures;
	Parms.NumLOD = NumLOD;
	Parms.LODBias = LODBias;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetFixedPathBrakingDistance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNavMovementComponent*       NavMovementComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FixedPathBrakingDistance                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::SetFixedPathBrakingDistance(class UNavMovementComponent* NavMovementComponent, float FixedPathBrakingDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SetFixedPathBrakingDistance");

	Params::UVanguardBPFunctionLibrary_SetFixedPathBrakingDistance_Params Parms{};

	Parms.NavMovementComponent = NavMovementComponent;
	Parms.FixedPathBrakingDistance = FixedPathBrakingDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetCanEverAffectNavigation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*             InActorComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanEverAffect                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::SetCanEverAffectNavigation(class UActorComponent* InActorComponent, bool bCanEverAffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SetCanEverAffectNavigation");

	Params::UVanguardBPFunctionLibrary_SetCanEverAffectNavigation_Params Parms{};

	Parms.InActorComponent = InActorComponent;
	Parms.bCanEverAffect = bCanEverAffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetBoneCollisionEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECollisionEnabled       CollisionEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::SetBoneCollisionEnabled(class USkeletalMeshComponent* SkeletalMeshComponent, class FName BoneName, enum class ECollisionEnabled CollisionEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SetBoneCollisionEnabled");

	Params::UVanguardBPFunctionLibrary_SetBoneCollisionEnabled_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.BoneName = BoneName;
	Parms.CollisionEnabled = CollisionEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetAllowAnyoneToDestroyComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*             InComponent                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowAnyone                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::SetAllowAnyoneToDestroyComponent(class UActorComponent* InComponent, bool AllowAnyone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "SetAllowAnyoneToDestroyComponent");

	Params::UVanguardBPFunctionLibrary_SetAllowAnyoneToDestroyComponent_Params Parms{};

	Parms.InComponent = InComponent;
	Parms.AllowAnyone = AllowAnyone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ReconstructActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::ReconstructActor(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "ReconstructActor");

	Params::UVanguardBPFunctionLibrary_ReconstructActor_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.QuickLog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        LogCategory                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::QuickLog(class FName LogCategory, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "QuickLog");

	Params::UVanguardBPFunctionLibrary_QuickLog_Params Parms{};

	Parms.LogCategory = LogCategory;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectWorldToScreenOrEdge
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerController*           Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldPosition                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenOrEdgePosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   DirFromCentre                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsOffScreen                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsBehindCamera                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::ProjectWorldToScreenOrEdge(class APlayerController* Player, struct FVector& WorldPosition, struct FVector2D* ScreenOrEdgePosition, struct FVector2D* DirFromCentre, bool* IsOffScreen, bool* IsBehindCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "ProjectWorldToScreenOrEdge");

	Params::UVanguardBPFunctionLibrary_ProjectWorldToScreenOrEdge_Params Parms{};

	Parms.Player = Player;
	Parms.WorldPosition = WorldPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScreenOrEdgePosition != nullptr)
		*ScreenOrEdgePosition = std::move(Parms.ScreenOrEdgePosition);

	if (DirFromCentre != nullptr)
		*DirFromCentre = std::move(Parms.DirFromCentre);

	if (IsOffScreen != nullptr)
		*IsOffScreen = Parms.IsOffScreen;

	if (IsBehindCamera != nullptr)
		*IsBehindCamera = Parms.IsBehindCamera;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectReachablePointAtLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      WorldContext                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     StartPoint                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndPoint                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutProjectedPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ProjectionExtent                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*             NavData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::ProjectReachablePointAtLocation(class AActor* WorldContext, struct FVector& StartPoint, struct FVector& EndPoint, struct FVector* OutProjectedPoint, const struct FVector& ProjectionExtent, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "ProjectReachablePointAtLocation");

	Params::UVanguardBPFunctionLibrary_ProjectReachablePointAtLocation_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.StartPoint = StartPoint;
	Parms.EndPoint = EndPoint;
	Parms.ProjectionExtent = ProjectionExtent;
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutProjectedPoint != nullptr)
		*OutProjectedPoint = std::move(Parms.OutProjectedPoint);

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectOrTraceToNavigablePoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InLocation                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutProjectedPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIgnoreSelf                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ProjectionExtent                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*             NavData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::ProjectOrTraceToNavigablePoint(class AActor* WorldContextObject, struct FVector& InLocation, struct FVector* OutProjectedPoint, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, bool bIgnoreSelf, const struct FVector& ProjectionExtent, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "ProjectOrTraceToNavigablePoint");

	Params::UVanguardBPFunctionLibrary_ProjectOrTraceToNavigablePoint_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InLocation = InLocation;
	Parms.TraceChannel = TraceChannel;
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = ActorsToIgnore;
	Parms.bIgnoreSelf = bIgnoreSelf;
	Parms.ProjectionExtent = ProjectionExtent;
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutProjectedPoint != nullptr)
		*OutProjectedPoint = std::move(Parms.OutProjectedPoint);

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ObjectsToWorlds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             Objects                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UWorld>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSoftObjectPtr<class UWorld>> UVanguardBPFunctionLibrary::ObjectsToWorlds(TArray<class UObject*>& Objects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "ObjectsToWorlds");

	Params::UVanguardBPFunctionLibrary_ObjectsToWorlds_Params Parms{};

	Parms.Objects = Objects;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.MaxInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVanguardBPFunctionLibrary::MaxInt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "MaxInt");

	Params::UVanguardBPFunctionLibrary_MaxInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.MaxFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVanguardBPFunctionLibrary::MaxFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "MaxFloat");

	Params::UVanguardBPFunctionLibrary_MaxFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.MarkObjectDirty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::MarkObjectDirty(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "MarkObjectDirty");

	Params::UVanguardBPFunctionLibrary_MarkObjectDirty_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.MakeComponentStablyNamed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NewName                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::MakeComponentStablyNamed(class UActorComponent* Component, class FName NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "MakeComponentStablyNamed");

	Params::UVanguardBPFunctionLibrary_MakeComponentStablyNamed_Params Parms{};

	Parms.Component = Component;
	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.MakeActorStablyNamed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NewName                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::MakeActorStablyNamed(class AActor* Actor, class FName NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "MakeActorStablyNamed");

	Params::UVanguardBPFunctionLibrary_MakeActorStablyNamed_Params Parms{};

	Parms.Actor = Actor;
	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.LoadAllStreamingLevels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class ULevelStreaming*>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ULevelStreaming*> UVanguardBPFunctionLibrary::LoadAllStreamingLevels(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "LoadAllStreamingLevels");

	Params::UVanguardBPFunctionLibrary_LoadAllStreamingLevels_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.IsWithEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::IsWithEditor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "IsWithEditor");

	Params::UVanguardBPFunctionLibrary_IsWithEditor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.IsUsingFixedPathBrakingDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNavMovementComponent*       NavMovementComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::IsUsingFixedPathBrakingDistance(class UNavMovementComponent* NavMovementComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "IsUsingFixedPathBrakingDistance");

	Params::UVanguardBPFunctionLibrary_IsUsingFixedPathBrakingDistance_Params Parms{};

	Parms.NavMovementComponent = NavMovementComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.IsInEditorViewport
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::IsInEditorViewport(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "IsInEditorViewport");

	Params::UVanguardBPFunctionLibrary_IsInEditorViewport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.IsActorReplicatingMovement
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::IsActorReplicatingMovement(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "IsActorReplicatingMovement");

	Params::UVanguardBPFunctionLibrary_IsActorReplicatingMovement_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetWorldFromStreamingAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelStreaming*             StreamingLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UWorld>       ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UWorld> UVanguardBPFunctionLibrary::GetWorldFromStreamingAsset(class ULevelStreaming* StreamingLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetWorldFromStreamingAsset");

	Params::UVanguardBPFunctionLibrary_GetWorldFromStreamingAsset_Params Parms{};

	Parms.StreamingLevel = StreamingLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetTileInfoFromStreamingLevel
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelStreaming*             StreamingLevel                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::GetTileInfoFromStreamingLevel(class UObject* WorldContextObject, class ULevelStreaming* StreamingLevel, struct FVector* OutLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetTileInfoFromStreamingLevel");

	Params::UVanguardBPFunctionLibrary_GetTileInfoFromStreamingLevel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StreamingLevel = StreamingLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamingLevelFromActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelStreaming*             OutStreamingLevel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::GetStreamingLevelFromActor(class UObject* WorldContextObject, class AActor* Actor, class ULevelStreaming** OutStreamingLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetStreamingLevelFromActor");

	Params::UVanguardBPFunctionLibrary_GetStreamingLevelFromActor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutStreamingLevel != nullptr)
		*OutStreamingLevel = Parms.OutStreamingLevel;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamedLevelPackageNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UVanguardBPFunctionLibrary::GetStreamedLevelPackageNames(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetStreamedLevelPackageNames");

	Params::UVanguardBPFunctionLibrary_GetStreamedLevelPackageNames_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamedLevelNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UVanguardBPFunctionLibrary::GetStreamedLevelNames(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetStreamedLevelNames");

	Params::UVanguardBPFunctionLibrary_GetStreamedLevelNames_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetPathFollowingBrakingDistance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNavMovementComponent*       NavMovementComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutBrakingDistance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::GetPathFollowingBrakingDistance(class UNavMovementComponent* NavMovementComponent, float* OutBrakingDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetPathFollowingBrakingDistance");

	Params::UVanguardBPFunctionLibrary_GetPathFollowingBrakingDistance_Params Parms{};

	Parms.NavMovementComponent = NavMovementComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutBrakingDistance != nullptr)
		*OutBrakingDistance = Parms.OutBrakingDistance;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetLoadedChildClasses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                      ParentClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UClass*> UVanguardBPFunctionLibrary::GetLoadedChildClasses(class UClass* ParentClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetLoadedChildClasses");

	Params::UVanguardBPFunctionLibrary_GetLoadedChildClasses_Params Parms{};

	Parms.ParentClass = ParentClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetLevelNameFromStreamingAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelStreaming*             StreamingLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UVanguardBPFunctionLibrary::GetLevelNameFromStreamingAsset(class ULevelStreaming* StreamingLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetLevelNameFromStreamingAsset");

	Params::UVanguardBPFunctionLibrary_GetLevelNameFromStreamingAsset_Params Parms{};

	Parms.StreamingLevel = StreamingLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetHashFromString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVanguardBPFunctionLibrary::GetHashFromString(class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetHashFromString");

	Params::UVanguardBPFunctionLibrary_GetHashFromString_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetClosestPlayerDistanceFromLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFunctionResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVanguardBPFunctionLibrary::GetClosestPlayerDistanceFromLocation(class UObject* WorldContextObject, const struct FVector& Location, enum class EFunctionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetClosestPlayerDistanceFromLocation");

	Params::UVanguardBPFunctionLibrary_GetClosestPlayerDistanceFromLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetClassDefaultObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      ObjectClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UVanguardBPFunctionLibrary::GetClassDefaultObject(class UClass* ObjectClass, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetClassDefaultObject");

	Params::UVanguardBPFunctionLibrary_GetClassDefaultObject_Params Parms{};

	Parms.ObjectClass = ObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetChildWidgetsOfClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSubclassOf<class UWidget>         WidgetClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelWidget*                InParent                                                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UWidget*>             ChildWidgets                                                     (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               SearchRecursively                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::GetChildWidgetsOfClass(TSubclassOf<class UWidget> WidgetClass, class UPanelWidget* InParent, TArray<class UWidget*>* ChildWidgets, bool SearchRecursively)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetChildWidgetsOfClass");

	Params::UVanguardBPFunctionLibrary_GetChildWidgetsOfClass_Params Parms{};

	Parms.WidgetClass = WidgetClass;
	Parms.InParent = InParent;
	Parms.SearchRecursively = SearchRecursively;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ChildWidgets != nullptr)
		*ChildWidgets = std::move(Parms.ChildWidgets);

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetChildClassesInPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        FolderPath                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ParentClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UClass*> UVanguardBPFunctionLibrary::GetChildClassesInPath(class FName& FolderPath, class UClass* ParentClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetChildClassesInPath");

	Params::UVanguardBPFunctionLibrary_GetChildClassesInPath_Params Parms{};

	Parms.FolderPath = FolderPath;
	Parms.ParentClass = ParentClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetAllMapNames
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      OverrideSearchPath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UVanguardBPFunctionLibrary::GetAllMapNames(const class FString& OverrideSearchPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetAllMapNames");

	Params::UVanguardBPFunctionLibrary_GetAllMapNames_Params Parms{};

	Parms.OverrideSearchPath = OverrideSearchPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetActorsOfClassInWorld
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      WorldContext                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::GetActorsOfClassInWorld(class AActor* WorldContext, TSubclassOf<class AActor> ActorClass, TArray<class AActor*>* OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetActorsOfClassInWorld");

	Params::UVanguardBPFunctionLibrary_GetActorsOfClassInWorld_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.ActorClass = ActorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutActors != nullptr)
		*OutActors = std::move(Parms.OutActors);

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetActorsInWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UVanguardBPFunctionLibrary::GetActorsInWorld(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "GetActorsInWorld");

	Params::UVanguardBPFunctionLibrary_GetActorsInWorld_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.FindSocketOrTagOnActor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketOrTagName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             FoundComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  FoundWorldTransform                                              (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::FindSocketOrTagOnActor(class AActor* InActor, class FName& SocketOrTagName, class UActorComponent** FoundComponent, struct FTransform* FoundWorldTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "FindSocketOrTagOnActor");

	Params::UVanguardBPFunctionLibrary_FindSocketOrTagOnActor_Params Parms{};

	Parms.InActor = InActor;
	Parms.SocketOrTagName = SocketOrTagName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FoundComponent != nullptr)
		*FoundComponent = Parms.FoundComponent;

	if (FoundWorldTransform != nullptr)
		*FoundWorldTransform = std::move(Parms.FoundWorldTransform);

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.FilterActorsByTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class AActor*>              InActorArray                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FName>                Tags                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::FilterActorsByTags(TArray<class AActor*>& InActorArray, TArray<class FName>& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "FilterActorsByTags");

	Params::UVanguardBPFunctionLibrary_FilterActorsByTags_Params Parms{};

	Parms.InActorArray = InActorArray;
	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.DuplicateActorComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActorComponent*             Source                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Parent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             OutComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::DuplicateActorComponent(class UActorComponent* Source, class AActor* Parent, class UActorComponent** OutComponent, class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "DuplicateActorComponent");

	Params::UVanguardBPFunctionLibrary_DuplicateActorComponent_Params Parms{};

	Parms.Source = Source;
	Parms.Parent = Parent;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutComponent != nullptr)
		*OutComponent = Parms.OutComponent;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.DuplicateActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InputActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDetachOriginal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UVanguardBPFunctionLibrary::DuplicateActor(class AActor* InputActor, bool bDetachOriginal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "DuplicateActor");

	Params::UVanguardBPFunctionLibrary_DuplicateActor_Params Parms{};

	Parms.InputActor = InputActor;
	Parms.bDetachOriginal = bDetachOriginal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.DebugLog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EBPLogVerbosity         Verbosity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        LogCategory                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutputToMessageLog                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::DebugLog(enum class EBPLogVerbosity Verbosity, class FName LogCategory, const class FString& Message, bool bOutputToMessageLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "DebugLog");

	Params::UVanguardBPFunctionLibrary_DebugLog_Params Parms{};

	Parms.Verbosity = Verbosity;
	Parms.LogCategory = LogCategory;
	Parms.Message = Message;
	Parms.bOutputToMessageLog = bOutputToMessageLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ComponentOverlapComponentsAgainstObjectType
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ComponentTransform                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<enum class EObjectTypeQuery>ObjectTypes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                      ComponentClassFilter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UPrimitiveComponent*> OutComponents                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::ComponentOverlapComponentsAgainstObjectType(class UPrimitiveComponent* Component, struct FTransform& ComponentTransform, TArray<enum class EObjectTypeQuery>& ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "ComponentOverlapComponentsAgainstObjectType");

	Params::UVanguardBPFunctionLibrary_ComponentOverlapComponentsAgainstObjectType_Params Parms{};

	Parms.Component = Component;
	Parms.ComponentTransform = ComponentTransform;
	Parms.ObjectTypes = ObjectTypes;
	Parms.ComponentClassFilter = ComponentClassFilter;
	Parms.ActorsToIgnore = ActorsToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutComponents != nullptr)
		*OutComponents = std::move(Parms.OutComponents);

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.BlueprintSuggestProjectileVelocityByChannel
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TossVelocity                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     StartLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LaunchSpeed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OverrideGravityZ                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESuggestProjVelocityTraceOptionTraceOption                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CollisionRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<enum class EObjectTypeQuery>ObjectTypes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFavorHighArc                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDrawDebug                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::BlueprintSuggestProjectileVelocityByChannel(class UObject* WorldContextObject, struct FVector* TossVelocity, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, enum class ESuggestProjVelocityTraceOption TraceOption, float CollisionRadius, TArray<class AActor*>& ActorsToIgnore, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, bool bFavorHighArc, bool bDrawDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "BlueprintSuggestProjectileVelocityByChannel");

	Params::UVanguardBPFunctionLibrary_BlueprintSuggestProjectileVelocityByChannel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StartLocation = StartLocation;
	Parms.EndLocation = EndLocation;
	Parms.LaunchSpeed = LaunchSpeed;
	Parms.OverrideGravityZ = OverrideGravityZ;
	Parms.TraceOption = TraceOption;
	Parms.CollisionRadius = CollisionRadius;
	Parms.ActorsToIgnore = ActorsToIgnore;
	Parms.ObjectTypes = ObjectTypes;
	Parms.bTraceComplex = bTraceComplex;
	Parms.bFavorHighArc = bFavorHighArc;
	Parms.bDrawDebug = bDrawDebug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TossVelocity != nullptr)
		*TossVelocity = std::move(Parms.TossVelocity);

	return Parms.ReturnValue;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.AddActorComponentWithName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UActorComponent> ActorComponentClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ComponentName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             OutComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::AddActorComponentWithName(class AActor* Owner, TSubclassOf<class UActorComponent> ActorComponentClass, class FName ComponentName, class UActorComponent** OutComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "AddActorComponentWithName");

	Params::UVanguardBPFunctionLibrary_AddActorComponentWithName_Params Parms{};

	Parms.Owner = Owner;
	Parms.ActorComponentClass = ActorComponentClass;
	Parms.ComponentName = ComponentName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutComponent != nullptr)
		*OutComponent = Parms.OutComponent;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.AddActorComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UActorComponent> ActorComponentClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             OutComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVanguardBPFunctionLibrary::AddActorComponent(class AActor* Owner, TSubclassOf<class UActorComponent> ActorComponentClass, class UActorComponent** OutComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "AddActorComponent");

	Params::UVanguardBPFunctionLibrary_AddActorComponent_Params Parms{};

	Parms.Owner = Owner;
	Parms.ActorComponentClass = ActorComponentClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutComponent != nullptr)
		*OutComponent = Parms.OutComponent;

}


// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ActorLineTraceSingle
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TargetActor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETraceTypeQuery         TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDrawDebugTrace         DrawDebugType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FLinearColor                TraceColor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                TraceHitColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DrawTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVanguardBPFunctionLibrary::ActorLineTraceSingle(class UObject* WorldContextObject, class AActor* TargetActor, const struct FVector& Start, const struct FVector& End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, enum class EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VanguardBPFunctionLibrary", "ActorLineTraceSingle");

	Params::UVanguardBPFunctionLibrary_ActorLineTraceSingle_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TargetActor = TargetActor;
	Parms.Start = Start;
	Parms.End = End;
	Parms.TraceChannel = TraceChannel;
	Parms.bTraceComplex = bTraceComplex;
	Parms.DrawDebugType = DrawDebugType;
	Parms.TraceColor = TraceColor;
	Parms.TraceHitColor = TraceHitColor;
	Parms.DrawTime = DrawTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}

}


