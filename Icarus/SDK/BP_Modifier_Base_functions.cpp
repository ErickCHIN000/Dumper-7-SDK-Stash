#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Modifier_Base.BP_Modifier_Base_C
// (None)

class UClass* UBP_Modifier_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Modifier_Base_C");

	return Clss;
}


// BP_Modifier_Base_C BP_Modifier_Base.Default__BP_Modifier_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Modifier_Base_C* UBP_Modifier_Base_C::GetDefaultObj()
{
	static class UBP_Modifier_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Modifier_Base_C*>(UBP_Modifier_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Modifier_Base.BP_Modifier_Base_C.ModifierRemoved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ModifierRemoved_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Modifier_Base_C::ModifierRemoved(bool CallFunc_ModifierRemoved_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Base_C", "ModifierRemoved");

	Params::UBP_Modifier_Base_C_ModifierRemoved_Params Parms{};

	Parms.CallFunc_ModifierRemoved_ReturnValue = CallFunc_ModifierRemoved_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Modifier_Base.BP_Modifier_Base_C.ModifierApplied
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ModifierApplied_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Modifier_Base_C::ModifierApplied(bool CallFunc_ModifierApplied_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Base_C", "ModifierApplied");

	Params::UBP_Modifier_Base_C_ModifierApplied_Params Parms{};

	Parms.CallFunc_ModifierApplied_ReturnValue = CallFunc_ModifierApplied_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Modifier_Base.BP_Modifier_Base_C.ModifierTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Modifier_Base_C::ModifierTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Base_C", "ModifierTick");

	Params::UBP_Modifier_Base_C_ModifierTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Modifier_Base.BP_Modifier_Base_C.ExecuteUbergraph_BP_Modifier_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Modifier_Base_C::ExecuteUbergraph_BP_Modifier_Base(int32 EntryPoint, float K2Node_Event_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Base_C", "ExecuteUbergraph_BP_Modifier_Base");

	Params::UBP_Modifier_Base_C_ExecuteUbergraph_BP_Modifier_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


