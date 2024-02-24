#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Targeter.BPI_Targeter_C
// (None)

class UClass* IBPI_Targeter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Targeter_C");

	return Clss;
}


// BPI_Targeter_C BPI_Targeter.Default__BPI_Targeter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Targeter_C* IBPI_Targeter_C::GetDefaultObj()
{
	static class IBPI_Targeter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Targeter_C*>(IBPI_Targeter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Targeter.BPI_Targeter_C.AllowEnemyTargeting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Allowed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Targeter_C::AllowEnemyTargeting(bool* Allowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Targeter_C", "AllowEnemyTargeting");

	Params::IBPI_Targeter_C_AllowEnemyTargeting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Allowed != nullptr)
		*Allowed = Parms.Allowed;

}


// Function BPI_Targeter.BPI_Targeter_C.AllowFriendlyTargeting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Allowed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Targeter_C::AllowFriendlyTargeting(bool* Allowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Targeter_C", "AllowFriendlyTargeting");

	Params::IBPI_Targeter_C_AllowFriendlyTargeting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Allowed != nullptr)
		*Allowed = Parms.Allowed;

}


// Function BPI_Targeter.BPI_Targeter_C.IsAfraidOf
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorInQuestion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsAfraidOf                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Targeter_C::IsAfraidOf(class AActor* ActorInQuestion, bool* bIsAfraidOf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Targeter_C", "IsAfraidOf");

	Params::IBPI_Targeter_C_IsAfraidOf_Params Parms{};

	Parms.ActorInQuestion = ActorInQuestion;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsAfraidOf != nullptr)
		*bIsAfraidOf = Parms.bIsAfraidOf;

}


// Function BPI_Targeter.BPI_Targeter_C.GetTargetPriorityOrder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>        TargetPriorityOrder                                              (Parm, OutParm)

void IBPI_Targeter_C::GetTargetPriorityOrder(TArray<struct FGameplayTag>* TargetPriorityOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Targeter_C", "GetTargetPriorityOrder");

	Params::IBPI_Targeter_C_GetTargetPriorityOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetPriorityOrder != nullptr)
		*TargetPriorityOrder = std::move(Parms.TargetPriorityOrder);

}


// Function BPI_Targeter.BPI_Targeter_C.IsFriend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorInQuestion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFriend                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Targeter_C::IsFriend(class AActor* ActorInQuestion, bool* bIsFriend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Targeter_C", "IsFriend");

	Params::IBPI_Targeter_C_IsFriend_Params Parms{};

	Parms.ActorInQuestion = ActorInQuestion;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsFriend != nullptr)
		*bIsFriend = Parms.bIsFriend;

}


// Function BPI_Targeter.BPI_Targeter_C.ClearTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Targeter_C::ClearTarget(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Targeter_C", "ClearTarget");

	Params::IBPI_Targeter_C_ClearTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_Targeter.BPI_Targeter_C.SetTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Targeter_C::SetTarget(class AActor* NewTarget, class AActor** Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Targeter_C", "SetTarget");

	Params::IBPI_Targeter_C_SetTarget_Params Parms{};

	Parms.NewTarget = NewTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function BPI_Targeter.BPI_Targeter_C.GetTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Target                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Targeter_C::GetTarget(class AActor** Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Targeter_C", "GetTarget");

	Params::IBPI_Targeter_C_GetTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function BPI_Targeter.BPI_Targeter_C.IsEnemy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorInQuestion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsEnemy                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Targeter_C::IsEnemy(class AActor* ActorInQuestion, bool* bIsEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Targeter_C", "IsEnemy");

	Params::IBPI_Targeter_C_IsEnemy_Params Parms{};

	Parms.ActorInQuestion = ActorInQuestion;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEnemy != nullptr)
		*bIsEnemy = Parms.bIsEnemy;

}

}


