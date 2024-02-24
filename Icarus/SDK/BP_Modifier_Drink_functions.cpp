#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Modifier_Drink.BP_Modifier_Drink_C
// (None)

class UClass* UBP_Modifier_Drink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Modifier_Drink_C");

	return Clss;
}


// BP_Modifier_Drink_C BP_Modifier_Drink.Default__BP_Modifier_Drink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Modifier_Drink_C* UBP_Modifier_Drink_C::GetDefaultObj()
{
	static class UBP_Modifier_Drink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Modifier_Drink_C*>(UBP_Modifier_Drink_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Modifier_Drink.BP_Modifier_Drink_C.ModifierApplied
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ModifierApplied_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Modifier_Drink_C::ModifierApplied(bool CallFunc_ModifierApplied_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Drink_C", "ModifierApplied");

	Params::UBP_Modifier_Drink_C_ModifierApplied_Params Parms{};

	Parms.CallFunc_ModifierApplied_ReturnValue = CallFunc_ModifierApplied_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Modifier_Drink.BP_Modifier_Drink_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Modifier_Drink_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Drink_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Modifier_Drink.BP_Modifier_Drink_C.ExecuteUbergraph_BP_Modifier_Drink
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Modifier_Drink_C::ExecuteUbergraph_BP_Modifier_Drink(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Drink_C", "ExecuteUbergraph_BP_Modifier_Drink");

	Params::UBP_Modifier_Drink_C_ExecuteUbergraph_BP_Modifier_Drink_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


