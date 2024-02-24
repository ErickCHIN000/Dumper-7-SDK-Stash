#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GamePlayGameState.GamePlayGameState_C
// (Actor)

class UClass* AGamePlayGameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GamePlayGameState_C");

	return Clss;
}


// GamePlayGameState_C GamePlayGameState.Default__GamePlayGameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGamePlayGameState_C* AGamePlayGameState_C::GetDefaultObj()
{
	static class AGamePlayGameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGamePlayGameState_C*>(AGamePlayGameState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GamePlayGameState.GamePlayGameState_C.Get Next Spawn Frame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              TargetFrame                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetFrameCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_MaxInt64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGamePlayGameState_C::Get_Next_Spawn_Frame(int64* TargetFrame, int64 CallFunc_GetFrameCount_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Add_Int64Int64_ReturnValue, int64 CallFunc_MaxInt64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayGameState_C", "Get Next Spawn Frame");

	Params::AGamePlayGameState_C_Get_Next_Spawn_Frame_Params Parms{};

	Parms.CallFunc_GetFrameCount_ReturnValue = CallFunc_GetFrameCount_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Add_Int64Int64_ReturnValue = CallFunc_Add_Int64Int64_ReturnValue;
	Parms.CallFunc_MaxInt64_ReturnValue = CallFunc_MaxInt64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetFrame != nullptr)
		*TargetFrame = Parms.TargetFrame;

}

}


