#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C
// (Actor)

class UClass* ABP_Deployable_SpawnBlocker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Deployable_SpawnBlocker_C");

	return Clss;
}


// BP_Deployable_SpawnBlocker_C BP_Deployable_SpawnBlocker.Default__BP_Deployable_SpawnBlocker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Deployable_SpawnBlocker_C* ABP_Deployable_SpawnBlocker_C::GetDefaultObj()
{
	static class ABP_Deployable_SpawnBlocker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Deployable_SpawnBlocker_C*>(ABP_Deployable_SpawnBlocker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C.GetSpawnBlockerEffectiveRadius
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_Deployable_SpawnBlocker_C::GetSpawnBlockerEffectiveRadius(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_C", "GetSpawnBlockerEffectiveRadius");

	Params::ABP_Deployable_SpawnBlocker_C_GetSpawnBlockerEffectiveRadius_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C.GetWidgetClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Widget                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deployable_SpawnBlocker_C::GetWidgetClass(class UClass** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_C", "GetWidgetClass");

	Params::ABP_Deployable_SpawnBlocker_C_GetWidgetClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C.OnRep_SpawnBlockerRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Deployable_SpawnBlocker_C::OnRep_SpawnBlockerRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_C", "OnRep_SpawnBlockerRadius");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C.OnRep_SpawnBlockerActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Deployable_SpawnBlocker_C::OnRep_SpawnBlockerActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_C", "OnRep_SpawnBlockerActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C.UpdateSpawnBlockerEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Deployable_SpawnBlocker_C::UpdateSpawnBlockerEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_C", "UpdateSpawnBlockerEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C.UpdateRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SpawnRadius                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deployable_SpawnBlocker_C::UpdateRadius(int32 SpawnRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_C", "UpdateRadius");

	Params::ABP_Deployable_SpawnBlocker_C_UpdateRadius_Params Parms{};

	Parms.SpawnRadius = SpawnRadius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C.DeployableTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deployable_SpawnBlocker_C::DeployableTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_C", "DeployableTick");

	Params::ABP_Deployable_SpawnBlocker_C_DeployableTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Deployable_SpawnBlocker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C.ExecuteUbergraph_BP_Deployable_SpawnBlocker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithEditor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deployable_SpawnBlocker_C::ExecuteUbergraph_BP_Deployable_SpawnBlocker(int32 EntryPoint, bool CallFunc_IsWithEditor_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_C", "ExecuteUbergraph_BP_Deployable_SpawnBlocker");

	Params::ABP_Deployable_SpawnBlocker_C_ExecuteUbergraph_BP_Deployable_SpawnBlocker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsWithEditor_ReturnValue = CallFunc_IsWithEditor_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


