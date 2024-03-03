#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProgressBar_Functions.BP_ProgressBar_Functions_C
// (None)

class UClass* UBP_ProgressBar_Functions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProgressBar_Functions_C");

	return Clss;
}


// BP_ProgressBar_Functions_C BP_ProgressBar_Functions.Default__BP_ProgressBar_Functions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ProgressBar_Functions_C* UBP_ProgressBar_Functions_C::GetDefaultObj()
{
	static class UBP_ProgressBar_Functions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ProgressBar_Functions_C*>(UBP_ProgressBar_Functions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProgressBar_Functions.BP_ProgressBar_Functions_C.GetProgressBarManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_Base_C*                  ProgressBar                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPi_ProgressBars_C>Manager                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ProgressBar_Functions_C::GetProgressBarManager(class UWB_Base_C* ProgressBar, class UObject* __WorldContext, TScriptInterface<class IBPi_ProgressBars_C>* Manager, bool CallFunc_DoesImplementInterface_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProgressBar_Functions_C", "GetProgressBarManager");

	Params::UBP_ProgressBar_Functions_C_GetProgressBarManager_Params Parms{};

	Parms.ProgressBar = ProgressBar;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Manager != nullptr)
		*Manager = Parms.Manager;

}

}


