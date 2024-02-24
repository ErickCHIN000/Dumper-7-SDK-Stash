#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Close_Thunder_Audio_Player.Close_Thunder_Audio_Player_C
// (SceneComponent)

class UClass* UClose_Thunder_Audio_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Close_Thunder_Audio_Player_C");

	return Clss;
}


// Close_Thunder_Audio_Player_C Close_Thunder_Audio_Player.Default__Close_Thunder_Audio_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UClose_Thunder_Audio_Player_C* UClose_Thunder_Audio_Player_C::GetDefaultObj()
{
	static class UClose_Thunder_Audio_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UClose_Thunder_Audio_Player_C*>(UClose_Thunder_Audio_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Close_Thunder_Audio_Player.Close_Thunder_Audio_Player_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UClose_Thunder_Audio_Player_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Close_Thunder_Audio_Player_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Close_Thunder_Audio_Player.Close_Thunder_Audio_Player_C.ExecuteUbergraph_Close_Thunder_Audio_Player
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUltra_Dynamic_Weather_Interface_C>K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Close_Thunder_Sound_Occlusion_Volume                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Close_Thunder_Sound_Occlusion_LPF                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUltra_Dynamic_Weather_Interface_C>K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClose_Thunder_Audio_Player_C::ExecuteUbergraph_Close_Thunder_Audio_Player(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface, bool K2Node_DynamicCast_bSuccess, double CallFunc_Get_Close_Thunder_Sound_Occlusion_Volume, double CallFunc_Get_Close_Thunder_Sound_Occlusion_LPF, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast, float CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Close_Thunder_Audio_Player_C", "ExecuteUbergraph_Close_Thunder_Audio_Player");

	Params::UClose_Thunder_Audio_Player_C_ExecuteUbergraph_Close_Thunder_Audio_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface = K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Close_Thunder_Sound_Occlusion_Volume = CallFunc_Get_Close_Thunder_Sound_Occlusion_Volume;
	Parms.CallFunc_Get_Close_Thunder_Sound_Occlusion_LPF = CallFunc_Get_Close_Thunder_Sound_Occlusion_LPF;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_1 = K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast = CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast;
	Parms.CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast = CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


