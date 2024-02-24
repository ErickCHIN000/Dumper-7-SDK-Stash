#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpaceStation_GameState.SpaceStation_GameState_C
// (Actor)

class UClass* ASpaceStation_GameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpaceStation_GameState_C");

	return Clss;
}


// SpaceStation_GameState_C SpaceStation_GameState.Default__SpaceStation_GameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpaceStation_GameState_C* ASpaceStation_GameState_C::GetDefaultObj()
{
	static class ASpaceStation_GameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpaceStation_GameState_C*>(ASpaceStation_GameState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpaceStation_GameState.SpaceStation_GameState_C.OnRep_Contract
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpaceStation_GameState_C::OnRep_Contract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_GameState_C", "OnRep_Contract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpaceStation_GameState.SpaceStation_GameState_C.SetContract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        New_Contract                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASpaceStation_GameState_C::SetContract(const struct FFProspectServerInfo& New_Contract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_GameState_C", "SetContract");

	Params::ASpaceStation_GameState_C_SetContract_Params Parms{};

	Parms.New_Contract = New_Contract;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpaceStation_GameState.SpaceStation_GameState_C.MULTICAST_ShowLoadingScreen
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpaceStation_GameState_C::MULTICAST_ShowLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_GameState_C", "MULTICAST_ShowLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpaceStation_GameState.SpaceStation_GameState_C.OnServer_UnreadyAllPlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpaceStation_GameState_C::OnServer_UnreadyAllPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_GameState_C", "OnServer_UnreadyAllPlayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpaceStation_GameState.SpaceStation_GameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpaceStation_GameState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_GameState_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpaceStation_GameState.SpaceStation_GameState_C.ExecuteUbergraph_SpaceStation_GameState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DialogueManager_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AIcarusPlayerController*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpaceStation_GameState_C::ExecuteUbergraph_SpaceStation_GameState(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class ABP_DialogueManager_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class AIcarusPlayerController*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, class AIcarusPlayerController* CallFunc_Array_Get_Item, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_GameState_C", "ExecuteUbergraph_SpaceStation_GameState");

	Params::ASpaceStation_GameState_C_ExecuteUbergraph_SpaceStation_GameState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetBackendProxyComponent_ReturnValue = CallFunc_GetBackendProxyComponent_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpaceStation_GameState.SpaceStation_GameState_C.ContractUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpaceStation_GameState_C::ContractUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_GameState_C", "ContractUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpaceStation_GameState.SpaceStation_GameState_C.ReadyStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpaceStation_GameState_C::ReadyStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_GameState_C", "ReadyStateChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpaceStation_GameState.SpaceStation_GameState_C.SharePercentagesChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpaceStation_GameState_C::SharePercentagesChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_GameState_C", "SharePercentagesChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpaceStation_GameState.SpaceStation_GameState_C.ShowLoadingScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpaceStation_GameState_C::ShowLoadingScreen__DelegateSignature(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_GameState_C", "ShowLoadingScreen__DelegateSignature");

	Params::ASpaceStation_GameState_C_ShowLoadingScreen__DelegateSignature_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}

}


