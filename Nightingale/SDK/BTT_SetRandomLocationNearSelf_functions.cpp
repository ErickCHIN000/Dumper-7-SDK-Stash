#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_SetRandomLocationNearSelf.BTT_SetRandomLocationNearSelf_C
// (None)

class UClass* UBTT_SetRandomLocationNearSelf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_SetRandomLocationNearSelf_C");

	return Clss;
}


// BTT_SetRandomLocationNearSelf_C BTT_SetRandomLocationNearSelf.Default__BTT_SetRandomLocationNearSelf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_SetRandomLocationNearSelf_C* UBTT_SetRandomLocationNearSelf_C::GetDefaultObj()
{
	static class UBTT_SetRandomLocationNearSelf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_SetRandomLocationNearSelf_C*>(UBTT_SetRandomLocationNearSelf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_SetRandomLocationNearSelf.BTT_SetRandomLocationNearSelf_C.SetRandomLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LSearchActor                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LSquad                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APawn*                       LPawn                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetRandomLocationNearSelf_C::SetRandomLocation(class APawn* ControlledPawn, class AActor* LSearchActor, class AActor* LSquad, class APawn* LPawn, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation, bool CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue, float CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetRandomLocationNearSelf_C", "SetRandomLocation");

	Params::UBTT_SetRandomLocationNearSelf_C_SetRandomLocation_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.LSearchActor = LSearchActor;
	Parms.LSquad = LSquad;
	Parms.LPawn = LPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSpawner_Spawner = CallFunc_GetSpawner_Spawner;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation = CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue = CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast = CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_SetRandomLocationNearSelf.BTT_SetRandomLocationNearSelf_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetRandomLocationNearSelf_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetRandomLocationNearSelf_C", "ReceiveExecuteAI");

	Params::UBTT_SetRandomLocationNearSelf_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_SetRandomLocationNearSelf.BTT_SetRandomLocationNearSelf_C.ExecuteUbergraph_BTT_SetRandomLocationNearSelf
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetRandomLocationNearSelf_C::ExecuteUbergraph_BTT_SetRandomLocationNearSelf(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetRandomLocationNearSelf_C", "ExecuteUbergraph_BTT_SetRandomLocationNearSelf");

	Params::UBTT_SetRandomLocationNearSelf_C_ExecuteUbergraph_BTT_SetRandomLocationNearSelf_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


