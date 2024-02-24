#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C
// (None)

class UClass* UWBP_sw_Readiness_RealmCard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_Readiness_RealmCard_C");

	return Clss;
}


// WBP_sw_Readiness_RealmCard_C WBP_sw_Readiness_RealmCard.Default__WBP_sw_Readiness_RealmCard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_Readiness_RealmCard_C* UWBP_sw_Readiness_RealmCard_C::GetDefaultObj()
{
	static class UWBP_sw_Readiness_RealmCard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_Readiness_RealmCard_C*>(UWBP_sw_Readiness_RealmCard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.SetCardFromCardData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   CardData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UWBP_sw_Readiness_RealmCard_C::SetCardFromCardData(const struct FItemData& CardData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "SetCardFromCardData");

	Params::UWBP_sw_Readiness_RealmCard_C_SetCardFromCardData_Params Parms{};

	Parms.CardData = CardData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.SetCardArtFromCardData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   CardData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetDefaultItemFullSizeIcon_ReturnValue                  (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_Readiness_RealmCard_C::SetCardArtFromCardData(const struct FItemData& CardData, TSoftObjectPtr<class UTexture2D> CallFunc_GetDefaultItemFullSizeIcon_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "SetCardArtFromCardData");

	Params::UWBP_sw_Readiness_RealmCard_C_SetCardArtFromCardData_Params Parms{};

	Parms.CardData = CardData;
	Parms.CallFunc_GetDefaultItemFullSizeIcon_ReturnValue = CallFunc_GetDefaultItemFullSizeIcon_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.UpdatePowerLevelAndUsageCostText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_sw_Readiness_RealmCard_C::UpdatePowerLevelAndUsageCostText(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "UpdatePowerLevelAndUsageCostText");

	Params::UWBP_sw_Readiness_RealmCard_C_UpdatePowerLevelAndUsageCostText_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.GetPowerLevelAndUsageCostFromCardData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   CardData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FItemData_RealmCard         CallFunc_TryGetItemDataRealmCard_OutData                         (None)
// enum class EGetResult              CallFunc_TryGetItemDataRealmCard_Branches                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRealmCardAssetPowerLevel_ReturnValue                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_Readiness_RealmCard_C::GetPowerLevelAndUsageCostFromCardData(const struct FItemData& CardData, const struct FItemData_RealmCard& CallFunc_TryGetItemDataRealmCard_OutData, enum class EGetResult CallFunc_TryGetItemDataRealmCard_Branches, int32 CallFunc_GetRealmCardAssetPowerLevel_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "GetPowerLevelAndUsageCostFromCardData");

	Params::UWBP_sw_Readiness_RealmCard_C_GetPowerLevelAndUsageCostFromCardData_Params Parms{};

	Parms.CardData = CardData;
	Parms.CallFunc_TryGetItemDataRealmCard_OutData = CallFunc_TryGetItemDataRealmCard_OutData;
	Parms.CallFunc_TryGetItemDataRealmCard_Branches = CallFunc_TryGetItemDataRealmCard_Branches;
	Parms.CallFunc_GetRealmCardAssetPowerLevel_ReturnValue = CallFunc_GetRealmCardAssetPowerLevel_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_sw_Readiness_RealmCard_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_Readiness_RealmCard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_Readiness_RealmCard_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "PreConstruct");

	Params::UWBP_sw_Readiness_RealmCard_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_sw_Readiness_RealmCard_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "OnMouseEnter");

	Params::UWBP_sw_Readiness_RealmCard_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_sw_Readiness_RealmCard_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "OnMouseLeave");

	Params::UWBP_sw_Readiness_RealmCard_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.ExecuteUbergraph_WBP_sw_Readiness_RealmCard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UWBP_sw_Readiness_RealmCard_C::ExecuteUbergraph_WBP_sw_Readiness_RealmCard(int32 EntryPoint, class FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "ExecuteUbergraph_WBP_sw_Readiness_RealmCard");

	Params::UWBP_sw_Readiness_RealmCard_C_ExecuteUbergraph_WBP_sw_Readiness_RealmCard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.OnMouseExitedRealmCard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_sw_Readiness_RealmCard_C::OnMouseExitedRealmCard__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "OnMouseExitedRealmCard__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.OnMouseEnteredRealmCard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   CardData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UWBP_sw_Readiness_RealmCard_C::OnMouseEnteredRealmCard__DelegateSignature(const struct FItemData& CardData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Readiness_RealmCard_C", "OnMouseEnteredRealmCard__DelegateSignature");

	Params::UWBP_sw_Readiness_RealmCard_C_OnMouseEnteredRealmCard__DelegateSignature_Params Parms{};

	Parms.CardData = CardData;

	UObject::ProcessEvent(Func, &Parms);

}

}


