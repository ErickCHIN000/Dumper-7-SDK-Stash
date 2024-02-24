#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_RTPCs.BPFL_RTPCs_C
// (None)

class UClass* UBPFL_RTPCs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_RTPCs_C");

	return Clss;
}


// BPFL_RTPCs_C BPFL_RTPCs.Default__BPFL_RTPCs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_RTPCs_C* UBPFL_RTPCs_C::GetDefaultObj()
{
	static class UBPFL_RTPCs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_RTPCs_C*>(UBPFL_RTPCs_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_RTPCs.BPFL_RTPCs_C.Get Puddle Value
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPhysicalMaterial*           Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Surface_Switch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Puddle_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Puddle                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkSwitchValue*>      Puddle_Switches                                                  (Edit, BlueprintVisible)
// TArray<class UAkSwitchValue*>      K2Node_MakeArray_Array                                           (ReferenceParm)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatParameter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_TryGetPuddleOverride_PuddleOverrideOut                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetPuddleOverride_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Puddle_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Puddle_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_RTPCs_C::Get_Puddle_Value(class UPhysicalMaterial* Material, class UAkSwitchValue* Surface_Switch, class UObject* __WorldContext, double* Puddle_Value, double Puddle, const TArray<class UAkSwitchValue*>& Puddle_Switches, TArray<class UAkSwitchValue*>& K2Node_MakeArray_Array, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, float CallFunc_GetFloatParameter_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_TryGetPuddleOverride_PuddleOverrideOut, bool CallFunc_TryGetPuddleOverride_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double K2Node_VariableSet_Puddle_ImplicitCast, double K2Node_VariableSet_Puddle_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_RTPCs_C", "Get Puddle Value");

	Params::UBPFL_RTPCs_C_Get_Puddle_Value_Params Parms{};

	Parms.Material = Material;
	Parms.Surface_Switch = Surface_Switch;
	Parms.__WorldContext = __WorldContext;
	Parms.Puddle = Puddle;
	Parms.Puddle_Switches = Puddle_Switches;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue = CallFunc_GetNiagaraParameterCollection_ReturnValue;
	Parms.CallFunc_GetFloatParameter_ReturnValue = CallFunc_GetFloatParameter_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_TryGetPuddleOverride_PuddleOverrideOut = CallFunc_TryGetPuddleOverride_PuddleOverrideOut;
	Parms.CallFunc_TryGetPuddleOverride_ReturnValue = CallFunc_TryGetPuddleOverride_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_VariableSet_Puddle_ImplicitCast = K2Node_VariableSet_Puddle_ImplicitCast;
	Parms.K2Node_VariableSet_Puddle_ImplicitCast_1 = K2Node_VariableSet_Puddle_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Puddle_Value != nullptr)
		*Puddle_Value = Parms.Puddle_Value;

}

}


