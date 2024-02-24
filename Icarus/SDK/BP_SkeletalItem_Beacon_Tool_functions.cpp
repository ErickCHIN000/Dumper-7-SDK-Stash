#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C
// (Actor)

class UClass* ABP_SkeletalItem_Beacon_Tool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Beacon_Tool_C");

	return Clss;
}


// BP_SkeletalItem_Beacon_Tool_C BP_SkeletalItem_Beacon_Tool.Default__BP_SkeletalItem_Beacon_Tool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Beacon_Tool_C* ABP_SkeletalItem_Beacon_Tool_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Beacon_Tool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Beacon_Tool_C*>(ABP_SkeletalItem_Beacon_Tool_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C.LinkedBeaconDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Beacon_Tool_C::LinkedBeaconDestroyed(class AActor* Actor, enum class EEndPlayReason EndPlayReason, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Beacon_Tool_C", "LinkedBeaconDestroyed");

	Params::ABP_SkeletalItem_Beacon_Tool_C_LinkedBeaconDestroyed_Params Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C.TryRestoreLinkedBeaconActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AIcarusActor*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AIcarusActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetIcarusUID_ReturnValue                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Beacon_Tool_C::TryRestoreLinkedBeaconActor(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AIcarusActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AIcarusActor* CallFunc_Array_Get_Item, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetIcarusUID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Beacon_Tool_C", "TryRestoreLinkedBeaconActor");

	Params::ABP_SkeletalItem_Beacon_Tool_C_TryRestoreLinkedBeaconActor_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusUID_ReturnValue = CallFunc_GetIcarusUID_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C.UpdateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_BeaconTool_C*             K2Node_DynamicCast_AsW_Beacon_Tool                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Beacon_Tool_C::UpdateWidget(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UW_BeaconTool_C* K2Node_DynamicCast_AsW_Beacon_Tool, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Beacon_Tool_C", "UpdateWidget");

	Params::ABP_SkeletalItem_Beacon_Tool_C_UpdateWidget_Params Parms{};

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Beacon_Tool = K2Node_DynamicCast_AsW_Beacon_Tool;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C.OnRep_LinkedBeaconActor
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionableComponent*        CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIcarusUID_ReturnValue                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Beacon_Tool_C::OnRep_LinkedBeaconActor(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, int32 CallFunc_GetIcarusUID_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Beacon_Tool_C", "OnRep_LinkedBeaconActor");

	Params::ABP_SkeletalItem_Beacon_Tool_C_OnRep_LinkedBeaconActor_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetIcarusUID_ReturnValue = CallFunc_GetIcarusUID_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C.GetScreenWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidgetComponent* ABP_SkeletalItem_Beacon_Tool_C::GetScreenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Beacon_Tool_C", "GetScreenWidget");

	Params::ABP_SkeletalItem_Beacon_Tool_C_GetScreenWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Beacon_Tool_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Beacon_Tool_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Beacon_Tool_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Beacon_Tool_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C.ExecuteUbergraph_BP_SkeletalItem_Beacon_Tool
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_BeaconTool_C*             K2Node_DynamicCast_AsW_Beacon_Tool                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Beacon_Tool_C::ExecuteUbergraph_BP_SkeletalItem_Beacon_Tool(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UW_BeaconTool_C* K2Node_DynamicCast_AsW_Beacon_Tool, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Beacon_Tool_C", "ExecuteUbergraph_BP_SkeletalItem_Beacon_Tool");

	Params::ABP_SkeletalItem_Beacon_Tool_C_ExecuteUbergraph_BP_SkeletalItem_Beacon_Tool_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Beacon_Tool = K2Node_DynamicCast_AsW_Beacon_Tool;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


