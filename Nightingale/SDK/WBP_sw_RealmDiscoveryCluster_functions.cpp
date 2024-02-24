#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C
// (None)

class UClass* UWBP_sw_RealmDiscoveryCluster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmDiscoveryCluster_C");

	return Clss;
}


// WBP_sw_RealmDiscoveryCluster_C WBP_sw_RealmDiscoveryCluster.Default__WBP_sw_RealmDiscoveryCluster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmDiscoveryCluster_C* UWBP_sw_RealmDiscoveryCluster_C::GetDefaultObj()
{
	static class UWBP_sw_RealmDiscoveryCluster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmDiscoveryCluster_C*>(UWBP_sw_RealmDiscoveryCluster_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.DisplayNoInfoText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmDiscoveryCluster_C::DisplayNoInfoText(bool ShouldDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_C", "DisplayNoInfoText");

	Params::UWBP_sw_RealmDiscoveryCluster_C_DisplayNoInfoText_Params Parms{};

	Parms.ShouldDisplay = ShouldDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.PreviewOnly_PopulateDiscoveries
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXClusterCollectionPresentationDataK2Node_MakeStruct_NWXClusterCollectionPresentationData           (None)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_RealmDiscoveryCluster_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmDiscoveryCluster_C::PreviewOnly_PopulateDiscoveries(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FNWXClusterCollectionPresentationData& K2Node_MakeStruct_NWXClusterCollectionPresentationData, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_sw_RealmDiscoveryCluster_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_C", "PreviewOnly_PopulateDiscoveries");

	Params::UWBP_sw_RealmDiscoveryCluster_C_PreviewOnly_PopulateDiscoveries_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_NWXClusterCollectionPresentationData = K2Node_MakeStruct_NWXClusterCollectionPresentationData;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.GetNumberOfEntries
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NumberOfEntries                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmDiscoveryCluster_C::GetNumberOfEntries(int32* NumberOfEntries, int32 CallFunc_GetChildrenCount_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_C", "GetNumberOfEntries");

	Params::UWBP_sw_RealmDiscoveryCluster_C_GetNumberOfEntries_Params Parms{};

	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NumberOfEntries != nullptr)
		*NumberOfEntries = Parms.NumberOfEntries;

}


// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.HasEntries
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasEntries                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfEntries_NumberOfEntries                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmDiscoveryCluster_C::HasEntries(bool* HasEntries, int32 CallFunc_GetNumberOfEntries_NumberOfEntries, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_C", "HasEntries");

	Params::UWBP_sw_RealmDiscoveryCluster_C_HasEntries_Params Parms{};

	Parms.CallFunc_GetNumberOfEntries_NumberOfEntries = CallFunc_GetNumberOfEntries_NumberOfEntries;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasEntries != nullptr)
		*HasEntries = Parms.HasEntries;

}


// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.PopulateDiscoveries
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FNWXClusterCollectionPresentationData>NewClusterCollectionPresentationData                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXClusterCollectionPresentationDataCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_RealmDiscoveryCluster_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmDiscoveryCluster_C::PopulateDiscoveries(TArray<struct FNWXClusterCollectionPresentationData>& NewClusterCollectionPresentationData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FNWXClusterCollectionPresentationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_sw_RealmDiscoveryCluster_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_C", "PopulateDiscoveries");

	Params::UWBP_sw_RealmDiscoveryCluster_C_PopulateDiscoveries_Params Parms{};

	Parms.NewClusterCollectionPresentationData = NewClusterCollectionPresentationData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmDiscoveryCluster_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmDiscoveryCluster_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_C", "PreConstruct");

	Params::UWBP_sw_RealmDiscoveryCluster_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.ExecuteUbergraph_WBP_sw_RealmDiscoveryCluster
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmDiscoveryCluster_C::ExecuteUbergraph_WBP_sw_RealmDiscoveryCluster(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_C", "ExecuteUbergraph_WBP_sw_RealmDiscoveryCluster");

	Params::UWBP_sw_RealmDiscoveryCluster_C_ExecuteUbergraph_WBP_sw_RealmDiscoveryCluster_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


