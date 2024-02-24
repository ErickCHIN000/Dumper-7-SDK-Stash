#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PB_ZoneListItem.WBP_PB_ZoneListItem_C
// (None)

class UClass* UWBP_PB_ZoneListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PB_ZoneListItem_C");

	return Clss;
}


// WBP_PB_ZoneListItem_C WBP_PB_ZoneListItem.Default__WBP_PB_ZoneListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PB_ZoneListItem_C* UWBP_PB_ZoneListItem_C::GetDefaultObj()
{
	static class UWBP_PB_ZoneListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PB_ZoneListItem_C*>(UWBP_PB_ZoneListItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PB_ZoneListItem.WBP_PB_ZoneListItem_C.PopulateData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CampaginProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CampaignTotal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        ZONE                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPuzzleDatabase*             PuzzleDatabase                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PB_ZoneListItem_C::PopulateData(int32 CampaginProgress, int32 CampaignTotal, enum class EMainMapZoneName& ZONE, class UPuzzleDatabase*& PuzzleDatabase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PB_ZoneListItem_C", "PopulateData");

	Params::UWBP_PB_ZoneListItem_C_PopulateData_Params Parms{};

	Parms.CampaginProgress = CampaginProgress;
	Parms.CampaignTotal = CampaignTotal;
	Parms.ZONE = ZONE;
	Parms.PuzzleDatabase = PuzzleDatabase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PB_ZoneListItem.WBP_PB_ZoneListItem_C.OnPressed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PB_ZoneListItem_C::OnPressed_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PB_ZoneListItem_C", "OnPressed_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PB_ZoneListItem.WBP_PB_ZoneListItem_C.OnCampaignClick_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PB_ZoneListItem_C::OnCampaignClick_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PB_ZoneListItem_C", "OnCampaignClick_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PB_ZoneListItem.WBP_PB_ZoneListItem_C.ExecuteUbergraph_WBP_PB_ZoneListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_CampaginProgress                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CampaignTotal                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        K2Node_CustomEvent_Zone                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPuzzleDatabase*             K2Node_CustomEvent_PuzzleDatabase                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetZoneCompletion_OutSolved                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetZoneCompletion_OutTotal                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetZoneCompletion_Percent                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetZoneCompletion_PercentStr                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class UZoneData*                   CallFunc_GetZoneData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZoneDataEntry*              CallFunc_ZoneEnum_to_Zone_ReturnValue                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PB_ZoneListItem_C::ExecuteUbergraph_WBP_PB_ZoneListItem(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_CampaginProgress, int32 K2Node_CustomEvent_CampaignTotal, enum class EMainMapZoneName K2Node_CustomEvent_Zone, class UPuzzleDatabase* K2Node_CustomEvent_PuzzleDatabase, int32 CallFunc_GetZoneCompletion_OutSolved, int32 CallFunc_GetZoneCompletion_OutTotal, int32 CallFunc_GetZoneCompletion_Percent, const class FString& CallFunc_GetZoneCompletion_PercentStr, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UZoneData* CallFunc_GetZoneData_ReturnValue, class UZoneDataEntry* CallFunc_ZoneEnum_to_Zone_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PB_ZoneListItem_C", "ExecuteUbergraph_WBP_PB_ZoneListItem");

	Params::UWBP_PB_ZoneListItem_C_ExecuteUbergraph_WBP_PB_ZoneListItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_CampaginProgress = K2Node_CustomEvent_CampaginProgress;
	Parms.K2Node_CustomEvent_CampaignTotal = K2Node_CustomEvent_CampaignTotal;
	Parms.K2Node_CustomEvent_Zone = K2Node_CustomEvent_Zone;
	Parms.K2Node_CustomEvent_PuzzleDatabase = K2Node_CustomEvent_PuzzleDatabase;
	Parms.CallFunc_GetZoneCompletion_OutSolved = CallFunc_GetZoneCompletion_OutSolved;
	Parms.CallFunc_GetZoneCompletion_OutTotal = CallFunc_GetZoneCompletion_OutTotal;
	Parms.CallFunc_GetZoneCompletion_Percent = CallFunc_GetZoneCompletion_Percent;
	Parms.CallFunc_GetZoneCompletion_PercentStr = CallFunc_GetZoneCompletion_PercentStr;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetZoneData_ReturnValue = CallFunc_GetZoneData_ReturnValue;
	Parms.CallFunc_ZoneEnum_to_Zone_ReturnValue = CallFunc_ZoneEnum_to_Zone_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PB_ZoneListItem.WBP_PB_ZoneListItem_C.OnCampaignClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMainMapZoneName        ZoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PB_ZoneListItem_C::OnCampaignClick__DelegateSignature(enum class EMainMapZoneName ZoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PB_ZoneListItem_C", "OnCampaignClick__DelegateSignature");

	Params::UWBP_PB_ZoneListItem_C_OnCampaignClick__DelegateSignature_Params Parms{};

	Parms.ZoneName = ZoneName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PB_ZoneListItem.WBP_PB_ZoneListItem_C.OnPuzzleClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMainMapZoneName        ZoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PB_ZoneListItem_C::OnPuzzleClick__DelegateSignature(enum class EMainMapZoneName ZoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PB_ZoneListItem_C", "OnPuzzleClick__DelegateSignature");

	Params::UWBP_PB_ZoneListItem_C_OnPuzzleClick__DelegateSignature_Params Parms{};

	Parms.ZoneName = ZoneName;

	UObject::ProcessEvent(Func, &Parms);

}

}


