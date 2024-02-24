#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C
// (Actor)

class UClass* ABP_IcarusRespawnShipSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusRespawnShipSpawn_C");

	return Clss;
}


// BP_IcarusRespawnShipSpawn_C BP_IcarusRespawnShipSpawn.Default__BP_IcarusRespawnShipSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusRespawnShipSpawn_C* ABP_IcarusRespawnShipSpawn_C::GetDefaultObj()
{
	static class ABP_IcarusRespawnShipSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusRespawnShipSpawn_C*>(ABP_IcarusRespawnShipSpawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.HideEditorLocator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusRespawnShipSpawn_C::HideEditorLocator(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusRespawnShipSpawn_C", "HideEditorLocator");

	Params::ABP_IcarusRespawnShipSpawn_C_HideEditorLocator_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.ShowEditorLocator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusRespawnShipSpawn_C::ShowEditorLocator(const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusRespawnShipSpawn_C", "ShowEditorLocator");

	Params::ABP_IcarusRespawnShipSpawn_C_ShowEditorLocator_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.UpdateBiomeValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            CallFunc_SampleBiomeAtLocation_ReturnValue                       (NoDestructor, HasGetValueTypeHash)

void ABP_IcarusRespawnShipSpawn_C::UpdateBiomeValue(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusRespawnShipSpawn_C", "UpdateBiomeValue");

	Params::ABP_IcarusRespawnShipSpawn_C_UpdateBiomeValue_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SampleBiomeAtLocation_ReturnValue = CallFunc_SampleBiomeAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.UnassignSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusRespawnShipSpawn_C::UnassignSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusRespawnShipSpawn_C", "UnassignSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.AssignSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_IcarusRespawnShipSpawn_C::AssignSpawn(const class FString& PlayerID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusRespawnShipSpawn_C", "AssignSpawn");

	Params::ABP_IcarusRespawnShipSpawn_C_AssignSpawn_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


