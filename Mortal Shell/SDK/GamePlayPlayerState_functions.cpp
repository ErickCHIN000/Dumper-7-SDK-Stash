#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GamePlayPlayerState.GamePlayPlayerState_C
// (Actor)

class UClass* AGamePlayPlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GamePlayPlayerState_C");

	return Clss;
}


// GamePlayPlayerState_C GamePlayPlayerState.Default__GamePlayPlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGamePlayPlayerState_C* AGamePlayPlayerState_C::GetDefaultObj()
{
	static class AGamePlayPlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGamePlayPlayerState_C*>(AGamePlayPlayerState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GamePlayPlayerState.GamePlayPlayerState_C.LoadPlayerUnlocks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUnlocksSave_C*              K2Node_DynamicCast_AsUnlocks_Save                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGamePlayPlayerState_C::LoadPlayerUnlocks(bool CallFunc_HasAuthority_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, class UUnlocksSave_C* K2Node_DynamicCast_AsUnlocks_Save, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPlayerState_C", "LoadPlayerUnlocks");

	Params::AGamePlayPlayerState_C_LoadPlayerUnlocks_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUnlocks_Save = K2Node_DynamicCast_AsUnlocks_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPlayerState.GamePlayPlayerState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGamePlayPlayerState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPlayerState_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamePlayPlayerState.GamePlayPlayerState_C.ExecuteUbergraph_GamePlayPlayerState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGamePlayPlayerState_C::ExecuteUbergraph_GamePlayPlayerState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPlayerState_C", "ExecuteUbergraph_GamePlayPlayerState");

	Params::AGamePlayPlayerState_C_ExecuteUbergraph_GamePlayPlayerState_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


