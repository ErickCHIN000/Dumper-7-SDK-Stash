#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Window_Curtain_Leather.BP_Window_Curtain_Leather_C
// (Actor)

class UClass* ABP_Window_Curtain_Leather_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Window_Curtain_Leather_C");

	return Clss;
}


// BP_Window_Curtain_Leather_C BP_Window_Curtain_Leather.Default__BP_Window_Curtain_Leather_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Window_Curtain_Leather_C* ABP_Window_Curtain_Leather_C::GetDefaultObj()
{
	static class ABP_Window_Curtain_Leather_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Window_Curtain_Leather_C*>(ABP_Window_Curtain_Leather_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Window_Curtain_Leather.BP_Window_Curtain_Leather_C.SetOpenableStateOnFoundationActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPhysicsAsset*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicsAsset*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicsAsset*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Window_Curtain_Leather_C::SetOpenableStateOnFoundationActor(bool Temp_bool_Variable, class UPhysicsAsset* Temp_object_Variable, class UPhysicsAsset* Temp_object_Variable_1, class UPhysicsAsset* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Window_Curtain_Leather_C", "SetOpenableStateOnFoundationActor");

	Params::ABP_Window_Curtain_Leather_C_SetOpenableStateOnFoundationActor_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Window_Curtain_Leather.BP_Window_Curtain_Leather_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Window_Curtain_Leather_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Window_Curtain_Leather_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Window_Curtain_Leather.BP_Window_Curtain_Leather_C.ExecuteUbergraph_BP_Window_Curtain_Leather
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Window_Curtain_Leather_C::ExecuteUbergraph_BP_Window_Curtain_Leather(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Window_Curtain_Leather_C", "ExecuteUbergraph_BP_Window_Curtain_Leather");

	Params::ABP_Window_Curtain_Leather_C_ExecuteUbergraph_BP_Window_Curtain_Leather_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


