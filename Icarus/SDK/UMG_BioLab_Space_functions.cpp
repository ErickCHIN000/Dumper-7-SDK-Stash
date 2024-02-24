#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BioLab_Space.UMG_BioLab_Space_C
// (None)

class UClass* UUMG_BioLab_Space_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BioLab_Space_C");

	return Clss;
}


// UMG_BioLab_Space_C UMG_BioLab_Space.Default__UMG_BioLab_Space_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BioLab_Space_C* UUMG_BioLab_Space_C::GetDefaultObj()
{
	static class UUMG_BioLab_Space_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BioLab_Space_C*>(UUMG_BioLab_Space_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.Initialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Main                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  Loadout                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMetaItem>           LoadoutInventory                                                 (Edit, BlueprintVisible)
// TArray<struct FMetaItem>           MetaInventory                                                    (Edit, BlueprintVisible)
// TArray<struct FDropship>           Dropships                                                        (Edit, BlueprintVisible)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FMetaItem>           CallFunc_GetMetaInventory_ReturnValue                            (ConstParm, ReferenceParm)
// TArray<struct FMetaItem>           CallFunc_GetLoadoutInventory_ReturnValue                         (ConstParm, ReferenceParm)

void UUMG_BioLab_Space_C::Initialise(class UInventory* Main, class UInventory* Loadout, const TArray<struct FMetaItem>& LoadoutInventory, const TArray<struct FMetaItem>& MetaInventory, const TArray<struct FDropship>& Dropships, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, TArray<struct FMetaItem>& CallFunc_GetMetaInventory_ReturnValue, TArray<struct FMetaItem>& CallFunc_GetLoadoutInventory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "Initialise");

	Params::UUMG_BioLab_Space_C_Initialise_Params Parms{};

	Parms.Main = Main;
	Parms.Loadout = Loadout;
	Parms.LoadoutInventory = LoadoutInventory;
	Parms.MetaInventory = MetaInventory;
	Parms.Dropships = Dropships;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_GetMetaInventory_ReturnValue = CallFunc_GetMetaInventory_ReturnValue;
	Parms.CallFunc_GetLoadoutInventory_ReturnValue = CallFunc_GetLoadoutInventory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BioLab_Space_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.BndEvt__UMG_BioLab_Space_ModifyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_Space_C::BndEvt__UMG_BioLab_Space_ModifyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "BndEvt__UMG_BioLab_Space_ModifyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_BioLab_Space_C_BndEvt__UMG_BioLab_Space_ModifyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.BndEvt__UMG_BioLab_Space_BuyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_Space_C::BndEvt__UMG_BioLab_Space_BuyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "BndEvt__UMG_BioLab_Space_BuyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_BioLab_Space_C_BndEvt__UMG_BioLab_Space_BuyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.BndEvt__UMG_BioLab_Space_InventoryListView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_Space_C::BndEvt__UMG_BioLab_Space_InventoryListView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "BndEvt__UMG_BioLab_Space_InventoryListView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature");

	Params::UUMG_BioLab_Space_C_BndEvt__UMG_BioLab_Space_InventoryListView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.ShowWeaponCustomisation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_Space_C::ShowWeaponCustomisation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "ShowWeaponCustomisation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.ShowWeaponShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_Space_C::ShowWeaponShop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "ShowWeaponShop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BioLab_Space_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.RegisterEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_Space_C::RegisterEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "RegisterEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.UnregisterEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_Space_C::UnregisterEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "UnregisterEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.OnMetaInventoryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_Space_C::OnMetaInventoryChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "OnMetaInventoryChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.HandleListItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_Space_C::HandleListItemSelected(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "HandleListItemSelected");

	Params::UUMG_BioLab_Space_C_HandleListItemSelected_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_Space.UMG_BioLab_Space_C.ExecuteUbergraph_UMG_BioLab_Space
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBioLabInventoryListItemData_C*K2Node_DynamicCast_AsBio_Lab_Inventory_List_Item_Data            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerDataComponent*        CallFunc_GetPlayerDataComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerDataComponent*        CallFunc_GetPlayerDataComponent_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerDataComponent*        CallFunc_GetPlayerDataComponent_ReturnValue_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           CallFunc_GetMetaInventoryItems_ReturnValue                       (ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemData             CallFunc_GetLivingItemData_LivingItem                            (None)
// enum class EDataValid              CallFunc_GetLivingItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBioLabInventoryListItemData_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BioLab_Space_C::ExecuteUbergraph_UMG_BioLab_Space(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, class UBioLabInventoryListItemData_C* K2Node_DynamicCast_AsBio_Lab_Inventory_List_Item_Data, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, class UObject* K2Node_ComponentBoundEvent_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue_2, TArray<struct FItemData>& CallFunc_GetMetaInventoryItems_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FLivingItemData& CallFunc_GetLivingItemData_LivingItem, enum class EDataValid CallFunc_GetLivingItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, class UBioLabInventoryListItemData_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_Space_C", "ExecuteUbergraph_UMG_BioLab_Space");

	Params::UUMG_BioLab_Space_C_ExecuteUbergraph_UMG_BioLab_Space_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_DynamicCast_AsBio_Lab_Inventory_List_Item_Data = K2Node_DynamicCast_AsBio_Lab_Inventory_List_Item_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerDataComponent_ReturnValue = CallFunc_GetPlayerDataComponent_ReturnValue;
	Parms.CallFunc_GetPlayerDataComponent_ReturnValue_1 = CallFunc_GetPlayerDataComponent_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_2 = CallFunc_GetIcarusPlayerController_IsValid_2;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_2 = CallFunc_GetIcarusPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerDataComponent_ReturnValue_2 = CallFunc_GetPlayerDataComponent_ReturnValue_2;
	Parms.CallFunc_GetMetaInventoryItems_ReturnValue = CallFunc_GetMetaInventoryItems_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetLivingItemData_LivingItem = CallFunc_GetLivingItemData_LivingItem;
	Parms.CallFunc_GetLivingItemData_Paths = CallFunc_GetLivingItemData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


