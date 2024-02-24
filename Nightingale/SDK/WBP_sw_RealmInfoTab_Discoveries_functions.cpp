#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmInfoTab_Discoveries.WBP_sw_RealmInfoTab_Discoveries_C
// (None)

class UClass* UWBP_sw_RealmInfoTab_Discoveries_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmInfoTab_Discoveries_C");

	return Clss;
}


// WBP_sw_RealmInfoTab_Discoveries_C WBP_sw_RealmInfoTab_Discoveries.Default__WBP_sw_RealmInfoTab_Discoveries_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmInfoTab_Discoveries_C* UWBP_sw_RealmInfoTab_Discoveries_C::GetDefaultObj()
{
	static class UWBP_sw_RealmInfoTab_Discoveries_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmInfoTab_Discoveries_C*>(UWBP_sw_RealmInfoTab_Discoveries_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmInfoTab_Discoveries.WBP_sw_RealmInfoTab_Discoveries_C.UpdateRealmDiscovery
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRealmSettings              Realm_Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FNWXClusterCollectionPresentationData>CallFunc_GenerateRealmRewardPresentation_ClusterCollectionsPresentationDataList(ReferenceParm)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfoTab_Discoveries_C::UpdateRealmDiscovery(const struct FRealmSettings& Realm_Settings, TArray<struct FNWXClusterCollectionPresentationData>& CallFunc_GenerateRealmRewardPresentation_ClusterCollectionsPresentationDataList, bool CallFunc_Array_IsNotEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfoTab_Discoveries_C", "UpdateRealmDiscovery");

	Params::UWBP_sw_RealmInfoTab_Discoveries_C_UpdateRealmDiscovery_Params Parms{};

	Parms.Realm_Settings = Realm_Settings;
	Parms.CallFunc_GenerateRealmRewardPresentation_ClusterCollectionsPresentationDataList = CallFunc_GenerateRealmRewardPresentation_ClusterCollectionsPresentationDataList;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfoTab_Discoveries.WBP_sw_RealmInfoTab_Discoveries_C.UpdateEssenceImageHolder
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     Essence_Rewards                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_ReturnValue                                 (UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfoTab_Discoveries_C::UpdateEssenceImageHolder(TArray<struct FInventoryEntry>& Essence_Rewards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfoTab_Discoveries_C", "UpdateEssenceImageHolder");

	Params::UWBP_sw_RealmInfoTab_Discoveries_C_UpdateEssenceImageHolder_Params Parms{};

	Parms.Essence_Rewards = Essence_Rewards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemIcon_ReturnValue = CallFunc_GetItemIcon_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


