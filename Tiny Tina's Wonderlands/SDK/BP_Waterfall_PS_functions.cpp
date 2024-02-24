#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Waterfall_PS.BP_Waterfall_PS_C
// (Actor)

class UClass* ABP_Waterfall_PS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Waterfall_PS_C");

	return Clss;
}


// BP_Waterfall_PS_C BP_Waterfall_PS.Default__BP_Waterfall_PS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Waterfall_PS_C* ABP_Waterfall_PS_C::GetDefaultObj()
{
	static class ABP_Waterfall_PS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Waterfall_PS_C*>(ABP_Waterfall_PS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Waterfall_PS.BP_Waterfall_PS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Waterfall_PS_C::UserConstructionScript(float CallFunc_RandomFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Waterfall_PS_C", "UserConstructionScript");

	Params::ABP_Waterfall_PS_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


