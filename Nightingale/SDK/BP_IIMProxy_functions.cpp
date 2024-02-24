#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IIMProxy.BP_IIMProxy_C
// (Actor)

class UClass* ABP_IIMProxy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IIMProxy_C");

	return Clss;
}


// BP_IIMProxy_C BP_IIMProxy.Default__BP_IIMProxy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IIMProxy_C* ABP_IIMProxy_C::GetDefaultObj()
{
	static class ABP_IIMProxy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IIMProxy_C*>(ABP_IIMProxy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IIMProxy.BP_IIMProxy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IIMProxy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IIMProxy.BP_IIMProxy_C.ExecuteUbergraph_BP_IIMProxy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IIMProxy_C::ExecuteUbergraph_BP_IIMProxy(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IIMProxy_C", "ExecuteUbergraph_BP_IIMProxy");

	Params::ABP_IIMProxy_C_ExecuteUbergraph_BP_IIMProxy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


