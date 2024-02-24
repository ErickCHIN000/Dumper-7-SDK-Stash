#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Container_HiddenCache.Container_HiddenCache_C
// (Actor)

class UClass* AContainer_HiddenCache_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Container_HiddenCache_C");

	return Clss;
}


// Container_HiddenCache_C Container_HiddenCache.Default__Container_HiddenCache_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AContainer_HiddenCache_C* AContainer_HiddenCache_C::GetDefaultObj()
{
	static class AContainer_HiddenCache_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AContainer_HiddenCache_C*>(AContainer_HiddenCache_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Container_HiddenCache.Container_HiddenCache_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AContainer_HiddenCache_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_HiddenCache_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container_HiddenCache.Container_HiddenCache_C.Event1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AContainer_HiddenCache_C::Event1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_HiddenCache_C", "Event1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container_HiddenCache.Container_HiddenCache_C.Event2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AContainer_HiddenCache_C::Event2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_HiddenCache_C", "Event2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container_HiddenCache.Container_HiddenCache_C.ExecuteUbergraph_Container_HiddenCache
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AContainer_HiddenCache_C::ExecuteUbergraph_Container_HiddenCache(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_HiddenCache_C", "ExecuteUbergraph_Container_HiddenCache");

	Params::AContainer_HiddenCache_C_ExecuteUbergraph_Container_HiddenCache_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


