#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PS_BlackStalkerProjectile_Makarov.BP_PS_BlackStalkerProjectile_Makarov_C
// (Actor)

class UClass* ABP_PS_BlackStalkerProjectile_Makarov_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PS_BlackStalkerProjectile_Makarov_C");

	return Clss;
}


// BP_PS_BlackStalkerProjectile_Makarov_C BP_PS_BlackStalkerProjectile_Makarov.Default__BP_PS_BlackStalkerProjectile_Makarov_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PS_BlackStalkerProjectile_Makarov_C* ABP_PS_BlackStalkerProjectile_Makarov_C::GetDefaultObj()
{
	static class ABP_PS_BlackStalkerProjectile_Makarov_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PS_BlackStalkerProjectile_Makarov_C*>(ABP_PS_BlackStalkerProjectile_Makarov_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PS_BlackStalkerProjectile_Makarov.BP_PS_BlackStalkerProjectile_Makarov_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PS_BlackStalkerProjectile_Makarov_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_Makarov_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PS_BlackStalkerProjectile_Makarov.BP_PS_BlackStalkerProjectile_Makarov_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PS_BlackStalkerProjectile_Makarov_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_Makarov_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PS_BlackStalkerProjectile_Makarov.BP_PS_BlackStalkerProjectile_Makarov_C.TurnOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PS_BlackStalkerProjectile_Makarov_C::TurnOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_Makarov_C", "TurnOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PS_BlackStalkerProjectile_Makarov.BP_PS_BlackStalkerProjectile_Makarov_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PS_BlackStalkerProjectile_Makarov_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_Makarov_C", "ReceiveTick");

	Params::ABP_PS_BlackStalkerProjectile_Makarov_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PS_BlackStalkerProjectile_Makarov.BP_PS_BlackStalkerProjectile_Makarov_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PS_BlackStalkerProjectile_Makarov_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_Makarov_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PS_BlackStalkerProjectile_Makarov.BP_PS_BlackStalkerProjectile_Makarov_C.ExecuteUbergraph_BP_PS_BlackStalkerProjectile_Makarov
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PS_BlackStalkerProjectile_Makarov_C::ExecuteUbergraph_BP_PS_BlackStalkerProjectile_Makarov(int32 EntryPoint, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_Makarov_C", "ExecuteUbergraph_BP_PS_BlackStalkerProjectile_Makarov");

	Params::ABP_PS_BlackStalkerProjectile_Makarov_C_ExecuteUbergraph_BP_PS_BlackStalkerProjectile_Makarov_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


