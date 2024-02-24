#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_arm_food.bp_arm_food_C
// (Actor)

class UClass* Abp_arm_food_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_arm_food_C");

	return Clss;
}


// bp_arm_food_C bp_arm_food.Default__bp_arm_food_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_arm_food_C* Abp_arm_food_C::GetDefaultObj()
{
	static class Abp_arm_food_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_arm_food_C*>(Abp_arm_food_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_arm_food.bp_arm_food_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_arm_food_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_arm_food_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_arm_food.bp_arm_food_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Abp_arm_food_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_arm_food_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_arm_food.bp_arm_food_C.ExecuteUbergraph_bp_arm_food
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_arm_food_C::ExecuteUbergraph_bp_arm_food(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_arm_food_C", "ExecuteUbergraph_bp_arm_food");

	Params::Abp_arm_food_C_ExecuteUbergraph_bp_arm_food_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


