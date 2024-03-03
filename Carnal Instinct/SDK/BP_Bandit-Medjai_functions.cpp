#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bandit-Medjai.BP_Bandit-Medjai_C
// (Actor, Pawn)

class UClass* ABP_BanditMinusMedjai_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bandit-Medjai_C");

	return Clss;
}


// BP_Bandit-Medjai_C BP_Bandit-Medjai.Default__BP_Bandit-Medjai_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BanditMinusMedjai_C* ABP_BanditMinusMedjai_C::GetDefaultObj()
{
	static class ABP_BanditMinusMedjai_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BanditMinusMedjai_C*>(ABP_BanditMinusMedjai_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Bandit-Medjai.BP_Bandit-Medjai_C.Death
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANpc_medjai_C*               CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BanditMinusMedjai_C::Death(class ANpc_medjai_C* CallFunc_GetActorOfClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bandit-Medjai_C", "Death");

	Params::ABP_BanditMinusMedjai_C_Death_Params Parms{};

	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Bandit-Medjai.BP_Bandit-Medjai_C.GetMontages
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MontageAction         Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Montages                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BanditMinusMedjai_C::GetMontages(enum class E_MontageAction Action, class UDataTable** Montages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bandit-Medjai_C", "GetMontages");

	Params::ABP_BanditMinusMedjai_C_GetMontages_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	if (Montages != nullptr)
		*Montages = Parms.Montages;

}


// Function BP_Bandit-Medjai.BP_Bandit-Medjai_C.Update Items
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BanditMinusMedjai_C::Update_Items()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bandit-Medjai_C", "Update Items");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Bandit-Medjai.BP_Bandit-Medjai_C.HandleMeshOnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BanditMinusMedjai_C::HandleMeshOnDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bandit-Medjai_C", "HandleMeshOnDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Bandit-Medjai.BP_Bandit-Medjai_C.OnCollisionActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CollisionPart         Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BanditMinusMedjai_C::OnCollisionActivated(enum class E_CollisionPart Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bandit-Medjai_C", "OnCollisionActivated");

	Params::ABP_BanditMinusMedjai_C_OnCollisionActivated_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Bandit-Medjai.BP_Bandit-Medjai_C.Respawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BanditMinusMedjai_C::Respawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bandit-Medjai_C", "Respawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Bandit-Medjai.BP_Bandit-Medjai_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BanditMinusMedjai_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bandit-Medjai_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Bandit-Medjai.BP_Bandit-Medjai_C.ExecuteUbergraph_BP_Bandit-Medjai
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAllSocketNames_ReturnValue                           (ReferenceParm)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_CollisionPart         K2Node_Event_Selection                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BanditMinusMedjai_C::ExecuteUbergraph_BP_BanditMinusMedjai(int32 EntryPoint, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bandit-Medjai_C", "ExecuteUbergraph_BP_Bandit-Medjai");

	Params::ABP_BanditMinusMedjai_C_ExecuteUbergraph_BP_BanditMinusMedjai_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllSocketNames_ReturnValue = CallFunc_GetAllSocketNames_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.K2Node_Event_Selection = K2Node_Event_Selection;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


