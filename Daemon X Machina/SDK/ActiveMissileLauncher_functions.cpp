#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActiveMissileLauncher.ActiveMissileLauncher_C
// (Actor)

class UClass* AActiveMissileLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveMissileLauncher_C");

	return Clss;
}


// ActiveMissileLauncher_C ActiveMissileLauncher.Default__ActiveMissileLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AActiveMissileLauncher_C* AActiveMissileLauncher_C::GetDefaultObj()
{
	static class AActiveMissileLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AActiveMissileLauncher_C*>(AActiveMissileLauncher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActiveMissileLauncher.ActiveMissileLauncher_C.GetTargetList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              TargetList                                                       (Parm, OutParm, ZeroConstructor)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULockonComponent_C*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AActiveMissileLauncher_C::GetTargetList(TArray<class AActor*>* TargetList, TArray<class AActor*>& K2Node_MakeArray_Array, class AActor* CallFunc_GetOwner_ReturnValue, class ULockonComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveMissileLauncher_C", "GetTargetList");

	Params::AActiveMissileLauncher_C_GetTargetList_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetList != nullptr)
		*TargetList = std::move(Parms.TargetList);

}


// Function ActiveMissileLauncher.ActiveMissileLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AActiveMissileLauncher_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveMissileLauncher_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActiveMissileLauncher.ActiveMissileLauncher_C.StartLaunch
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AActiveMissileLauncher_C::StartLaunch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveMissileLauncher_C", "StartLaunch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActiveMissileLauncher.ActiveMissileLauncher_C.PlayMarkerAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AActiveMissileLauncher_C::PlayMarkerAnimation(class UUserWidget* Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveMissileLauncher_C", "PlayMarkerAnimation");

	Params::AActiveMissileLauncher_C_PlayMarkerAnimation_Params Parms{};

	Parms.Marker = Marker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActiveMissileLauncher.ActiveMissileLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AActiveMissileLauncher_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveMissileLauncher_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActiveMissileLauncher.ActiveMissileLauncher_C.OnInputEndBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AActiveMissileLauncher_C::OnInputEndBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveMissileLauncher_C", "OnInputEndBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActiveMissileLauncher.ActiveMissileLauncher_C.ExecuteUbergraph_ActiveMissileLauncher
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenalFireControlComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_marker                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_hud_matchlockon00_C*    K2Node_DynamicCast_AsMsn_Hud_Matchlockon_00                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUDMission_C*               K2Node_DynamicCast_AsHUDMission                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AActiveMissileLauncher_C::ExecuteUbergraph_ActiveMissileLauncher(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UArsenalFireControlComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UUserWidget* K2Node_Event_marker, class UMsn_hud_matchlockon00_C* K2Node_DynamicCast_AsMsn_Hud_Matchlockon_00, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUDMission_C* K2Node_DynamicCast_AsHUDMission, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveMissileLauncher_C", "ExecuteUbergraph_ActiveMissileLauncher");

	Params::AActiveMissileLauncher_C_ExecuteUbergraph_ActiveMissileLauncher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Event_marker = K2Node_Event_marker;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Matchlockon_00 = K2Node_DynamicCast_AsMsn_Hud_Matchlockon_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUDMission = K2Node_DynamicCast_AsHUDMission;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}


