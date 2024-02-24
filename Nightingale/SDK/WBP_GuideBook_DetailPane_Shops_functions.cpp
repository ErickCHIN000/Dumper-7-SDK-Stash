#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C
// (None)

class UClass* UWBP_GuideBook_DetailPane_Shops_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GuideBook_DetailPane_Shops_C");

	return Clss;
}


// WBP_GuideBook_DetailPane_Shops_C WBP_GuideBook_DetailPane_Shops.Default__WBP_GuideBook_DetailPane_Shops_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GuideBook_DetailPane_Shops_C* UWBP_GuideBook_DetailPane_Shops_C::GetDefaultObj()
{
	static class UWBP_GuideBook_DetailPane_Shops_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GuideBook_DetailPane_Shops_C*>(UWBP_GuideBook_DetailPane_Shops_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C.OnExecuteCategoryOperation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryShop*       K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopScreen_C*           CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UShopDescriptorDataAsset*    CallFunc_GetLoadedShopDescriptor_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Shops_C::OnExecuteCategoryOperation(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UNWXMenuDataEntryShop* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop, bool K2Node_DynamicCast_bSuccess, class UWBP_ShopScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class UShopDescriptorDataAsset* CallFunc_GetLoadedShopDescriptor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Shops_C", "OnExecuteCategoryOperation");

	Params::UWBP_GuideBook_DetailPane_Shops_C_OnExecuteCategoryOperation_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_GetLoadedShopDescriptor_ReturnValue = CallFunc_GetLoadedShopDescriptor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_DetailPane_Shops_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Shops_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C.UpdateCosmetics
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetDescription_ReturnValue                              (None)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)

void UWBP_GuideBook_DetailPane_Shops_C::UpdateCosmetics(class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Shops_C", "UpdateCosmetics");

	Params::UWBP_GuideBook_DetailPane_Shops_C_UpdateCosmetics_Params Parms{};

	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C.ResetCosmetics
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_DetailPane_Shops_C::ResetCosmetics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Shops_C", "ResetCosmetics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_DetailPane_Shops_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Shops_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C.BndEvt__WBP_GuideBook_DetailPane_Shops_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Shops_C::BndEvt__WBP_GuideBook_DetailPane_Shops_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Shops_C", "BndEvt__WBP_GuideBook_DetailPane_Shops_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GuideBook_DetailPane_Shops_C_BndEvt__WBP_GuideBook_DetailPane_Shops_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C.ExecuteUbergraph_WBP_GuideBook_DetailPane_Shops
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Shops_C::ExecuteUbergraph_WBP_GuideBook_DetailPane_Shops(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Shops_C", "ExecuteUbergraph_WBP_GuideBook_DetailPane_Shops");

	Params::UWBP_GuideBook_DetailPane_Shops_C_ExecuteUbergraph_WBP_GuideBook_DetailPane_Shops_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


