#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StructureAIInterfaces.BPI_StructureAIInterfaces_C
// (None)

class UClass* IBPI_StructureAIInterfaces_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StructureAIInterfaces_C");

	return Clss;
}


// BPI_StructureAIInterfaces_C BPI_StructureAIInterfaces.Default__BPI_StructureAIInterfaces_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StructureAIInterfaces_C* IBPI_StructureAIInterfaces_C::GetDefaultObj()
{
	static class IBPI_StructureAIInterfaces_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StructureAIInterfaces_C*>(IBPI_StructureAIInterfaces_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StructureAIInterfaces.BPI_StructureAIInterfaces_C.GetFacingTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     QueryingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      FacingTarget                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_StructureAIInterfaces_C::GetFacingTarget(class UObject* QueryingActor, class AActor** FacingTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureAIInterfaces_C", "GetFacingTarget");

	Params::IBPI_StructureAIInterfaces_C_GetFacingTarget_Params Parms{};

	Parms.QueryingActor = QueryingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (FacingTarget != nullptr)
		*FacingTarget = Parms.FacingTarget;

}


// Function BPI_StructureAIInterfaces.BPI_StructureAIInterfaces_C.GetRangedAttackLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     QueryingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AttackLocationType AttackLocationType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StructureAIInterfaces_C::GetRangedAttackLocation(class UObject* QueryingActor, enum class Enum_AttackLocationType AttackLocationType, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureAIInterfaces_C", "GetRangedAttackLocation");

	Params::IBPI_StructureAIInterfaces_C_GetRangedAttackLocation_Params Parms{};

	Parms.QueryingActor = QueryingActor;
	Parms.AttackLocationType = AttackLocationType;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BPI_StructureAIInterfaces.BPI_StructureAIInterfaces_C.CompleteCompletableStructure
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             AICharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Complete                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StructureAIInterfaces_C::CompleteCompletableStructure(class ANWXAICharacter* AICharacter, bool* Complete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureAIInterfaces_C", "CompleteCompletableStructure");

	Params::IBPI_StructureAIInterfaces_C_CompleteCompletableStructure_Params Parms{};

	Parms.AICharacter = AICharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (Complete != nullptr)
		*Complete = Parms.Complete;

}


// Function BPI_StructureAIInterfaces.BPI_StructureAIInterfaces_C.GetReachableNavTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  ReachableNavTransform                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Structure                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_StructureAIInterfaces_C::GetReachableNavTransform(class APawn* Pawn, bool* Success, struct FTransform* ReachableNavTransform, class UObject** Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureAIInterfaces_C", "GetReachableNavTransform");

	Params::IBPI_StructureAIInterfaces_C_GetReachableNavTransform_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ReachableNavTransform != nullptr)
		*ReachableNavTransform = std::move(Parms.ReachableNavTransform);

	if (Structure != nullptr)
		*Structure = Parms.Structure;

}

}


