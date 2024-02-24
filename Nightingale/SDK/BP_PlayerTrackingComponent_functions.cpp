#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C
// (None)

class UClass* UBP_PlayerTrackingComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerTrackingComponent_C");

	return Clss;
}


// BP_PlayerTrackingComponent_C BP_PlayerTrackingComponent.Default__BP_PlayerTrackingComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerTrackingComponent_C* UBP_PlayerTrackingComponent_C::GetDefaultObj()
{
	static class UBP_PlayerTrackingComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerTrackingComponent_C*>(UBP_PlayerTrackingComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C.SetSpyglassState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SpyglassUp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerTrackingComponent_C::SetSpyglassState(bool SpyglassUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerTrackingComponent_C", "SetSpyglassState");

	Params::UBP_PlayerTrackingComponent_C_SetSpyglassState_Params Parms{};

	Parms.SpyglassUp = SpyglassUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C.GetSpyglassState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               SpyglassUp                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerTrackingComponent_C::GetSpyglassState(bool* SpyglassUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerTrackingComponent_C", "GetSpyglassState");

	Params::UBP_PlayerTrackingComponent_C_GetSpyglassState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SpyglassUp != nullptr)
		*SpyglassUp = Parms.SpyglassUp;

}


// Function BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PlayerTrackingComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerTrackingComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C.SpyglassStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SpyglassUp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerTrackingComponent_C::SpyglassStateChanged_Event(bool SpyglassUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerTrackingComponent_C", "SpyglassStateChanged_Event");

	Params::UBP_PlayerTrackingComponent_C_SpyglassStateChanged_Event_Params Parms{};

	Parms.SpyglassUp = SpyglassUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C.ExecuteUbergraph_BP_PlayerTrackingComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SpyglassUp                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerTrackingComponent_C::ExecuteUbergraph_BP_PlayerTrackingComponent(int32 EntryPoint, bool K2Node_CustomEvent_SpyglassUp, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerTrackingComponent_C", "ExecuteUbergraph_BP_PlayerTrackingComponent");

	Params::UBP_PlayerTrackingComponent_C_ExecuteUbergraph_BP_PlayerTrackingComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SpyglassUp = K2Node_CustomEvent_SpyglassUp;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C.SpyglassStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SpyglassUp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerTrackingComponent_C::SpyglassStateChanged__DelegateSignature(bool SpyglassUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerTrackingComponent_C", "SpyglassStateChanged__DelegateSignature");

	Params::UBP_PlayerTrackingComponent_C_SpyglassStateChanged__DelegateSignature_Params Parms{};

	Parms.SpyglassUp = SpyglassUp;

	UObject::ProcessEvent(Func, &Parms);

}

}


