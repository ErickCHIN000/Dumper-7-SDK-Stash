#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RayTracingSettings.RayTracingSettings_C
// (None)

class UClass* URayTracingSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RayTracingSettings_C");

	return Clss;
}


// RayTracingSettings_C RayTracingSettings.Default__RayTracingSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URayTracingSettings_C* URayTracingSettings_C::GetDefaultObj()
{
	static class URayTracingSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URayTracingSettings_C*>(URayTracingSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RayTracingSettings.RayTracingSettings_C.ApplyLevelSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void URayTracingSettings_C::ApplyLevelSettings(const class FString& LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RayTracingSettings_C", "ApplyLevelSettings");

	Params::URayTracingSettings_C_ApplyLevelSettings_Params Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RayTracingSettings.RayTracingSettings_C.ApplyMaterialSettings
// (Event, Public, BlueprintEvent)
// Parameters:

void URayTracingSettings_C::ApplyMaterialSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RayTracingSettings_C", "ApplyMaterialSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RayTracingSettings.RayTracingSettings_C.ExecuteUbergraph_RayTracingSettings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_LevelName                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GameModeUtils_GetArbNameForLevelFromSaveGame_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRayTracingCurrentlyActive_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URayTracingSettings_C::ExecuteUbergraph_RayTracingSettings(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_Event_LevelName, bool CallFunc_GameModeUtils_GetArbNameForLevelFromSaveGame_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsRayTracingCurrentlyActive_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RayTracingSettings_C", "ExecuteUbergraph_RayTracingSettings");

	Params::URayTracingSettings_C_ExecuteUbergraph_RayTracingSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_LevelName = K2Node_Event_LevelName;
	Parms.CallFunc_GameModeUtils_GetArbNameForLevelFromSaveGame_ReturnValue = CallFunc_GameModeUtils_GetArbNameForLevelFromSaveGame_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue_2 = CallFunc_Contains_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsRayTracingCurrentlyActive_ReturnValue = CallFunc_IsRayTracingCurrentlyActive_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


