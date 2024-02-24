#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Trail_Beacon.BP_Trail_Beacon_C
// (Actor)

class UClass* ABP_Trail_Beacon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Trail_Beacon_C");

	return Clss;
}


// BP_Trail_Beacon_C BP_Trail_Beacon.Default__BP_Trail_Beacon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Trail_Beacon_C* ABP_Trail_Beacon_C::GetDefaultObj()
{
	static class ABP_Trail_Beacon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Trail_Beacon_C*>(ABP_Trail_Beacon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Trail_Beacon.BP_Trail_Beacon_C.UpdatePreviousBeaconActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PreviousBeaconActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetIcarusUID_ReturnValue                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Trail_Beacon_C::UpdatePreviousBeaconActor(class AActor* PreviousBeaconActor, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetIcarusUID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trail_Beacon_C", "UpdatePreviousBeaconActor");

	Params::ABP_Trail_Beacon_C_UpdatePreviousBeaconActor_Params Parms{};

	Parms.PreviousBeaconActor = PreviousBeaconActor;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIcarusUID_ReturnValue = CallFunc_GetIcarusUID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Trail_Beacon.BP_Trail_Beacon_C.FindPreviousBeaconActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Trail_Beacon_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_Trail_Beacon_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetIcarusUID_ReturnValue                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Trail_Beacon_C::FindPreviousBeaconActor(bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Trail_Beacon_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Trail_Beacon_C* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetIcarusUID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trail_Beacon_C", "FindPreviousBeaconActor");

	Params::ABP_Trail_Beacon_C_FindPreviousBeaconActor_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetIcarusUID_ReturnValue = CallFunc_GetIcarusUID_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Trail_Beacon.BP_Trail_Beacon_C.UpdateBeaconStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasWidgetBeenConstructed_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Trail_Beacon_C::UpdateBeaconStyle(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasWidgetBeenConstructed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trail_Beacon_C", "UpdateBeaconStyle");

	Params::ABP_Trail_Beacon_C_UpdateBeaconStyle_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_HasWidgetBeenConstructed_ReturnValue = CallFunc_HasWidgetBeenConstructed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Trail_Beacon.BP_Trail_Beacon_C.OnRep_SelectedIconIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Trail_Beacon_C::OnRep_SelectedIconIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trail_Beacon_C", "OnRep_SelectedIconIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Trail_Beacon.BP_Trail_Beacon_C.OnRep_BeaconColour
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Trail_Beacon_C::OnRep_BeaconColour()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trail_Beacon_C", "OnRep_BeaconColour");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Trail_Beacon.BP_Trail_Beacon_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Trail_Beacon_C::Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trail_Beacon_C", "Deployable_Interact");

	Params::ABP_Trail_Beacon_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Trail_Beacon.BP_Trail_Beacon_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Trail_Beacon_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trail_Beacon_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Trail_Beacon.BP_Trail_Beacon_C.ExecuteUbergraph_BP_Trail_Beacon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindPreviousBeaconActor_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Trail_Beacon_C::ExecuteUbergraph_BP_Trail_Beacon(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_FindPreviousBeaconActor_Success, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trail_Beacon_C", "ExecuteUbergraph_BP_Trail_Beacon");

	Params::ABP_Trail_Beacon_C_ExecuteUbergraph_BP_Trail_Beacon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindPreviousBeaconActor_Success = CallFunc_FindPreviousBeaconActor_Success;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Trail_Beacon.BP_Trail_Beacon_C.BeaconStyleUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Trail_Beacon_C::BeaconStyleUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trail_Beacon_C", "BeaconStyleUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


