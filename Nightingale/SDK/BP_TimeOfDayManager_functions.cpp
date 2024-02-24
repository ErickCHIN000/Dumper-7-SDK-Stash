#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TimeOfDayManager.BP_TimeOfDayManager_C
// (Actor)

class UClass* ABP_TimeOfDayManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TimeOfDayManager_C");

	return Clss;
}


// BP_TimeOfDayManager_C BP_TimeOfDayManager.Default__BP_TimeOfDayManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TimeOfDayManager_C* ABP_TimeOfDayManager_C::GetDefaultObj()
{
	static class ABP_TimeOfDayManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TimeOfDayManager_C*>(ABP_TimeOfDayManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ApplyTimeModifiers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TimeDilationCurve                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ApplyTimeModifiers(int32 TimeDilationCurve, bool CallFunc_ApplyScalarModifier_Modified)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ApplyTimeModifiers");

	Params::ABP_TimeOfDayManager_C_ApplyTimeModifiers_Params Parms{};

	Parms.TimeDilationCurve = TimeDilationCurve;
	Parms.CallFunc_ApplyScalarModifier_Modified = CallFunc_ApplyScalarModifier_Modified;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volume Cloud Humidity 
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Primary_Cloud                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Storm_Cloud                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_TimeOfDayManager_C::Volume_Cloud_Humidity_(double Primary_Cloud, double Storm_Cloud, double CallFunc_FClamp_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volume Cloud Humidity ");

	Params::ABP_TimeOfDayManager_C_Volume_Cloud_Humidity__Params Parms{};

	Parms.Primary_Cloud = Primary_Cloud;
	Parms.Storm_Cloud = Storm_Cloud;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RestoreEnvironmentSnapshot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnvironmentSnapshot        Snapshot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_TimeOfDayManager_C::RestoreEnvironmentSnapshot(struct FEnvironmentSnapshot& Snapshot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RestoreEnvironmentSnapshot");

	Params::ABP_TimeOfDayManager_C_RestoreEnvironmentSnapshot_Params Parms{};

	Parms.Snapshot = Snapshot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Set or Restore Environment Snapshot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEnvironmentSnapshot>CallFunc_GetEnvironmentStack_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Set_or_Restore_Environment_Snapshot(class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FEnvironmentSnapshot>& CallFunc_GetEnvironmentStack_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Set or Restore Environment Snapshot");

	Params::ABP_TimeOfDayManager_C_Set_or_Restore_Environment_Snapshot_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEnvironmentStack_ReturnValue = CallFunc_GetEnvironmentStack_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PushEnvironmentSnapshot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FEnvironmentSnapshot        K2Node_MakeStruct_EnvironmentSnapshot                            (NoDestructor)

void ABP_TimeOfDayManager_C::PushEnvironmentSnapshot(class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FEnvironmentSnapshot& K2Node_MakeStruct_EnvironmentSnapshot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PushEnvironmentSnapshot");

	Params::ABP_TimeOfDayManager_C_PushEnvironmentSnapshot_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_MakeStruct_EnvironmentSnapshot = K2Node_MakeStruct_EnvironmentSnapshot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ApplyScalarModifier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Parameter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Modified                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ApplyScalarModifier(int32 NewValue, int32& Parameter, bool* Modified, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ApplyScalarModifier");

	Params::ABP_TimeOfDayManager_C_ApplyScalarModifier_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Parameter = Parameter;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Modified != nullptr)
		*Modified = Parms.Modified;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ApplySeasonModifiers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Season                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ApplySeasonModifiers(int32 Season, bool CallFunc_ApplyScalarModifier_Modified)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ApplySeasonModifiers");

	Params::ABP_TimeOfDayManager_C_ApplySeasonModifiers_Params Parms{};

	Parms.Season = Season;
	Parms.CallFunc_ApplyScalarModifier_Modified = CallFunc_ApplyScalarModifier_Modified;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ApplyWeatherModifiers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rain                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ApplyWeatherModifiers(int32 Rain, bool CallFunc_ApplyScalarModifier_Modified)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ApplyWeatherModifiers");

	Params::ABP_TimeOfDayManager_C_ApplyWeatherModifiers_Params Parms{};

	Parms.Rain = Rain;
	Parms.CallFunc_ApplyScalarModifier_Modified = CallFunc_ApplyScalarModifier_Modified;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ApplyCloudModifiers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cloud                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ApplyCloudModifiers(int32 Cloud, int32 Color, bool CallFunc_ApplyScalarModifier_Modified, bool CallFunc_ApplyScalarModifier_Modified_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ApplyCloudModifiers");

	Params::ABP_TimeOfDayManager_C_ApplyCloudModifiers_Params Parms{};

	Parms.Cloud = Cloud;
	Parms.Color = Color;
	Parms.CallFunc_ApplyScalarModifier_Modified = CallFunc_ApplyScalarModifier_Modified;
	Parms.CallFunc_ApplyScalarModifier_Modified_1 = CallFunc_ApplyScalarModifier_Modified_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Apply Celestial Modifiers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Aurora                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCelestialMultiMoonData*     MultiMoon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCelestialRingsData*         Rings                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCelestialFaeSkyData*        FaeSky                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Apply_Celestial_Modifiers(int32 Type, int32 Aurora, class UCelestialMultiMoonData* MultiMoon, class UCelestialRingsData* Rings, class UCelestialFaeSkyData* FaeSky, bool CallFunc_ApplyScalarModifier_Modified, bool CallFunc_ApplyScalarModifier_Modified_1, bool CallFunc_ApplyScalarModifier_Modified_2, bool CallFunc_ApplyScalarModifier_Modified_3, bool CallFunc_ApplyScalarModifier_Modified_4, bool CallFunc_ApplyScalarModifier_Modified_5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_ApplyScalarModifier_Modified_6, bool CallFunc_ApplyScalarModifier_Modified_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Apply Celestial Modifiers");

	Params::ABP_TimeOfDayManager_C_Apply_Celestial_Modifiers_Params Parms{};

	Parms.Type = Type;
	Parms.Aurora = Aurora;
	Parms.MultiMoon = MultiMoon;
	Parms.Rings = Rings;
	Parms.FaeSky = FaeSky;
	Parms.CallFunc_ApplyScalarModifier_Modified = CallFunc_ApplyScalarModifier_Modified;
	Parms.CallFunc_ApplyScalarModifier_Modified_1 = CallFunc_ApplyScalarModifier_Modified_1;
	Parms.CallFunc_ApplyScalarModifier_Modified_2 = CallFunc_ApplyScalarModifier_Modified_2;
	Parms.CallFunc_ApplyScalarModifier_Modified_3 = CallFunc_ApplyScalarModifier_Modified_3;
	Parms.CallFunc_ApplyScalarModifier_Modified_4 = CallFunc_ApplyScalarModifier_Modified_4;
	Parms.CallFunc_ApplyScalarModifier_Modified_5 = CallFunc_ApplyScalarModifier_Modified_5;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_ApplyScalarModifier_Modified_6 = CallFunc_ApplyScalarModifier_Modified_6;
	Parms.CallFunc_ApplyScalarModifier_Modified_7 = CallFunc_ApplyScalarModifier_Modified_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ApplyBiomeModifiers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBiomeColorData*             BiomeColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ApplyBiomeModifiers(class UBiomeColorData* BiomeColor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ApplyScalarModifier_Modified, bool CallFunc_ApplyScalarModifier_Modified_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ApplyBiomeModifiers");

	Params::ABP_TimeOfDayManager_C_ApplyBiomeModifiers_Params Parms{};

	Parms.BiomeColor = BiomeColor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ApplyScalarModifier_Modified = CallFunc_ApplyScalarModifier_Modified;
	Parms.CallFunc_ApplyScalarModifier_Modified_1 = CallFunc_ApplyScalarModifier_Modified_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ApplyAtmosphereModifiers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAtmosphereColorTempData*    ColorTemperature                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAtmosphereIntensityData*    Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyScalarModifier_Modified_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ApplyAtmosphereModifiers(class UAtmosphereColorTempData* ColorTemperature, class UAtmosphereIntensityData* Intensity, bool CallFunc_ApplyScalarModifier_Modified, bool CallFunc_ApplyScalarModifier_Modified_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ApplyScalarModifier_Modified_2, bool CallFunc_ApplyScalarModifier_Modified_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ApplyScalarModifier_Modified_4, bool CallFunc_ApplyScalarModifier_Modified_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ApplyAtmosphereModifiers");

	Params::ABP_TimeOfDayManager_C_ApplyAtmosphereModifiers_Params Parms{};

	Parms.ColorTemperature = ColorTemperature;
	Parms.Intensity = Intensity;
	Parms.CallFunc_ApplyScalarModifier_Modified = CallFunc_ApplyScalarModifier_Modified;
	Parms.CallFunc_ApplyScalarModifier_Modified_1 = CallFunc_ApplyScalarModifier_Modified_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ApplyScalarModifier_Modified_2 = CallFunc_ApplyScalarModifier_Modified_2;
	Parms.CallFunc_ApplyScalarModifier_Modified_3 = CallFunc_ApplyScalarModifier_Modified_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ApplyScalarModifier_Modified_4 = CallFunc_ApplyScalarModifier_Modified_4;
	Parms.CallFunc_ApplyScalarModifier_Modified_5 = CallFunc_ApplyScalarModifier_Modified_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.OnGameRuleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameRule*                   GameRule                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameRuleEvent          GameRuleEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameRule_ApplyEnvironmentEffect*K2Node_DynamicCast_AsGame_Rule_Apply_Environment_Effect          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::OnGameRuleEvent(class UGameRule* GameRule, enum class EGameRuleEvent GameRuleEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGameRule_ApplyEnvironmentEffect* K2Node_DynamicCast_AsGame_Rule_Apply_Environment_Effect, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "OnGameRuleEvent");

	Params::ABP_TimeOfDayManager_C_OnGameRuleEvent_Params Parms{};

	Parms.GameRule = GameRule;
	Parms.GameRuleEvent = GameRuleEvent;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Rule_Apply_Environment_Effect = K2Node_DynamicCast_AsGame_Rule_Apply_Environment_Effect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.GetNormalizedVisualTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             VisualTime                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::GetNormalizedVisualTime(double* VisualTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "GetNormalizedVisualTime");

	Params::ABP_TimeOfDayManager_C_GetNormalizedVisualTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (VisualTime != nullptr)
		*VisualTime = Parms.VisualTime;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Lumen_Scalabilty_Function
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Lumen_Scalabilty_Function(bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Lumen_Scalabilty_Function");

	Params::ABP_TimeOfDayManager_C_Lumen_Scalabilty_Function_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.UpdateStaticVolumetricValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeAsHours                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Volumetric_Clouds        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Aurora                   CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::UpdateStaticVolumetricValues(double TimeAsHours, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FS_Volumetric_Clouds& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FS_Aurora& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class FName CallFunc_Array_Get_Item_3, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "UpdateStaticVolumetricValues");

	Params::ABP_TimeOfDayManager_C_UpdateStaticVolumetricValues_Params Parms{};

	Parms.TimeAsHours = TimeAsHours;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RegisterToSubsystem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RegisterToSubsystem(class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RegisterToSubsystem");

	Params::ABP_TimeOfDayManager_C_RegisterToSubsystem_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.UpdateLightingOnServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InAdjustedTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::UpdateLightingOnServer(double InAdjustedTime, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "UpdateLightingOnServer");

	Params::ABP_TimeOfDayManager_C_UpdateLightingOnServer_Params Parms{};

	Parms.InAdjustedTime = InAdjustedTime;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Cave_Transition_Function
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Cave_Transition_Function(bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Cave_Transition_Function");

	Params::ABP_TimeOfDayManager_C_Cave_Transition_Function_Params Parms{};

	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Update_Cave_Transition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Realm_Minus_Fog_Minus_Cave_Override                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Update_Cave_Transition(int32 Realm_Minus_Fog_Minus_Cave_Override, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Update_Cave_Transition");

	Params::ABP_TimeOfDayManager_C_Update_Cave_Transition_Params Parms{};

	Parms.Realm_Minus_Fog_Minus_Cave_Override = Realm_Minus_Fog_Minus_Cave_Override;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.CacheGlobalIllumination
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGlobalIlluminationQuality_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::CacheGlobalIllumination(class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, int32 CallFunc_GetGlobalIlluminationQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "CacheGlobalIllumination");

	Params::ABP_TimeOfDayManager_C_CacheGlobalIllumination_Params Parms{};

	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGlobalIlluminationQuality_ReturnValue = CallFunc_GetGlobalIlluminationQuality_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.InvalidateCachedSystems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::InvalidateCachedSystems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "InvalidateCachedSystems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.UpdateSteppingInterval
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ClientUpdateSteppingInterval                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::UpdateSteppingInterval(double ClientUpdateSteppingInterval, double K2Node_MathExpression_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "UpdateSteppingInterval");

	Params::ABP_TimeOfDayManager_C_UpdateSteppingInterval_Params Parms{};

	Parms.ClientUpdateSteppingInterval = ClientUpdateSteppingInterval;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickExposureDay_0
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Exposure                 CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Exposure                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickExposureDay_0(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Exposure& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Exposure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickExposureDay_0");

	Params::ABP_TimeOfDayManager_C_PickExposureDay_0_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.SpeedTree Wind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::SpeedTree_Wind(double CallFunc_FClamp_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "SpeedTree Wind");

	Params::ABP_TimeOfDayManager_C_SpeedTree_Wind_Params Parms{};

	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Shadow Tracing Distance Function
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Shadow_Tracing_Distance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_TimeOfDayManager_C::Shadow_Tracing_Distance_Function(double Shadow_Tracing_Distance, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Shadow Tracing Distance Function");

	Params::ABP_TimeOfDayManager_C_Shadow_Tracing_Distance_Function_Params Parms{};

	Parms.Shadow_Tracing_Distance = Shadow_Tracing_Distance;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.DEP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Overall_Intensity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::DEP(double Overall_Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "DEP");

	Params::ABP_TimeOfDayManager_C_DEP_Params Parms{};

	Parms.Overall_Intensity = Overall_Intensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Overall Intensity Function
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_TimeOfDayManager_C::Overall_Intensity_Function(double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Overall Intensity Function");

	Params::ABP_TimeOfDayManager_C_Overall_Intensity_Function_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Cloud Coverage Function
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPickA                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_TimeOfDayManager_C::Cloud_Coverage_Function(double Min, double Max, bool bPickA, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Cloud Coverage Function");

	Params::ABP_TimeOfDayManager_C_Cloud_Coverage_Function_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.bPickA = bPickA;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Voumetric Cloud Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_Volumetric_Clouds_Parent_Materials_Material_Instance    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Voumetric_Cloud_Setup(class UMaterialInterface* CallFunc_Volumetric_Clouds_Parent_Materials_Material_Instance, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Voumetric Cloud Setup");

	Params::ABP_TimeOfDayManager_C_Voumetric_Cloud_Setup_Params Parms{};

	Parms.CallFunc_Volumetric_Clouds_Parent_Materials_Material_Instance = CallFunc_Volumetric_Clouds_Parent_Materials_Material_Instance;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Cloud Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CloudSaturation                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Overall_Intensity_Function_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Shadow_Tracing_Distance_Function_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_5                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_6                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_7                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_8                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_9                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_10                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_11                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_12                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_13                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_14                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_15                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_16                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volume_Cloud_Humidity__ReturnValue_17                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Cloud_Coverage_Function_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Overall_Intensity_Function_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Shadow_Tracing_Distance_Function_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Volumetric_Clouds_Parent_Materials_Material_Instance    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Clouds_Time_of_Day_Factor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cloud_Texture_Velocity_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cloud_Texture_Velocity_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Volumetric_Clouds_SubNoise_Scales_High                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Volumetric_Clouds_SubNoise_Scales_Low                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Volumetric_Clouds_SubNoise_Scales_Medium                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Scale_Sample_Count_out                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVolumeTexture*              K2Node_DynamicCast_AsVolume_Texture                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVolumeTexture*              K2Node_DynamicCast_AsVolume_Texture_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVolumeTexture*              K2Node_DynamicCast_AsVolume_Texture_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Scale_Sample_Count_out_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Applied_Cloud_Top_and_Bottom_Bottom             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Applied_Cloud_Top_and_Bottom_Top                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Volumetric_Clouds_Base_Clouds_Texture_Tex               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Base_Clouds_Scale_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Scale_Sample_Count_out_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volumetric_Cloud_Layer_Scale_Layer_Scale                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Volumetric_Cloud_Macro_Variation_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volumetric_Cloud_Floor_Variation_Height                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volumetric_Cloud_Floor_Variation_Color                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Volumetric_Cloud_Subnoise_Amount_Erosion        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Volumetric_Cloud_Taper_Position_Taper           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Current_Volumetric_Cloud_Extinction_Scales_Top      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Current_Volumetric_Cloud_Extinction_Scales_Bottom   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volumetric_Cloud_Shadows_Altitude_Cloud_Shadows_Altitude(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volumetric_Cloud_Top_Altitude_Cloud_Top_Altitude        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volumetric_Cloud_Base_Cloud_Height_Base_Cloud_Height    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_View_Sample_Scale_out                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Volumetric_Cloud_Shadow_Tracing_Distance_Out    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Max_Trace_Distance_Out                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Z_Disturbance_Out                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volumetric_Clouds_Top_Bottom_Distribution_Out           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Volumetric_Clouds_Density_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volumetric_Cloud_Layer_Height_Layer_Height              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_LinearColorFloat_B_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_8            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_9            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_10           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_11           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_12           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetShadowReflectionViewSampleCountScale_NewValue_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetReflectionViewSampleCountScale_NewValue_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_13           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_14           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_15           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_16           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_17           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_18           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetTracingStartMaxDistance_NewValue_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetShadowViewSampleCountScale_NewValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLayerBottomAltitude_NewValue_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_19           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_20           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_21           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_22           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_23           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_24           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_25           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_26           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_27           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_28           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_29           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_30           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetViewSampleCountScale_NewValue_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_31           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetShadowTracingDistance_NewValue_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetTracingMaxDistance_NewValue_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_32           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_33           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_34           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_35           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_36           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLayerHeight_NewValue_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_37           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_38           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Cloud_Update(const struct FLinearColor& CloudSaturation, double CallFunc_Overall_Intensity_Function_ReturnValue, double CallFunc_Volume_Cloud_Humidity__ReturnValue, double CallFunc_Shadow_Tracing_Distance_Function_ReturnValue, double CallFunc_Volume_Cloud_Humidity__ReturnValue_1, double CallFunc_Volume_Cloud_Humidity__ReturnValue_2, double CallFunc_Volume_Cloud_Humidity__ReturnValue_3, double CallFunc_Volume_Cloud_Humidity__ReturnValue_4, double CallFunc_Volume_Cloud_Humidity__ReturnValue_5, double CallFunc_Volume_Cloud_Humidity__ReturnValue_6, double CallFunc_Volume_Cloud_Humidity__ReturnValue_7, double CallFunc_Volume_Cloud_Humidity__ReturnValue_8, double CallFunc_Volume_Cloud_Humidity__ReturnValue_9, double CallFunc_Volume_Cloud_Humidity__ReturnValue_10, double CallFunc_Volume_Cloud_Humidity__ReturnValue_11, double CallFunc_Volume_Cloud_Humidity__ReturnValue_12, double CallFunc_Volume_Cloud_Humidity__ReturnValue_13, double CallFunc_Volume_Cloud_Humidity__ReturnValue_14, double CallFunc_Volume_Cloud_Humidity__ReturnValue_15, double CallFunc_Volume_Cloud_Humidity__ReturnValue_16, double CallFunc_Volume_Cloud_Humidity__ReturnValue_17, double CallFunc_Cloud_Coverage_Function_ReturnValue, double CallFunc_Overall_Intensity_Function_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, double CallFunc_Shadow_Tracing_Distance_Function_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, double CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_Volumetric_Clouds_Parent_Materials_Material_Instance, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, double CallFunc_FClamp_ReturnValue_1, const struct FLinearColor& CallFunc_Array_Get_Item_2, bool K2Node_SwitchInteger_CmpSuccess_2, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Clouds_Time_of_Day_Factor_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FVector& CallFunc_Cloud_Texture_Velocity_ReturnValue, const struct FVector& CallFunc_Cloud_Texture_Velocity_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FLinearColor& CallFunc_Volumetric_Clouds_SubNoise_Scales_High, const struct FLinearColor& CallFunc_Volumetric_Clouds_SubNoise_Scales_Low, const struct FLinearColor& CallFunc_Volumetric_Clouds_SubNoise_Scales_Medium, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Scale_Sample_Count_out, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UVolumeTexture* K2Node_DynamicCast_AsVolume_Texture, bool K2Node_DynamicCast_bSuccess, class UVolumeTexture* K2Node_DynamicCast_AsVolume_Texture_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, class UVolumeTexture* K2Node_DynamicCast_AsVolume_Texture_2, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_Scale_Sample_Count_out_1, double CallFunc_Current_Applied_Cloud_Top_and_Bottom_Bottom, double CallFunc_Current_Applied_Cloud_Top_and_Bottom_Top, class UTexture2D* CallFunc_Volumetric_Clouds_Base_Clouds_Texture_Tex, double CallFunc_Current_Base_Clouds_Scale_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_FClamp_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Scale_Sample_Count_out_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, double CallFunc_Volumetric_Cloud_Layer_Scale_Layer_Scale, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, double CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha, double CallFunc_Current_Volumetric_Cloud_Macro_Variation_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Volumetric_Cloud_Floor_Variation_Height, double CallFunc_Volumetric_Cloud_Floor_Variation_Color, double CallFunc_Current_Volumetric_Cloud_Subnoise_Amount_Erosion, double CallFunc_Current_Volumetric_Cloud_Taper_Position_Taper, double CallFunc_Get_Current_Volumetric_Cloud_Extinction_Scales_Top, double CallFunc_Get_Current_Volumetric_Cloud_Extinction_Scales_Bottom, double CallFunc_Volumetric_Cloud_Shadows_Altitude_Cloud_Shadows_Altitude, double CallFunc_Volumetric_Cloud_Top_Altitude_Cloud_Top_Altitude, double CallFunc_Volumetric_Cloud_Base_Cloud_Height_Base_Cloud_Height, double CallFunc_Current_View_Sample_Scale_out, double CallFunc_Current_Volumetric_Cloud_Shadow_Tracing_Distance_Out, double CallFunc_Current_Max_Trace_Distance_Out, double CallFunc_Current_Z_Disturbance_Out, double CallFunc_Volumetric_Clouds_Top_Bottom_Distribution_Out, double CallFunc_Current_Volumetric_Clouds_Density_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, double CallFunc_Volumetric_Cloud_Layer_Height_Layer_Height, double CallFunc_Multiply_DoubleDouble_ReturnValue_13, double CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1, float CallFunc_Multiply_LinearColorFloat_B_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_8, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_9, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_10, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_11, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_12, float CallFunc_SetShadowReflectionViewSampleCountScale_NewValue_ImplicitCast, float CallFunc_SetReflectionViewSampleCountScale_NewValue_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_13, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_14, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_15, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_16, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_17, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_18, float CallFunc_SetTracingStartMaxDistance_NewValue_ImplicitCast, float CallFunc_SetShadowViewSampleCountScale_NewValue_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_SetLayerBottomAltitude_NewValue_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_19, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_20, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_21, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_22, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_23, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_24, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_25, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_26, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_27, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_28, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_29, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_30, float CallFunc_SetViewSampleCountScale_NewValue_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_31, float CallFunc_SetShadowTracingDistance_NewValue_ImplicitCast, float CallFunc_SetTracingMaxDistance_NewValue_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_32, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_33, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_34, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_35, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_36, float CallFunc_SetLayerHeight_NewValue_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_37, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_38)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Cloud Update");

	Params::ABP_TimeOfDayManager_C_Volumetric_Cloud_Update_Params Parms{};

	Parms.CloudSaturation = CloudSaturation;
	Parms.CallFunc_Overall_Intensity_Function_ReturnValue = CallFunc_Overall_Intensity_Function_ReturnValue;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue = CallFunc_Volume_Cloud_Humidity__ReturnValue;
	Parms.CallFunc_Shadow_Tracing_Distance_Function_ReturnValue = CallFunc_Shadow_Tracing_Distance_Function_ReturnValue;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_1 = CallFunc_Volume_Cloud_Humidity__ReturnValue_1;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_2 = CallFunc_Volume_Cloud_Humidity__ReturnValue_2;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_3 = CallFunc_Volume_Cloud_Humidity__ReturnValue_3;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_4 = CallFunc_Volume_Cloud_Humidity__ReturnValue_4;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_5 = CallFunc_Volume_Cloud_Humidity__ReturnValue_5;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_6 = CallFunc_Volume_Cloud_Humidity__ReturnValue_6;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_7 = CallFunc_Volume_Cloud_Humidity__ReturnValue_7;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_8 = CallFunc_Volume_Cloud_Humidity__ReturnValue_8;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_9 = CallFunc_Volume_Cloud_Humidity__ReturnValue_9;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_10 = CallFunc_Volume_Cloud_Humidity__ReturnValue_10;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_11 = CallFunc_Volume_Cloud_Humidity__ReturnValue_11;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_12 = CallFunc_Volume_Cloud_Humidity__ReturnValue_12;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_13 = CallFunc_Volume_Cloud_Humidity__ReturnValue_13;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_14 = CallFunc_Volume_Cloud_Humidity__ReturnValue_14;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_15 = CallFunc_Volume_Cloud_Humidity__ReturnValue_15;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_16 = CallFunc_Volume_Cloud_Humidity__ReturnValue_16;
	Parms.CallFunc_Volume_Cloud_Humidity__ReturnValue_17 = CallFunc_Volume_Cloud_Humidity__ReturnValue_17;
	Parms.CallFunc_Cloud_Coverage_Function_ReturnValue = CallFunc_Cloud_Coverage_Function_ReturnValue;
	Parms.CallFunc_Overall_Intensity_Function_ReturnValue_1 = CallFunc_Overall_Intensity_Function_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Shadow_Tracing_Distance_Function_ReturnValue_1 = CallFunc_Shadow_Tracing_Distance_Function_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Volumetric_Clouds_Parent_Materials_Material_Instance = CallFunc_Volumetric_Clouds_Parent_Materials_Material_Instance;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Clouds_Time_of_Day_Factor_ReturnValue = CallFunc_Clouds_Time_of_Day_Factor_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Cloud_Texture_Velocity_ReturnValue = CallFunc_Cloud_Texture_Velocity_ReturnValue;
	Parms.CallFunc_Cloud_Texture_Velocity_ReturnValue_1 = CallFunc_Cloud_Texture_Velocity_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Volumetric_Clouds_SubNoise_Scales_High = CallFunc_Volumetric_Clouds_SubNoise_Scales_High;
	Parms.CallFunc_Volumetric_Clouds_SubNoise_Scales_Low = CallFunc_Volumetric_Clouds_SubNoise_Scales_Low;
	Parms.CallFunc_Volumetric_Clouds_SubNoise_Scales_Medium = CallFunc_Volumetric_Clouds_SubNoise_Scales_Medium;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Scale_Sample_Count_out = CallFunc_Scale_Sample_Count_out;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVolume_Texture = K2Node_DynamicCast_AsVolume_Texture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsVolume_Texture_1 = K2Node_DynamicCast_AsVolume_Texture_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsVolume_Texture_2 = K2Node_DynamicCast_AsVolume_Texture_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Scale_Sample_Count_out_1 = CallFunc_Scale_Sample_Count_out_1;
	Parms.CallFunc_Current_Applied_Cloud_Top_and_Bottom_Bottom = CallFunc_Current_Applied_Cloud_Top_and_Bottom_Bottom;
	Parms.CallFunc_Current_Applied_Cloud_Top_and_Bottom_Top = CallFunc_Current_Applied_Cloud_Top_and_Bottom_Top;
	Parms.CallFunc_Volumetric_Clouds_Base_Clouds_Texture_Tex = CallFunc_Volumetric_Clouds_Base_Clouds_Texture_Tex;
	Parms.CallFunc_Current_Base_Clouds_Scale_ReturnValue = CallFunc_Current_Base_Clouds_Scale_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Scale_Sample_Count_out_2 = CallFunc_Scale_Sample_Count_out_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;
	Parms.CallFunc_Volumetric_Cloud_Layer_Scale_Layer_Scale = CallFunc_Volumetric_Cloud_Layer_Scale_Layer_Scale;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_11 = CallFunc_Multiply_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha = CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha;
	Parms.CallFunc_Current_Volumetric_Cloud_Macro_Variation_ReturnValue = CallFunc_Current_Volumetric_Cloud_Macro_Variation_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Volumetric_Cloud_Floor_Variation_Height = CallFunc_Volumetric_Cloud_Floor_Variation_Height;
	Parms.CallFunc_Volumetric_Cloud_Floor_Variation_Color = CallFunc_Volumetric_Cloud_Floor_Variation_Color;
	Parms.CallFunc_Current_Volumetric_Cloud_Subnoise_Amount_Erosion = CallFunc_Current_Volumetric_Cloud_Subnoise_Amount_Erosion;
	Parms.CallFunc_Current_Volumetric_Cloud_Taper_Position_Taper = CallFunc_Current_Volumetric_Cloud_Taper_Position_Taper;
	Parms.CallFunc_Get_Current_Volumetric_Cloud_Extinction_Scales_Top = CallFunc_Get_Current_Volumetric_Cloud_Extinction_Scales_Top;
	Parms.CallFunc_Get_Current_Volumetric_Cloud_Extinction_Scales_Bottom = CallFunc_Get_Current_Volumetric_Cloud_Extinction_Scales_Bottom;
	Parms.CallFunc_Volumetric_Cloud_Shadows_Altitude_Cloud_Shadows_Altitude = CallFunc_Volumetric_Cloud_Shadows_Altitude_Cloud_Shadows_Altitude;
	Parms.CallFunc_Volumetric_Cloud_Top_Altitude_Cloud_Top_Altitude = CallFunc_Volumetric_Cloud_Top_Altitude_Cloud_Top_Altitude;
	Parms.CallFunc_Volumetric_Cloud_Base_Cloud_Height_Base_Cloud_Height = CallFunc_Volumetric_Cloud_Base_Cloud_Height_Base_Cloud_Height;
	Parms.CallFunc_Current_View_Sample_Scale_out = CallFunc_Current_View_Sample_Scale_out;
	Parms.CallFunc_Current_Volumetric_Cloud_Shadow_Tracing_Distance_Out = CallFunc_Current_Volumetric_Cloud_Shadow_Tracing_Distance_Out;
	Parms.CallFunc_Current_Max_Trace_Distance_Out = CallFunc_Current_Max_Trace_Distance_Out;
	Parms.CallFunc_Current_Z_Disturbance_Out = CallFunc_Current_Z_Disturbance_Out;
	Parms.CallFunc_Volumetric_Clouds_Top_Bottom_Distribution_Out = CallFunc_Volumetric_Clouds_Top_Bottom_Distribution_Out;
	Parms.CallFunc_Current_Volumetric_Clouds_Density_ReturnValue = CallFunc_Current_Volumetric_Clouds_Density_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_12 = CallFunc_Multiply_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_Volumetric_Cloud_Layer_Height_Layer_Height = CallFunc_Volumetric_Cloud_Layer_Height_Layer_Height;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_13 = CallFunc_Multiply_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast_1 = CallFunc_FTrunc_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_LinearColorFloat_B_ImplicitCast = CallFunc_Multiply_LinearColorFloat_B_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_4 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_5 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_6 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_7 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_8 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_9 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_9;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_10 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_10;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_11 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_11;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_12 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_12;
	Parms.CallFunc_SetShadowReflectionViewSampleCountScale_NewValue_ImplicitCast = CallFunc_SetShadowReflectionViewSampleCountScale_NewValue_ImplicitCast;
	Parms.CallFunc_SetReflectionViewSampleCountScale_NewValue_ImplicitCast = CallFunc_SetReflectionViewSampleCountScale_NewValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_13 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_13;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_14 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_14;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_15 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_15;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_16 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_16;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_17 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_17;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_18 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_18;
	Parms.CallFunc_SetTracingStartMaxDistance_NewValue_ImplicitCast = CallFunc_SetTracingStartMaxDistance_NewValue_ImplicitCast;
	Parms.CallFunc_SetShadowViewSampleCountScale_NewValue_ImplicitCast = CallFunc_SetShadowViewSampleCountScale_NewValue_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_SetLayerBottomAltitude_NewValue_ImplicitCast = CallFunc_SetLayerBottomAltitude_NewValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_19 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_19;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_20 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_20;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_21 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_21;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_22 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_22;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_23 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_23;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_24 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_24;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_25 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_25;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_26 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_26;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_27 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_27;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_28 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_28;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_29 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_29;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_30 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_30;
	Parms.CallFunc_SetViewSampleCountScale_NewValue_ImplicitCast = CallFunc_SetViewSampleCountScale_NewValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_31 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_31;
	Parms.CallFunc_SetShadowTracingDistance_NewValue_ImplicitCast = CallFunc_SetShadowTracingDistance_NewValue_ImplicitCast;
	Parms.CallFunc_SetTracingMaxDistance_NewValue_ImplicitCast = CallFunc_SetTracingMaxDistance_NewValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_32 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_32;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_33 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_33;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_34 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_34;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_35 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_35;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_36 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_36;
	Parms.CallFunc_SetLayerHeight_NewValue_ImplicitCast = CallFunc_SetLayerHeight_NewValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_37 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_37;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_38 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_38;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.OnRep_Humidity Dynamic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::OnRep_Humidity_Dynamic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "OnRep_Humidity Dynamic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Cloud Control
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetNormalizedVisualTime_VisualTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Aurora                   CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Volumetric_Clouds        CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Cloud_Control(double CallFunc_GetNormalizedVisualTime_VisualTime, double CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue, double CallFunc_FClamp_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, float CallFunc_GetFloatValue_ReturnValue, const struct FS_Aurora& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_SelectFloat_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, const struct FS_Volumetric_Clouds& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, float CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Cloud Control");

	Params::ABP_TimeOfDayManager_C_Volumetric_Cloud_Control_Params Parms{};

	Parms.CallFunc_GetNormalizedVisualTime_VisualTime = CallFunc_GetNormalizedVisualTime_VisualTime;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue = CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast = CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.All Volumetric Cloud MIDs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Shadows                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>MIDs                                                             (Parm, OutParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::All_Volumetric_Cloud_MIDs(bool Shadows, TArray<class UMaterialInstanceDynamic*>* MIDs, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "All Volumetric Cloud MIDs");

	Params::ABP_TimeOfDayManager_C_All_Volumetric_Cloud_MIDs_Params Parms{};

	Parms.Shadows = Shadows;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MIDs != nullptr)
		*MIDs = std::move(Parms.MIDs);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Starting Cloud Formation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Cloud_Texture_Velocity_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Starting_Cloud_Formation(const struct FVector& CallFunc_Cloud_Texture_Velocity_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Starting Cloud Formation");

	Params::ABP_TimeOfDayManager_C_Starting_Cloud_Formation_Params Parms{};

	Parms.CallFunc_Cloud_Texture_Velocity_ReturnValue = CallFunc_Cloud_Texture_Velocity_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Get Cached Vector
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECachedProperties       Property                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Get_Cached_Vector(enum class ECachedProperties Property, struct FVector* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Get Cached Vector");

	Params::ABP_TimeOfDayManager_C_Get_Cached_Vector_Params Parms{};

	Parms.Property = Property;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Both Cloud Shadows MIDs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>Out                                                              (Parm, OutParm)

void ABP_TimeOfDayManager_C::Both_Cloud_Shadows_MIDs(TArray<class UMaterialInstanceDynamic*>* Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Both Cloud Shadows MIDs");

	Params::ABP_TimeOfDayManager_C_Both_Cloud_Shadows_MIDs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Clouds Time of Day Factor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_TimeOfDayManager_C::Clouds_Time_of_Day_Factor(double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Clouds Time of Day Factor");

	Params::ABP_TimeOfDayManager_C_Clouds_Time_of_Day_Factor_Params Parms{};

	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Cloud Texture Velocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Base_Clouds_Scale_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_ClampVectorSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_TimeOfDayManager_C::Cloud_Texture_Velocity(double CallFunc_Current_Base_Clouds_Scale_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_ClampVectorSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Cloud Texture Velocity");

	Params::ABP_TimeOfDayManager_C_Cloud_Texture_Velocity_Params Parms{};

	Parms.CallFunc_Current_Base_Clouds_Scale_ReturnValue = CallFunc_Current_Base_Clouds_Scale_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_ClampVectorSize_ReturnValue = CallFunc_ClampVectorSize_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current View Sample Scale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Scale_Sample_Count_out                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Current_View_Sample_Scale(double* Out, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Scale_Sample_Count_out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current View Sample Scale");

	Params::ABP_TimeOfDayManager_C_Current_View_Sample_Scale_Params Parms{};

	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Scale_Sample_Count_out = CallFunc_Scale_Sample_Count_out;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Volumetric Cloud Shadow Tracing Distance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Current_Volumetric_Cloud_Shadow_Tracing_Distance(double* Out, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Volumetric Cloud Shadow Tracing Distance");

	Params::ABP_TimeOfDayManager_C_Current_Volumetric_Cloud_Shadow_Tracing_Distance_Params Parms{};

	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Cloud Floor Variation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Cloud_Floor_Variation(double* Height, double* Color, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Abs_ReturnValue, double CallFunc_Abs_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_Ease_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Cloud Floor Variation");

	Params::ABP_TimeOfDayManager_C_Volumetric_Cloud_Floor_Variation_Params Parms{};

	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Cloud Layer Scale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Layer_Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Cloud_Layer_Scale(double* Layer_Scale, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Cloud Layer Scale");

	Params::ABP_TimeOfDayManager_C_Volumetric_Cloud_Layer_Scale_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Layer_Scale != nullptr)
		*Layer_Scale = Parms.Layer_Scale;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Lerp to Simplified Clouds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ALPHA                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Current_Lerp_to_Simplified_Clouds(double* ALPHA, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Lerp to Simplified Clouds");

	Params::ABP_TimeOfDayManager_C_Current_Lerp_to_Simplified_Clouds_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ALPHA != nullptr)
		*ALPHA = Parms.ALPHA;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Volumetric Cloud Macro Variation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_TimeOfDayManager_C::Current_Volumetric_Cloud_Macro_Variation(double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Volumetric Cloud Macro Variation");

	Params::ABP_TimeOfDayManager_C_Current_Volumetric_Cloud_Macro_Variation_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Volumetric Cloud Multiscattering Occlusion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Occlusion                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Current_Volumetric_Cloud_Multiscattering_Occlusion(double* Occlusion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Volumetric Cloud Multiscattering Occlusion");

	Params::ABP_TimeOfDayManager_C_Current_Volumetric_Cloud_Multiscattering_Occlusion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Occlusion != nullptr)
		*Occlusion = Parms.Occlusion;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Volumetric Cloud Subnoise Amount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Erosion                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Current_Volumetric_Cloud_Subnoise_Amount(double* Erosion, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Volumetric Cloud Subnoise Amount");

	Params::ABP_TimeOfDayManager_C_Current_Volumetric_Cloud_Subnoise_Amount_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Erosion != nullptr)
		*Erosion = Parms.Erosion;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Volumetric Cloud Taper Position
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Taper                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Current_Volumetric_Cloud_Taper_Position(double* Taper, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Volumetric Cloud Taper Position");

	Params::ABP_TimeOfDayManager_C_Current_Volumetric_Cloud_Taper_Position_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Taper != nullptr)
		*Taper = Parms.Taper;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Cloud Shadows Altitude
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Cloud_Shadows_Altitude                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volumetric_Cloud_Floor_Variation_Height                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Volumetric_Cloud_Floor_Variation_Color                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Cloud_Shadows_Altitude(double* Cloud_Shadows_Altitude, double CallFunc_Volumetric_Cloud_Floor_Variation_Height, double CallFunc_Volumetric_Cloud_Floor_Variation_Color, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Cloud Shadows Altitude");

	Params::ABP_TimeOfDayManager_C_Volumetric_Cloud_Shadows_Altitude_Params Parms{};

	Parms.CallFunc_Volumetric_Cloud_Floor_Variation_Height = CallFunc_Volumetric_Cloud_Floor_Variation_Height;
	Parms.CallFunc_Volumetric_Cloud_Floor_Variation_Color = CallFunc_Volumetric_Cloud_Floor_Variation_Color;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Cloud_Shadows_Altitude != nullptr)
		*Cloud_Shadows_Altitude = Parms.Cloud_Shadows_Altitude;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Get Current Volumetric Cloud Extinction Scales
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Top                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Bottom                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Get_Current_Volumetric_Cloud_Extinction_Scales(double* Top, double* Bottom, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Get Current Volumetric Cloud Extinction Scales");

	Params::ABP_TimeOfDayManager_C_Get_Current_Volumetric_Cloud_Extinction_Scales_Params Parms{};

	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Top != nullptr)
		*Top = Parms.Top;

	if (Bottom != nullptr)
		*Bottom = Parms.Bottom;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Cloud Top Altitude
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Cloud_Top_Altitude                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Cloud_Top_Altitude(double* Cloud_Top_Altitude, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Cloud Top Altitude");

	Params::ABP_TimeOfDayManager_C_Volumetric_Cloud_Top_Altitude_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Cloud_Top_Altitude != nullptr)
		*Cloud_Top_Altitude = Parms.Cloud_Top_Altitude;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Cloud Base Cloud Height
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Base_Cloud_Height                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Cloud_Base_Cloud_Height(double* Base_Cloud_Height, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Cloud Base Cloud Height");

	Params::ABP_TimeOfDayManager_C_Volumetric_Cloud_Base_Cloud_Height_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Base_Cloud_Height != nullptr)
		*Base_Cloud_Height = Parms.Base_Cloud_Height;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Fog Directional Inscattering Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Directional_Inscattering_Color                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Current_Fog_Directional_Inscattering_Color(struct FLinearColor* Directional_Inscattering_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Fog Directional Inscattering Color");

	Params::ABP_TimeOfDayManager_C_Current_Fog_Directional_Inscattering_Color_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Directional_Inscattering_Color != nullptr)
		*Directional_Inscattering_Color = std::move(Parms.Directional_Inscattering_Color);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Max Trace Distance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Applied_Cloud_Top_and_Bottom_Bottom             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Applied_Cloud_Top_and_Bottom_Top                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Current_Max_Trace_Distance(double* Out, double CallFunc_Current_Applied_Cloud_Top_and_Bottom_Bottom, double CallFunc_Current_Applied_Cloud_Top_and_Bottom_Top, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Max Trace Distance");

	Params::ABP_TimeOfDayManager_C_Current_Max_Trace_Distance_Params Parms{};

	Parms.CallFunc_Current_Applied_Cloud_Top_and_Bottom_Bottom = CallFunc_Current_Applied_Cloud_Top_and_Bottom_Bottom;
	Parms.CallFunc_Current_Applied_Cloud_Top_and_Bottom_Top = CallFunc_Current_Applied_Cloud_Top_and_Bottom_Top;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Z Disturbance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Current_Z_Disturbance(double* Out, double CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Z Disturbance");

	Params::ABP_TimeOfDayManager_C_Current_Z_Disturbance_Params Parms{};

	Parms.CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha = CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Get Volumetric Cloud Emissive Colors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Bottom                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Top                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Get_Volumetric_Cloud_Emissive_Colors(struct FLinearColor* Bottom, struct FLinearColor* Top)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Get Volumetric Cloud Emissive Colors");

	Params::ABP_TimeOfDayManager_C_Get_Volumetric_Cloud_Emissive_Colors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Bottom != nullptr)
		*Bottom = std::move(Parms.Bottom);

	if (Top != nullptr)
		*Top = std::move(Parms.Top);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Cache Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECachedProperties       Property                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Set_Value                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Cached_Color_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LinearColor_IsNearEqual_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Cache_Color(enum class ECachedProperties Property, const struct FLinearColor& Set_Value, bool Temp_bool_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FLinearColor& CallFunc_Get_Cached_Color_Value, const struct FLinearColor& CallFunc_Array_Get_Item, bool CallFunc_LinearColor_IsNearEqual_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Cache Color");

	Params::ABP_TimeOfDayManager_C_Cache_Color_Params Parms{};

	Parms.Property = Property;
	Parms.Set_Value = Set_Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Get_Cached_Color_Value = CallFunc_Get_Cached_Color_Value;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LinearColor_IsNearEqual_ReturnValue = CallFunc_LinearColor_IsNearEqual_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Volumetric Cloud Albedo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_LinearColorFloat_B_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor ABP_TimeOfDayManager_C::Current_Volumetric_Cloud_Albedo(const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, float CallFunc_Multiply_LinearColorFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Volumetric Cloud Albedo");

	Params::ABP_TimeOfDayManager_C_Current_Volumetric_Cloud_Albedo_Params Parms{};

	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_B_ImplicitCast = CallFunc_Multiply_LinearColorFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Cache Float
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECachedProperties       Property                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Set_Value                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Cached_Float_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Cache_Float(enum class ECachedProperties Property, double Set_Value, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool Temp_bool_Variable, double CallFunc_Get_Cached_Float_Value, double CallFunc_Array_Get_Item, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Cache Float");

	Params::ABP_TimeOfDayManager_C_Cache_Float_Params Parms{};

	Parms.Property = Property;
	Parms.Set_Value = Set_Value;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Get_Cached_Float_Value = CallFunc_Get_Cached_Float_Value;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Scaled Cache Period
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Period                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Scaled_Cache_Period(double* Period)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Scaled Cache Period");

	Params::ABP_TimeOfDayManager_C_Scaled_Cache_Period_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Period != nullptr)
		*Period = Parms.Period;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Set Cloud Timing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cloud_Texture_Velocity_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cloud_Texture_Velocity_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Clouds_Time_of_Day_Factor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Set_Cloud_Timing(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, const struct FVector& CallFunc_Cloud_Texture_Velocity_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_Cloud_Texture_Velocity_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, double CallFunc_Clouds_Time_of_Day_Factor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Set Cloud Timing");

	Params::ABP_TimeOfDayManager_C_Set_Cloud_Timing_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Cloud_Texture_Velocity_ReturnValue = CallFunc_Cloud_Texture_Velocity_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Cloud_Texture_Velocity_ReturnValue_1 = CallFunc_Cloud_Texture_Velocity_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Clouds_Time_of_Day_Factor_ReturnValue = CallFunc_Clouds_Time_of_Day_Factor_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Set Cache Alpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Set_Cache_Alpha(float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Set Cache Alpha");

	Params::ABP_TimeOfDayManager_C_Set_Cache_Alpha_Params Parms{};

	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Size Cache Arrays
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::Size_Cache_Arrays()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Size Cache Arrays");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Night Filter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_TimeOfDayManager_C::Night_Filter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Night Filter");

	Params::ABP_TimeOfDayManager_C_Night_Filter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Clouds Top Bottom Distribution
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Clouds_Top_Bottom_Distribution(double* Out, double CallFunc_SelectFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Clouds Top Bottom Distribution");

	Params::ABP_TimeOfDayManager_C_Volumetric_Clouds_Top_Bottom_Distribution_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Volumetric Clouds Density
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_TimeOfDayManager_C::Current_Volumetric_Clouds_Density(double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Volumetric Clouds Density");

	Params::ABP_TimeOfDayManager_C_Current_Volumetric_Clouds_Density_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Get Cached Float
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECachedProperties       Property                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Get_Cached_Float(enum class ECachedProperties Property, double* Value, int32 CallFunc_Conv_ByteToInt_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_Array_Get_Item_1, double CallFunc_Lerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Get Cached Float");

	Params::ABP_TimeOfDayManager_C_Get_Cached_Float_Params Parms{};

	Parms.Property = Property;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Get Cached Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECachedProperties       Property                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColorLerp_Alpha_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Get_Cached_Color(enum class ECachedProperties Property, struct FLinearColor* Value, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_Array_Get_Item_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_LinearColorLerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Get Cached Color");

	Params::ABP_TimeOfDayManager_C_Get_Cached_Color_Params Parms{};

	Parms.Property = Property;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_Alpha_ImplicitCast = CallFunc_LinearColorLerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Cloud Layer Height
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Layer_Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Cloud_Layer_Height(double* Layer_Height, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Cloud Layer Height");

	Params::ABP_TimeOfDayManager_C_Volumetric_Cloud_Layer_Height_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Layer_Height != nullptr)
		*Layer_Height = Parms.Layer_Height;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Update Overcast Turbulence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Update_Overcast_Turbulence(double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_MapRangeUnclamped_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Update Overcast Turbulence");

	Params::ABP_TimeOfDayManager_C_Update_Overcast_Turbulence_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_Value_ImplicitCast = CallFunc_MapRangeUnclamped_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Update Current Volumetric Clouds MID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Update_Current_Volumetric_Clouds_MID(int32 Temp_int_Variable, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Update Current Volumetric Clouds MID");

	Params::ABP_TimeOfDayManager_C_Update_Current_Volumetric_Clouds_MID_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Clouds SubNoise Scales
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                High                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Low                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Medium                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Clouds_SubNoise_Scales(struct FLinearColor* High, struct FLinearColor* Low, struct FLinearColor* Medium, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Clouds SubNoise Scales");

	Params::ABP_TimeOfDayManager_C_Volumetric_Clouds_SubNoise_Scales_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (High != nullptr)
		*High = std::move(Parms.High);

	if (Low != nullptr)
		*Low = std::move(Parms.Low);

	if (Medium != nullptr)
		*Medium = std::move(Parms.Medium);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Apply Volumetric Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVolRT_Mode             Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVolRT_Mode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Apply_Volumetric_Mode(enum class EVolRT_Mode Mode, enum class EVolRT_Mode Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_SelectFloat_ReturnValue, int32 K2Node_Select_Default, double CallFunc_Conv_IntToDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Apply Volumetric Mode");

	Params::ABP_TimeOfDayManager_C_Apply_Volumetric_Mode_Params Parms{};

	Parms.Mode = Mode;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Applied Cloud Top and Bottom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Bottom                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Top                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Current_Applied_Cloud_Top_and_Bottom(double* Bottom, double* Top, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Applied Cloud Top and Bottom");

	Params::ABP_TimeOfDayManager_C_Current_Applied_Cloud_Top_and_Bottom_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Bottom != nullptr)
		*Bottom = Parms.Bottom;

	if (Top != nullptr)
		*Top = Parms.Top;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Apply Console Variable with Check
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Cvar                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                             Setting                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Apply_Console_Variable_with_Check(const class FString& Cvar, double Setting, int32 Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Apply Console Variable with Check");

	Params::ABP_TimeOfDayManager_C_Apply_Console_Variable_with_Check_Params Parms{};

	Parms.Cvar = Cvar;
	Parms.Setting = Setting;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Scale Sample Count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingMaterialQualityLevel_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Scale_Sample_Count(double In, double* Out, int32 Temp_int_Variable, int32 CallFunc_GetRenderingMaterialQualityLevel_ReturnValue, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Scale Sample Count");

	Params::ABP_TimeOfDayManager_C_Scale_Sample_Count_Params Parms{};

	Parms.In = In;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetRenderingMaterialQualityLevel_ReturnValue = CallFunc_GetRenderingMaterialQualityLevel_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Current Base Clouds Scale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_TimeOfDayManager_C::Current_Base_Clouds_Scale(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Current Base Clouds Scale");

	Params::ABP_TimeOfDayManager_C_Current_Base_Clouds_Scale_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Clouds Parent Materials
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Material_Instance                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingMaterialQualityLevel_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Clouds_Parent_Materials(class UMaterialInterface** Material_Instance, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, int32 CallFunc_GetRenderingMaterialQualityLevel_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Clouds Parent Materials");

	Params::ABP_TimeOfDayManager_C_Volumetric_Clouds_Parent_Materials_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetRenderingMaterialQualityLevel_ReturnValue = CallFunc_GetRenderingMaterialQualityLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Material_Instance != nullptr)
		*Material_Instance = Parms.Material_Instance;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Volumetric Clouds Base Clouds Texture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Tex                                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENoiseType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Volumetric_Clouds_Base_Clouds_Texture(class UTexture2D** Tex, enum class ENoiseType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Volumetric Clouds Base Clouds Texture");

	Params::ABP_TimeOfDayManager_C_Volumetric_Clouds_Base_Clouds_Texture_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Tex != nullptr)
		*Tex = Parms.Tex;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.UpdateLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::UpdateLighting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "UpdateLighting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.SelectRandomIndicesFromArrays
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      GenericIndices                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      SpecificIndices                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      MinorCardSpecificIndices                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              SelectedIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::SelectRandomIndicesFromArrays(TArray<int32>& GenericIndices, TArray<int32>& SpecificIndices, TArray<int32>& MinorCardSpecificIndices, int32* SelectedIndex, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2, int32 CallFunc_Array_Get_Item_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "SelectRandomIndicesFromArrays");

	Params::ABP_TimeOfDayManager_C_SelectRandomIndicesFromArrays_Params Parms{};

	Parms.GenericIndices = GenericIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue_1 = CallFunc_Array_LastIndex_ReturnValue_1;
	Parms.CallFunc_Array_LastIndex_ReturnValue_2 = CallFunc_Array_LastIndex_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedIndex != nullptr)
		*SelectedIndex = Parms.SelectedIndex;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.CheckRealmRequiremets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRealmPlacementRequirement>RealmRequirements                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               GenericIndices                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SpecificIndices                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MinorCardSpecificIndices                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesRealmAndRequirementMeetMinorCard_MeetMinorCard      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::CheckRealmRequiremets(TArray<struct FRealmPlacementRequirement>& RealmRequirements, bool* GenericIndices, bool* SpecificIndices, bool* MinorCardSpecificIndices, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_DoesRealmAndRequirementMeetMinorCard_MeetMinorCard, bool CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "CheckRealmRequiremets");

	Params::ABP_TimeOfDayManager_C_CheckRealmRequiremets_Params Parms{};

	Parms.RealmRequirements = RealmRequirements;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_DoesRealmAndRequirementMeetMinorCard_MeetMinorCard = CallFunc_DoesRealmAndRequirementMeetMinorCard_MeetMinorCard;
	Parms.CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet = CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet;

	UObject::ProcessEvent(Func, &Parms);

	if (GenericIndices != nullptr)
		*GenericIndices = Parms.GenericIndices;

	if (SpecificIndices != nullptr)
		*SpecificIndices = Parms.SpecificIndices;

	if (MinorCardSpecificIndices != nullptr)
		*MinorCardSpecificIndices = Parms.MinorCardSpecificIndices;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickExposureDay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Exposure                 CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Exposure                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickExposureDay(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Exposure& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Exposure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickExposureDay");

	Params::ABP_TimeOfDayManager_C_PickExposureDay_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickVaultOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Vault_Override           CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Vault_Override           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickVaultOverride(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Vault_Override& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Vault_Override& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickVaultOverride");

	Params::ABP_TimeOfDayManager_C_PickVaultOverride_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickTemperatureCurve
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_TemperatureCurves        CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_TemperatureCurves        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickTemperatureCurve(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_TemperatureCurves& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_TemperatureCurves& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickTemperatureCurve");

	Params::ABP_TimeOfDayManager_C_PickTemperatureCurve_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickTemperatureNight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Temperature              CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Temperature              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickTemperatureNight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Temperature& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Temperature& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickTemperatureNight");

	Params::ABP_TimeOfDayManager_C_PickTemperatureNight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickTemperatureDay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Temperature              CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Temperature              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickTemperatureDay(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Temperature& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Temperature& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickTemperatureDay");

	Params::ABP_TimeOfDayManager_C_PickTemperatureDay_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickAtmosphereMaster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Atmosphere_Master        CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere_Master        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickAtmosphereMaster(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Atmosphere_Master& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Atmosphere_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickAtmosphereMaster");

	Params::ABP_TimeOfDayManager_C_PickAtmosphereMaster_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickColorSelectD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Angle_X                  CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Angle_X                  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickColorSelectD(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Angle_X& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Angle_X& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickColorSelectD");

	Params::ABP_TimeOfDayManager_C_PickColorSelectD_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickAngle_X
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Angle_X                  CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Angle_X                  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickAngle_X(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Angle_X& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Angle_X& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickAngle_X");

	Params::ABP_TimeOfDayManager_C_PickAngle_X_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Set_Angle_X
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::Set_Angle_X()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Set_Angle_X");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickGlowingResource
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Glowing_Resource_Toggle  CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Glowing_Resource_Toggle  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickGlowingResource(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Glowing_Resource_Toggle& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Glowing_Resource_Toggle& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickGlowingResource");

	Params::ABP_TimeOfDayManager_C_PickGlowingResource_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFaeMagicAlt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fae_Magic_Toggle         CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFaeMagicAlt(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fae_Magic_Toggle& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFaeMagicAlt");

	Params::ABP_TimeOfDayManager_C_PickFaeMagicAlt_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickExposureNight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Exposure                 CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Exposure                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickExposureNight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Exposure& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Exposure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickExposureNight");

	Params::ABP_TimeOfDayManager_C_PickExposureNight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFaeMagic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fae_Magic_Toggle         CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFaeMagic(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fae_Magic_Toggle& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFaeMagic");

	Params::ABP_TimeOfDayManager_C_PickFaeMagic_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickNebulaColor3
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Nebula_Color_2           CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Nebula_Color_2           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickNebulaColor3(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Nebula_Color_2& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Nebula_Color_2& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickNebulaColor3");

	Params::ABP_TimeOfDayManager_C_PickNebulaColor3_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickNebulaColor2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Nebula_Color_2           CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Nebula_Color_2           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickNebulaColor2(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Nebula_Color_2& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Nebula_Color_2& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickNebulaColor2");

	Params::ABP_TimeOfDayManager_C_PickNebulaColor2_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickMPCBiome
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_MPC_Biome                CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MPC_Biome                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickMPCBiome(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_MPC_Biome& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_MPC_Biome& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickMPCBiome");

	Params::ABP_TimeOfDayManager_C_PickMPCBiome_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.UpdateLightning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Precipitation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Lightning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::UpdateLightning(double Precipitation, double* Lightning, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "UpdateLightning");

	Params::ABP_TimeOfDayManager_C_UpdateLightning_Params Parms{};

	Parms.Precipitation = Precipitation;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Lightning != nullptr)
		*Lightning = Parms.Lightning;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickCloudAlbedoSaturation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Cloud_Albedo_Saturation  CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Cloud_Albedo_Saturation  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickCloudAlbedoSaturation(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Cloud_Albedo_Saturation& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Cloud_Albedo_Saturation& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickCloudAlbedoSaturation");

	Params::ABP_TimeOfDayManager_C_PickCloudAlbedoSaturation_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Celestial_Material_Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// struct FS_Moon_Type                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Type                CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_4                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_6                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_7                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_8                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_9                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_6             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_7             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Type                CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_11                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_12                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_8             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_9             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_13                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_14                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_10            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_11            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Type                CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_16                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_17                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_12            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_13            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_18                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_19                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_14            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_15            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Type                CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_21                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_22                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_16            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_17            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_23                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_24                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_18            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_19            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Celestial_Material_Update(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, const struct FS_Moon_Type& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_Array_Get_Item_1, const struct FS_Moon_Type& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class UMaterialInstance* CallFunc_Array_Get_Item_2, class UMaterialInstance* CallFunc_Array_Get_Item_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstance* CallFunc_Array_Get_Item_4, class UMaterialInstance* CallFunc_Array_Get_Item_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class UMaterialInstance* CallFunc_Array_Get_Item_6, class UMaterialInstance* CallFunc_Array_Get_Item_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, class UMaterialInstance* CallFunc_Array_Get_Item_8, class UMaterialInstance* CallFunc_Array_Get_Item_9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_7, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_10, const struct FS_Moon_Type& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class UMaterialInstance* CallFunc_Array_Get_Item_11, class UMaterialInstance* CallFunc_Array_Get_Item_12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_9, class UMaterialInstance* CallFunc_Array_Get_Item_13, class UMaterialInstance* CallFunc_Array_Get_Item_14, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_11, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_15, const struct FS_Moon_Type& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, class UMaterialInstance* CallFunc_Array_Get_Item_16, class UMaterialInstance* CallFunc_Array_Get_Item_17, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_13, class UMaterialInstance* CallFunc_Array_Get_Item_18, class UMaterialInstance* CallFunc_Array_Get_Item_19, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_14, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_15, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, class FName CallFunc_Array_Get_Item_20, const struct FS_Moon_Type& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, class UMaterialInstance* CallFunc_Array_Get_Item_21, class UMaterialInstance* CallFunc_Array_Get_Item_22, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_16, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_17, class UMaterialInstance* CallFunc_Array_Get_Item_23, class UMaterialInstance* CallFunc_Array_Get_Item_24, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_18, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Celestial_Material_Update");

	Params::ABP_TimeOfDayManager_C_Celestial_Material_Update_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_7;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_9;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_10 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_10;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_11 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_11;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_13 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_13;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_14 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_14;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_15 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_15;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_16 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_16;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_17 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_17;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.CallFunc_Array_Get_Item_24 = CallFunc_Array_Get_Item_24;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_18 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_18;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_19 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_19;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.HDR_Debug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SDR_HDR                  CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::HDR_Debug(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_SDR_HDR& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "HDR_Debug");

	Params::ABP_TimeOfDayManager_C_HDR_Debug_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.SkyBox_MaterialUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::SkyBox_MaterialUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "SkyBox_MaterialUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickCelestialTertiaryColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Nebula_Color_2           CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Nebula_Color_2           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickCelestialTertiaryColor(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Nebula_Color_2& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Nebula_Color_2& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickCelestialTertiaryColor");

	Params::ABP_TimeOfDayManager_C_PickCelestialTertiaryColor_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogHeightContNight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_HeightFogContNight       CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_HeightFogContNight       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogHeightContNight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_HeightFogContNight& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_HeightFogContNight& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogHeightContNight");

	Params::ABP_TimeOfDayManager_C_PickFogHeightContNight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickTimeDilation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_TimeDilation             CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_TimeDilation             CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickTimeDilation(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_TimeDilation& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_TimeDilation& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickTimeDilation");

	Params::ABP_TimeOfDayManager_C_PickTimeDilation_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogHeightNight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fog_Height               CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Height               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogHeightNight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fog_Height& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fog_Height& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogHeightNight");

	Params::ABP_TimeOfDayManager_C_PickFogHeightNight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogVolumetricNight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fog_Volumetric           CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Volumetric           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogVolumetricNight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fog_Volumetric& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fog_Volumetric& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogVolumetricNight");

	Params::ABP_TimeOfDayManager_C_PickFogVolumetricNight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogFalloffNight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fog_Falloff              CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Falloff              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogFalloffNight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fog_Falloff& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fog_Falloff& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogFalloffNight");

	Params::ABP_TimeOfDayManager_C_PickFogFalloffNight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogOpacityNight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fog_Opacity              CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Opacity              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogOpacityNight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fog_Opacity& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fog_Opacity& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogOpacityNight");

	Params::ABP_TimeOfDayManager_C_PickFogOpacityNight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogDensityNight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fog_Density              CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Density              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogDensityNight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fog_Density& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fog_Density& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogDensityNight");

	Params::ABP_TimeOfDayManager_C_PickFogDensityNight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fog_Height               CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Height               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogHeight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fog_Height& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fog_Height& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogHeight");

	Params::ABP_TimeOfDayManager_C_PickFogHeight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogFalloff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fog_Falloff              CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Falloff              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogFalloff(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fog_Falloff& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fog_Falloff& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogFalloff");

	Params::ABP_TimeOfDayManager_C_PickFogFalloff_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fog_Opacity              CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Opacity              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogOpacity(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fog_Opacity& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fog_Opacity& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogOpacity");

	Params::ABP_TimeOfDayManager_C_PickFogOpacity_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogDensity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fog_Density              CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Density              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogDensity(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fog_Density& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fog_Density& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogDensity");

	Params::ABP_TimeOfDayManager_C_PickFogDensity_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickColorSaturation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Color_Saturations        CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickColorSaturation(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Color_Saturations& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickColorSaturation");

	Params::ABP_TimeOfDayManager_C_PickColorSaturation_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickHeavyWeather
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_HeavyWeather             CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickHeavyWeather(const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_HeavyWeather& CurrentEntry, int32 CurrentIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickHeavyWeather");

	Params::ABP_TimeOfDayManager_C_PickHeavyWeather_Params Parms{};

	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickAtmMoonVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Atm_Moon_Visbility       CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atm_Moon_Visbility       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickAtmMoonVisibility(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Atm_Moon_Visbility& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Atm_Moon_Visbility& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickAtmMoonVisibility");

	Params::ABP_TimeOfDayManager_C_PickAtmMoonVisibility_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickMoonVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Moon_Visbility           CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Visbility           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickMoonVisibility(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Moon_Visbility& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Moon_Visbility& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickMoonVisibility");

	Params::ABP_TimeOfDayManager_C_PickMoonVisibility_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickMoonNebulatoggle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Moon_Nebula_Switch       CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Nebula_Switch       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickMoonNebulatoggle(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Moon_Nebula_Switch& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Moon_Nebula_Switch& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickMoonNebulatoggle");

	Params::ABP_TimeOfDayManager_C_PickMoonNebulatoggle_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickMainCelestialColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Main_Celestial_Color     CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Main_Celestial_Color     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickMainCelestialColor(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Main_Celestial_Color& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Main_Celestial_Color& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickMainCelestialColor");

	Params::ABP_TimeOfDayManager_C_PickMainCelestialColor_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickRain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Weather                  CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Weather                  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickRain(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Weather& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Weather& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickRain");

	Params::ABP_TimeOfDayManager_C_PickRain_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickAurora
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Aurora                   CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Aurora                   CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickAurora(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Aurora& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Aurora& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickAurora");

	Params::ABP_TimeOfDayManager_C_PickAurora_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickRingType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Ring_Type                CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Ring_Type                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickRingType(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Ring_Type& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Ring_Type& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickRingType");

	Params::ABP_TimeOfDayManager_C_PickRingType_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickRings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Ring_Toggle              CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Ring_Toggle              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickRings(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Ring_Toggle& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Ring_Toggle& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickRings");

	Params::ABP_TimeOfDayManager_C_PickRings_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickSecondaryMoonType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_SecondaryMoon_Groups     CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SecondaryMoon_Groups     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickSecondaryMoonType(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_SecondaryMoon_Groups& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_SecondaryMoon_Groups& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickSecondaryMoonType");

	Params::ABP_TimeOfDayManager_C_PickSecondaryMoonType_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickSecondaryMoons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Atm_Moon_Visbility       CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atm_Moon_Visbility       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickSecondaryMoons(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Atm_Moon_Visbility& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Atm_Moon_Visbility& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickSecondaryMoons");

	Params::ABP_TimeOfDayManager_C_PickSecondaryMoons_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickSeason
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_SeasonType               CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SeasonType               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickSeason(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_SeasonType& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_SeasonType& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickSeason");

	Params::ABP_TimeOfDayManager_C_PickSeason_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickCloudColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Colors                   CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Colors                   CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickCloudColor(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Colors& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Colors& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickCloudColor");

	Params::ABP_TimeOfDayManager_C_PickCloudColor_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickClouds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Volumetric_Clouds        CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Volumetric_Clouds        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickClouds(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Volumetric_Clouds& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Volumetric_Clouds& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickClouds");

	Params::ABP_TimeOfDayManager_C_PickClouds_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogVolumeLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Volume_Fog_Level         CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Volume_Fog_Level         CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogVolumeLevel(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Volume_Fog_Level& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Volume_Fog_Level& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogVolumeLevel");

	Params::ABP_TimeOfDayManager_C_PickFogVolumeLevel_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogNight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fog_Day                  CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogNight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fog_Day& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogNight");

	Params::ABP_TimeOfDayManager_C_PickFogNight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickFogDay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Fog_Day                  CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickFogDay(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Fog_Day& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickFogDay");

	Params::ABP_TimeOfDayManager_C_PickFogDay_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickAtmosphere
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Atmosphere               CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickAtmosphere(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Atmosphere& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Atmosphere& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickAtmosphere");

	Params::ABP_TimeOfDayManager_C_PickAtmosphere_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickCelestialType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Main_Celestial_Type      CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Main_Celestial_Type      CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickCelestialType(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Main_Celestial_Type& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Main_Celestial_Type& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickCelestialType");

	Params::ABP_TimeOfDayManager_C_PickCelestialType_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickCelestialIntensity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Celestial_Intensity      CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Celestial_Intensity      CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickCelestialIntensity(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Celestial_Intensity& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Celestial_Intensity& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickCelestialIntensity");

	Params::ABP_TimeOfDayManager_C_PickCelestialIntensity_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickNightBouncedLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Night_Brightness_and_ExposuresCurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Night_Brightness_and_ExposuresCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickNightBouncedLight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Night_Brightness_and_Exposures& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Night_Brightness_and_Exposures& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickNightBouncedLight");

	Params::ABP_TimeOfDayManager_C_PickNightBouncedLight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickDayBouncedLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Day_Brightness_and_ExposureCurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Day_Brightness_and_ExposureCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickDayBouncedLight(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Day_Brightness_and_Exposure& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Day_Brightness_and_Exposure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickDayBouncedLight");

	Params::ABP_TimeOfDayManager_C_PickDayBouncedLight_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickColorCorrect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Color_Correction_Presets CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Correction_Presets CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickColorCorrect(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Color_Correction_Presets& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Color_Correction_Presets& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickColorCorrect");

	Params::ABP_TimeOfDayManager_C_PickColorCorrect_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickRapidColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_RapidColorAdjust         CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RapidColorAdjust         CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickRapidColor(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_RapidColorAdjust& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_RapidColorAdjust& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickRapidColor");

	Params::ABP_TimeOfDayManager_C_PickRapidColor_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickRapidColorBiome
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UDataTable*>          RapidColorTables                                                 (Edit, BlueprintVisible)
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// int32                              IndexChoice                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          ColorTables                                                      (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Rapid_Color_Biome        CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<class UDataTable*>          K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Rapid_Color_Biome        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickRapidColorBiome(const TArray<class UDataTable*>& RapidColorTables, const TArray<int32>& MinorCardSpecificIndices, int32 IndexChoice, const TArray<class UDataTable*>& ColorTables, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Rapid_Color_Biome& CurrentEntry, int32 CurrentIndex, TArray<class UDataTable*>& K2Node_MakeArray_Array, TArray<class UDataTable*>& K2Node_MakeArray_Array_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_Rapid_Color_Biome& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, class UDataTable* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickRapidColorBiome");

	Params::ABP_TimeOfDayManager_C_PickRapidColorBiome_Params Parms{};

	Parms.RapidColorTables = RapidColorTables;
	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.IndexChoice = IndexChoice;
	Parms.ColorTables = ColorTables;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickColorSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Color_Master             CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickColorSelect(const TArray<int32>& MinorCardSpecificIndices, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Color_Master& CurrentEntry, int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickColorSelect");

	Params::ABP_TimeOfDayManager_C_PickColorSelect_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PickColorMaster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MinorCardSpecificIndices                                         (Edit, BlueprintVisible)
// int32                              IndexChoice                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          ColorTables                                                      (Edit, BlueprintVisible)
// TArray<int32>                      SpecificIndices                                                  (Edit, BlueprintVisible)
// TArray<int32>                      GenericIndices                                                   (Edit, BlueprintVisible)
// struct FS_Color_Table_Master       CurrentEntry                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomIndicesFromArrays_SelectedIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_GenericIndices                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_SpecificIndices                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PickColorMaster(const TArray<int32>& MinorCardSpecificIndices, int32 IndexChoice, const TArray<class UDataTable*>& ColorTables, const TArray<int32>& SpecificIndices, const TArray<int32>& GenericIndices, const struct FS_Color_Table_Master& CurrentEntry, int32 CurrentIndex, TArray<class UDataTable*>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectRandomIndicesFromArrays_SelectedIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, class UDataTable* CallFunc_Array_Get_Item, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_CheckRealmRequiremets_GenericIndices, bool CallFunc_CheckRealmRequiremets_SpecificIndices, bool CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PickColorMaster");

	Params::ABP_TimeOfDayManager_C_PickColorMaster_Params Parms{};

	Parms.MinorCardSpecificIndices = MinorCardSpecificIndices;
	Parms.IndexChoice = IndexChoice;
	Parms.ColorTables = ColorTables;
	Parms.SpecificIndices = SpecificIndices;
	Parms.GenericIndices = GenericIndices;
	Parms.CurrentEntry = CurrentEntry;
	Parms.CurrentIndex = CurrentIndex;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectRandomIndicesFromArrays_SelectedIndex = CallFunc_SelectRandomIndicesFromArrays_SelectedIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_CheckRealmRequiremets_GenericIndices = CallFunc_CheckRealmRequiremets_GenericIndices;
	Parms.CallFunc_CheckRealmRequiremets_SpecificIndices = CallFunc_CheckRealmRequiremets_SpecificIndices;
	Parms.CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices = CallFunc_CheckRealmRequiremets_MinorCardSpecificIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.OnRealmSeedUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RealmVisualSeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RCI                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream               CallFunc_MakeRandomStream_ReturnValue                            (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEnvironmentSnapshot>CallFunc_GetEnvironmentStack_ReturnValue                         (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGameRule*>           CallFunc_GetActiveRealmCardGameRules_GameRules                   (ReferenceParm)
// class UGameRule*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_11                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_12                          (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_13                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::OnRealmSeedUpdated(int32 RealmVisualSeed, bool RCI, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsServer_ReturnValue, TArray<struct FEnvironmentSnapshot>& CallFunc_GetEnvironmentStack_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UGameRule*>& CallFunc_GetActiveRealmCardGameRules_GameRules, class UGameRule* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int64 CallFunc_Conv_IntToInt64_ReturnValue_3, int64 CallFunc_Conv_IntToInt64_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, int64 CallFunc_Conv_IntToInt64_ReturnValue_5, int64 CallFunc_Conv_IntToInt64_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, int64 CallFunc_Conv_IntToInt64_ReturnValue_7, int64 CallFunc_Conv_IntToInt64_ReturnValue_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, int64 CallFunc_Conv_IntToInt64_ReturnValue_9, int64 CallFunc_Conv_IntToInt64_ReturnValue_10, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, int64 CallFunc_Conv_IntToInt64_ReturnValue_11, int64 CallFunc_Conv_IntToInt64_ReturnValue_12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_11, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_12, int64 CallFunc_Conv_IntToInt64_ReturnValue_13, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_13, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "OnRealmSeedUpdated");

	Params::ABP_TimeOfDayManager_C_OnRealmSeedUpdated_Params Parms{};

	Parms.RealmVisualSeed = RealmVisualSeed;
	Parms.RCI = RCI;
	Parms.CallFunc_MakeRandomStream_ReturnValue = CallFunc_MakeRandomStream_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetEnvironmentStack_ReturnValue = CallFunc_GetEnvironmentStack_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActiveRealmCardGameRules_GameRules = CallFunc_GetActiveRealmCardGameRules_GameRules;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_3 = CallFunc_Conv_IntToInt64_ReturnValue_3;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_4 = CallFunc_Conv_IntToInt64_ReturnValue_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_5 = CallFunc_Conv_IntToInt64_ReturnValue_5;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_6 = CallFunc_Conv_IntToInt64_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_7 = CallFunc_Conv_IntToInt64_ReturnValue_7;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_8 = CallFunc_Conv_IntToInt64_ReturnValue_8;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_9 = CallFunc_Conv_IntToInt64_ReturnValue_9;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_10 = CallFunc_Conv_IntToInt64_ReturnValue_10;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_11 = CallFunc_Conv_IntToInt64_ReturnValue_11;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_12 = CallFunc_Conv_IntToInt64_ReturnValue_12;
	Parms.K2Node_MakeStruct_FormatArgumentData_11 = K2Node_MakeStruct_FormatArgumentData_11;
	Parms.K2Node_MakeStruct_FormatArgumentData_12 = K2Node_MakeStruct_FormatArgumentData_12;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_13 = CallFunc_Conv_IntToInt64_ReturnValue_13;
	Parms.K2Node_MakeStruct_FormatArgumentData_13 = K2Node_MakeStruct_FormatArgumentData_13;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.UpdatePuddles
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Precipitation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Puddles                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::UpdatePuddles(double Precipitation, double DeltaSeconds, double* Puddles, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_FMin_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "UpdatePuddles");

	Params::ABP_TimeOfDayManager_C_UpdatePuddles_Params Parms{};

	Parms.Precipitation = Precipitation;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Puddles != nullptr)
		*Puddles = Parms.Puddles;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Randomize_Components
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Randomize_Components(int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Randomize_Components");

	Params::ABP_TimeOfDayManager_C_Randomize_Components_Params Parms{};

	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_3 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.OnRep_Realm_Profile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::OnRep_Realm_Profile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "OnRep_Realm_Profile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.UpdateWeather
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ElapsedTimeInSeconds                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AccumulatedTimeInSeconds                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NormalizedTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SimulationMonitorComponent_C*SimulationMonitor                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             ClampedPrecipitation                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeatherDataProvider>CallFunc_GetTemperature_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTemperature_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeatherDataProvider>CallFunc_GetTemperature_self_CastInput_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTemperature_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateLightning_Lightning                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeatherDataProvider>CallFunc_GetHail_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHail_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdatePuddles_Puddles                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeatherDataProvider>CallFunc_GetHumidity_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHumidity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeatherDataProvider>CallFunc_GetHumidity_self_CastInput_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHumidity_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeatherDataProvider>CallFunc_GetAccumulation_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccumulation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeatherDataProvider>CallFunc_GetAccumulation_self_CastInput_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccumulation_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeatherDataProvider>CallFunc_GetHumidity_self_CastInput_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHumidity_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeatherDataProvider>CallFunc_GetPrecipitation_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPrecipitation_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateSimulationFrame_EllapsedTimeInSeconds_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateSimulationFrame_AccumulatedTimeInSeconds_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateSimulationFrame_NormalizedTime_ImplicitCast       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Humidity_Dynamic_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Humidity_Dynamic_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Humidity_Dynamic_ImplicitCast_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Value_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::UpdateWeather(double ElapsedTimeInSeconds, double AccumulatedTimeInSeconds, double NormalizedTime, class UBP_SimulationMonitorComponent_C* SimulationMonitor, double ClampedPrecipitation, TScriptInterface<class IWeatherDataProvider> CallFunc_GetTemperature_self_CastInput, float CallFunc_GetTemperature_ReturnValue, TScriptInterface<class IWeatherDataProvider> CallFunc_GetTemperature_self_CastInput_1, float CallFunc_GetTemperature_ReturnValue_1, double CallFunc_UpdateLightning_Lightning, TScriptInterface<class IWeatherDataProvider> CallFunc_GetHail_self_CastInput, float CallFunc_GetHail_ReturnValue, double CallFunc_UpdatePuddles_Puddles, TScriptInterface<class IWeatherDataProvider> CallFunc_GetHumidity_self_CastInput, float CallFunc_GetHumidity_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IWeatherDataProvider> CallFunc_GetHumidity_self_CastInput_1, float CallFunc_GetHumidity_ReturnValue_1, TScriptInterface<class IWeatherDataProvider> CallFunc_GetAccumulation_self_CastInput, float CallFunc_GetAccumulation_ReturnValue, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, TScriptInterface<class IWeatherDataProvider> CallFunc_GetAccumulation_self_CastInput_1, float CallFunc_GetAccumulation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, TScriptInterface<class IWeatherDataProvider> CallFunc_GetHumidity_self_CastInput_2, float CallFunc_GetHumidity_ReturnValue_2, TScriptInterface<class IWeatherDataProvider> CallFunc_GetPrecipitation_self_CastInput, float CallFunc_GetPrecipitation_ReturnValue, double CallFunc_FClamp_ReturnValue, float CallFunc_UpdateSimulationFrame_EllapsedTimeInSeconds_ImplicitCast, float CallFunc_UpdateSimulationFrame_AccumulatedTimeInSeconds_ImplicitCast, float CallFunc_UpdateSimulationFrame_NormalizedTime_ImplicitCast, float CallFunc_SetFloatParameter_InValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetFloatParameter_InValue_ImplicitCast_1, double K2Node_VariableSet_Humidity_Dynamic_ImplicitCast, double K2Node_VariableSet_Humidity_Dynamic_ImplicitCast_1, double K2Node_VariableSet_Humidity_Dynamic_ImplicitCast_2, float CallFunc_SetFloatParameter_InValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, double CallFunc_FClamp_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "UpdateWeather");

	Params::ABP_TimeOfDayManager_C_UpdateWeather_Params Parms{};

	Parms.ElapsedTimeInSeconds = ElapsedTimeInSeconds;
	Parms.AccumulatedTimeInSeconds = AccumulatedTimeInSeconds;
	Parms.NormalizedTime = NormalizedTime;
	Parms.SimulationMonitor = SimulationMonitor;
	Parms.ClampedPrecipitation = ClampedPrecipitation;
	Parms.CallFunc_GetTemperature_self_CastInput = CallFunc_GetTemperature_self_CastInput;
	Parms.CallFunc_GetTemperature_ReturnValue = CallFunc_GetTemperature_ReturnValue;
	Parms.CallFunc_GetTemperature_self_CastInput_1 = CallFunc_GetTemperature_self_CastInput_1;
	Parms.CallFunc_GetTemperature_ReturnValue_1 = CallFunc_GetTemperature_ReturnValue_1;
	Parms.CallFunc_UpdateLightning_Lightning = CallFunc_UpdateLightning_Lightning;
	Parms.CallFunc_GetHail_self_CastInput = CallFunc_GetHail_self_CastInput;
	Parms.CallFunc_GetHail_ReturnValue = CallFunc_GetHail_ReturnValue;
	Parms.CallFunc_UpdatePuddles_Puddles = CallFunc_UpdatePuddles_Puddles;
	Parms.CallFunc_GetHumidity_self_CastInput = CallFunc_GetHumidity_self_CastInput;
	Parms.CallFunc_GetHumidity_ReturnValue = CallFunc_GetHumidity_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetHumidity_self_CastInput_1 = CallFunc_GetHumidity_self_CastInput_1;
	Parms.CallFunc_GetHumidity_ReturnValue_1 = CallFunc_GetHumidity_ReturnValue_1;
	Parms.CallFunc_GetAccumulation_self_CastInput = CallFunc_GetAccumulation_self_CastInput;
	Parms.CallFunc_GetAccumulation_ReturnValue = CallFunc_GetAccumulation_ReturnValue;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue = CallFunc_GetNiagaraParameterCollection_ReturnValue;
	Parms.CallFunc_GetAccumulation_self_CastInput_1 = CallFunc_GetAccumulation_self_CastInput_1;
	Parms.CallFunc_GetAccumulation_ReturnValue_1 = CallFunc_GetAccumulation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetHumidity_self_CastInput_2 = CallFunc_GetHumidity_self_CastInput_2;
	Parms.CallFunc_GetHumidity_ReturnValue_2 = CallFunc_GetHumidity_ReturnValue_2;
	Parms.CallFunc_GetPrecipitation_self_CastInput = CallFunc_GetPrecipitation_self_CastInput;
	Parms.CallFunc_GetPrecipitation_ReturnValue = CallFunc_GetPrecipitation_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_UpdateSimulationFrame_EllapsedTimeInSeconds_ImplicitCast = CallFunc_UpdateSimulationFrame_EllapsedTimeInSeconds_ImplicitCast;
	Parms.CallFunc_UpdateSimulationFrame_AccumulatedTimeInSeconds_ImplicitCast = CallFunc_UpdateSimulationFrame_AccumulatedTimeInSeconds_ImplicitCast;
	Parms.CallFunc_UpdateSimulationFrame_NormalizedTime_ImplicitCast = CallFunc_UpdateSimulationFrame_NormalizedTime_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast = CallFunc_SetFloatParameter_InValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_1 = CallFunc_SetFloatParameter_InValue_ImplicitCast_1;
	Parms.K2Node_VariableSet_Humidity_Dynamic_ImplicitCast = K2Node_VariableSet_Humidity_Dynamic_ImplicitCast;
	Parms.K2Node_VariableSet_Humidity_Dynamic_ImplicitCast_1 = K2Node_VariableSet_Humidity_Dynamic_ImplicitCast_1;
	Parms.K2Node_VariableSet_Humidity_Dynamic_ImplicitCast_2 = K2Node_VariableSet_Humidity_Dynamic_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_2 = CallFunc_SetFloatParameter_InValue_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_FClamp_Value_ImplicitCast = CallFunc_FClamp_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.SetupWeatherSimulation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*                 Temperature_Minus_Curve                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temperature_Minus_Night                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temperature_Minus_Day                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureWeatherSubsystem*  CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTemperatureProfile         K2Node_MakeStruct_TemperatureProfile                             (NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Temperature              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Temperature              CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Weather                  CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_TemperatureCurves        CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrecipitationProfile       K2Node_MakeStruct_PrecipitationProfile                           (NoDestructor)
// float                              K2Node_MakeStruct_Maximum_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Minimum_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_PrecipitationDelta_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_PrecipitationBase_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_PrecipitationFrequency_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_AccumulationRate_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::SetupWeatherSimulation(class UCurveFloat* Temperature_Minus_Curve, double Temperature_Minus_Night, double Temperature_Minus_Day, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class UStructureWeatherSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FTemperatureProfile& K2Node_MakeStruct_TemperatureProfile, bool CallFunc_BooleanOR_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item, const struct FS_Temperature& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_Array_Get_Item_1, const struct FS_Temperature& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_2, const struct FS_Weather& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class FName CallFunc_Array_Get_Item_3, const struct FS_TemperatureCurves& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FPrecipitationProfile& K2Node_MakeStruct_PrecipitationProfile, float K2Node_MakeStruct_Maximum_ImplicitCast, float K2Node_MakeStruct_Minimum_ImplicitCast, float K2Node_MakeStruct_PrecipitationDelta_ImplicitCast, float K2Node_MakeStruct_PrecipitationBase_ImplicitCast, float K2Node_MakeStruct_PrecipitationFrequency_ImplicitCast, float K2Node_MakeStruct_AccumulationRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "SetupWeatherSimulation");

	Params::ABP_TimeOfDayManager_C_SetupWeatherSimulation_Params Parms{};

	Parms.Temperature_Minus_Curve = Temperature_Minus_Curve;
	Parms.Temperature_Minus_Night = Temperature_Minus_Night;
	Parms.Temperature_Minus_Day = Temperature_Minus_Day;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_3 = CallFunc_NotEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_MakeStruct_TemperatureProfile = K2Node_MakeStruct_TemperatureProfile;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.K2Node_MakeStruct_PrecipitationProfile = K2Node_MakeStruct_PrecipitationProfile;
	Parms.K2Node_MakeStruct_Maximum_ImplicitCast = K2Node_MakeStruct_Maximum_ImplicitCast;
	Parms.K2Node_MakeStruct_Minimum_ImplicitCast = K2Node_MakeStruct_Minimum_ImplicitCast;
	Parms.K2Node_MakeStruct_PrecipitationDelta_ImplicitCast = K2Node_MakeStruct_PrecipitationDelta_ImplicitCast;
	Parms.K2Node_MakeStruct_PrecipitationBase_ImplicitCast = K2Node_MakeStruct_PrecipitationBase_ImplicitCast;
	Parms.K2Node_MakeStruct_PrecipitationFrequency_ImplicitCast = K2Node_MakeStruct_PrecipitationFrequency_ImplicitCast;
	Parms.K2Node_MakeStruct_AccumulationRate_ImplicitCast = K2Node_MakeStruct_AccumulationRate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.FireRandomLightingFlash
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WeatherIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxLightingWait                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinLightingWait                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VolumetricPointLight_Lighting_01_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::FireRandomLightingFlash(int32 WeatherIndex, double MaxLightingWait, double MinLightingWait, double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ABP_VolumetricPointLight_Lighting_01_C* CallFunc_Array_Get_Item, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "FireRandomLightingFlash");

	Params::ABP_TimeOfDayManager_C_FireRandomLightingFlash_Params Parms{};

	Parms.WeatherIndex = WeatherIndex;
	Parms.MaxLightingWait = MaxLightingWait;
	Parms.MinLightingWait = MinLightingWait;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Weather_Lighting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_VolumetricPointLight_Lighting_01_C*>WeatherGrid                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              WeatherGridRow                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WeatherGrid_Cell_Size                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WeatherGridColumn                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WeatherGrid_Start_Location                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WeatherGrid_Row_Count                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WeatherGrid_Column_Count                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WeatherActor_Location                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_VolumetricPointLight_Lighting_01_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Weather_Lighting(const TArray<class ABP_VolumetricPointLight_Lighting_01_C*>& WeatherGrid, int32 WeatherGridRow, int32 WeatherGrid_Cell_Size, int32 WeatherGridColumn, const struct FVector& WeatherGrid_Start_Location, int32 WeatherGrid_Row_Count, int32 WeatherGrid_Column_Count, const struct FVector& WeatherActor_Location, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Variable_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_VolumetricPointLight_Lighting_01_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Weather_Lighting");

	Params::ABP_TimeOfDayManager_C_Weather_Lighting_Params Parms{};

	Parms.WeatherGrid = WeatherGrid;
	Parms.WeatherGridRow = WeatherGridRow;
	Parms.WeatherGrid_Cell_Size = WeatherGrid_Cell_Size;
	Parms.WeatherGridColumn = WeatherGridColumn;
	Parms.WeatherGrid_Start_Location = WeatherGrid_Start_Location;
	Parms.WeatherGrid_Row_Count = WeatherGrid_Row_Count;
	Parms.WeatherGrid_Column_Count = WeatherGrid_Column_Count;
	Parms.WeatherActor_Location = WeatherActor_Location;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.UpdateNightOrDayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetNormalizedDayHalfWayPointTime_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::UpdateNightOrDayState(float CallFunc_GetNormalizedDayHalfWayPointTime_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "UpdateNightOrDayState");

	Params::ABP_TimeOfDayManager_C_UpdateNightOrDayState_Params Parms{};

	Parms.CallFunc_GetNormalizedDayHalfWayPointTime_ReturnValue = CallFunc_GetNormalizedDayHalfWayPointTime_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_B_ImplicitCast = CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Street_Light_Intensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetNormalizedVisualTime_VisualTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LightIntensity_C*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetStreetLightIntensity_Intensity_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Street_Light_Intensity(double CallFunc_GetNormalizedVisualTime_VisualTime, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue, class UBP_LightIntensity_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast, double CallFunc_SetStreetLightIntensity_Intensity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Street_Light_Intensity");

	Params::ABP_TimeOfDayManager_C_Street_Light_Intensity_Params Parms{};

	Parms.CallFunc_GetNormalizedVisualTime_VisualTime = CallFunc_GetNormalizedVisualTime_VisualTime;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue = CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast = CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast;
	Parms.CallFunc_SetStreetLightIntensity_Intensity_ImplicitCast = CallFunc_SetStreetLightIntensity_Intensity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Time_Dilation_Reference
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_TimeDilation             CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::Time_Dilation_Reference(int32 CallFunc_Conv_BoolToInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool K2Node_SwitchInteger_CmpSuccess, class FName CallFunc_Array_Get_Item, const struct FS_TimeDilation& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UCurveFloat* CallFunc_Array_Get_Item_1, class UCurveFloat* CallFunc_Array_Get_Item_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Time_Dilation_Reference");

	Params::ABP_TimeOfDayManager_C_Time_Dilation_Reference_Params Parms{};

	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Setup Component References
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::Setup_Component_References()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Setup Component References");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RegisterToSimulation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameMode_C*              K2Node_DynamicCast_AsBP_Game_Mode                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RegisterToSimulation(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode, bool K2Node_DynamicCast_bSuccess, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess_1, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RegisterToSimulation");

	Params::ABP_TimeOfDayManager_C_RegisterToSimulation_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Mode = K2Node_DynamicCast_AsBP_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base = K2Node_DynamicCast_AsNWXGame_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetManager_ReturnValue = CallFunc_GetManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.GetSunIntensity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Intensity                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Intensity_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::GetSunIntensity(double* Intensity, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double K2Node_FunctionResult_Intensity_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "GetSunIntensity");

	Params::ABP_TimeOfDayManager_C_GetSunIntensity_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.K2Node_FunctionResult_Intensity_ImplicitCast = K2Node_FunctionResult_Intensity_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Intensity != nullptr)
		*Intensity = Parms.Intensity;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.SyncSpatialTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             SpatialTime                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AcceptableTimeDifference                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::SyncSpatialTime(double SpatialTime, double AcceptableTimeDifference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "SyncSpatialTime");

	Params::ABP_TimeOfDayManager_C_SyncSpatialTime_Params Parms{};

	Parms.SpatialTime = SpatialTime;
	Parms.AcceptableTimeDifference = AcceptableTimeDifference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.UpdateTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                     Stepping_Interval_Array                                          (Edit, BlueprintVisible)
// double                             AccumulatedTime                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RealmTimerResolution                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertToVisualTimeScaleFromNormalizedTime_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URealmTimerComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRealTimeElapsedSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimerResolutionInSeconds_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRealmTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInEditorPreview_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertToVisualTimeScaleFromNormalizedTime_NormalizedTime_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AdjustedTime_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::UpdateTime(const TArray<double>& Stepping_Interval_Array, double AccumulatedTime, double RealmTimerResolution, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_ConvertToVisualTimeScaleFromNormalizedTime_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue, double CallFunc_GetTimerResolutionInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetRealmTime_ReturnValue, bool CallFunc_IsInEditorPreview_ReturnValue, TArray<double>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_ConvertToVisualTimeScaleFromNormalizedTime_NormalizedTime_ImplicitCast, double K2Node_VariableSet_AdjustedTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "UpdateTime");

	Params::ABP_TimeOfDayManager_C_UpdateTime_Params Parms{};

	Parms.Stepping_Interval_Array = Stepping_Interval_Array;
	Parms.AccumulatedTime = AccumulatedTime;
	Parms.RealmTimerResolution = RealmTimerResolution;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_ConvertToVisualTimeScaleFromNormalizedTime_ReturnValue = CallFunc_ConvertToVisualTimeScaleFromNormalizedTime_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetRealTimeElapsedSeconds_ReturnValue = CallFunc_GetRealTimeElapsedSeconds_ReturnValue;
	Parms.CallFunc_GetTimerResolutionInSeconds_ReturnValue = CallFunc_GetTimerResolutionInSeconds_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetRealmTime_ReturnValue = CallFunc_GetRealmTime_ReturnValue;
	Parms.CallFunc_IsInEditorPreview_ReturnValue = CallFunc_IsInEditorPreview_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_ConvertToVisualTimeScaleFromNormalizedTime_NormalizedTime_ImplicitCast = CallFunc_ConvertToVisualTimeScaleFromNormalizedTime_NormalizedTime_ImplicitCast;
	Parms.K2Node_VariableSet_AdjustedTime_ImplicitCast = K2Node_VariableSet_AdjustedTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.GetSpatialTimeAsPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             TimeAsPercent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetGameWorldDateTime_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSecond_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMinute_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHour_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::GetSpatialTimeAsPercent(double* TimeAsPercent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FDateTime& CallFunc_GetGameWorldDateTime_ReturnValue, int32 CallFunc_GetSecond_ReturnValue, int32 CallFunc_GetMinute_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_GetHour_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "GetSpatialTimeAsPercent");

	Params::ABP_TimeOfDayManager_C_GetSpatialTimeAsPercent_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameWorldDateTime_ReturnValue = CallFunc_GetGameWorldDateTime_ReturnValue;
	Parms.CallFunc_GetSecond_ReturnValue = CallFunc_GetSecond_ReturnValue;
	Parms.CallFunc_GetMinute_ReturnValue = CallFunc_GetMinute_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_GetHour_ReturnValue = CallFunc_GetHour_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeAsPercent != nullptr)
		*TimeAsPercent = Parms.TimeAsPercent;

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInEditorPreview_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::UserConstructionScript(bool CallFunc_IsInEditorPreview_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "UserConstructionScript");

	Params::ABP_TimeOfDayManager_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsInEditorPreview_ReturnValue = CallFunc_IsInEditorPreview_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PrintTimeOfDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::PrintTimeOfDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PrintTimeOfDay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.StartTimeOfDayLogging
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::StartTimeOfDayLogging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "StartTimeOfDayLogging");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.StopTimeOfDayLogging
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::StopTimeOfDayLogging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "StopTimeOfDayLogging");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.FreezeClientTimeOfDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::FreezeClientTimeOfDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "FreezeClientTimeOfDay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ResetClientTimeOfDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::ResetClientTimeOfDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ResetClientTimeOfDay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.SetClientTimeOfDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewTimeOfDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::SetClientTimeOfDay(double NewTimeOfDay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "SetClientTimeOfDay");

	Params::ABP_TimeOfDayManager_C_SetClientTimeOfDay_Params Parms{};

	Parms.NewTimeOfDay = NewTimeOfDay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.SetClientTimeOfDayScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewTimeScale                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::SetClientTimeOfDayScale(double NewTimeScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "SetClientTimeOfDayScale");

	Params::ABP_TimeOfDayManager_C_SetClientTimeOfDayScale_Params Parms{};

	Parms.NewTimeScale = NewTimeScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ReceiveTick");

	Params::ABP_TimeOfDayManager_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmDayBrightExposure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmDayBrightExposure(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmDayBrightExposure");

	Params::ABP_TimeOfDayManager_C_RealmDayBrightExposure_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmNightBrightExposure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmNightBrightExposure(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmNightBrightExposure");

	Params::ABP_TimeOfDayManager_C_RealmNightBrightExposure_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmAtmosphere
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmAtmosphere(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmAtmosphere");

	Params::ABP_TimeOfDayManager_C_RealmAtmosphere_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmLUT
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmLUT(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmLUT");

	Params::ABP_TimeOfDayManager_C_RealmLUT_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmCloud
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmCloud(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmCloud");

	Params::ABP_TimeOfDayManager_C_RealmCloud_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmAurora
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmAurora(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmAurora");

	Params::ABP_TimeOfDayManager_C_RealmAurora_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmWeather
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmWeather(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmWeather");

	Params::ABP_TimeOfDayManager_C_RealmWeather_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmSeason
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmSeason(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmSeason");

	Params::ABP_TimeOfDayManager_C_RealmSeason_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmAtmMoonVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmAtmMoonVisibility(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmAtmMoonVisibility");

	Params::ABP_TimeOfDayManager_C_RealmAtmMoonVisibility_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmRingtoggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmRingtoggle(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmRingtoggle");

	Params::ABP_TimeOfDayManager_C_RealmRingtoggle_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmDayExposure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmDayExposure(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmDayExposure");

	Params::ABP_TimeOfDayManager_C_RealmDayExposure_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmDawnDuskExposure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmDawnDuskExposure(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmDawnDuskExposure");

	Params::ABP_TimeOfDayManager_C_RealmDawnDuskExposure_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmNightExposure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmNightExposure(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmNightExposure");

	Params::ABP_TimeOfDayManager_C_RealmNightExposure_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RapidColorAdjustPreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RapidColorAdjustPreset(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RapidColorAdjustPreset");

	Params::ABP_TimeOfDayManager_C_RapidColorAdjustPreset_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmCelestialIntensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmCelestialIntensity(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmCelestialIntensity");

	Params::ABP_TimeOfDayManager_C_RealmCelestialIntensity_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmCelestialType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmCelestialType(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmCelestialType");

	Params::ABP_TimeOfDayManager_C_RealmCelestialType_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmCloudAlbedo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmCloudAlbedo(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmCloudAlbedo");

	Params::ABP_TimeOfDayManager_C_RealmCloudAlbedo_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmFogDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmFogDay(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmFogDay");

	Params::ABP_TimeOfDayManager_C_RealmFogDay_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmFogNight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmFogNight(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmFogNight");

	Params::ABP_TimeOfDayManager_C_RealmFogNight_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmFaeMagic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmFaeMagic(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmFaeMagic");

	Params::ABP_TimeOfDayManager_C_RealmFaeMagic_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmFaeMagicAlt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmFaeMagicAlt(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmFaeMagicAlt");

	Params::ABP_TimeOfDayManager_C_RealmFaeMagicAlt_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmRingType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmRingType(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmRingType");

	Params::ABP_TimeOfDayManager_C_RealmRingType_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmSecondaryMoonColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmSecondaryMoonColor(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmSecondaryMoonColor");

	Params::ABP_TimeOfDayManager_C_RealmSecondaryMoonColor_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmColorMaster
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmColorMaster(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmColorMaster");

	Params::ABP_TimeOfDayManager_C_RealmColorMaster_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmColorSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmColorSelect(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmColorSelect");

	Params::ABP_TimeOfDayManager_C_RealmColorSelect_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ManualCloudControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OFF                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ManualCloudControl(int32 OFF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ManualCloudControl");

	Params::ABP_TimeOfDayManager_C_ManualCloudControl_Params Parms{};

	Parms.OFF = OFF;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.CascadeScalabilityOverride
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OFF                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::CascadeScalabilityOverride(int32 OFF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "CascadeScalabilityOverride");

	Params::ABP_TimeOfDayManager_C_CascadeScalabilityOverride_Params Parms{};

	Parms.OFF = OFF;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RealmFogVolumeLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RealmFogVolumeLevel(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RealmFogVolumeLevel");

	Params::ABP_TimeOfDayManager_C_RealmFogVolumeLevel_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.CloudPhase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Phase                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::CloudPhase(double Phase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "CloudPhase");

	Params::ABP_TimeOfDayManager_C_CloudPhase_Params Parms{};

	Parms.Phase = Phase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.CloudSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::CloudSpeed(double Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "CloudSpeed");

	Params::ABP_TimeOfDayManager_C_CloudSpeed_Params Parms{};

	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.BWSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::BWSwitch(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "BWSwitch");

	Params::ABP_TimeOfDayManager_C_BWSwitch_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.OnTrackedSettingChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETrackedGameUserSetting Setting                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::OnTrackedSettingChanged(enum class ETrackedGameUserSetting Setting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "OnTrackedSettingChanged");

	Params::ABP_TimeOfDayManager_C_OnTrackedSettingChanged_Params Parms{};

	Parms.Setting = Setting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.RapidColorBiomeAdjust
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::RapidColorBiomeAdjust(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "RapidColorBiomeAdjust");

	Params::ABP_TimeOfDayManager_C_RapidColorBiomeAdjust_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ShadowCacheSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ShadowCacheSpeed(double Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ShadowCacheSpeed");

	Params::ABP_TimeOfDayManager_C_ShadowCacheSpeed_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ReceiveEndPlay");

	Params::ABP_TimeOfDayManager_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.Multicast_Interpolate_Final_Gather
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDayManager_C::Multicast_Interpolate_Final_Gather()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "Multicast_Interpolate_Final_Gather");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.PPMSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::PPMSwitch(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "PPMSwitch");

	Params::ABP_TimeOfDayManager_C_PPMSwitch_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.ExecuteUbergraph_BP_TimeOfDayManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URealmDataSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindDataProcessor_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmDataSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmCardsProcessor*        K2Node_DynamicCast_AsRealm_Cards_Processor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindDataProcessor_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmCardsProcessor*        K2Node_DynamicCast_AsRealm_Cards_Processor_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_NewTimeOfDay                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_NewTimeScale                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SimulationMonitorComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AWindDirectionalSource*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_29                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_28                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_27                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_26                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_25                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_24                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_23                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_22                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_21                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_20                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_19                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_18                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_17                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_16                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_15                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_14                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_13                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_12                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ON_OFF_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ON_OFF                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmTimerComponent*        CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Phase                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Speed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ETrackedGameUserSetting K2Node_CustomEvent_Setting                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Number_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameRuleProvider>CallFunc_BindEventTo_GameRuleEvents_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameRuleProvider>CallFunc_UnbindEventFrom_GameRuleEvents_self_CastInput           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Lumen_FinalGather_Alpha_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Lumen_FinalGather_Alpha_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::ExecuteUbergraph_BP_TimeOfDayManager(int32 EntryPoint, int32 K2Node_CustomEvent_Number, bool Temp_bool_Variable, class URealmDataSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_FindDataProcessor_ReturnValue, class URealmDataSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class URealmCardsProcessor* K2Node_DynamicCast_AsRealm_Cards_Processor, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_FindDataProcessor_ReturnValue_1, class URealmCardsProcessor* K2Node_DynamicCast_AsRealm_Cards_Processor_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue, double K2Node_CustomEvent_NewTimeOfDay, double K2Node_CustomEvent_NewTimeScale, float K2Node_Event_DeltaSeconds, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UBP_SimulationMonitorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AWindDirectionalSource* CallFunc_FinishSpawningActor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, double K2Node_Select_Default, class FText CallFunc_Conv_BoolToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 K2Node_CustomEvent_Number_29, int32 K2Node_CustomEvent_Number_28, int32 K2Node_CustomEvent_Number_27, int32 K2Node_CustomEvent_Number_26, int32 K2Node_CustomEvent_Number_25, int32 K2Node_CustomEvent_Number_24, int32 K2Node_CustomEvent_Number_23, int32 K2Node_CustomEvent_Number_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_Number_21, int32 K2Node_CustomEvent_Number_20, int32 K2Node_CustomEvent_Number_19, int32 K2Node_CustomEvent_Number_18, int32 K2Node_CustomEvent_Number_17, int32 K2Node_CustomEvent_Number_16, int32 K2Node_CustomEvent_Number_15, int32 K2Node_CustomEvent_Number_14, int32 K2Node_CustomEvent_Number_13, int32 K2Node_CustomEvent_Number_12, int32 K2Node_CustomEvent_Number_11, int32 K2Node_CustomEvent_Number_10, int32 K2Node_CustomEvent_Number_9, int32 K2Node_CustomEvent_Number_8, int32 K2Node_CustomEvent_Number_7, int32 K2Node_CustomEvent_Number_6, int32 K2Node_CustomEvent_Number_5, int32 K2Node_CustomEvent_ON_OFF_1, bool CallFunc_Conv_IntToBool_ReturnValue, int32 K2Node_CustomEvent_ON_OFF, bool CallFunc_Conv_IntToBool_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 K2Node_CustomEvent_Number_4, double K2Node_CustomEvent_Phase, double K2Node_CustomEvent_Speed, int32 K2Node_CustomEvent_Number_3, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class ETrackedGameUserSetting K2Node_CustomEvent_Setting, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 K2Node_CustomEvent_Number_2, double K2Node_CustomEvent_Number_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class IGameRuleProvider> CallFunc_BindEventTo_GameRuleEvents_self_CastInput, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TScriptInterface<class IGameRuleProvider> CallFunc_UnbindEventFrom_GameRuleEvents_self_CastInput, double K2Node_VariableSet_Lumen_FinalGather_Alpha_ImplicitCast, double K2Node_VariableSet_Lumen_FinalGather_Alpha_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "ExecuteUbergraph_BP_TimeOfDayManager");

	Params::ABP_TimeOfDayManager_C_ExecuteUbergraph_BP_TimeOfDayManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Number = K2Node_CustomEvent_Number;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FindDataProcessor_ReturnValue = CallFunc_FindDataProcessor_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsRealm_Cards_Processor = K2Node_DynamicCast_AsRealm_Cards_Processor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindDataProcessor_ReturnValue_1 = CallFunc_FindDataProcessor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsRealm_Cards_Processor_1 = K2Node_DynamicCast_AsRealm_Cards_Processor_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_NewTimeOfDay = K2Node_CustomEvent_NewTimeOfDay;
	Parms.K2Node_CustomEvent_NewTimeScale = K2Node_CustomEvent_NewTimeScale;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_BoolToText_ReturnValue_1 = CallFunc_Conv_BoolToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CustomEvent_Number_29 = K2Node_CustomEvent_Number_29;
	Parms.K2Node_CustomEvent_Number_28 = K2Node_CustomEvent_Number_28;
	Parms.K2Node_CustomEvent_Number_27 = K2Node_CustomEvent_Number_27;
	Parms.K2Node_CustomEvent_Number_26 = K2Node_CustomEvent_Number_26;
	Parms.K2Node_CustomEvent_Number_25 = K2Node_CustomEvent_Number_25;
	Parms.K2Node_CustomEvent_Number_24 = K2Node_CustomEvent_Number_24;
	Parms.K2Node_CustomEvent_Number_23 = K2Node_CustomEvent_Number_23;
	Parms.K2Node_CustomEvent_Number_22 = K2Node_CustomEvent_Number_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Number_21 = K2Node_CustomEvent_Number_21;
	Parms.K2Node_CustomEvent_Number_20 = K2Node_CustomEvent_Number_20;
	Parms.K2Node_CustomEvent_Number_19 = K2Node_CustomEvent_Number_19;
	Parms.K2Node_CustomEvent_Number_18 = K2Node_CustomEvent_Number_18;
	Parms.K2Node_CustomEvent_Number_17 = K2Node_CustomEvent_Number_17;
	Parms.K2Node_CustomEvent_Number_16 = K2Node_CustomEvent_Number_16;
	Parms.K2Node_CustomEvent_Number_15 = K2Node_CustomEvent_Number_15;
	Parms.K2Node_CustomEvent_Number_14 = K2Node_CustomEvent_Number_14;
	Parms.K2Node_CustomEvent_Number_13 = K2Node_CustomEvent_Number_13;
	Parms.K2Node_CustomEvent_Number_12 = K2Node_CustomEvent_Number_12;
	Parms.K2Node_CustomEvent_Number_11 = K2Node_CustomEvent_Number_11;
	Parms.K2Node_CustomEvent_Number_10 = K2Node_CustomEvent_Number_10;
	Parms.K2Node_CustomEvent_Number_9 = K2Node_CustomEvent_Number_9;
	Parms.K2Node_CustomEvent_Number_8 = K2Node_CustomEvent_Number_8;
	Parms.K2Node_CustomEvent_Number_7 = K2Node_CustomEvent_Number_7;
	Parms.K2Node_CustomEvent_Number_6 = K2Node_CustomEvent_Number_6;
	Parms.K2Node_CustomEvent_Number_5 = K2Node_CustomEvent_Number_5;
	Parms.K2Node_CustomEvent_ON_OFF_1 = K2Node_CustomEvent_ON_OFF_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_CustomEvent_ON_OFF = K2Node_CustomEvent_ON_OFF;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Number_4 = K2Node_CustomEvent_Number_4;
	Parms.K2Node_CustomEvent_Phase = K2Node_CustomEvent_Phase;
	Parms.K2Node_CustomEvent_Speed = K2Node_CustomEvent_Speed;
	Parms.K2Node_CustomEvent_Number_3 = K2Node_CustomEvent_Number_3;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.K2Node_CustomEvent_Setting = K2Node_CustomEvent_Setting;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_Number_2 = K2Node_CustomEvent_Number_2;
	Parms.K2Node_CustomEvent_Number_1 = K2Node_CustomEvent_Number_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_BindEventTo_GameRuleEvents_self_CastInput = CallFunc_BindEventTo_GameRuleEvents_self_CastInput;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_UnbindEventFrom_GameRuleEvents_self_CastInput = CallFunc_UnbindEventFrom_GameRuleEvents_self_CastInput;
	Parms.K2Node_VariableSet_Lumen_FinalGather_Alpha_ImplicitCast = K2Node_VariableSet_Lumen_FinalGather_Alpha_ImplicitCast;
	Parms.K2Node_VariableSet_Lumen_FinalGather_Alpha_ImplicitCast_1 = K2Node_VariableSet_Lumen_FinalGather_Alpha_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDayManager.BP_TimeOfDayManager_C.NightDayStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDayManager_C::NightDayStateChanged__DelegateSignature(bool IsNight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDayManager_C", "NightDayStateChanged__DelegateSignature");

	Params::ABP_TimeOfDayManager_C_NightDayStateChanged__DelegateSignature_Params Parms{};

	Parms.IsNight = IsNight;

	UObject::ProcessEvent(Func, &Parms);

}

}


