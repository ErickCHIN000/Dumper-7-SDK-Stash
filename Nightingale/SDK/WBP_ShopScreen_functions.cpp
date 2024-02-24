#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShopScreen.WBP_ShopScreen_C
// (None)

class UClass* UWBP_ShopScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShopScreen_C");

	return Clss;
}


// WBP_ShopScreen_C WBP_ShopScreen.Default__WBP_ShopScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShopScreen_C* UWBP_ShopScreen_C::GetDefaultObj()
{
	static class UWBP_ShopScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShopScreen_C*>(UWBP_ShopScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ShopScreen.WBP_ShopScreen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXShopOfferListPanelWidget*CallFunc_GetShopOfferList_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopOfferListPanel_C*   K2Node_DynamicCast_AsWBP_Shop_Offer_List_Panel                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFirstScrollChild_Output                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_ShopScreen_C::BP_GetDesiredFocusTarget(class UNWXShopOfferListPanelWidget* CallFunc_GetShopOfferList_ReturnValue, class UWBP_ShopOfferListPanel_C* K2Node_DynamicCast_AsWBP_Shop_Offer_List_Panel, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetFirstScrollChild_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopScreen_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_ShopScreen_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetShopOfferList_ReturnValue = CallFunc_GetShopOfferList_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Shop_Offer_List_Panel = K2Node_DynamicCast_AsWBP_Shop_Offer_List_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFirstScrollChild_Output = CallFunc_GetFirstScrollChild_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ShopScreen.WBP_ShopScreen_C.OnPurchaseResponse
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EShopTransactionResponseResponse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopScreen_C::OnPurchaseResponse(enum class EShopTransactionResponse Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopScreen_C", "OnPurchaseResponse");

	Params::UWBP_ShopScreen_C_OnPurchaseResponse_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopScreen.WBP_ShopScreen_C.OnPurchaseRequested
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_ShopScreen_C::OnPurchaseRequested(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopScreen_C", "OnPurchaseRequested");

	Params::UWBP_ShopScreen_C_OnPurchaseRequested_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopScreen.WBP_ShopScreen_C.EnableInput
// (Exec, Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ShopScreen_C::EnableInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopScreen_C", "EnableInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopScreen.WBP_ShopScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopScreen.WBP_ShopScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopScreen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopScreen_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopScreen.WBP_ShopScreen_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopScreen_C::CustomEvent(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopScreen_C", "CustomEvent");

	Params::UWBP_ShopScreen_C_CustomEvent_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopScreen.WBP_ShopScreen_C.ExecuteUbergraph_WBP_ShopScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopScreen_C::ExecuteUbergraph_WBP_ShopScreen(int32 EntryPoint, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopScreen_C", "ExecuteUbergraph_WBP_ShopScreen");

	Params::UWBP_ShopScreen_C_ExecuteUbergraph_WBP_ShopScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


