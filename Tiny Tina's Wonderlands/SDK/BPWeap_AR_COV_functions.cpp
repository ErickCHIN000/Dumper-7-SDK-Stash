#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_AR_COV.BPWeap_AR_COV_C
// (Actor)

class UClass* ABPWeap_AR_COV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_AR_COV_C");

	return Clss;
}


// BPWeap_AR_COV_C BPWeap_AR_COV.Default__BPWeap_AR_COV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_AR_COV_C* ABPWeap_AR_COV_C::GetDefaultObj()
{
	static class ABPWeap_AR_COV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_AR_COV_C*>(ABPWeap_AR_COV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_AR_COV.BPWeap_AR_COV_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_COV_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_COV_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_COV.BPWeap_AR_COV_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_AR_COV_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_COV_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_COV.BPWeap_AR_COV_C.Weapon_NotifyEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_COV_C::Weapon_NotifyEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_COV_C", "Weapon_NotifyEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_COV.BPWeap_AR_COV_C.ExecuteUbergraph_BPWeap_AR_COV
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void ABPWeap_AR_COV_C::ExecuteUbergraph_BPWeap_AR_COV(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_COV_C", "ExecuteUbergraph_BPWeap_AR_COV");

	Params::ABPWeap_AR_COV_C_ExecuteUbergraph_BPWeap_AR_COV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


