#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_KeycardBriefcaseContainer.BP_KeycardBriefcaseContainer_C
// (Actor)

class UClass* ABP_KeycardBriefcaseContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_KeycardBriefcaseContainer_C");

	return Clss;
}


// BP_KeycardBriefcaseContainer_C BP_KeycardBriefcaseContainer.Default__BP_KeycardBriefcaseContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_KeycardBriefcaseContainer_C* ABP_KeycardBriefcaseContainer_C::GetDefaultObj()
{
	static class ABP_KeycardBriefcaseContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_KeycardBriefcaseContainer_C*>(ABP_KeycardBriefcaseContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_KeycardBriefcaseContainer.BP_KeycardBriefcaseContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_KeycardBriefcaseContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_KeycardBriefcaseContainer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_KeycardBriefcaseContainer.BP_KeycardBriefcaseContainer_C.Event1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_KeycardBriefcaseContainer_C::Event1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_KeycardBriefcaseContainer_C", "Event1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_KeycardBriefcaseContainer.BP_KeycardBriefcaseContainer_C.Event2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_KeycardBriefcaseContainer_C::Event2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_KeycardBriefcaseContainer_C", "Event2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_KeycardBriefcaseContainer.BP_KeycardBriefcaseContainer_C.ExecuteUbergraph_BP_KeycardBriefcaseContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_KeycardBriefcaseContainer_C::ExecuteUbergraph_BP_KeycardBriefcaseContainer(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_KeycardBriefcaseContainer_C", "ExecuteUbergraph_BP_KeycardBriefcaseContainer");

	Params::ABP_KeycardBriefcaseContainer_C_ExecuteUbergraph_BP_KeycardBriefcaseContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


