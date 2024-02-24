#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ICriticalHitInterface.ICriticalHitInterface_C
// (None)

class UClass* IICriticalHitInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ICriticalHitInterface_C");

	return Clss;
}


// ICriticalHitInterface_C ICriticalHitInterface.Default__ICriticalHitInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IICriticalHitInterface_C* IICriticalHitInterface_C::GetDefaultObj()
{
	static class IICriticalHitInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IICriticalHitInterface_C*>(IICriticalHitInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ICriticalHitInterface.ICriticalHitInterface_C.CanKillcam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IICriticalHitInterface_C::CanKillcam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICriticalHitInterface_C", "CanKillcam");

	Params::IICriticalHitInterface_C_CanKillcam_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ICriticalHitInterface.ICriticalHitInterface_C.GatherIntersections
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Debug                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFCHCollisionStruct> Intersections                                                    (Parm, OutParm)

void IICriticalHitInterface_C::GatherIntersections(class AActor* Projectile, bool Debug, bool* Return, TArray<struct FFCHCollisionStruct>* Intersections)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICriticalHitInterface_C", "GatherIntersections");

	Params::IICriticalHitInterface_C_GatherIntersections_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.Debug = Debug;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (Intersections != nullptr)
		*Intersections = std::move(Parms.Intersections);

}


// Function ICriticalHitInterface.ICriticalHitInterface_C.GetCHBounds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBoxComponent*               Box                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICriticalHitInterface_C::GetCHBounds(bool* Return, class UBoxComponent** Box)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICriticalHitInterface_C", "GetCHBounds");

	Params::IICriticalHitInterface_C_GetCHBounds_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (Box != nullptr)
		*Box = Parms.Box;

}


// Function ICriticalHitInterface.ICriticalHitInterface_C.GetTargetHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Health                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICriticalHitInterface_C::GetTargetHealth(bool* Return, float* Health)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICriticalHitInterface_C", "GetTargetHealth");

	Params::IICriticalHitInterface_C_GetTargetHealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (Health != nullptr)
		*Health = Parms.Health;

}


// Function ICriticalHitInterface.ICriticalHitInterface_C.ResetPrediction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IICriticalHitInterface_C::ResetPrediction(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICriticalHitInterface_C", "ResetPrediction");

	Params::IICriticalHitInterface_C_ResetPrediction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function ICriticalHitInterface.ICriticalHitInterface_C.PredictMovement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IICriticalHitInterface_C::PredictMovement(float Time, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICriticalHitInterface_C", "PredictMovement");

	Params::IICriticalHitInterface_C_PredictMovement_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}

}


