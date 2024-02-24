#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPTrapBear_Troll.BPTrapBear_Troll_C
// (Actor)

class UClass* ABPTrapBear_Troll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPTrapBear_Troll_C");

	return Clss;
}


// BPTrapBear_Troll_C BPTrapBear_Troll.Default__BPTrapBear_Troll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPTrapBear_Troll_C* ABPTrapBear_Troll_C::GetDefaultObj()
{
	static class ABPTrapBear_Troll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPTrapBear_Troll_C*>(ABPTrapBear_Troll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPTrapBear_Troll.BPTrapBear_Troll_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPTrapBear_Troll_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_Troll_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear_Troll.BPTrapBear_Troll_C.Trap_Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_Troll_C::Trap_Activated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_Troll_C", "Trap_Activated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear_Troll.BPTrapBear_Troll_C.ExecuteUbergraph_BPTrapBear_Troll
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMyNameInChangedSet_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWaifuNPC_C*                 K2Node_DynamicCast_AsWaifu_NPC                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_Troll_C::ExecuteUbergraph_BPTrapBear_Troll(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AWaifuNPC_C* K2Node_DynamicCast_AsWaifu_NPC, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_Troll_C", "ExecuteUbergraph_BPTrapBear_Troll");

	Params::ABPTrapBear_Troll_C_ExecuteUbergraph_BPTrapBear_Troll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_IsMyNameInChangedSet_ReturnValue = CallFunc_IsMyNameInChangedSet_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWaifu_NPC = K2Node_DynamicCast_AsWaifu_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


