#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxNav.GbxNavSystem
// (None)

class UClass* UGbxNavSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavSystem");

	return Clss;
}


// GbxNavSystem GbxNav.Default__GbxNavSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavSystem* UGbxNavSystem::GetDefaultObj()
{
	static class UGbxNavSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavSystem*>(UGbxNavSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavCharacterMovementComponent
// (None)

class UClass* UGbxNavCharacterMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavCharacterMovementComponent");

	return Clss;
}


// GbxNavCharacterMovementComponent GbxNav.Default__GbxNavCharacterMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavCharacterMovementComponent* UGbxNavCharacterMovementComponent::GetDefaultObj()
{
	static class UGbxNavCharacterMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavCharacterMovementComponent*>(UGbxNavCharacterMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavComponent
// (None)

class UClass* UGbxNavComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavComponent");

	return Clss;
}


// GbxNavComponent GbxNav.Default__GbxNavComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavComponent* UGbxNavComponent::GetDefaultObj()
{
	static class UGbxNavComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavComponent*>(UGbxNavComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxNav.GbxNavComponent.TryMoving
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              FDuration                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxNavComponent::TryMoving(float FDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavComponent", "TryMoving");

	Params::UGbxNavComponent_TryMoving_Params Parms{};

	Parms.FDuration = FDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.GbxNavComponent.SetPathFindingData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHavokPathFindingData*       NewPathFindingData                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxNavComponent::SetPathFindingData(class UHavokPathFindingData* NewPathFindingData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavComponent", "SetPathFindingData");

	Params::UGbxNavComponent_SetPathFindingData_Params Parms{};

	Parms.NewPathFindingData = NewPathFindingData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.GbxNavComponent.ResetPathFindingData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxNavComponent::ResetPathFindingData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavComponent", "ResetPathFindingData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.GbxNavComponent.GetPathFindingData
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHavokPathFindingData*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHavokPathFindingData* UGbxNavComponent::GetPathFindingData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavComponent", "GetPathFindingData");

	Params::UGbxNavComponent_GetPathFindingData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxNav.GbxNavWorld
// (Actor)

class UClass* AGbxNavWorld::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavWorld");

	return Clss;
}


// GbxNavWorld GbxNav.Default__GbxNavWorld
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxNavWorld* AGbxNavWorld::GetDefaultObj()
{
	static class AGbxNavWorld* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxNavWorld*>(AGbxNavWorld::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.AIVehicleFlightComponent
// (None)

class UClass* UAIVehicleFlightComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIVehicleFlightComponent");

	return Clss;
}


// AIVehicleFlightComponent GbxNav.Default__AIVehicleFlightComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIVehicleFlightComponent* UAIVehicleFlightComponent::GetDefaultObj()
{
	static class UAIVehicleFlightComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIVehicleFlightComponent*>(UAIVehicleFlightComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxNav.AIVehicleFlightComponent.OnRep_FlightState
// (Native, Public)
// Parameters:

void UAIVehicleFlightComponent::OnRep_FlightState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIVehicleFlightComponent", "OnRep_FlightState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxNav.GbxNavAnimTable
// (None)

class UClass* UGbxNavAnimTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavAnimTable");

	return Clss;
}


// GbxNavAnimTable GbxNav.Default__GbxNavAnimTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavAnimTable* UGbxNavAnimTable::GetDefaultObj()
{
	static class UGbxNavAnimTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavAnimTable*>(UGbxNavAnimTable::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxAnimStateManager_AINav
// (None)

class UClass* UGbxAnimStateManager_AINav::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAnimStateManager_AINav");

	return Clss;
}


// GbxAnimStateManager_AINav GbxNav.Default__GbxAnimStateManager_AINav
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAnimStateManager_AINav* UGbxAnimStateManager_AINav::GetDefaultObj()
{
	static class UGbxAnimStateManager_AINav* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAnimStateManager_AINav*>(UGbxAnimStateManager_AINav::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxNav.GbxAnimStateManager_AINav.Owner_PostBeginPlay
// (Final, Native, Public)
// Parameters:

void UGbxAnimStateManager_AINav::Owner_PostBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAnimStateManager_AINav", "Owner_PostBeginPlay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxNav.GbxAnimStateManager_NavIdle
// (None)

class UClass* UGbxAnimStateManager_NavIdle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAnimStateManager_NavIdle");

	return Clss;
}


// GbxAnimStateManager_NavIdle GbxNav.Default__GbxAnimStateManager_NavIdle
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAnimStateManager_NavIdle* UGbxAnimStateManager_NavIdle::GetDefaultObj()
{
	static class UGbxAnimStateManager_NavIdle* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAnimStateManager_NavIdle*>(UGbxAnimStateManager_NavIdle::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavIdleTurnTable
// (None)

class UClass* UGbxNavIdleTurnTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavIdleTurnTable");

	return Clss;
}


// GbxNavIdleTurnTable GbxNav.Default__GbxNavIdleTurnTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavIdleTurnTable* UGbxNavIdleTurnTable::GetDefaultObj()
{
	static class UGbxNavIdleTurnTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavIdleTurnTable*>(UGbxNavIdleTurnTable::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxAnimStateManager_NavIdleTurn
// (None)

class UClass* UGbxAnimStateManager_NavIdleTurn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAnimStateManager_NavIdleTurn");

	return Clss;
}


// GbxAnimStateManager_NavIdleTurn GbxNav.Default__GbxAnimStateManager_NavIdleTurn
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAnimStateManager_NavIdleTurn* UGbxAnimStateManager_NavIdleTurn::GetDefaultObj()
{
	static class UGbxAnimStateManager_NavIdleTurn* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAnimStateManager_NavIdleTurn*>(UGbxAnimStateManager_NavIdleTurn::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxAnimStateManager_NavTable
// (None)

class UClass* UGbxAnimStateManager_NavTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAnimStateManager_NavTable");

	return Clss;
}


// GbxAnimStateManager_NavTable GbxNav.Default__GbxAnimStateManager_NavTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAnimStateManager_NavTable* UGbxAnimStateManager_NavTable::GetDefaultObj()
{
	static class UGbxAnimStateManager_NavTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAnimStateManager_NavTable*>(UGbxAnimStateManager_NavTable::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxAnimStateManager_NavHop
// (None)

class UClass* UGbxAnimStateManager_NavHop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAnimStateManager_NavHop");

	return Clss;
}


// GbxAnimStateManager_NavHop GbxNav.Default__GbxAnimStateManager_NavHop
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAnimStateManager_NavHop* UGbxAnimStateManager_NavHop::GetDefaultObj()
{
	static class UGbxAnimStateManager_NavHop* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAnimStateManager_NavHop*>(UGbxAnimStateManager_NavHop::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavArea
// (None)

class UClass* UGbxNavArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavArea");

	return Clss;
}


// GbxNavArea GbxNav.Default__GbxNavArea
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavArea* UGbxNavArea::GetDefaultObj()
{
	static class UGbxNavArea* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavArea*>(UGbxNavArea::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavAreaData
// (None)

class UClass* UGbxNavAreaData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavAreaData");

	return Clss;
}


// GbxNavAreaData GbxNav.Default__GbxNavAreaData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavAreaData* UGbxNavAreaData::GetDefaultObj()
{
	static class UGbxNavAreaData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavAreaData*>(UGbxNavAreaData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavBlueprintLibrary
// (None)

class UClass* UGbxNavBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavBlueprintLibrary");

	return Clss;
}


// GbxNavBlueprintLibrary GbxNav.Default__GbxNavBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavBlueprintLibrary* UGbxNavBlueprintLibrary::GetDefaultObj()
{
	static class UGbxNavBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavBlueprintLibrary*>(UGbxNavBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxNav.GbxNavBlueprintLibrary.SetAINavPathType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxPathType            PathType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxNavBlueprintLibrary::SetAINavPathType(class AActor* Actor, enum class EGbxPathType PathType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavBlueprintLibrary", "SetAINavPathType");

	Params::UGbxNavBlueprintLibrary_SetAINavPathType_Params Parms{};

	Parms.Actor = Actor;
	Parms.PathType = PathType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.GbxNavBlueprintLibrary.ResourceUnlockAvoidance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxNavBlueprintLibrary::ResourceUnlockAvoidance(class AActor* Actor, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavBlueprintLibrary", "ResourceUnlockAvoidance");

	Params::UGbxNavBlueprintLibrary_ResourceUnlockAvoidance_Params Parms{};

	Parms.Actor = Actor;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.GbxNavBlueprintLibrary.ResourceLockAvoidance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxNavBlueprintLibrary::ResourceLockAvoidance(class AActor* Actor, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavBlueprintLibrary", "ResourceLockAvoidance");

	Params::UGbxNavBlueprintLibrary_ResourceLockAvoidance_Params Parms{};

	Parms.Actor = Actor;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.GbxNavBlueprintLibrary.ForceNavMeshLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxNavMeshLayer*            ForcedNavMeshLayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxNavBlueprintLibrary::ForceNavMeshLayer(class AActor* Actor, class UGbxNavMeshLayer* ForcedNavMeshLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavBlueprintLibrary", "ForceNavMeshLayer");

	Params::UGbxNavBlueprintLibrary_ForceNavMeshLayer_Params Parms{};

	Parms.Actor = Actor;
	Parms.ForcedNavMeshLayer = ForcedNavMeshLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPointForActor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Result                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxNavBlueprintLibrary::FindNavMeshPointForActor(class AActor* Actor, struct FVector& Point, float Radius, struct FVector* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavBlueprintLibrary", "FindNavMeshPointForActor");

	Params::UGbxNavBlueprintLibrary_FindNavMeshPointForActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.Point = Point;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	return Parms.ReturnValue;

}


// Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Result                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxNavMeshLayer*            Layer                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxNavBlueprintLibrary::FindNavMeshPoint(class UObject* WorldContextObject, struct FVector& Point, float Radius, struct FVector* Result, class UGbxNavMeshLayer* Layer, float Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavBlueprintLibrary", "FindNavMeshPoint");

	Params::UGbxNavBlueprintLibrary_FindNavMeshPoint_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Point = Point;
	Parms.Radius = Radius;
	Parms.Layer = Layer;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	return Parms.ReturnValue;

}


// Class GbxNav.GbxNavBoxComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGbxNavBoxComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavBoxComponent");

	return Clss;
}


// GbxNavBoxComponent GbxNav.Default__GbxNavBoxComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavBoxComponent* UGbxNavBoxComponent::GetDefaultObj()
{
	static class UGbxNavBoxComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavBoxComponent*>(UGbxNavBoxComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxNav.GbxNavBoxComponent.DoAutoResize
// (Final, Native, Private)
// Parameters:

void UGbxNavBoxComponent::DoAutoResize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavBoxComponent", "DoAutoResize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxNav.GbxNavLayer
// (None)

class UClass* UGbxNavLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavLayer");

	return Clss;
}


// GbxNavLayer GbxNav.Default__GbxNavLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavLayer* UGbxNavLayer::GetDefaultObj()
{
	static class UGbxNavLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavLayer*>(UGbxNavLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavFlyLayer
// (None)

class UClass* UGbxNavFlyLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavFlyLayer");

	return Clss;
}


// GbxNavFlyLayer GbxNav.Default__GbxNavFlyLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavFlyLayer* UGbxNavFlyLayer::GetDefaultObj()
{
	static class UGbxNavFlyLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavFlyLayer*>(UGbxNavFlyLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavSection
// (Actor)

class UClass* AGbxNavSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavSection");

	return Clss;
}


// GbxNavSection GbxNav.Default__GbxNavSection
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxNavSection* AGbxNavSection::GetDefaultObj()
{
	static class AGbxNavSection* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxNavSection*>(AGbxNavSection::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavFlySection
// (Actor)

class UClass* AGbxNavFlySection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavFlySection");

	return Clss;
}


// GbxNavFlySection GbxNav.Default__GbxNavFlySection
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxNavFlySection* AGbxNavFlySection::GetDefaultObj()
{
	static class AGbxNavFlySection* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxNavFlySection*>(AGbxNavFlySection::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavSectionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGbxNavSectionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavSectionComponent");

	return Clss;
}


// GbxNavSectionComponent GbxNav.Default__GbxNavSectionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavSectionComponent* UGbxNavSectionComponent::GetDefaultObj()
{
	static class UGbxNavSectionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavSectionComponent*>(UGbxNavSectionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavFlySectionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGbxNavFlySectionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavFlySectionComponent");

	return Clss;
}


// GbxNavFlySectionComponent GbxNav.Default__GbxNavFlySectionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavFlySectionComponent* UGbxNavFlySectionComponent::GetDefaultObj()
{
	static class UGbxNavFlySectionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavFlySectionComponent*>(UGbxNavFlySectionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavGlobalData
// (None)

class UClass* UGbxNavGlobalData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavGlobalData");

	return Clss;
}


// GbxNavGlobalData GbxNav.Default__GbxNavGlobalData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavGlobalData* UGbxNavGlobalData::GetDefaultObj()
{
	static class UGbxNavGlobalData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavGlobalData*>(UGbxNavGlobalData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavMeshLayer
// (None)

class UClass* UGbxNavMeshLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavMeshLayer");

	return Clss;
}


// GbxNavMeshLayer GbxNav.Default__GbxNavMeshLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavMeshLayer* UGbxNavMeshLayer::GetDefaultObj()
{
	static class UGbxNavMeshLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavMeshLayer*>(UGbxNavMeshLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavMeshPainter
// (Actor)

class UClass* AGbxNavMeshPainter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavMeshPainter");

	return Clss;
}


// GbxNavMeshPainter GbxNav.Default__GbxNavMeshPainter
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxNavMeshPainter* AGbxNavMeshPainter::GetDefaultObj()
{
	static class AGbxNavMeshPainter* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxNavMeshPainter*>(AGbxNavMeshPainter::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxNav.GbxNavMeshPainter.SetPainterEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxNavMeshPainter::SetPainterEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavMeshPainter", "SetPainterEnabled");

	Params::AGbxNavMeshPainter_SetPainterEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.GbxNavMeshPainter.IsPainterEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGbxNavMeshPainter::IsPainterEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavMeshPainter", "IsPainterEnabled");

	Params::AGbxNavMeshPainter_IsPainterEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxNav.GbxNavMeshPainterComponent
// (None)

class UClass* UGbxNavMeshPainterComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavMeshPainterComponent");

	return Clss;
}


// GbxNavMeshPainterComponent GbxNav.Default__GbxNavMeshPainterComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavMeshPainterComponent* UGbxNavMeshPainterComponent::GetDefaultObj()
{
	static class UGbxNavMeshPainterComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavMeshPainterComponent*>(UGbxNavMeshPainterComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxNav.GbxNavMeshPainterComponent.SetPainterEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxNavMeshPainterComponent::SetPainterEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavMeshPainterComponent", "SetPainterEnabled");

	Params::UGbxNavMeshPainterComponent_SetPainterEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.GbxNavMeshPainterComponent.SetPainterAlwaysEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewAlwaysEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxNavMeshPainterComponent::SetPainterAlwaysEnabled(bool bNewAlwaysEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavMeshPainterComponent", "SetPainterAlwaysEnabled");

	Params::UGbxNavMeshPainterComponent_SetPainterAlwaysEnabled_Params Parms{};

	Parms.bNewAlwaysEnabled = bNewAlwaysEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.GbxNavMeshPainterComponent.ResetToStatic
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxNavMeshPainterComponent::ResetToStatic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavMeshPainterComponent", "ResetToStatic");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.GbxNavMeshPainterComponent.IsPainterEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxNavMeshPainterComponent::IsPainterEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxNavMeshPainterComponent", "IsPainterEnabled");

	Params::UGbxNavMeshPainterComponent_IsPainterEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxNav.GbxNavMeshSection
// (Actor)

class UClass* AGbxNavMeshSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavMeshSection");

	return Clss;
}


// GbxNavMeshSection GbxNav.Default__GbxNavMeshSection
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxNavMeshSection* AGbxNavMeshSection::GetDefaultObj()
{
	static class AGbxNavMeshSection* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxNavMeshSection*>(AGbxNavMeshSection::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavMeshSectionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGbxNavMeshSectionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavMeshSectionComponent");

	return Clss;
}


// GbxNavMeshSectionComponent GbxNav.Default__GbxNavMeshSectionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavMeshSectionComponent* UGbxNavMeshSectionComponent::GetDefaultObj()
{
	static class UGbxNavMeshSectionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavMeshSectionComponent*>(UGbxNavMeshSectionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxNavUserEdgeTrailComponent
// (None)

class UClass* UGbxNavUserEdgeTrailComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNavUserEdgeTrailComponent");

	return Clss;
}


// GbxNavUserEdgeTrailComponent GbxNav.Default__GbxNavUserEdgeTrailComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNavUserEdgeTrailComponent* UGbxNavUserEdgeTrailComponent::GetDefaultObj()
{
	static class UGbxNavUserEdgeTrailComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNavUserEdgeTrailComponent*>(UGbxNavUserEdgeTrailComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.HavokPathFollowingComponent
// (None)

class UClass* UHavokPathFollowingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokPathFollowingComponent");

	return Clss;
}


// HavokPathFollowingComponent GbxNav.Default__HavokPathFollowingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokPathFollowingComponent* UHavokPathFollowingComponent::GetDefaultObj()
{
	static class UHavokPathFollowingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokPathFollowingComponent*>(UHavokPathFollowingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxPathFollowingComponent
// (None)

class UClass* UGbxPathFollowingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxPathFollowingComponent");

	return Clss;
}


// GbxPathFollowingComponent GbxNav.Default__GbxPathFollowingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxPathFollowingComponent* UGbxPathFollowingComponent::GetDefaultObj()
{
	static class UGbxPathFollowingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxPathFollowingComponent*>(UGbxPathFollowingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxUserEdge
// (None)

class UClass* UGbxUserEdge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUserEdge");

	return Clss;
}


// GbxUserEdge GbxNav.Default__GbxUserEdge
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUserEdge* UGbxUserEdge::GetDefaultObj()
{
	static class UGbxUserEdge* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUserEdge*>(UGbxUserEdge::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.GbxUserEdgeBlocker
// (Actor)

class UClass* AGbxUserEdgeBlocker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUserEdgeBlocker");

	return Clss;
}


// GbxUserEdgeBlocker GbxNav.Default__GbxUserEdgeBlocker
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxUserEdgeBlocker* AGbxUserEdgeBlocker::GetDefaultObj()
{
	static class AGbxUserEdgeBlocker* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxUserEdgeBlocker*>(AGbxUserEdgeBlocker::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.HavokMovementData
// (None)

class UClass* UHavokMovementData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokMovementData");

	return Clss;
}


// HavokMovementData GbxNav.Default__HavokMovementData
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokMovementData* UHavokMovementData::GetDefaultObj()
{
	static class UHavokMovementData* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokMovementData*>(UHavokMovementData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.HavokNavObstacle
// (None)

class UClass* UHavokNavObstacle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavObstacle");

	return Clss;
}


// HavokNavObstacle GbxNav.Default__HavokNavObstacle
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavObstacle* UHavokNavObstacle::GetDefaultObj()
{
	static class UHavokNavObstacle* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavObstacle*>(UHavokNavObstacle::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.HavokNavObstacleComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UHavokNavObstacleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokNavObstacleComponent");

	return Clss;
}


// HavokNavObstacleComponent GbxNav.Default__HavokNavObstacleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokNavObstacleComponent* UHavokNavObstacleComponent::GetDefaultObj()
{
	static class UHavokNavObstacleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokNavObstacleComponent*>(UHavokNavObstacleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxNav.HavokNavObstacleComponent.UnlockObstacle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHavokNavObstacleComponent::UnlockObstacle(class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HavokNavObstacleComponent", "UnlockObstacle");

	Params::UHavokNavObstacleComponent_UnlockObstacle_Params Parms{};

	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.HavokNavObstacleComponent.LockObstacle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHavokNavObstacleComponent::LockObstacle(class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HavokNavObstacleComponent", "LockObstacle");

	Params::UHavokNavObstacleComponent_LockObstacle_Params Parms{};

	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxNav.HavokPathFindingData
// (None)

class UClass* UHavokPathFindingData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokPathFindingData");

	return Clss;
}


// HavokPathFindingData GbxNav.Default__HavokPathFindingData
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokPathFindingData* UHavokPathFindingData::GetDefaultObj()
{
	static class UHavokPathFindingData* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokPathFindingData*>(UHavokPathFindingData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.HavokStreamingSet
// (None)

class UClass* UHavokStreamingSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokStreamingSet");

	return Clss;
}


// HavokStreamingSet GbxNav.Default__HavokStreamingSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokStreamingSet* UHavokStreamingSet::GetDefaultObj()
{
	static class UHavokStreamingSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokStreamingSet*>(UHavokStreamingSet::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.HavokUserEdge_Jump
// (None)

class UClass* UHavokUserEdge_Jump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokUserEdge_Jump");

	return Clss;
}


// HavokUserEdge_Jump GbxNav.Default__HavokUserEdge_Jump
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokUserEdge_Jump* UHavokUserEdge_Jump::GetDefaultObj()
{
	static class UHavokUserEdge_Jump* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokUserEdge_Jump*>(UHavokUserEdge_Jump::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.HavokUserEdgeActor
// (Actor)

class UClass* AHavokUserEdgeActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokUserEdgeActor");

	return Clss;
}


// HavokUserEdgeActor GbxNav.Default__HavokUserEdgeActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AHavokUserEdgeActor* AHavokUserEdgeActor::GetDefaultObj()
{
	static class AHavokUserEdgeActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AHavokUserEdgeActor*>(AHavokUserEdgeActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxNav.HavokUserEdgeActor.SetEdgeEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AHavokUserEdgeActor::SetEdgeEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HavokUserEdgeActor", "SetEdgeEnabled");

	Params::AHavokUserEdgeActor_SetEdgeEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.HavokUserEdgeActor.IsEdgeEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AHavokUserEdgeActor::IsEdgeEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HavokUserEdgeActor", "IsEdgeEnabled");

	Params::AHavokUserEdgeActor_IsEdgeEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxNav.HavokUserEdgeComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UHavokUserEdgeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokUserEdgeComponent");

	return Clss;
}


// HavokUserEdgeComponent GbxNav.Default__HavokUserEdgeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokUserEdgeComponent* UHavokUserEdgeComponent::GetDefaultObj()
{
	static class UHavokUserEdgeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokUserEdgeComponent*>(UHavokUserEdgeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxNav.HavokUserEdgeComponent.SetEdgeEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHavokUserEdgeComponent::SetEdgeEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HavokUserEdgeComponent", "SetEdgeEnabled");

	Params::UHavokUserEdgeComponent_SetEdgeEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxNav.HavokUserEdgeComponent.IsEdgeEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHavokUserEdgeComponent::IsEdgeEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HavokUserEdgeComponent", "IsEdgeEnabled");

	Params::UHavokUserEdgeComponent_IsEdgeEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxNav.HavokUserEdgeComponent.AnchorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHavokUserEdgeComponent::AnchorDestroyed(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HavokUserEdgeComponent", "AnchorDestroyed");

	Params::UHavokUserEdgeComponent_AnchorDestroyed_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxNav.HavokUserEdgePreviewComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UHavokUserEdgePreviewComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HavokUserEdgePreviewComponent");

	return Clss;
}


// HavokUserEdgePreviewComponent GbxNav.Default__HavokUserEdgePreviewComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHavokUserEdgePreviewComponent* UHavokUserEdgePreviewComponent::GetDefaultObj()
{
	static class UHavokUserEdgePreviewComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHavokUserEdgePreviewComponent*>(UHavokUserEdgePreviewComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxNav.HavokUserEdgePreviewComponent.OnBlueprintCompiled
// (Final, Native, Public)
// Parameters:
// class Ublueprint*                  BP                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHavokUserEdgePreviewComponent::OnBlueprintCompiled(class Ublueprint* BP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HavokUserEdgePreviewComponent", "OnBlueprintCompiled");

	Params::UHavokUserEdgePreviewComponent_OnBlueprintCompiled_Params Parms{};

	Parms.BP = BP;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxNav.VehicleSplineConsumerInterface
// (None)

class UClass* IVehicleSplineConsumerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleSplineConsumerInterface");

	return Clss;
}


// VehicleSplineConsumerInterface GbxNav.Default__VehicleSplineConsumerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IVehicleSplineConsumerInterface* IVehicleSplineConsumerInterface::GetDefaultObj()
{
	static class IVehicleSplineConsumerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IVehicleSplineConsumerInterface*>(IVehicleSplineConsumerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNav.VehicleSplineInterface
// (None)

class UClass* IVehicleSplineInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleSplineInterface");

	return Clss;
}


// VehicleSplineInterface GbxNav.Default__VehicleSplineInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IVehicleSplineInterface* IVehicleSplineInterface::GetDefaultObj()
{
	static class IVehicleSplineInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IVehicleSplineInterface*>(IVehicleSplineInterface::StaticClass()->DefaultObject);

	return Default;
}

}


