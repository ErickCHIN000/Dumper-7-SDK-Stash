#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGSkyLightManager.BP_GGSkyLightManager_C
// (Actor)

class UClass* ABP_GGSkyLightManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGSkyLightManager_C");

	return Clss;
}


// BP_GGSkyLightManager_C BP_GGSkyLightManager.Default__BP_GGSkyLightManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GGSkyLightManager_C* ABP_GGSkyLightManager_C::GetDefaultObj()
{
	static class ABP_GGSkyLightManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GGSkyLightManager_C*>(ABP_GGSkyLightManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GGSkyLightManager.BP_GGSkyLightManager_C.OnTurnedOffSun
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGGSkyLightSettings         Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_GGSkyLightManager_C::OnTurnedOffSun(const struct FGGSkyLightSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGSkyLightManager_C", "OnTurnedOffSun");

	Params::ABP_GGSkyLightManager_C_OnTurnedOffSun_Params Parms{};

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGSkyLightManager.BP_GGSkyLightManager_C.OnTurnedOnSun
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGGSkyLightSettings         Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_GGSkyLightManager_C::OnTurnedOnSun(const struct FGGSkyLightSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGSkyLightManager_C", "OnTurnedOnSun");

	Params::ABP_GGSkyLightManager_C_OnTurnedOnSun_Params Parms{};

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGSkyLightManager.BP_GGSkyLightManager_C.ExecuteUbergraph_BP_GGSkyLightManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GG_Sky_Sphere_C*         K2Node_DynamicCast_AsBP_GG_Sky_Sphere                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGGSkyLightSettings         K2Node_Event_Settings_1                                          (NoDestructor)
// class ABP_GG_Sky_Sphere_C*         K2Node_DynamicCast_AsBP_GG_Sky_Sphere_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGGSkyLightSettings         K2Node_Event_Settings                                            (NoDestructor)

void ABP_GGSkyLightManager_C::ExecuteUbergraph_BP_GGSkyLightManager(int32 EntryPoint, class ABP_GG_Sky_Sphere_C* K2Node_DynamicCast_AsBP_GG_Sky_Sphere, bool K2Node_DynamicCast_bSuccess, const struct FGGSkyLightSettings& K2Node_Event_Settings_1, class ABP_GG_Sky_Sphere_C* K2Node_DynamicCast_AsBP_GG_Sky_Sphere_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGGSkyLightSettings& K2Node_Event_Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGSkyLightManager_C", "ExecuteUbergraph_BP_GGSkyLightManager");

	Params::ABP_GGSkyLightManager_C_ExecuteUbergraph_BP_GGSkyLightManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBP_GG_Sky_Sphere = K2Node_DynamicCast_AsBP_GG_Sky_Sphere;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Settings_1 = K2Node_Event_Settings_1;
	Parms.K2Node_DynamicCast_AsBP_GG_Sky_Sphere_1 = K2Node_DynamicCast_AsBP_GG_Sky_Sphere_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_Settings = K2Node_Event_Settings;

	UObject::ProcessEvent(Func, &Parms);

}

}


