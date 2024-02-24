#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CargoRequest.UMG_CargoRequest_C
// (None)

class UClass* UUMG_CargoRequest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CargoRequest_C");

	return Clss;
}


// UMG_CargoRequest_C UMG_CargoRequest.Default__UMG_CargoRequest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CargoRequest_C* UUMG_CargoRequest_C::GetDefaultObj()
{
	static class UUMG_CargoRequest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CargoRequest_C*>(UUMG_CargoRequest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CargoRequest.UMG_CargoRequest_C.GetSelectedLoadoutData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerLoadoutData          LoadoutData                                                      (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FItemData>           Items                                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInsuranceEnabled_Insured                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerLoadoutData          K2Node_MakeStruct_PlayerLoadoutData                              (ContainsInstancedReference)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventorySlot              CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CargoRequest_C::GetSelectedLoadoutData(struct FPlayerLoadoutData* LoadoutData, const TArray<struct FItemData>& Items, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_GetInsuranceEnabled_Insured, const struct FPlayerLoadoutData& K2Node_MakeStruct_PlayerLoadoutData, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, const struct FInventorySlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "GetSelectedLoadoutData");

	Params::UUMG_CargoRequest_C_GetSelectedLoadoutData_Params Parms{};

	Parms.Items = Items;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetInsuranceEnabled_Insured = CallFunc_GetInsuranceEnabled_Insured;
	Parms.K2Node_MakeStruct_PlayerLoadoutData = K2Node_MakeStruct_PlayerLoadoutData;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (LoadoutData != nullptr)
		*LoadoutData = std::move(Parms.LoadoutData);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.GetInsuranceEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Insured                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetInsuranceEnabled_Insured                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CargoRequest_C::GetInsuranceEnabled(bool* Insured, bool CallFunc_GetInsuranceEnabled_Insured)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "GetInsuranceEnabled");

	Params::UUMG_CargoRequest_C_GetInsuranceEnabled_Params Parms{};

	Parms.CallFunc_GetInsuranceEnabled_Insured = CallFunc_GetInsuranceEnabled_Insured;

	UObject::ProcessEvent(Func, &Parms);

	if (Insured != nullptr)
		*Insured = Parms.Insured;

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.PlayOpenAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CargoRequest_C::PlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "PlayOpenAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CargoRequest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.InitInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  CargoInventory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  MetaInventory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CargoRequest_C::InitInventory(class UInventory* CargoInventory, class UInventory* MetaInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "InitInventory");

	Params::UUMG_CargoRequest_C_InitInventory_Params Parms{};

	Parms.CargoInventory = CargoInventory;
	Parms.MetaInventory = MetaInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.BndEvt__UMG_CargoRequest_RequestButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CargoRequest_C::BndEvt__UMG_CargoRequest_RequestButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "BndEvt__UMG_CargoRequest_RequestButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_CargoRequest_C_BndEvt__UMG_CargoRequest_RequestButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.UpdateRequestTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        RemainingTimeText                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_CargoRequest_C::UpdateRequestTime(class FText RemainingTimeText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "UpdateRequestTime");

	Params::UUMG_CargoRequest_C_UpdateRequestTime_Params Parms{};

	Parms.RemainingTimeText = RemainingTimeText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.SetRequestTimeVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CargoRequest_C::SetRequestTimeVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "SetRequestTimeVisibility");

	Params::UUMG_CargoRequest_C_SetRequestTimeVisibility_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.SetRequestButtonEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CargoRequest_C::SetRequestButtonEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "SetRequestButtonEnabled");

	Params::UUMG_CargoRequest_C_SetRequestButtonEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.UpdateRequestButtonEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CargoRequest_C::UpdateRequestButtonEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "UpdateRequestButtonEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.OnCargoInventoryItemChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CargoRequest_C::OnCargoInventoryItemChanged(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "OnCargoInventoryItemChanged");

	Params::UUMG_CargoRequest_C_OnCargoInventoryItemChanged_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.SetInsuranceLocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Locked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CargoRequest_C::SetInsuranceLocked(bool Locked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "SetInsuranceLocked");

	Params::UUMG_CargoRequest_C_SetInsuranceLocked_Params Parms{};

	Parms.Locked = Locked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.ExecuteUbergraph_UMG_CargoRequest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerLoadoutData          CallFunc_GetCurrentLoadout_ReturnValue                           (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  K2Node_CustomEvent_CargoInventory                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  K2Node_CustomEvent_MetaInventory                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_RemainingTimeText                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Visible                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasItems_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Locked                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CargoRequest_C::ExecuteUbergraph_UMG_CargoRequest(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const struct FPlayerLoadoutData& CallFunc_GetCurrentLoadout_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UInventory* K2Node_CustomEvent_CargoInventory, class UInventory* K2Node_CustomEvent_MetaInventory, enum class ESlateVisibility Temp_byte_Variable_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, class FText K2Node_CustomEvent_RemainingTimeText, bool Temp_bool_Variable, bool K2Node_CustomEvent_Visible, bool K2Node_CustomEvent_Enabled, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasItems_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, bool K2Node_CustomEvent_Locked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "ExecuteUbergraph_UMG_CargoRequest");

	Params::UUMG_CargoRequest_C_ExecuteUbergraph_UMG_CargoRequest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetCurrentLoadout_ReturnValue = CallFunc_GetCurrentLoadout_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_CargoInventory = K2Node_CustomEvent_CargoInventory;
	Parms.K2Node_CustomEvent_MetaInventory = K2Node_CustomEvent_MetaInventory;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_RemainingTimeText = K2Node_CustomEvent_RemainingTimeText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_Visible = K2Node_CustomEvent_Visible;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_HasItems_ReturnValue = CallFunc_HasItems_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Locked = K2Node_CustomEvent_Locked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CargoRequest.UMG_CargoRequest_C.OnRequestButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CargoRequest_C::OnRequestButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CargoRequest_C", "OnRequestButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


