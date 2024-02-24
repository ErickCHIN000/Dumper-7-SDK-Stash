#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Achievement_RoomDecor.BP_Achievement_RoomDecor_C
// (Actor)

class UClass* ABP_Achievement_RoomDecor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Achievement_RoomDecor_C");

	return Clss;
}


// BP_Achievement_RoomDecor_C BP_Achievement_RoomDecor.Default__BP_Achievement_RoomDecor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Achievement_RoomDecor_C* ABP_Achievement_RoomDecor_C::GetDefaultObj()
{
	static class ABP_Achievement_RoomDecor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Achievement_RoomDecor_C*>(ABP_Achievement_RoomDecor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Achievement_RoomDecor.BP_Achievement_RoomDecor_C.OnAchievementInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Achievement_RoomDecor_C::OnAchievementInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_RoomDecor_C", "OnAchievementInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Achievement_RoomDecor.BP_Achievement_RoomDecor_C.OnDecorateRoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DecorationActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievement_RoomDecor_C::OnDecorateRoom(class AActor* DecorationActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_RoomDecor_C", "OnDecorateRoom");

	Params::ABP_Achievement_RoomDecor_C_OnDecorateRoom_Params Parms{};

	Parms.DecorationActor = DecorationActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Achievement_RoomDecor.BP_Achievement_RoomDecor_C.ExecuteUbergraph_BP_Achievement_RoomDecor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGGAchievementSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DecorationActor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Achievement_RoomDecor_C::ExecuteUbergraph_BP_Achievement_RoomDecor(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class AActor* K2Node_CustomEvent_DecorationActor, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_RoomDecor_C", "ExecuteUbergraph_BP_Achievement_RoomDecor");

	Params::ABP_Achievement_RoomDecor_C_ExecuteUbergraph_BP_Achievement_RoomDecor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;
	Parms.K2Node_CustomEvent_DecorationActor = K2Node_CustomEvent_DecorationActor;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


