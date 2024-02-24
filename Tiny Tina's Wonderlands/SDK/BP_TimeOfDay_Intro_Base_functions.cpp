#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C
// (Actor)

class UClass* ABP_TimeOfDay_Intro_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TimeOfDay_Intro_Base_C");

	return Clss;
}


// BP_TimeOfDay_Intro_Base_C BP_TimeOfDay_Intro_Base.Default__BP_TimeOfDay_Intro_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TimeOfDay_Intro_Base_C* ABP_TimeOfDay_Intro_Base_C::GetDefaultObj()
{
	static class ABP_TimeOfDay_Intro_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TimeOfDay_Intro_Base_C*>(ABP_TimeOfDay_Intro_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)

void ABP_TimeOfDay_Intro_Base_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "UserConstructionScript");

	Params::ABP_TimeOfDay_Intro_Base_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll1 = CallFunc_BreakRotator_Roll1;
	Parms.CallFunc_BreakRotator_Pitch1 = CallFunc_BreakRotator_Pitch1;
	Parms.CallFunc_BreakRotator_Yaw1 = CallFunc_BreakRotator_Yaw1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.SiegeClearStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_Intro_Base_C::SiegeClearStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "SiegeClearStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.SiegeClearEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_Intro_Base_C::SiegeClearEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "SiegeClearEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.PostSiege
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnLoad                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TimeOfDay_Intro_Base_C::PostSiege(bool OnLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "PostSiege");

	Params::ABP_TimeOfDay_Intro_Base_C_PostSiege_Params Parms{};

	Parms.OnLoad = OnLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.SiegeFormStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_Intro_Base_C::SiegeFormStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "SiegeFormStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.SiegeFormEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_Intro_Base_C::SiegeFormEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "SiegeFormEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.DuringSiege
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnLoad                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TimeOfDay_Intro_Base_C::DuringSiege(bool OnLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "DuringSiege");

	Params::ABP_TimeOfDay_Intro_Base_C_DuringSiege_Params Parms{};

	Parms.OnLoad = OnLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.PreSiege
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnLoad                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TimeOfDay_Intro_Base_C::PreSiege(bool OnLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "PreSiege");

	Params::ABP_TimeOfDay_Intro_Base_C_PreSiege_Params Parms{};

	Parms.OnLoad = OnLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_Intro_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.ButtstallionCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnLoad                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TimeOfDay_Intro_Base_C::ButtstallionCutscene(bool OnLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "ButtstallionCutscene");

	Params::ABP_TimeOfDay_Intro_Base_C_ButtstallionCutscene_Params Parms{};

	Parms.OnLoad = OnLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.AfterButtstallionCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnLoad                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TimeOfDay_Intro_Base_C::AfterButtstallionCutscene(bool OnLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "AfterButtstallionCutscene");

	Params::ABP_TimeOfDay_Intro_Base_C_AfterButtstallionCutscene_Params Parms{};

	Parms.OnLoad = OnLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.ExecuteUbergraph_BP_TimeOfDay_Intro_Base
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_OnLoad4                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_OnLoad3                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_OnLoad2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_OnLoad1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_OnLoad                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TimeOfDay_Intro_Base_C::ExecuteUbergraph_BP_TimeOfDay_Intro_Base(int32 EntryPoint, bool K2Node_CustomEvent_OnLoad4, bool K2Node_CustomEvent_OnLoad3, bool K2Node_CustomEvent_OnLoad2, bool K2Node_CustomEvent_OnLoad1, bool K2Node_CustomEvent_OnLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_Intro_Base_C", "ExecuteUbergraph_BP_TimeOfDay_Intro_Base");

	Params::ABP_TimeOfDay_Intro_Base_C_ExecuteUbergraph_BP_TimeOfDay_Intro_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_OnLoad4 = K2Node_CustomEvent_OnLoad4;
	Parms.K2Node_CustomEvent_OnLoad3 = K2Node_CustomEvent_OnLoad3;
	Parms.K2Node_CustomEvent_OnLoad2 = K2Node_CustomEvent_OnLoad2;
	Parms.K2Node_CustomEvent_OnLoad1 = K2Node_CustomEvent_OnLoad1;
	Parms.K2Node_CustomEvent_OnLoad = K2Node_CustomEvent_OnLoad;

	UObject::ProcessEvent(Func, &Parms);

}

}


