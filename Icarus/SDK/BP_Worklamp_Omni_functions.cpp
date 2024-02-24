#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Worklamp_Omni.BP_Worklamp_Omni_C
// (Actor)

class UClass* ABP_Worklamp_Omni_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Worklamp_Omni_C");

	return Clss;
}


// BP_Worklamp_Omni_C BP_Worklamp_Omni.Default__BP_Worklamp_Omni_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Worklamp_Omni_C* ABP_Worklamp_Omni_C::GetDefaultObj()
{
	static class ABP_Worklamp_Omni_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Worklamp_Omni_C*>(ABP_Worklamp_Omni_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Worklamp_Omni.BP_Worklamp_Omni_C.SetLightActiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Worklamp_Omni_C::SetLightActiveState(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Worklamp_Omni_C", "SetLightActiveState");

	Params::ABP_Worklamp_Omni_C_SetLightActiveState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


