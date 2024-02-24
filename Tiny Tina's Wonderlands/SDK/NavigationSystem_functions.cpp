#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NavigationSystem.NavigationSystemV1
// (None)

class UClass* UNavigationSystemV1::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationSystemV1");

	return Clss;
}


// NavigationSystemV1 NavigationSystem.Default__NavigationSystemV1
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationSystemV1* UNavigationSystemV1::GetDefaultObj()
{
	static class UNavigationSystemV1* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationSystemV1*>(UNavigationSystemV1::StaticClass()->DefaultObject);

	return Default;
}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Goal                                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavigationSystemV1::SimpleMoveToLocation(class AController* Controller, struct FVector& Goal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "SimpleMoveToLocation");

	Params::UNavigationSystemV1_SimpleMoveToLocation_Params Parms{};

	Parms.Controller = Controller;
	Parms.Goal = Goal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Goal                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavigationSystemV1::SimpleMoveToActor(class AController* Controller, class AActor* Goal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "SimpleMoveToActor");

	Params::UNavigationSystemV1_SimpleMoveToActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.Goal = Goal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*             NavData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     QueryExtent                                                      (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UNavigationSystemV1::ProjectPointToNavigation(class UObject* WorldContextObject, struct FVector& Point, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const struct FVector& QueryExtent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "ProjectPointToNavigation");

	Params::UNavigationSystemV1_ProjectPointToNavigation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Point = Point;
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;
	Parms.QueryExtent = QueryExtent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ANavMeshBoundsVolume*        NavVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "OnNavigationBoundsUpdated");

	Params::UNavigationSystemV1_OnNavigationBoundsUpdated_Params Parms{};

	Parms.NavVolume = NavVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ProjectedLocation                                                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*             NavData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     QueryExtent                                                      (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavigationSystemV1::K2_ProjectPointToNavigation(class UObject* WorldContextObject, struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const struct FVector& QueryExtent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_ProjectPointToNavigation");

	Params::UNavigationSystemV1_K2_ProjectPointToNavigation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Point = Point;
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;
	Parms.QueryExtent = QueryExtent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = std::move(Parms.ProjectedLocation);

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     RandomLocation                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*             NavData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavigationSystemV1::K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_GetRandomReachablePointInRadius");

	Params::UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Origin = Origin;
	Parms.Radius = Radius;
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RandomLocation != nullptr)
		*RandomLocation = std::move(Parms.RandomLocation);

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     RandomLocation                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*             NavData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "K2_GetRandomPointInNavigableRadius");

	Params::UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Origin = Origin;
	Parms.Radius = Radius;
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RandomLocation != nullptr)
		*RandomLocation = std::move(Parms.RandomLocation);

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*             NavData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UNavigationSystemV1::GetRandomReachablePointInRadius(class UObject* WorldContextObject, struct FVector& Origin, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "GetRandomReachablePointInRadius");

	Params::UNavigationSystemV1_GetRandomReachablePointInRadius_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Origin = Origin;
	Parms.Radius = Radius;
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*             NavData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UNavigationSystemV1::GetRandomPointInNavigableRadius(class UObject* WorldContextObject, struct FVector& Origin, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "GetRandomPointInNavigableRadius");

	Params::UNavigationSystemV1_GetRandomPointInNavigableRadius_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Origin = Origin;
	Parms.Radius = Radius;
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationSystemV1*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNavigationSystemV1* UNavigationSystemV1::GetNavigationSystem(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationSystemV1", "GetNavigationSystem");

	Params::UNavigationSystemV1_GetNavigationSystem_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NavigationSystem.NavigationData
// (Actor)

class UClass* ANavigationData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationData");

	return Clss;
}


