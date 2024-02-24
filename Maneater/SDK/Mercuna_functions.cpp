#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Mercuna.BTDecorator_Mercuna_Reachable
// (None)

class UClass* UBTDecorator_Mercuna_Reachable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_Mercuna_Reachable");

	return Clss;
}


// BTDecorator_Mercuna_Reachable Mercuna.Default__BTDecorator_Mercuna_Reachable
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_Mercuna_Reachable* UBTDecorator_Mercuna_Reachable::GetDefaultObj()
{
	static class UBTDecorator_Mercuna_Reachable* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_Mercuna_Reachable*>(UBTDecorator_Mercuna_Reachable::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.BTTask_Mercuna_MoveTo
// (None)

class UClass* UBTTask_Mercuna_MoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_Mercuna_MoveTo");

	return Clss;
}


// BTTask_Mercuna_MoveTo Mercuna.Default__BTTask_Mercuna_MoveTo
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_Mercuna_MoveTo* UBTTask_Mercuna_MoveTo::GetDefaultObj()
{
	static class UBTTask_Mercuna_MoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_Mercuna_MoveTo*>(UBTTask_Mercuna_MoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.EnvQueryGenerator_Mercuna_Sphere
// (None)

class UClass* UEnvQueryGenerator_Mercuna_Sphere::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_Mercuna_Sphere");

	return Clss;
}


// EnvQueryGenerator_Mercuna_Sphere Mercuna.Default__EnvQueryGenerator_Mercuna_Sphere
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_Mercuna_Sphere* UEnvQueryGenerator_Mercuna_Sphere::GetDefaultObj()
{
	static class UEnvQueryGenerator_Mercuna_Sphere* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_Mercuna_Sphere*>(UEnvQueryGenerator_Mercuna_Sphere::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.EnvQueryGenerator_Mercuna_3DRing
// (None)

class UClass* UEnvQueryGenerator_Mercuna_3DRing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_Mercuna_3DRing");

	return Clss;
}


// EnvQueryGenerator_Mercuna_3DRing Mercuna.Default__EnvQueryGenerator_Mercuna_3DRing
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_Mercuna_3DRing* UEnvQueryGenerator_Mercuna_3DRing::GetDefaultObj()
{
	static class UEnvQueryGenerator_Mercuna_3DRing* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_Mercuna_3DRing*>(UEnvQueryGenerator_Mercuna_3DRing::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.MercunaQueryTest
// (None)

class UClass* UMercunaQueryTest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaQueryTest");

	return Clss;
}


// MercunaQueryTest Mercuna.Default__MercunaQueryTest
// (Public, ClassDefaultObject, ArchetypeObject)

class UMercunaQueryTest* UMercunaQueryTest::GetDefaultObj()
{
	static class UMercunaQueryTest* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercunaQueryTest*>(UMercunaQueryTest::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.EnvQueryTest_Mercuna_NavigableVolume
// (None)

class UClass* UEnvQueryTest_Mercuna_NavigableVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Mercuna_NavigableVolume");

	return Clss;
}


// EnvQueryTest_Mercuna_NavigableVolume Mercuna.Default__EnvQueryTest_Mercuna_NavigableVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Mercuna_NavigableVolume* UEnvQueryTest_Mercuna_NavigableVolume::GetDefaultObj()
{
	static class UEnvQueryTest_Mercuna_NavigableVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Mercuna_NavigableVolume*>(UEnvQueryTest_Mercuna_NavigableVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.EnvQueryTest_Mercuna_Reachable
// (None)

class UClass* UEnvQueryTest_Mercuna_Reachable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Mercuna_Reachable");

	return Clss;
}


// EnvQueryTest_Mercuna_Reachable Mercuna.Default__EnvQueryTest_Mercuna_Reachable
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Mercuna_Reachable* UEnvQueryTest_Mercuna_Reachable::GetDefaultObj()
{
	static class UEnvQueryTest_Mercuna_Reachable* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Mercuna_Reachable*>(UEnvQueryTest_Mercuna_Reachable::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.EnvQueryTest_Mercuna_NavRaycast
// (None)

class UClass* UEnvQueryTest_Mercuna_NavRaycast::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Mercuna_NavRaycast");

	return Clss;
}


// EnvQueryTest_Mercuna_NavRaycast Mercuna.Default__EnvQueryTest_Mercuna_NavRaycast
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Mercuna_NavRaycast* UEnvQueryTest_Mercuna_NavRaycast::GetDefaultObj()
{
	static class UEnvQueryTest_Mercuna_NavRaycast* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Mercuna_NavRaycast*>(UEnvQueryTest_Mercuna_NavRaycast::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.EnvQueryTest_Mercuna_Project
// (None)

class UClass* UEnvQueryTest_Mercuna_Project::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Mercuna_Project");

	return Clss;
}


// EnvQueryTest_Mercuna_Project Mercuna.Default__EnvQueryTest_Mercuna_Project
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Mercuna_Project* UEnvQueryTest_Mercuna_Project::GetDefaultObj()
{
	static class UEnvQueryTest_Mercuna_Project* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Mercuna_Project*>(UEnvQueryTest_Mercuna_Project::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.MercunaNavigationComponent
// (None)

class UClass* UMercunaNavigationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaNavigationComponent");

	return Clss;
}


// MercunaNavigationComponent Mercuna.Default__MercunaNavigationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMercunaNavigationComponent* UMercunaNavigationComponent::GetDefaultObj()
{
	static class UMercunaNavigationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercunaNavigationComponent*>(UMercunaNavigationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaNavigationComponent.TrackActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Speed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::TrackActor(class AActor* Actor, float Distance, float Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "TrackActor");

	Params::UMercunaNavigationComponent_TrackActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.Distance = Distance;
	Parms.Speed = Speed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMercunaNavigationComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.SetUsageFlags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMercunaPawnUsageFlags      UsageFlags                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::SetUsageFlags(struct FMercunaPawnUsageFlags* UsageFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "SetUsageFlags");

	Params::UMercunaNavigationComponent_SetUsageFlags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UsageFlags != nullptr)
		*UsageFlags = std::move(Parms.UsageFlags);

}


// Function Mercuna.MercunaNavigationComponent.SetNavOctree
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMercunaNavOctree*           NavOctree                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::SetNavOctree(class AMercunaNavOctree* NavOctree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "SetNavOctree");

	Params::UMercunaNavigationComponent_SetNavOctree_Params Parms{};

	Parms.NavOctree = NavOctree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::SetEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "SetEnabled");

	Params::UMercunaNavigationComponent_SetEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.SetAvoidanceAgainst
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::SetAvoidanceAgainst(class AActor* Actor, bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "SetAvoidanceAgainst");

	Params::UMercunaNavigationComponent_SetAvoidanceAgainst_Params Parms{};

	Parms.Actor = Actor;
	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.ResumeNavigation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMercunaNavigationComponent::ResumeNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "ResumeNavigation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.PauseNavigation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMercunaNavigationComponent::PauseNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "PauseNavigation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.MoveToLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Destination                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Speed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UsePartialPath                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::MoveToLocation(struct FVector& Destination, float EndDistance, float Speed, bool UsePartialPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "MoveToLocation");

	Params::UMercunaNavigationComponent_MoveToLocation_Params Parms{};

	Parms.Destination = Destination;
	Parms.EndDistance = EndDistance;
	Parms.Speed = Speed;
	Parms.UsePartialPath = UsePartialPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.MoveToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Speed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UsePartialPath                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::MoveToActor(class AActor* Actor, float EndDistance, float Speed, bool UsePartialPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "MoveToActor");

	Params::UMercunaNavigationComponent_MoveToActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.EndDistance = EndDistance;
	Parms.Speed = Speed;
	Parms.UsePartialPath = UsePartialPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Mercuna.MercunaNavigationComponent.MercunaMoveComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FAIRequestID                RequestID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMercunaMoveResult      Result                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::MercunaMoveComplete__DelegateSignature(const struct FAIRequestID& RequestID, enum class EMercunaMoveResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "MercunaMoveComplete__DelegateSignature");

	Params::UMercunaNavigationComponent_MercunaMoveComplete__DelegateSignature_Params Parms{};

	Parms.RequestID = RequestID;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mercuna.MercunaNavigationComponent.LookInDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPitch                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::LookInDirection(const struct FVector& Direction, float MaxPitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "LookInDirection");

	Params::UMercunaNavigationComponent_LookInDirection_Params Parms{};

	Parms.Direction = Direction;
	Parms.MaxPitch = MaxPitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.LookAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPitch                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::LookAt(class AActor* Actor, float MaxPitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "LookAt");

	Params::UMercunaNavigationComponent_LookAt_Params Parms{};

	Parms.Actor = Actor;
	Parms.MaxPitch = MaxPitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.IsReachable
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::IsReachable(const struct FVector& Point, bool* Success, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "IsReachable");

	Params::UMercunaNavigationComponent_IsReachable_Params Parms{};

	Parms.Point = Point;
	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Mercuna.MercunaNavigationComponent.GetPathInfo
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DistanceToEnd                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NextPathPoint                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsFinalPoint                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::GetPathInfo(bool* Valid, float* DistanceToEnd, struct FVector* NextPathPoint, bool* bIsFinalPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "GetPathInfo");

	Params::UMercunaNavigationComponent_GetPathInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	if (DistanceToEnd != nullptr)
		*DistanceToEnd = Parms.DistanceToEnd;

	if (NextPathPoint != nullptr)
		*NextPathPoint = std::move(Parms.NextPathPoint);

	if (bIsFinalPoint != nullptr)
		*bIsFinalPoint = Parms.bIsFinalPoint;

}


// Function Mercuna.MercunaNavigationComponent.GetNavOctree
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMercunaNavOctree*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AMercunaNavOctree* UMercunaNavigationComponent::GetNavOctree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "GetNavOctree");

	Params::UMercunaNavigationComponent_GetNavOctree_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaNavigationComponent.ConfigureMovement
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUsePathfinding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseDynamicAvoidance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::ConfigureMovement(bool bUsePathfinding, bool bUseDynamicAvoidance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "ConfigureMovement");

	Params::UMercunaNavigationComponent_ConfigureMovement_Params Parms{};

	Parms.bUsePathfinding = bUsePathfinding;
	Parms.bUseDynamicAvoidance = bUseDynamicAvoidance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.Configure
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMercunaNavigationConfigurationNewConfiguration                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::Configure(struct FMercunaNavigationConfiguration& NewConfiguration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "Configure");

	Params::UMercunaNavigationComponent_Configure_Params Parms{};

	Parms.NewConfiguration = NewConfiguration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.ClearAvoidanceExclusions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMercunaNavigationComponent::ClearAvoidanceExclusions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "ClearAvoidanceExclusions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.CheckReachable
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMercunaNavigationComponent::CheckReachable(const struct FVector& Point, bool* Success, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "CheckReachable");

	Params::UMercunaNavigationComponent_CheckReachable_Params Parms{};

	Parms.Point = Point;
	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Mercuna.MercunaNavigationComponent.CancelMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMercunaNavigationComponent::CancelMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "CancelMovement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavigationComponent.CancelLookAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMercunaNavigationComponent::CancelLookAt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavigationComponent", "CancelLookAt");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Mercuna.MercunaMoveToProxy
// (None)

class UClass* UMercunaMoveToProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaMoveToProxy");

	return Clss;
}


// MercunaMoveToProxy Mercuna.Default__MercunaMoveToProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UMercunaMoveToProxy* UMercunaMoveToProxy::GetDefaultObj()
{
	static class UMercunaMoveToProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercunaMoveToProxy*>(UMercunaMoveToProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaMoveToProxy.OnMoveComplete
// (Final, Native, Private)
// Parameters:
// struct FAIRequestID                RequestID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMercunaMoveResult      Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaMoveToProxy::OnMoveComplete(const struct FAIRequestID& RequestID, enum class EMercunaMoveResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaMoveToProxy", "OnMoveComplete");

	Params::UMercunaMoveToProxy_OnMoveComplete_Params Parms{};

	Parms.RequestID = RequestID;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaMoveToProxy.MercunaMoveToLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Destination                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Speed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UsePartialPath                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaMoveToProxy*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMercunaMoveToProxy* UMercunaMoveToProxy::MercunaMoveToLocation(class UObject* WorldContextObject, class APawn* Pawn, struct FVector& Destination, float EndDistance, float Speed, bool UsePartialPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaMoveToProxy", "MercunaMoveToLocation");

	Params::UMercunaMoveToProxy_MercunaMoveToLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Pawn = Pawn;
	Parms.Destination = Destination;
	Parms.EndDistance = EndDistance;
	Parms.Speed = Speed;
	Parms.UsePartialPath = UsePartialPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaMoveToProxy.MercunaMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Speed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UsePartialPath                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaMoveToProxy*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMercunaMoveToProxy* UMercunaMoveToProxy::MercunaMoveToActor(class UObject* WorldContextObject, class APawn* Pawn, class AActor* Actor, float EndDistance, float Speed, bool UsePartialPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaMoveToProxy", "MercunaMoveToActor");

	Params::UMercunaMoveToProxy_MercunaMoveToActor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Pawn = Pawn;
	Parms.Actor = Actor;
	Parms.EndDistance = EndDistance;
	Parms.Speed = Speed;
	Parms.UsePartialPath = UsePartialPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Mercuna.MercunaTrackActorProxy
// (None)

class UClass* UMercunaTrackActorProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaTrackActorProxy");

	return Clss;
}


// MercunaTrackActorProxy Mercuna.Default__MercunaTrackActorProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UMercunaTrackActorProxy* UMercunaTrackActorProxy::GetDefaultObj()
{
	static class UMercunaTrackActorProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercunaTrackActorProxy*>(UMercunaTrackActorProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaTrackActorProxy.OnMoveComplete
// (Final, Native, Private)
// Parameters:
// struct FAIRequestID                RequestID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMercunaMoveResult      Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaTrackActorProxy::OnMoveComplete(const struct FAIRequestID& RequestID, enum class EMercunaMoveResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaTrackActorProxy", "OnMoveComplete");

	Params::UMercunaTrackActorProxy_OnMoveComplete_Params Parms{};

	Parms.RequestID = RequestID;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaTrackActorProxy.MercunaTrackActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Speed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaTrackActorProxy*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMercunaTrackActorProxy* UMercunaTrackActorProxy::MercunaTrackActor(class UObject* WorldContextObject, class APawn* Pawn, class AActor* Actor, float Distance, float Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaTrackActorProxy", "MercunaTrackActor");

	Params::UMercunaTrackActorProxy_MercunaTrackActor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Pawn = Pawn;
	Parms.Actor = Actor;
	Parms.Distance = Distance;
	Parms.Speed = Speed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Mercuna.MercunaNavModifierVolume
// (Actor)

class UClass* AMercunaNavModifierVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaNavModifierVolume");

	return Clss;
}


// MercunaNavModifierVolume Mercuna.Default__MercunaNavModifierVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AMercunaNavModifierVolume* AMercunaNavModifierVolume::GetDefaultObj()
{
	static class AMercunaNavModifierVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AMercunaNavModifierVolume*>(AMercunaNavModifierVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaNavModifierVolume.SetUsageTypes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMercunaNavUsageTypes       NewUsageTypes                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AMercunaNavModifierVolume::SetUsageTypes(struct FMercunaNavUsageTypes& NewUsageTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavModifierVolume", "SetUsageTypes");

	Params::AMercunaNavModifierVolume_SetUsageTypes_Params Parms{};

	Parms.NewUsageTypes = NewUsageTypes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavModifierVolume.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavModifierVolume::SetSize(const struct FVector& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavModifierVolume", "SetSize");

	Params::AMercunaNavModifierVolume_SetSize_Params Parms{};

	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavModifierVolume.SetLocationAndSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavModifierVolume::SetLocationAndSize(const struct FVector& Location, const struct FVector& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavModifierVolume", "SetLocationAndSize");

	Params::AMercunaNavModifierVolume_SetLocationAndSize_Params Parms{};

	Parms.Location = Location;
	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavModifierVolume.SetLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavModifierVolume::SetLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavModifierVolume", "SetLocation");

	Params::AMercunaNavModifierVolume_SetLocation_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavModifierVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavModifierVolume::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavModifierVolume", "SetEnabled");

	Params::AMercunaNavModifierVolume_SetEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavModifierVolume.SetCostMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewCostMultiplier                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavModifierVolume::SetCostMultiplier(float NewCostMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavModifierVolume", "SetCostMultiplier");

	Params::AMercunaNavModifierVolume_SetCostMultiplier_Params Parms{};

	Parms.NewCostMultiplier = NewCostMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavModifierVolume.AddToOctree
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMercunaNavOctree*           NavOctree                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavModifierVolume::AddToOctree(class AMercunaNavOctree* NavOctree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavModifierVolume", "AddToOctree");

	Params::AMercunaNavModifierVolume_AddToOctree_Params Parms{};

	Parms.NavOctree = NavOctree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Mercuna.MercunaNavOctree
// (Actor)

class UClass* AMercunaNavOctree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaNavOctree");

	return Clss;
}


// MercunaNavOctree Mercuna.Default__MercunaNavOctree
// (Public, ClassDefaultObject, ArchetypeObject)

class AMercunaNavOctree* AMercunaNavOctree::GetDefaultObj()
{
	static class AMercunaNavOctree* Default = nullptr;

	if (!Default)
		Default = static_cast<AMercunaNavOctree*>(AMercunaNavOctree::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaNavOctree.UpdateModifierVolumeParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMercunaNavModifierVolume*   ModifierVolume                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavOctree::UpdateModifierVolumeParams(class AMercunaNavModifierVolume* ModifierVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "UpdateModifierVolumeParams");

	Params::AMercunaNavOctree_UpdateModifierVolumeParams_Params Parms{};

	Parms.ModifierVolume = ModifierVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavOctree.SetNavigationRotation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void AMercunaNavOctree::SetNavigationRotation(struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "SetNavigationRotation");

	Params::AMercunaNavOctree_SetNavigationRotation_Params Parms{};

	Parms.Rotation = Rotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavOctree.RemoveModifierVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMercunaNavModifierVolume*   ModifierVolume                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavOctree::RemoveModifierVolume(class AMercunaNavModifierVolume* ModifierVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "RemoveModifierVolume");

	Params::AMercunaNavOctree_RemoveModifierVolume_Params Parms{};

	Parms.ModifierVolume = ModifierVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavOctree.RebuildVolumes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FBox>                Volumes                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               StagedBuild                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavOctree::RebuildVolumes(TArray<struct FBox>& Volumes, bool StagedBuild)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "RebuildVolumes");

	Params::AMercunaNavOctree_RebuildVolumes_Params Parms{};

	Parms.Volumes = Volumes;
	Parms.StagedBuild = StagedBuild;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavOctree.RebuildVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               StagedBuild                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavOctree::RebuildVolume(class AActor* Volume, bool StagedBuild)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "RebuildVolume");

	Params::AMercunaNavOctree_RebuildVolume_Params Parms{};

	Parms.Volume = Volume;
	Parms.StagedBuild = StagedBuild;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavOctree.Raycast
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NavigationRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitPosition                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               RayHit                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavOctree::Raycast(const struct FVector& Start, const struct FVector& End, float NavigationRadius, struct FVector* HitPosition, bool* RayHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "Raycast");

	Params::AMercunaNavOctree_Raycast_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.NavigationRadius = NavigationRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HitPosition != nullptr)
		*HitPosition = std::move(Parms.HitPosition);

	if (RayHit != nullptr)
		*RayHit = Parms.RayHit;

}


// DelegateFunction Mercuna.MercunaNavOctree.MercunaRebuildComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavOctree::MercunaRebuildComplete__DelegateSignature(class AActor* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "MercunaRebuildComplete__DelegateSignature");

	Params::AMercunaNavOctree_MercunaRebuildComplete__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Mercuna.MercunaNavOctree.MercunaLoadComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void AMercunaNavOctree::MercunaLoadComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "MercunaLoadComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Mercuna.MercunaNavOctree.MercunaBuildComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void AMercunaNavOctree::MercunaBuildComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "MercunaBuildComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mercuna.MercunaNavOctree.IsReachable
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NavigationRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPathLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMercunaNavOctree::IsReachable(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxPathLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "IsReachable");

	Params::AMercunaNavOctree_IsReachable_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.NavigationRadius = NavigationRadius;
	Parms.MaxPathLength = MaxPathLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaNavOctree.IsNavigableMulti
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             Positions                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NavigationRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       Results                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavOctree::IsNavigableMulti(TArray<struct FVector>& Positions, float NavigationRadius, TArray<bool>* Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "IsNavigableMulti");

	Params::AMercunaNavOctree_IsNavigableMulti_Params Parms{};

	Parms.Positions = Positions;
	Parms.NavigationRadius = NavigationRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Results != nullptr)
		*Results = std::move(Parms.Results);

}


// Function Mercuna.MercunaNavOctree.IsNavigable
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NavigationRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavOctree::IsNavigable(const struct FVector& Position, float NavigationRadius, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "IsNavigable");

	Params::AMercunaNavOctree_IsNavigable_Params Parms{};

	Parms.Position = Position;
	Parms.NavigationRadius = NavigationRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Mercuna.MercunaNavOctree.FindSplineToLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NavigationRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxSpeed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxAcceleration                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowPartial                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPathLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaSpline*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMercunaSpline* AMercunaNavOctree::FindSplineToLocation(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "FindSplineToLocation");

	Params::AMercunaNavOctree_FindSplineToLocation_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.NavigationRadius = NavigationRadius;
	Parms.MaxSpeed = MaxSpeed;
	Parms.MaxAcceleration = MaxAcceleration;
	Parms.AllowPartial = AllowPartial;
	Parms.MaxPathLength = MaxPathLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaNavOctree.FindPathToLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NavigationRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowPartial                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPathLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaPath*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMercunaPath* AMercunaNavOctree::FindPathToLocation(const struct FVector& Start, const struct FVector& End, float NavigationRadius, bool AllowPartial, float MaxPathLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "FindPathToLocation");

	Params::AMercunaNavOctree_FindPathToLocation_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.NavigationRadius = NavigationRadius;
	Parms.AllowPartial = AllowPartial;
	Parms.MaxPathLength = MaxPathLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaNavOctree.FindPathToActor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      GoalActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NavigationRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowPartial                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPathLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaPath*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMercunaPath* AMercunaNavOctree::FindPathToActor(const struct FVector& Start, class AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "FindPathToActor");

	Params::AMercunaNavOctree_FindPathToActor_Params Parms{};

	Parms.Start = Start;
	Parms.GoalActor = GoalActor;
	Parms.NavigationRadius = NavigationRadius;
	Parms.AllowPartial = AllowPartial;
	Parms.MaxPathLength = MaxPathLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaNavOctree.ClampToNavigable
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NavigationRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SearchRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ClampedPosition                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavOctree::ClampToNavigable(const struct FVector& Position, float NavigationRadius, float SearchRadius, struct FVector* ClampedPosition, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "ClampToNavigable");

	Params::AMercunaNavOctree_ClampToNavigable_Params Parms{};

	Parms.Position = Position;
	Parms.NavigationRadius = NavigationRadius;
	Parms.SearchRadius = SearchRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClampedPosition != nullptr)
		*ClampedPosition = std::move(Parms.ClampedPosition);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Mercuna.MercunaNavOctree.CheckReachable
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NavigationRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPathLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavOctree::CheckReachable(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxPathLength, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "CheckReachable");

	Params::AMercunaNavOctree_CheckReachable_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.NavigationRadius = NavigationRadius;
	Parms.MaxPathLength = MaxPathLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Mercuna.MercunaNavOctree.Build
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AMercunaNavOctree::Build()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavOctree", "Build");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Mercuna.MercunaNavSeed
// (Actor)

class UClass* AMercunaNavSeed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaNavSeed");

	return Clss;
}


// MercunaNavSeed Mercuna.Default__MercunaNavSeed
// (Public, ClassDefaultObject, ArchetypeObject)

class AMercunaNavSeed* AMercunaNavSeed::GetDefaultObj()
{
	static class AMercunaNavSeed* Default = nullptr;

	if (!Default)
		Default = static_cast<AMercunaNavSeed*>(AMercunaNavSeed::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.MercunaNavSeedComponent
// (SceneComponent)

class UClass* UMercunaNavSeedComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaNavSeedComponent");

	return Clss;
}


// MercunaNavSeedComponent Mercuna.Default__MercunaNavSeedComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMercunaNavSeedComponent* UMercunaNavSeedComponent::GetDefaultObj()
{
	static class UMercunaNavSeedComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercunaNavSeedComponent*>(UMercunaNavSeedComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.MercunaNavTestingActor
// (Actor)

class UClass* AMercunaNavTestingActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaNavTestingActor");

	return Clss;
}


// MercunaNavTestingActor Mercuna.Default__MercunaNavTestingActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AMercunaNavTestingActor* AMercunaNavTestingActor::GetDefaultObj()
{
	static class AMercunaNavTestingActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AMercunaNavTestingActor*>(AMercunaNavTestingActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaNavTestingActor.OnSplineUpdate
// (Final, Native, Protected)
// Parameters:
// enum class EMercunaSplineEvent     SplineEvent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavTestingActor::OnSplineUpdate(enum class EMercunaSplineEvent SplineEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavTestingActor", "OnSplineUpdate");

	Params::AMercunaNavTestingActor_OnSplineUpdate_Params Parms{};

	Parms.SplineEvent = SplineEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavTestingActor.OnOctreeBuildComplete
// (Final, Native, Protected)
// Parameters:

void AMercunaNavTestingActor::OnOctreeBuildComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavTestingActor", "OnOctreeBuildComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Mercuna.MercunaNavVolume
// (Actor)

class UClass* AMercunaNavVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaNavVolume");

	return Clss;
}


// MercunaNavVolume Mercuna.Default__MercunaNavVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AMercunaNavVolume* AMercunaNavVolume::GetDefaultObj()
{
	static class AMercunaNavVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AMercunaNavVolume*>(AMercunaNavVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaNavVolume.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavVolume::SetSize(const struct FVector& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavVolume", "SetSize");

	Params::AMercunaNavVolume_SetSize_Params Parms{};

	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavVolume.SetNavigationRotation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void AMercunaNavVolume::SetNavigationRotation(struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavVolume", "SetNavigationRotation");

	Params::AMercunaNavVolume_SetNavigationRotation_Params Parms{};

	Parms.Rotation = Rotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaNavVolume.AddToOctree
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMercunaNavOctree*           NavOctree                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMercunaNavVolume::AddToOctree(class AMercunaNavOctree* NavOctree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaNavVolume", "AddToOctree");

	Params::AMercunaNavVolume_AddToOctree_Params Parms{};

	Parms.NavOctree = NavOctree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Mercuna.MercunaObstacleComponent
// (SceneComponent)

class UClass* UMercunaObstacleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaObstacleComponent");

	return Clss;
}


// MercunaObstacleComponent Mercuna.Default__MercunaObstacleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMercunaObstacleComponent* UMercunaObstacleComponent::GetDefaultObj()
{
	static class UMercunaObstacleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercunaObstacleComponent*>(UMercunaObstacleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.MercunaClampToNavigableProxy
// (None)

class UClass* UMercunaClampToNavigableProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaClampToNavigableProxy");

	return Clss;
}


// MercunaClampToNavigableProxy Mercuna.Default__MercunaClampToNavigableProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UMercunaClampToNavigableProxy* UMercunaClampToNavigableProxy::GetDefaultObj()
{
	static class UMercunaClampToNavigableProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercunaClampToNavigableProxy*>(UMercunaClampToNavigableProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaClampToNavigableProxy.MercunaClampToNavigable
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NavigationRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SearchRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaClampToNavigableProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMercunaClampToNavigableProxy* UMercunaClampToNavigableProxy::MercunaClampToNavigable(class UObject* WorldContextObject, const struct FVector& Position, float NavigationRadius, float SearchRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaClampToNavigableProxy", "MercunaClampToNavigable");

	Params::UMercunaClampToNavigableProxy_MercunaClampToNavigable_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Position = Position;
	Parms.NavigationRadius = NavigationRadius;
	Parms.SearchRadius = SearchRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Mercuna.MercunaRaycastProxy
// (None)

class UClass* UMercunaRaycastProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaRaycastProxy");

	return Clss;
}


// MercunaRaycastProxy Mercuna.Default__MercunaRaycastProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UMercunaRaycastProxy* UMercunaRaycastProxy::GetDefaultObj()
{
	static class UMercunaRaycastProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercunaRaycastProxy*>(UMercunaRaycastProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaRaycastProxy.MercunaRaycast
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NavigationRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaRaycastProxy*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMercunaRaycastProxy* UMercunaRaycastProxy::MercunaRaycast(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float NavigationRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaRaycastProxy", "MercunaRaycast");

	Params::UMercunaRaycastProxy_MercunaRaycast_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Start = Start;
	Parms.End = End;
	Parms.NavigationRadius = NavigationRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Mercuna.MercunaPath
// (None)

class UClass* UMercunaPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaPath");

	return Clss;
}


// MercunaPath Mercuna.Default__MercunaPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UMercunaPath* UMercunaPath::GetDefaultObj()
{
	static class UMercunaPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercunaPath*>(UMercunaPath::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaPath.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMercunaPath::IsValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaPath", "IsValid");

	Params::UMercunaPath_IsValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaPath.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMercunaPath::IsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaPath", "IsReady");

	Params::UMercunaPath_IsReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaPath.IsPartial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMercunaPath::IsPartial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaPath", "IsPartial");

	Params::UMercunaPath_IsPartial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaPath.GetPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              I                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMercunaPath::GetPoint(int32 I)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaPath", "GetPoint");

	Params::UMercunaPath_GetPoint_Params Parms{};

	Parms.I = I;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaPath.GetPathLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMercunaPath::GetPathLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaPath", "GetPathLength");

	Params::UMercunaPath_GetPathLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaPath.GetNumPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMercunaPath::GetNumPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaPath", "GetNumPoints");

	Params::UMercunaPath_GetNumPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaPath.GetDebugInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              NodesUsed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutOfNodes                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              QueryTime                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaPath::GetDebugInfo(int32* NodesUsed, bool* bOutOfNodes, float* QueryTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaPath", "GetDebugInfo");

	Params::UMercunaPath_GetDebugInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NodesUsed != nullptr)
		*NodesUsed = Parms.NodesUsed;

	if (bOutOfNodes != nullptr)
		*bOutOfNodes = Parms.bOutOfNodes;

	if (QueryTime != nullptr)
		*QueryTime = Parms.QueryTime;

}


// Class Mercuna.MercunaSpline
// (None)

class UClass* UMercunaSpline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaSpline");

	return Clss;
}


// MercunaSpline Mercuna.Default__MercunaSpline
// (Public, ClassDefaultObject, ArchetypeObject)

class UMercunaSpline* UMercunaSpline::GetDefaultObj()
{
	static class UMercunaSpline* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercunaSpline*>(UMercunaSpline::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaSpline.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMercunaSpline::IsValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaSpline", "IsValid");

	Params::UMercunaSpline_IsValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaSpline.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMercunaSpline::IsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaSpline", "IsReady");

	Params::UMercunaSpline_IsReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaSpline.IsPartial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMercunaSpline::IsPartial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaSpline", "IsPartial");

	Params::UMercunaSpline_IsPartial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaSpline.GetSplinePoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSplinePoint>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FSplinePoint> UMercunaSpline::GetSplinePoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaSpline", "GetSplinePoints");

	Params::UMercunaSpline_GetSplinePoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaSpline.GetPathPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              I                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMercunaSpline::GetPathPoint(int32 I)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaSpline", "GetPathPoint");

	Params::UMercunaSpline_GetPathPoint_Params Parms{};

	Parms.I = I;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaSpline.GetNumPathPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMercunaSpline::GetNumPathPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaSpline", "GetNumPathPoints");

	Params::UMercunaSpline_GetNumPathPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mercuna.MercunaSpline.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMercunaSpline::GetLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaSpline", "GetLength");

	Params::UMercunaSpline_GetLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Mercuna.MercunaTask_MoveTo
// (None)

class UClass* UMercunaTask_MoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MercunaTask_MoveTo");

	return Clss;
}


// MercunaTask_MoveTo Mercuna.Default__MercunaTask_MoveTo
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UMercunaTask_MoveTo* UMercunaTask_MoveTo::GetDefaultObj()
{
	static class UMercunaTask_MoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UMercunaTask_MoveTo*>(UMercunaTask_MoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Function Mercuna.MercunaTask_MoveTo.OnMoveComplete
// (Final, Native, Protected)
// Parameters:
// struct FAIRequestID                RequestID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMercunaMoveResult      Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMercunaTask_MoveTo::OnMoveComplete(const struct FAIRequestID& RequestID, enum class EMercunaMoveResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaTask_MoveTo", "OnMoveComplete");

	Params::UMercunaTask_MoveTo_OnMoveComplete_Params Parms{};

	Parms.RequestID = RequestID;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mercuna.MercunaTask_MoveTo.MercunaMoveTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AAIController*               Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     GoalLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      GoalActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AcceptPartialPath                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaTask_MoveTo*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMercunaTask_MoveTo* UMercunaTask_MoveTo::MercunaMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MercunaTask_MoveTo", "MercunaMoveTo");

	Params::UMercunaTask_MoveTo_MercunaMoveTo_Params Parms{};

	Parms.Controller = Controller;
	Parms.GoalLocation = GoalLocation;
	Parms.GoalActor = GoalActor;
	Parms.EndDistance = EndDistance;
	Parms.AcceptPartialPath = AcceptPartialPath;
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Mercuna.MerNavOctreeRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMerNavOctreeRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MerNavOctreeRenderingComponent");

	return Clss;
}


// MerNavOctreeRenderingComponent Mercuna.Default__MerNavOctreeRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMerNavOctreeRenderingComponent* UMerNavOctreeRenderingComponent::GetDefaultObj()
{
	static class UMerNavOctreeRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMerNavOctreeRenderingComponent*>(UMerNavOctreeRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.MerSettings
// (None)

class UClass* UMerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MerSettings");

	return Clss;
}


// MerSettings Mercuna.Default__MerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMerSettings* UMerSettings::GetDefaultObj()
{
	static class UMerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMerSettings*>(UMerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Mercuna.MerEditorSettings
// (None)

class UClass* UMerEditorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MerEditorSettings");

	return Clss;
}


// MerEditorSettings Mercuna.Default__MerEditorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMerEditorSettings* UMerEditorSettings::GetDefaultObj()
{
	static class UMerEditorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMerEditorSettings*>(UMerEditorSettings::StaticClass()->DefaultObject);

	return Default;
}

}


