#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TwAIFramework.TwAIBTComposite_Parallel
// (None)

class UClass* UTwAIBTComposite_Parallel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTComposite_Parallel");

	return Clss;
}


// TwAIBTComposite_Parallel TwAIFramework.Default__TwAIBTComposite_Parallel
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTComposite_Parallel* UTwAIBTComposite_Parallel::GetDefaultObj()
{
	static class UTwAIBTComposite_Parallel* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTComposite_Parallel*>(UTwAIBTComposite_Parallel::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTComposite_Random
// (None)

class UClass* UTwAIBTComposite_Random::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTComposite_Random");

	return Clss;
}


// TwAIBTComposite_Random TwAIFramework.Default__TwAIBTComposite_Random
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTComposite_Random* UTwAIBTComposite_Random::GetDefaultObj()
{
	static class UTwAIBTComposite_Random* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTComposite_Random*>(UTwAIBTComposite_Random::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTDecorator_CanPlayerSee
// (None)

class UClass* UTwAIBTDecorator_CanPlayerSee::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTDecorator_CanPlayerSee");

	return Clss;
}


// TwAIBTDecorator_CanPlayerSee TwAIFramework.Default__TwAIBTDecorator_CanPlayerSee
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTDecorator_CanPlayerSee* UTwAIBTDecorator_CanPlayerSee::GetDefaultObj()
{
	static class UTwAIBTDecorator_CanPlayerSee* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTDecorator_CanPlayerSee*>(UTwAIBTDecorator_CanPlayerSee::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTDecorator_SpatialBase
// (None)

class UClass* UTwAIBTDecorator_SpatialBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTDecorator_SpatialBase");

	return Clss;
}


// TwAIBTDecorator_SpatialBase TwAIFramework.Default__TwAIBTDecorator_SpatialBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTDecorator_SpatialBase* UTwAIBTDecorator_SpatialBase::GetDefaultObj()
{
	static class UTwAIBTDecorator_SpatialBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTDecorator_SpatialBase*>(UTwAIBTDecorator_SpatialBase::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTDecorator_ClearNavTrace
// (None)

class UClass* UTwAIBTDecorator_ClearNavTrace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTDecorator_ClearNavTrace");

	return Clss;
}


// TwAIBTDecorator_ClearNavTrace TwAIFramework.Default__TwAIBTDecorator_ClearNavTrace
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTDecorator_ClearNavTrace* UTwAIBTDecorator_ClearNavTrace::GetDefaultObj()
{
	static class UTwAIBTDecorator_ClearNavTrace* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTDecorator_ClearNavTrace*>(UTwAIBTDecorator_ClearNavTrace::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTDecorator_Distance
// (None)

class UClass* UTwAIBTDecorator_Distance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTDecorator_Distance");

	return Clss;
}


// TwAIBTDecorator_Distance TwAIFramework.Default__TwAIBTDecorator_Distance
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTDecorator_Distance* UTwAIBTDecorator_Distance::GetDefaultObj()
{
	static class UTwAIBTDecorator_Distance* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTDecorator_Distance*>(UTwAIBTDecorator_Distance::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTDecorator_Gate
// (None)

class UClass* UTwAIBTDecorator_Gate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTDecorator_Gate");

	return Clss;
}


// TwAIBTDecorator_Gate TwAIFramework.Default__TwAIBTDecorator_Gate
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTDecorator_Gate* UTwAIBTDecorator_Gate::GetDefaultObj()
{
	static class UTwAIBTDecorator_Gate* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTDecorator_Gate*>(UTwAIBTDecorator_Gate::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTDecorator_HasClearLoS
// (None)

class UClass* UTwAIBTDecorator_HasClearLoS::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTDecorator_HasClearLoS");

	return Clss;
}


// TwAIBTDecorator_HasClearLoS TwAIFramework.Default__TwAIBTDecorator_HasClearLoS
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTDecorator_HasClearLoS* UTwAIBTDecorator_HasClearLoS::GetDefaultObj()
{
	static class UTwAIBTDecorator_HasClearLoS* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTDecorator_HasClearLoS*>(UTwAIBTDecorator_HasClearLoS::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTDecorator_HasPatrol
// (None)

class UClass* UTwAIBTDecorator_HasPatrol::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTDecorator_HasPatrol");

	return Clss;
}


// TwAIBTDecorator_HasPatrol TwAIFramework.Default__TwAIBTDecorator_HasPatrol
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTDecorator_HasPatrol* UTwAIBTDecorator_HasPatrol::GetDefaultObj()
{
	static class UTwAIBTDecorator_HasPatrol* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTDecorator_HasPatrol*>(UTwAIBTDecorator_HasPatrol::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTDecorator_IsRightOrLeft
// (None)

class UClass* UTwAIBTDecorator_IsRightOrLeft::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTDecorator_IsRightOrLeft");

	return Clss;
}


// TwAIBTDecorator_IsRightOrLeft TwAIFramework.Default__TwAIBTDecorator_IsRightOrLeft
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTDecorator_IsRightOrLeft* UTwAIBTDecorator_IsRightOrLeft::GetDefaultObj()
{
	static class UTwAIBTDecorator_IsRightOrLeft* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTDecorator_IsRightOrLeft*>(UTwAIBTDecorator_IsRightOrLeft::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTDecorator_LoopWhileResult
// (None)

class UClass* UTwAIBTDecorator_LoopWhileResult::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTDecorator_LoopWhileResult");

	return Clss;
}


// TwAIBTDecorator_LoopWhileResult TwAIFramework.Default__TwAIBTDecorator_LoopWhileResult
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTDecorator_LoopWhileResult* UTwAIBTDecorator_LoopWhileResult::GetDefaultObj()
{
	static class UTwAIBTDecorator_LoopWhileResult* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTDecorator_LoopWhileResult*>(UTwAIBTDecorator_LoopWhileResult::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTDecorator_MovementMode
// (None)

class UClass* UTwAIBTDecorator_MovementMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTDecorator_MovementMode");

	return Clss;
}


// TwAIBTDecorator_MovementMode TwAIFramework.Default__TwAIBTDecorator_MovementMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTDecorator_MovementMode* UTwAIBTDecorator_MovementMode::GetDefaultObj()
{
	static class UTwAIBTDecorator_MovementMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTDecorator_MovementMode*>(UTwAIBTDecorator_MovementMode::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTDecorator_Random
// (None)

class UClass* UTwAIBTDecorator_Random::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTDecorator_Random");

	return Clss;
}


// TwAIBTDecorator_Random TwAIFramework.Default__TwAIBTDecorator_Random
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTDecorator_Random* UTwAIBTDecorator_Random::GetDefaultObj()
{
	static class UTwAIBTDecorator_Random* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTDecorator_Random*>(UTwAIBTDecorator_Random::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIBTService_GameplayFocus
// (None)

class UClass* UTwAIBTService_GameplayFocus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIBTService_GameplayFocus");

	return Clss;
}


// TwAIBTService_GameplayFocus TwAIFramework.Default__TwAIBTService_GameplayFocus
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIBTService_GameplayFocus* UTwAIBTService_GameplayFocus::GetDefaultObj()
{
	static class UTwAIBTService_GameplayFocus* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIBTService_GameplayFocus*>(UTwAIBTService_GameplayFocus::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIDataProvider_CollisionHalfHeight
// (None)

class UClass* UTwAIDataProvider_CollisionHalfHeight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIDataProvider_CollisionHalfHeight");

	return Clss;
}


// TwAIDataProvider_CollisionHalfHeight TwAIFramework.Default__TwAIDataProvider_CollisionHalfHeight
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIDataProvider_CollisionHalfHeight* UTwAIDataProvider_CollisionHalfHeight::GetDefaultObj()
{
	static class UTwAIDataProvider_CollisionHalfHeight* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIDataProvider_CollisionHalfHeight*>(UTwAIDataProvider_CollisionHalfHeight::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIDataProvider_CollisionRadius
// (None)

class UClass* UTwAIDataProvider_CollisionRadius::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIDataProvider_CollisionRadius");

	return Clss;
}


// TwAIDataProvider_CollisionRadius TwAIFramework.Default__TwAIDataProvider_CollisionRadius
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIDataProvider_CollisionRadius* UTwAIDataProvider_CollisionRadius::GetDefaultObj()
{
	static class UTwAIDataProvider_CollisionRadius* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIDataProvider_CollisionRadius*>(UTwAIDataProvider_CollisionRadius::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwAIHelperLibrary
// (None)

class UClass* UTwAIHelperLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIHelperLibrary");

	return Clss;
}


// TwAIHelperLibrary TwAIFramework.Default__TwAIHelperLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIHelperLibrary* UTwAIHelperLibrary::GetDefaultObj()
{
	static class UTwAIHelperLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIHelperLibrary*>(UTwAIHelperLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TwAIFramework.TwAIHelperLibrary.InvalidRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UTwAIHelperLibrary::InvalidRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAIHelperLibrary", "InvalidRotation");

	Params::UTwAIHelperLibrary_InvalidRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwAIFramework.TwAIHelperLibrary.InvalidOrientation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQuat                       ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FQuat UTwAIHelperLibrary::InvalidOrientation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAIHelperLibrary", "InvalidOrientation");

	Params::UTwAIHelperLibrary_InvalidOrientation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwAIFramework.TwAIHelperLibrary.InvalidLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTwAIHelperLibrary::InvalidLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAIHelperLibrary", "InvalidLocation");

	Params::UTwAIHelperLibrary_InvalidLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwAIFramework.TwAIHelperLibrary.InvalidDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTwAIHelperLibrary::InvalidDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAIHelperLibrary", "InvalidDirection");

	Params::UTwAIHelperLibrary_InvalidDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwAIFramework.TwAIPatrolableInterface
// (None)

class UClass* ITwAIPatrolableInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIPatrolableInterface");

	return Clss;
}


// TwAIPatrolableInterface TwAIFramework.Default__TwAIPatrolableInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITwAIPatrolableInterface* ITwAIPatrolableInterface::GetDefaultObj()
{
	static class ITwAIPatrolableInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITwAIPatrolableInterface*>(ITwAIPatrolableInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TwAIFramework.TwAIPatrolableInterface.SetAIPatrolPlotter
// (Native, Public)
// Parameters:
// class ATwAIPatrolPlotter*          InPatrolPlotter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ITwAIPatrolableInterface::SetAIPatrolPlotter(class ATwAIPatrolPlotter* InPatrolPlotter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAIPatrolableInterface", "SetAIPatrolPlotter");

	Params::ITwAIPatrolableInterface_SetAIPatrolPlotter_Params Parms{};

	Parms.InPatrolPlotter = InPatrolPlotter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwAIFramework.TwAIPatrolableInterface.GetAIPatrolPlotter
// (Native, Public, Const)
// Parameters:
// class ATwAIPatrolPlotter*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATwAIPatrolPlotter* ITwAIPatrolableInterface::GetAIPatrolPlotter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAIPatrolableInterface", "GetAIPatrolPlotter");

	Params::ITwAIPatrolableInterface_GetAIPatrolPlotter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwAIFramework.TwAIPatrolPlotter
// (Actor)

class UClass* ATwAIPatrolPlotter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIPatrolPlotter");

	return Clss;
}


// TwAIPatrolPlotter TwAIFramework.Default__TwAIPatrolPlotter
// (Public, ClassDefaultObject, ArchetypeObject)

class ATwAIPatrolPlotter* ATwAIPatrolPlotter::GetDefaultObj()
{
	static class ATwAIPatrolPlotter* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwAIPatrolPlotter*>(ATwAIPatrolPlotter::StaticClass()->DefaultObject);

	return Default;
}


// Function TwAIFramework.TwAIPatrolPlotter.IsClosedLoopPatrol
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATwAIPatrolPlotter::IsClosedLoopPatrol()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAIPatrolPlotter", "IsClosedLoopPatrol");

	Params::ATwAIPatrolPlotter_IsClosedLoopPatrol_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwAIFramework.TwAIPatrolPlotter.GetPatrolSplineComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTwAIPatrolSplineComponent*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwAIPatrolSplineComponent* ATwAIPatrolPlotter::GetPatrolSplineComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAIPatrolPlotter", "GetPatrolSplineComponent");

	Params::ATwAIPatrolPlotter_GetPatrolSplineComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwAIFramework.TwAIPatrolPlotter.GetPatrolLocationAtPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PointIdx                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector ATwAIPatrolPlotter::GetPatrolLocationAtPoint(int32 PointIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAIPatrolPlotter", "GetPatrolLocationAtPoint");

	Params::ATwAIPatrolPlotter_GetPatrolLocationAtPoint_Params Parms{};

	Parms.PointIdx = PointIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwAIFramework.TwAIPatrolPlotter.GetNearestPatrolPointToLoc
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     TestLocation                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PointIdx                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector ATwAIPatrolPlotter::GetNearestPatrolPointToLoc(const struct FVector& TestLocation, int32* PointIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAIPatrolPlotter", "GetNearestPatrolPointToLoc");

	Params::ATwAIPatrolPlotter_GetNearestPatrolPointToLoc_Params Parms{};

	Parms.TestLocation = TestLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PointIdx != nullptr)
		*PointIdx = Parms.PointIdx;

	return Parms.ReturnValue;

}


// Function TwAIFramework.TwAIPatrolPlotter.GetMaxDefinedPatrolPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ATwAIPatrolPlotter::GetMaxDefinedPatrolPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAIPatrolPlotter", "GetMaxDefinedPatrolPoints");

	Params::ATwAIPatrolPlotter_GetMaxDefinedPatrolPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwAIFramework.TwAIPatrolSplineComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UTwAIPatrolSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAIPatrolSplineComponent");

	return Clss;
}


// TwAIPatrolSplineComponent TwAIFramework.Default__TwAIPatrolSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAIPatrolSplineComponent* UTwAIPatrolSplineComponent::GetDefaultObj()
{
	static class UTwAIPatrolSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAIPatrolSplineComponent*>(UTwAIPatrolSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwEnvQueryContext_QuerierRight
// (None)

class UClass* UTwEnvQueryContext_QuerierRight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwEnvQueryContext_QuerierRight");

	return Clss;
}


// TwEnvQueryContext_QuerierRight TwAIFramework.Default__TwEnvQueryContext_QuerierRight
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwEnvQueryContext_QuerierRight* UTwEnvQueryContext_QuerierRight::GetDefaultObj()
{
	static class UTwEnvQueryContext_QuerierRight* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwEnvQueryContext_QuerierRight*>(UTwEnvQueryContext_QuerierRight::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwEnvQueryContext_QuerierUp
// (None)

class UClass* UTwEnvQueryContext_QuerierUp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwEnvQueryContext_QuerierUp");

	return Clss;
}


// TwEnvQueryContext_QuerierUp TwAIFramework.Default__TwEnvQueryContext_QuerierUp
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwEnvQueryContext_QuerierUp* UTwEnvQueryContext_QuerierUp::GetDefaultObj()
{
	static class UTwEnvQueryContext_QuerierUp* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwEnvQueryContext_QuerierUp*>(UTwEnvQueryContext_QuerierUp::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwEnvQueryContext_WorldUp
// (None)

class UClass* UTwEnvQueryContext_WorldUp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwEnvQueryContext_WorldUp");

	return Clss;
}


// TwEnvQueryContext_WorldUp TwAIFramework.Default__TwEnvQueryContext_WorldUp
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwEnvQueryContext_WorldUp* UTwEnvQueryContext_WorldUp::GetDefaultObj()
{
	static class UTwEnvQueryContext_WorldUp* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwEnvQueryContext_WorldUp*>(UTwEnvQueryContext_WorldUp::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwEnvQueryGenerator_ConeOffset
// (None)

class UClass* UTwEnvQueryGenerator_ConeOffset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwEnvQueryGenerator_ConeOffset");

	return Clss;
}


// TwEnvQueryGenerator_ConeOffset TwAIFramework.Default__TwEnvQueryGenerator_ConeOffset
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwEnvQueryGenerator_ConeOffset* UTwEnvQueryGenerator_ConeOffset::GetDefaultObj()
{
	static class UTwEnvQueryGenerator_ConeOffset* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwEnvQueryGenerator_ConeOffset*>(UTwEnvQueryGenerator_ConeOffset::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAIFramework.TwEnvQueryGenerator_SimpleGridOuter
// (None)

class UClass* UTwEnvQueryGenerator_SimpleGridOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwEnvQueryGenerator_SimpleGridOuter");

	return Clss;
}


// TwEnvQueryGenerator_SimpleGridOuter TwAIFramework.Default__TwEnvQueryGenerator_SimpleGridOuter
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwEnvQueryGenerator_SimpleGridOuter* UTwEnvQueryGenerator_SimpleGridOuter::GetDefaultObj()
{
	static class UTwEnvQueryGenerator_SimpleGridOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwEnvQueryGenerator_SimpleGridOuter*>(UTwEnvQueryGenerator_SimpleGridOuter::StaticClass()->DefaultObject);

	return Default;
}

}