// NavigationData NavigationSystem.Default__NavigationData
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavigationData* ANavigationData::GetDefaultObj()
{
	static class ANavigationData* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavigationData*>(ANavigationData::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.AbstractNavData
// (Actor)

class UClass* AAbstractNavData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbstractNavData");

	return Clss;
}


// AbstractNavData NavigationSystem.Default__AbstractNavData
// (Public, ClassDefaultObject, ArchetypeObject)

class AAbstractNavData* AAbstractNavData::GetDefaultObj()
{
	static class AAbstractNavData* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbstractNavData*>(AAbstractNavData::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.CrowdManagerBase
// (None)

class UClass* UCrowdManagerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrowdManagerBase");

	return Clss;
}


// CrowdManagerBase NavigationSystem.Default__CrowdManagerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrowdManagerBase* UCrowdManagerBase::GetDefaultObj()
{
	static class UCrowdManagerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrowdManagerBase*>(UCrowdManagerBase::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavData
// (None)

class UClass* UHavokNavData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavData");

	return Clss;
}


// HavokNavData NavigationSystem.Default__HavokNavData
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavData* UHavokNavData::GetDefaultObj()
{
	static class UHavokNavData* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavData*>(UHavokNavData::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationQueryFilter
// (None)

class UClass* UNavigationQueryFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationQueryFilter");

	return Clss;
}


// NavigationQueryFilter NavigationSystem.Default__NavigationQueryFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationQueryFilter* UNavigationQueryFilter::GetDefaultObj()
{
	static class UNavigationQueryFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationQueryFilter*>(UNavigationQueryFilter::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavigationQueryFilter
// (None)

class UClass* UHavokNavigationQueryFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavigationQueryFilter");

	return Clss;
}


// HavokNavigationQueryFilter NavigationSystem.Default__HavokNavigationQueryFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavigationQueryFilter* UHavokNavigationQueryFilter::GetDefaultObj()
{
	static class UHavokNavigationQueryFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavigationQueryFilter*>(UHavokNavigationQueryFilter::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.GbxNavLayerBase
// (None)

class UClass* UGbxNavLayerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavLayerBase");

	return Clss;
}


// GbxNavLayerBase NavigationSystem.Default__GbxNavLayerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavLayerBase* UGbxNavLayerBase::GetDefaultObj()
{
	static class UGbxNavLayerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavLayerBase*>(UGbxNavLayerBase::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavLayer
// (None)

class UClass* UHavokNavLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavLayer");

	return Clss;
}


// HavokNavLayer NavigationSystem.Default__HavokNavLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavLayer* UHavokNavLayer::GetDefaultObj()
{
	static class UHavokNavLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavLayer*>(UHavokNavLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavLayerRegistry
// (None)

class UClass* UHavokNavLayerRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavLayerRegistry");

	return Clss;
}


// HavokNavLayerRegistry NavigationSystem.Default__HavokNavLayerRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavLayerRegistry* UHavokNavLayerRegistry::GetDefaultObj()
{
	static class UHavokNavLayerRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavLayerRegistry*>(UHavokNavLayerRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavMesh
// (None)

class UClass* UHavokNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavMesh");

	return Clss;
}


// HavokNavMesh NavigationSystem.Default__HavokNavMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavMesh* UHavokNavMesh::GetDefaultObj()
{
	static class UHavokNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavMesh*>(UHavokNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavTraversalData
// (None)

class UClass* UNavTraversalData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavTraversalData");

	return Clss;
}


// NavTraversalData NavigationSystem.Default__NavTraversalData
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavTraversalData* UNavTraversalData::GetDefaultObj()
{
	static class UNavTraversalData* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavTraversalData*>(UNavTraversalData::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavMeshGenerationSettings
// (None)

class UClass* UHavokNavMeshGenerationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavMeshGenerationSettings");

	return Clss;
}


// HavokNavMeshGenerationSettings NavigationSystem.Default__HavokNavMeshGenerationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavMeshGenerationSettings* UHavokNavMeshGenerationSettings::GetDefaultObj()
{
	static class UHavokNavMeshGenerationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavMeshGenerationSettings*>(UHavokNavMeshGenerationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavMeshLayer
// (None)

class UClass* UHavokNavMeshLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavMeshLayer");

	return Clss;
}


// HavokNavMeshLayer NavigationSystem.Default__HavokNavMeshLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavMeshLayer* UHavokNavMeshLayer::GetDefaultObj()
{
	static class UHavokNavMeshLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavMeshLayer*>(UHavokNavMeshLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavMeshLayer_Default
// (None)

class UClass* UHavokNavMeshLayer_Default::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavMeshLayer_Default");

	return Clss;
}


// HavokNavMeshLayer_Default NavigationSystem.Default__HavokNavMeshLayer_Default
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavMeshLayer_Default* UHavokNavMeshLayer_Default::GetDefaultObj()
{
	static class UHavokNavMeshLayer_Default* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavMeshLayer_Default*>(UHavokNavMeshLayer_Default::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavVolume
// (None)

class UClass* UHavokNavVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavVolume");

	return Clss;
}


// HavokNavVolume NavigationSystem.Default__HavokNavVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavVolume* UHavokNavVolume::GetDefaultObj()
{
	static class UHavokNavVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavVolume*>(UHavokNavVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavVolumeGenerationSettings
// (None)

class UClass* UHavokNavVolumeGenerationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavVolumeGenerationSettings");

	return Clss;
}


// HavokNavVolumeGenerationSettings NavigationSystem.Default__HavokNavVolumeGenerationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavVolumeGenerationSettings* UHavokNavVolumeGenerationSettings::GetDefaultObj()
{
	static class UHavokNavVolumeGenerationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavVolumeGenerationSettings*>(UHavokNavVolumeGenerationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavVolumeLayer
// (None)

class UClass* UHavokNavVolumeLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavVolumeLayer");

	return Clss;
}


// HavokNavVolumeLayer NavigationSystem.Default__HavokNavVolumeLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavVolumeLayer* UHavokNavVolumeLayer::GetDefaultObj()
{
	static class UHavokNavVolumeLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavVolumeLayer*>(UHavokNavVolumeLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokNavVolumeLayer_Default
// (None)

class UClass* UHavokNavVolumeLayer_Default::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavVolumeLayer_Default");

	return Clss;
}


// HavokNavVolumeLayer_Default NavigationSystem.Default__HavokNavVolumeLayer_Default
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavVolumeLayer_Default* UHavokNavVolumeLayer_Default::GetDefaultObj()
{
	static class UHavokNavVolumeLayer_Default* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavVolumeLayer_Default*>(UHavokNavVolumeLayer_Default::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokTraversalType
// (None)

class UClass* UHavokTraversalType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokTraversalType");

	return Clss;
}


// HavokTraversalType NavigationSystem.Default__HavokTraversalType
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokTraversalType* UHavokTraversalType::GetDefaultObj()
{
	static class UHavokTraversalType* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokTraversalType*>(UHavokTraversalType::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokTraversalType_ClimbUp
// (None)

class UClass* UHavokTraversalType_ClimbUp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokTraversalType_ClimbUp");

	return Clss;
}


// HavokTraversalType_ClimbUp NavigationSystem.Default__HavokTraversalType_ClimbUp
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokTraversalType_ClimbUp* UHavokTraversalType_ClimbUp::GetDefaultObj()
{
	static class UHavokTraversalType_ClimbUp* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokTraversalType_ClimbUp*>(UHavokTraversalType_ClimbUp::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokTraversalType_DropDown
// (None)

class UClass* UHavokTraversalType_DropDown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokTraversalType_DropDown");

	return Clss;
}


// HavokTraversalType_DropDown NavigationSystem.Default__HavokTraversalType_DropDown
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokTraversalType_DropDown* UHavokTraversalType_DropDown::GetDefaultObj()
{
	static class UHavokTraversalType_DropDown* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokTraversalType_DropDown*>(UHavokTraversalType_DropDown::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokTraversalType_Jump
// (None)

class UClass* UHavokTraversalType_Jump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokTraversalType_Jump");

	return Clss;
}


// HavokTraversalType_Jump NavigationSystem.Default__HavokTraversalType_Jump
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokTraversalType_Jump* UHavokTraversalType_Jump::GetDefaultObj()
{
	static class UHavokTraversalType_Jump* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokTraversalType_Jump*>(UHavokTraversalType_Jump::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokTraversalType_Vault
// (None)

class UClass* UHavokTraversalType_Vault::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokTraversalType_Vault");

	return Clss;
}


// HavokTraversalType_Vault NavigationSystem.Default__HavokTraversalType_Vault
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokTraversalType_Vault* UHavokTraversalType_Vault::GetDefaultObj()
{
	static class UHavokTraversalType_Vault* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokTraversalType_Vault*>(UHavokTraversalType_Vault::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.GbxUserEdgeBase
// (None)

class UClass* UGbxUserEdgeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUserEdgeBase");

	return Clss;
}


// GbxUserEdgeBase NavigationSystem.Default__GbxUserEdgeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUserEdgeBase* UGbxUserEdgeBase::GetDefaultObj()
{
	static class UGbxUserEdgeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUserEdgeBase*>(UGbxUserEdgeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.HavokUserEdge
// (None)

class UClass* UHavokUserEdge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokUserEdge");

	return Clss;
}


// HavokUserEdge NavigationSystem.Default__HavokUserEdge
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokUserEdge* UHavokUserEdge::GetDefaultObj()
{
	static class UHavokUserEdge* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokUserEdge*>(UHavokUserEdge::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavArea
// (None)

class UClass* UNavArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea");

	return Clss;
}


// NavArea NavigationSystem.Default__NavArea
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavArea* UNavArea::GetDefaultObj()
{
	static class UNavArea* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea*>(UNavArea::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavArea_Default
// (None)

class UClass* UNavArea_Default::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Default");

	return Clss;
}


// NavArea_Default NavigationSystem.Default__NavArea_Default
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavArea_Default* UNavArea_Default::GetDefaultObj()
{
	static class UNavArea_Default* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Default*>(UNavArea_Default::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavArea_LowHeight
// (None)

class UClass* UNavArea_LowHeight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_LowHeight");

	return Clss;
}


// NavArea_LowHeight NavigationSystem.Default__NavArea_LowHeight
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavArea_LowHeight* UNavArea_LowHeight::GetDefaultObj()
{
	static class UNavArea_LowHeight* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_LowHeight*>(UNavArea_LowHeight::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavArea_Null
// (None)

class UClass* UNavArea_Null::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Null");

	return Clss;
}


// NavArea_Null NavigationSystem.Default__NavArea_Null
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavArea_Null* UNavArea_Null::GetDefaultObj()
{
	static class UNavArea_Null* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Null*>(UNavArea_Null::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavArea_Obstacle
// (None)

class UClass* UNavArea_Obstacle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Obstacle");

	return Clss;
}


// NavArea_Obstacle NavigationSystem.Default__NavArea_Obstacle
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavArea_Obstacle* UNavArea_Obstacle::GetDefaultObj()
{
	static class UNavArea_Obstacle* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Obstacle*>(UNavArea_Obstacle::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavAreaMeta
// (None)

class UClass* UNavAreaMeta::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavAreaMeta");

	return Clss;
}


// NavAreaMeta NavigationSystem.Default__NavAreaMeta
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavAreaMeta* UNavAreaMeta::GetDefaultObj()
{
	static class UNavAreaMeta* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavAreaMeta*>(UNavAreaMeta::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// (None)

class UClass* UNavAreaMeta_SwitchByAgent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavAreaMeta_SwitchByAgent");

	return Clss;
}


// NavAreaMeta_SwitchByAgent NavigationSystem.Default__NavAreaMeta_SwitchByAgent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavAreaMeta_SwitchByAgent* UNavAreaMeta_SwitchByAgent::GetDefaultObj()
{
	static class UNavAreaMeta_SwitchByAgent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavAreaMeta_SwitchByAgent*>(UNavAreaMeta_SwitchByAgent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavCollision
// (None)

class UClass* UNavCollision::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavCollision");

	return Clss;
}


// NavCollision NavigationSystem.Default__NavCollision
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavCollision* UNavCollision::GetDefaultObj()
{
	static class UNavCollision* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavCollision*>(UNavCollision::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationGraph
// (Actor)

class UClass* ANavigationGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationGraph");

	return Clss;
}


// NavigationGraph NavigationSystem.Default__NavigationGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavigationGraph* ANavigationGraph::GetDefaultObj()
{
	static class ANavigationGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavigationGraph*>(ANavigationGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationGraphNode
// (Actor)

class UClass* ANavigationGraphNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationGraphNode");

	return Clss;
}


// NavigationGraphNode NavigationSystem.Default__NavigationGraphNode
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavigationGraphNode* ANavigationGraphNode::GetDefaultObj()
{
	static class ANavigationGraphNode* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavigationGraphNode*>(ANavigationGraphNode::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationGraphNodeComponent
// (SceneComponent)

class UClass* UNavigationGraphNodeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationGraphNodeComponent");

	return Clss;
}


// NavigationGraphNodeComponent NavigationSystem.Default__NavigationGraphNodeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationGraphNodeComponent* UNavigationGraphNodeComponent::GetDefaultObj()
{
	static class UNavigationGraphNodeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationGraphNodeComponent*>(UNavigationGraphNodeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationInvokerComponent
// (None)

class UClass* UNavigationInvokerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationInvokerComponent");

	return Clss;
}


// NavigationInvokerComponent NavigationSystem.Default__NavigationInvokerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationInvokerComponent* UNavigationInvokerComponent::GetDefaultObj()
{
	static class UNavigationInvokerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationInvokerComponent*>(UNavigationInvokerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationPath
// (None)

class UClass* UNavigationPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationPath");

	return Clss;
}


// NavigationPath NavigationSystem.Default__NavigationPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationPath* UNavigationPath::GetDefaultObj()
{
	static class UNavigationPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationPath*>(UNavigationPath::StaticClass()->DefaultObject);

	return Default;
}


// Function NavigationSystem.NavigationPath.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavigationPath::IsValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "IsValid");

	Params::UNavigationPath_IsValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.IsStringPulled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavigationPath::IsStringPulled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "IsStringPulled");

	Params::UNavigationPath_IsStringPulled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.IsPartial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavigationPath::IsPartial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "IsPartial");

	Params::UNavigationPath_IsPartial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.GetPathLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNavigationPath::GetPathLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "GetPathLength");

	Params::UNavigationPath_GetPathLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.GetPathCost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNavigationPath::GetPathCost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "GetPathCost");

	Params::UNavigationPath_GetPathCost_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.GetDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UNavigationPath::GetDebugString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "GetDebugString");

	Params::UNavigationPath_GetDebugString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENavigationOptionFlag   DoRecalculation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavigationPath::EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "EnableRecalculationOnInvalidation");

	Params::UNavigationPath_EnableRecalculationOnInvalidation_Params Parms{};

	Parms.DoRecalculation = DoRecalculation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NavigationSystem.NavigationPath.EnableDebugDrawing
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               bShouldDrawDebugData                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                PathColor                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavigationPath", "EnableDebugDrawing");

	Params::UNavigationPath_EnableDebugDrawing_Params Parms{};

	Parms.bShouldDrawDebugData = bShouldDrawDebugData;
	Parms.PathColor = PathColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NavigationSystem.NavigationPathGenerator
// (None)

class UClass* INavigationPathGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationPathGenerator");

	return Clss;
}


// NavigationPathGenerator NavigationSystem.Default__NavigationPathGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class INavigationPathGenerator* INavigationPathGenerator::GetDefaultObj()
{
	static class INavigationPathGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<INavigationPathGenerator*>(INavigationPathGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationSystemModuleConfig
// (None)

class UClass* UNavigationSystemModuleConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationSystemModuleConfig");

	return Clss;
}


// NavigationSystemModuleConfig NavigationSystem.Default__NavigationSystemModuleConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavigationSystemModuleConfig* UNavigationSystemModuleConfig::GetDefaultObj()
{
	static class UNavigationSystemModuleConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationSystemModuleConfig*>(UNavigationSystemModuleConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavigationTestingActor
// (Actor)

class UClass* ANavigationTestingActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationTestingActor");

	return Clss;
}


// NavigationTestingActor NavigationSystem.Default__NavigationTestingActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavigationTestingActor* ANavigationTestingActor::GetDefaultObj()
{
	static class ANavigationTestingActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavigationTestingActor*>(ANavigationTestingActor::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavLinkComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNavLinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkComponent");

	return Clss;
}


// NavLinkComponent NavigationSystem.Default__NavLinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavLinkComponent* UNavLinkComponent::GetDefaultObj()
{
	static class UNavLinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLinkComponent*>(UNavLinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavRelevantComponent
// (None)

class UClass* UNavRelevantComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavRelevantComponent");

	return Clss;
}


// NavRelevantComponent NavigationSystem.Default__NavRelevantComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavRelevantComponent* UNavRelevantComponent::GetDefaultObj()
{
	static class UNavRelevantComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavRelevantComponent*>(UNavRelevantComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRelevant                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavRelevantComponent", "SetNavigationRelevancy");

	Params::UNavRelevantComponent_SetNavigationRelevancy_Params Parms{};

	Parms.bRelevant = bRelevant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NavigationSystem.NavLinkCustomComponent
// (None)

class UClass* UNavLinkCustomComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkCustomComponent");

	return Clss;
}


// NavLinkCustomComponent NavigationSystem.Default__NavLinkCustomComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavLinkCustomComponent* UNavLinkCustomComponent::GetDefaultObj()
{
	static class UNavLinkCustomComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLinkCustomComponent*>(UNavLinkCustomComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavLinkCustomInterface
// (None)

class UClass* INavLinkCustomInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkCustomInterface");

	return Clss;
}


// NavLinkCustomInterface NavigationSystem.Default__NavLinkCustomInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class INavLinkCustomInterface* INavLinkCustomInterface::GetDefaultObj()
{
	static class INavLinkCustomInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<INavLinkCustomInterface*>(INavLinkCustomInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavLinkHostInterface
// (None)

class UClass* INavLinkHostInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkHostInterface");

	return Clss;
}


// NavLinkHostInterface NavigationSystem.Default__NavLinkHostInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class INavLinkHostInterface* INavLinkHostInterface::GetDefaultObj()
{
	static class INavLinkHostInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<INavLinkHostInterface*>(INavLinkHostInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavLinkRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNavLinkRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkRenderingComponent");

	return Clss;
}


// NavLinkRenderingComponent NavigationSystem.Default__NavLinkRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavLinkRenderingComponent* UNavLinkRenderingComponent::GetDefaultObj()
{
	static class UNavLinkRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLinkRenderingComponent*>(UNavLinkRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavLinkTrivial
// (None)

class UClass* UNavLinkTrivial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkTrivial");

	return Clss;
}


// NavLinkTrivial NavigationSystem.Default__NavLinkTrivial
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavLinkTrivial* UNavLinkTrivial::GetDefaultObj()
{
	static class UNavLinkTrivial* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLinkTrivial*>(UNavLinkTrivial::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavMeshBoundsVolume
// (Actor)

class UClass* ANavMeshBoundsVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavMeshBoundsVolume");

	return Clss;
}


// NavMeshBoundsVolume NavigationSystem.Default__NavMeshBoundsVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavMeshBoundsVolume* ANavMeshBoundsVolume::GetDefaultObj()
{
	static class ANavMeshBoundsVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavMeshBoundsVolume*>(ANavMeshBoundsVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavMeshRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNavMeshRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavMeshRenderingComponent");

	return Clss;
}


// NavMeshRenderingComponent NavigationSystem.Default__NavMeshRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavMeshRenderingComponent* UNavMeshRenderingComponent::GetDefaultObj()
{
	static class UNavMeshRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavMeshRenderingComponent*>(UNavMeshRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavModifierComponent
// (None)

class UClass* UNavModifierComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavModifierComponent");

	return Clss;
}


// NavModifierComponent NavigationSystem.Default__NavModifierComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavModifierComponent* UNavModifierComponent::GetDefaultObj()
{
	static class UNavModifierComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavModifierComponent*>(UNavModifierComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NavigationSystem.NavModifierComponent.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UNavArea>        NewAreaClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavModifierComponent::SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavModifierComponent", "SetAreaClass");

	Params::UNavModifierComponent_SetAreaClass_Params Parms{};

	Parms.NewAreaClass = NewAreaClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NavigationSystem.NavModifierVolume
// (Actor)

class UClass* ANavModifierVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavModifierVolume");

	return Clss;
}


// NavModifierVolume NavigationSystem.Default__NavModifierVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavModifierVolume* ANavModifierVolume::GetDefaultObj()
{
	static class ANavModifierVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavModifierVolume*>(ANavModifierVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function NavigationSystem.NavModifierVolume.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UNavArea>        NewAreaClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANavModifierVolume::SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavModifierVolume", "SetAreaClass");

	Params::ANavModifierVolume_SetAreaClass_Params Parms{};

	Parms.NewAreaClass = NewAreaClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NavigationSystem.NavNodeInterface
// (None)

class UClass* INavNodeInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavNodeInterface");

	return Clss;
}


// NavNodeInterface NavigationSystem.Default__NavNodeInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class INavNodeInterface* INavNodeInterface::GetDefaultObj()
{
	static class INavNodeInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<INavNodeInterface*>(INavNodeInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.NavTestRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNavTestRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavTestRenderingComponent");

	return Clss;
}


// NavTestRenderingComponent NavigationSystem.Default__NavTestRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavTestRenderingComponent* UNavTestRenderingComponent::GetDefaultObj()
{
	static class UNavTestRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavTestRenderingComponent*>(UNavTestRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.RecastFilter_UseDefaultArea
// (None)

class UClass* URecastFilter_UseDefaultArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecastFilter_UseDefaultArea");

	return Clss;
}


// RecastFilter_UseDefaultArea NavigationSystem.Default__RecastFilter_UseDefaultArea
// (Public, ClassDefaultObject, ArchetypeObject)

class URecastFilter_UseDefaultArea* URecastFilter_UseDefaultArea::GetDefaultObj()
{
	static class URecastFilter_UseDefaultArea* Default = nullptr;

	if (!Default)
		Default = static_cast<URecastFilter_UseDefaultArea*>(URecastFilter_UseDefaultArea::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.RecastNavMesh
// (Actor)

class UClass* ARecastNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecastNavMesh");

	return Clss;
}


// RecastNavMesh NavigationSystem.Default__RecastNavMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class ARecastNavMesh* ARecastNavMesh::GetDefaultObj()
{
	static class ARecastNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecastNavMesh*>(ARecastNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class NavigationSystem.RecastNavMeshDataChunk
// (None)

class UClass* URecastNavMeshDataChunk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecastNavMeshDataChunk");

	return Clss;
}


// RecastNavMeshDataChunk NavigationSystem.Default__RecastNavMeshDataChunk
// (Public, ClassDefaultObject, ArchetypeObject)

class URecastNavMeshDataChunk* URecastNavMeshDataChunk::GetDefaultObj()
{
	static class URecastNavMeshDataChunk* Default = nullptr;

	if (!Default)
		Default = static_cast<URecastNavMeshDataChunk*>(URecastNavMeshDataChunk::StaticClass()->DefaultObject);

	return Default;
}

}


