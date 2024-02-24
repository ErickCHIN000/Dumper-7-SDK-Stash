#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Vehicle_Car.BP_Vehicle_Car_C
// (Actor, Pawn)

class UClass* ABP_Vehicle_Car_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Vehicle_Car_C");

	return Clss;
}


// BP_Vehicle_Car_C BP_Vehicle_Car.Default__BP_Vehicle_Car_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Vehicle_Car_C* ABP_Vehicle_Car_C::GetDefaultObj()
{
	static class ABP_Vehicle_Car_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Vehicle_Car_C*>(ABP_Vehicle_Car_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Vehicle_Car.BP_Vehicle_Car_C.EngineDuckingTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Vehicle_Car_C::EngineDuckingTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Car_C", "EngineDuckingTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vehicle_Car.BP_Vehicle_Car_C.EngineDuckingTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Vehicle_Car_C::EngineDuckingTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Car_C", "EngineDuckingTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vehicle_Car.BP_Vehicle_Car_C.Dissolve Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Vehicle_Car_C::Dissolve_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Car_C", "Dissolve Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vehicle_Car.BP_Vehicle_Car_C.Dissolve Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Vehicle_Car_C::Dissolve_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Car_C", "Dissolve Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vehicle_Car.BP_Vehicle_Car_C.ToggleEngineSoundDucking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Duck                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Vehicle_Car_C::ToggleEngineSoundDucking(bool Duck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Car_C", "ToggleEngineSoundDucking");

	Params::ABP_Vehicle_Car_C_ToggleEngineSoundDucking_Params Parms{};

	Parms.Duck = Duck;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Vehicle_Car.BP_Vehicle_Car_C.SetBackToDefaultMats
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Vehicle_Car_C::SetBackToDefaultMats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Car_C", "SetBackToDefaultMats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vehicle_Car.BP_Vehicle_Car_C.ExecuteUbergraph_BP_Vehicle_Car
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Duck                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Vehicle_Car_C::ExecuteUbergraph_BP_Vehicle_Car(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, bool K2Node_CustomEvent_Duck, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Car_C", "ExecuteUbergraph_BP_Vehicle_Car");

	Params::ABP_Vehicle_Car_C_ExecuteUbergraph_BP_Vehicle_Car_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_CustomEvent_Duck = K2Node_CustomEvent_Duck;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


