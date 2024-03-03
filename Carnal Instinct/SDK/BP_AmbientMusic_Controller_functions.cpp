#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AmbientMusic_Controller.BP_AmbientMusic_Controller_C
// (Actor)

class UClass* ABP_AmbientMusic_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AmbientMusic_Controller_C");

	return Clss;
}


// BP_AmbientMusic_Controller_C BP_AmbientMusic_Controller.Default__BP_AmbientMusic_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AmbientMusic_Controller_C* ABP_AmbientMusic_Controller_C::GetDefaultObj()
{
	static class ABP_AmbientMusic_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AmbientMusic_Controller_C*>(ABP_AmbientMusic_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AmbientMusic_Controller.BP_AmbientMusic_Controller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AmbientMusic_Controller_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientMusic_Controller_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AmbientMusic_Controller.BP_AmbientMusic_Controller_C.CombatMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientMusic_Controller_C::CombatMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientMusic_Controller_C", "CombatMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AmbientMusic_Controller.BP_AmbientMusic_Controller_C.AmbientMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientMusic_Controller_C::AmbientMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientMusic_Controller_C", "AmbientMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AmbientMusic_Controller.BP_AmbientMusic_Controller_C.BossMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientMusic_Controller_C::BossMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientMusic_Controller_C", "BossMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AmbientMusic_Controller.BP_AmbientMusic_Controller_C.TombGuardian
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientMusic_Controller_C::TombGuardian()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientMusic_Controller_C", "TombGuardian");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AmbientMusic_Controller.BP_AmbientMusic_Controller_C.SetAmbientSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AmbientMusic_Controller_C::SetAmbientSound(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientMusic_Controller_C", "SetAmbientSound");

	Params::ABP_AmbientMusic_Controller_C_SetAmbientSound_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientMusic_Controller.BP_AmbientMusic_Controller_C.ExecuteUbergraph_BP_AmbientMusic_Controller
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AmbientMusic_Controller_C::ExecuteUbergraph_BP_AmbientMusic_Controller(int32 EntryPoint, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class USoundBase* K2Node_CustomEvent_Sound, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientMusic_Controller_C", "ExecuteUbergraph_BP_AmbientMusic_Controller");

	Params::ABP_AmbientMusic_Controller_C_ExecuteUbergraph_BP_AmbientMusic_Controller_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


