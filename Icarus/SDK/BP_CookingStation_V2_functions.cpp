#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CookingStation_V2.BP_CookingStation_V2_C
// (Actor)

class UClass* ABP_CookingStation_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CookingStation_V2_C");

	return Clss;
}


// BP_CookingStation_V2_C BP_CookingStation_V2.Default__BP_CookingStation_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CookingStation_V2_C* ABP_CookingStation_V2_C::GetDefaultObj()
{
	static class ABP_CookingStation_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CookingStation_V2_C*>(ABP_CookingStation_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CookingStation_V2.BP_CookingStation_V2_C.ProcessorStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeneratorComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActivateGenerator_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CookingStation_V2_C::ProcessorStateUpdate(bool Active, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingStation_V2_C", "ProcessorStateUpdate");

	Params::ABP_CookingStation_V2_C_ProcessorStateUpdate_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_ActivateGenerator_ReturnValue = CallFunc_ActivateGenerator_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CookingStation_V2.BP_CookingStation_V2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CookingStation_V2_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingStation_V2_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


