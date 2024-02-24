#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VoxelResourceDistribution.BP_VoxelResourceDistribution_C
// (None)

class UClass* UBP_VoxelResourceDistribution_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VoxelResourceDistribution_C");

	return Clss;
}


// BP_VoxelResourceDistribution_C BP_VoxelResourceDistribution.Default__BP_VoxelResourceDistribution_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VoxelResourceDistribution_C* UBP_VoxelResourceDistribution_C::GetDefaultObj()
{
	static class UBP_VoxelResourceDistribution_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VoxelResourceDistribution_C*>(UBP_VoxelResourceDistribution_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VoxelResourceDistribution.BP_VoxelResourceDistribution_C.OnSeedInitialised
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VoxelResourceDistribution_C::OnSeedInitialised(int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResourceDistribution_C", "OnSeedInitialised");

	Params::UBP_VoxelResourceDistribution_C_OnSeedInitialised_Params Parms{};

	Parms.Seed = Seed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VoxelResourceDistribution.BP_VoxelResourceDistribution_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VoxelResourceDistribution_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResourceDistribution_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VoxelResourceDistribution.BP_VoxelResourceDistribution_C.ExecuteUbergraph_BP_VoxelResourceDistribution
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AIcarusGameStateSurvival*    K2Node_DynamicCast_AsIcarus_Game_State_Survival                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Seed                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VoxelResourceDistribution_C::ExecuteUbergraph_BP_VoxelResourceDistribution(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResourceDistribution_C", "ExecuteUbergraph_BP_VoxelResourceDistribution");

	Params::UBP_VoxelResourceDistribution_C_ExecuteUbergraph_BP_VoxelResourceDistribution_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsIcarus_Game_State_Survival = K2Node_DynamicCast_AsIcarus_Game_State_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Seed = K2Node_CustomEvent_Seed;

	UObject::ProcessEvent(Func, &Parms);

}

}


