#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GG_Sky_Sphere.BP_GG_Sky_Sphere_C
// (Actor)

class UClass* ABP_GG_Sky_Sphere_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GG_Sky_Sphere_C");

	return Clss;
}


// BP_GG_Sky_Sphere_C BP_GG_Sky_Sphere.Default__BP_GG_Sky_Sphere_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GG_Sky_Sphere_C* ABP_GG_Sky_Sphere_C::GetDefaultObj()
{
	static class ABP_GG_Sky_Sphere_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GG_Sky_Sphere_C*>(ABP_GG_Sky_Sphere_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GG_Sky_Sphere.BP_GG_Sky_Sphere_C.TurnOffSun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGGSkyLightSettings         Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_GG_Sky_Sphere_C::TurnOffSun(const struct FGGSkyLightSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GG_Sky_Sphere_C", "TurnOffSun");

	Params::ABP_GG_Sky_Sphere_C_TurnOffSun_Params Parms{};

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GG_Sky_Sphere.BP_GG_Sky_Sphere_C.TurnOnSun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGGSkyLightSettings         Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_GG_Sky_Sphere_C::TurnOnSun(const struct FGGSkyLightSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GG_Sky_Sphere_C", "TurnOnSun");

	Params::ABP_GG_Sky_Sphere_C_TurnOnSun_Params Parms{};

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GG_Sky_Sphere.BP_GG_Sky_Sphere_C.ExecuteUbergraph_BP_GG_Sky_Sphere
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGGSkyLightSettings         K2Node_CustomEvent_Settings_1                                    (NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGGSkyLightSettings         K2Node_CustomEvent_Settings                                      (NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GG_Sky_Sphere_C::ExecuteUbergraph_BP_GG_Sky_Sphere(int32 EntryPoint, const struct FGGSkyLightSettings& K2Node_CustomEvent_Settings_1, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FGGSkyLightSettings& K2Node_CustomEvent_Settings, bool CallFunc_K2_SetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GG_Sky_Sphere_C", "ExecuteUbergraph_BP_GG_Sky_Sphere");

	Params::ABP_GG_Sky_Sphere_C_ExecuteUbergraph_BP_GG_Sky_Sphere_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Settings_1 = K2Node_CustomEvent_Settings_1;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.K2Node_CustomEvent_Settings = K2Node_CustomEvent_Settings;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue_1 = CallFunc_K2_SetActorRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


