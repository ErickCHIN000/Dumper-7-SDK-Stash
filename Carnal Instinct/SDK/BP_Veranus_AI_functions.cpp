#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Veranus_AI.BP_Veranus_AI_C
// (Actor, Pawn)

class UClass* ABP_Veranus_AI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Veranus_AI_C");

	return Clss;
}


// BP_Veranus_AI_C BP_Veranus_AI.Default__BP_Veranus_AI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Veranus_AI_C* ABP_Veranus_AI_C::GetDefaultObj()
{
	static class ABP_Veranus_AI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Veranus_AI_C*>(ABP_Veranus_AI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Veranus_AI.BP_Veranus_AI_C.Death
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Veranus_AI_C::Death(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Veranus_AI_C", "Death");

	Params::ABP_Veranus_AI_C_Death_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Veranus_AI.BP_Veranus_AI_C.GetMontages
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MontageAction         Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Montages                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Veranus_AI_C::GetMontages(enum class E_MontageAction Action, class UDataTable** Montages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Veranus_AI_C", "GetMontages");

	Params::ABP_Veranus_AI_C_GetMontages_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	if (Montages != nullptr)
		*Montages = Parms.Montages;

}


// Function BP_Veranus_AI.BP_Veranus_AI_C.Update Items
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Veranus_AI_C::Update_Items()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Veranus_AI_C", "Update Items");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Veranus_AI.BP_Veranus_AI_C.HandleMeshOnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Veranus_AI_C::HandleMeshOnDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Veranus_AI_C", "HandleMeshOnDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Veranus_AI.BP_Veranus_AI_C.OnCollisionActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CollisionPart         Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Veranus_AI_C::OnCollisionActivated(enum class E_CollisionPart Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Veranus_AI_C", "OnCollisionActivated");

	Params::ABP_Veranus_AI_C_OnCollisionActivated_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Veranus_AI.BP_Veranus_AI_C.Respawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Veranus_AI_C::Respawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Veranus_AI_C", "Respawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Veranus_AI.BP_Veranus_AI_C.ExecuteUbergraph_BP_Veranus_AI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAllSocketNames_ReturnValue                           (ReferenceParm)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_CollisionPart         K2Node_Event_Selection                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Veranus_AI_C::ExecuteUbergraph_BP_Veranus_AI(int32 EntryPoint, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Veranus_AI_C", "ExecuteUbergraph_BP_Veranus_AI");

	Params::ABP_Veranus_AI_C_ExecuteUbergraph_BP_Veranus_AI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllSocketNames_ReturnValue = CallFunc_GetAllSocketNames_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_3 = CallFunc_K2_AttachToComponent_ReturnValue_3;
	Parms.K2Node_Event_Selection = K2Node_Event_Selection;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_4 = CallFunc_K2_AttachToComponent_ReturnValue_4;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_5 = CallFunc_K2_AttachToComponent_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


