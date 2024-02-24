#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Portable_Beacon.BP_Portable_Beacon_C
// (Actor)

class UClass* ABP_Portable_Beacon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Portable_Beacon_C");

	return Clss;
}


// BP_Portable_Beacon_C BP_Portable_Beacon.Default__BP_Portable_Beacon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Portable_Beacon_C* ABP_Portable_Beacon_C::GetDefaultObj()
{
	static class ABP_Portable_Beacon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Portable_Beacon_C*>(ABP_Portable_Beacon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Portable_Beacon.BP_Portable_Beacon_C.UpdateBeaconStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasWidgetBeenConstructed_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Portable_Beacon_C::UpdateBeaconStyle(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasWidgetBeenConstructed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Portable_Beacon_C", "UpdateBeaconStyle");

	Params::ABP_Portable_Beacon_C_UpdateBeaconStyle_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_HasWidgetBeenConstructed_ReturnValue = CallFunc_HasWidgetBeenConstructed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Portable_Beacon.BP_Portable_Beacon_C.OnRep_SelectedIconIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Portable_Beacon_C::OnRep_SelectedIconIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Portable_Beacon_C", "OnRep_SelectedIconIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Portable_Beacon.BP_Portable_Beacon_C.OnRep_BeaconColour
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Portable_Beacon_C::OnRep_BeaconColour()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Portable_Beacon_C", "OnRep_BeaconColour");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Portable_Beacon.BP_Portable_Beacon_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Portable_Beacon_C::Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Portable_Beacon_C", "Deployable_Interact");

	Params::ABP_Portable_Beacon_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Portable_Beacon.BP_Portable_Beacon_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Portable_Beacon_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Portable_Beacon_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Portable_Beacon.BP_Portable_Beacon_C.ExecuteUbergraph_BP_Portable_Beacon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Portable_Beacon_C::ExecuteUbergraph_BP_Portable_Beacon(int32 EntryPoint, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Portable_Beacon_C", "ExecuteUbergraph_BP_Portable_Beacon");

	Params::ABP_Portable_Beacon_C_ExecuteUbergraph_BP_Portable_Beacon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue = CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Portable_Beacon.BP_Portable_Beacon_C.BeaconStyleUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Portable_Beacon_C::BeaconStyleUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Portable_Beacon_C", "BeaconStyleUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


