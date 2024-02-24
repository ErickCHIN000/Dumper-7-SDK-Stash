#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_GNM_Template_HillGiant.ABP_GNM_Template_HillGiant_C
// (None)

class UClass* UABP_GNM_Template_HillGiant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_GNM_Template_HillGiant_C");

	return Clss;
}


// ABP_GNM_Template_HillGiant_C ABP_GNM_Template_HillGiant.Default__ABP_GNM_Template_HillGiant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_GNM_Template_HillGiant_C* UABP_GNM_Template_HillGiant_C::GetDefaultObj()
{
	static class UABP_GNM_Template_HillGiant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_GNM_Template_HillGiant_C*>(UABP_GNM_Template_HillGiant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_GNM_Template_HillGiant.ABP_GNM_Template_HillGiant_C.SetAITarget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AITarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_GNM_Template_HillGiant_C::SetAITarget(class AActor* AITarget, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_GNM_Template_HillGiant_C", "SetAITarget");

	Params::UABP_GNM_Template_HillGiant_C_SetAITarget_Params Parms{};

	Parms.AITarget = AITarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


