#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SandboxProgressMeter.WBP_SandboxProgressMeter_C
// (None)

class UClass* UWBP_SandboxProgressMeter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SandboxProgressMeter_C");

	return Clss;
}


// WBP_SandboxProgressMeter_C WBP_SandboxProgressMeter.Default__WBP_SandboxProgressMeter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SandboxProgressMeter_C* UWBP_SandboxProgressMeter_C::GetDefaultObj()
{
	static class UWBP_SandboxProgressMeter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SandboxProgressMeter_C*>(UWBP_SandboxProgressMeter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SandboxProgressMeter.WBP_SandboxProgressMeter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SandboxProgressMeter_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxProgressMeter_C", "PreConstruct");

	Params::UWBP_SandboxProgressMeter_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxProgressMeter.WBP_SandboxProgressMeter_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandboxProgressMeter_C::SetProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxProgressMeter_C", "SetProgress");

	Params::UWBP_SandboxProgressMeter_C_SetProgress_Params Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxProgressMeter.WBP_SandboxProgressMeter_C.ExecuteUbergraph_WBP_SandboxProgressMeter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_progress                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandboxProgressMeter_C::ExecuteUbergraph_WBP_SandboxProgressMeter(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_CustomEvent_progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxProgressMeter_C", "ExecuteUbergraph_WBP_SandboxProgressMeter");

	Params::UWBP_SandboxProgressMeter_C_ExecuteUbergraph_WBP_SandboxProgressMeter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CustomEvent_progress = K2Node_CustomEvent_progress;

	UObject::ProcessEvent(Func, &Parms);

}

}


