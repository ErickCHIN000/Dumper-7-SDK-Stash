#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_SpyglassHighlight.GC_SpyglassHighlight_C
// (None)

class UClass* UGC_SpyglassHighlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_SpyglassHighlight_C");

	return Clss;
}


// GC_SpyglassHighlight_C GC_SpyglassHighlight.Default__GC_SpyglassHighlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_SpyglassHighlight_C* UGC_SpyglassHighlight_C::GetDefaultObj()
{
	static class UGC_SpyglassHighlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_SpyglassHighlight_C*>(UGC_SpyglassHighlight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_SpyglassHighlight.GC_SpyglassHighlight_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LMyTarget                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCameraManager_C*   K2Node_DynamicCast_AsBP_Player_Camera_Manager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_SpyglassHighlight_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AActor* LMyTarget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, class ABP_PlayerCameraManager_C* K2Node_DynamicCast_AsBP_Player_Camera_Manager, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SpyglassHighlight_C", "OnActive");

	Params::UGC_SpyglassHighlight_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.LMyTarget = LMyTarget;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Camera_Manager = K2Node_DynamicCast_AsBP_Player_Camera_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_SpyglassHighlight.GC_SpyglassHighlight_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LMyTarget                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCameraManager_C*   K2Node_DynamicCast_AsBP_Player_Camera_Manager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_SpyglassHighlight_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AActor* LMyTarget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, class ABP_PlayerCameraManager_C* K2Node_DynamicCast_AsBP_Player_Camera_Manager, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SpyglassHighlight_C", "OnRemove");

	Params::UGC_SpyglassHighlight_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.LMyTarget = LMyTarget;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Camera_Manager = K2Node_DynamicCast_AsBP_Player_Camera_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


