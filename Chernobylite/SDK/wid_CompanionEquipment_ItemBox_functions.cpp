#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C
// (None)

class UClass* UWid_CompanionEquipment_ItemBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionEquipment_ItemBox_C");

	return Clss;
}


// wid_CompanionEquipment_ItemBox_C wid_CompanionEquipment_ItemBox.Default__wid_CompanionEquipment_ItemBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionEquipment_ItemBox_C* UWid_CompanionEquipment_ItemBox_C::GetDefaultObj()
{
	static class UWid_CompanionEquipment_ItemBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionEquipment_ItemBox_C*>(UWid_CompanionEquipment_ItemBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemBox_C::Select(bool Selected, bool Temp_bool_Variable, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_1, enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "Select");

	Params::UWid_CompanionEquipment_ItemBox_C_Select_Params Parms{};

	Parms.Selected = Selected;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_GetEquippedItemAndItemInfo_EquippedItem                 (None)
// struct FItemEntry                  CallFunc_GetEquippedItemAndItemInfo_ItemInfo                     (None)
// bool                               CallFunc_GetEquippedItemAndItemInfo_IsValid                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWid_CompanionEquipment_ItemBox_C::Update(bool Temp_bool_Variable, const struct FInventoryEntry& CallFunc_GetEquippedItemAndItemInfo_EquippedItem, const struct FItemEntry& CallFunc_GetEquippedItemAndItemInfo_ItemInfo, bool CallFunc_GetEquippedItemAndItemInfo_IsValid, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "Update");

	Params::UWid_CompanionEquipment_ItemBox_C_Update_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetEquippedItemAndItemInfo_EquippedItem = CallFunc_GetEquippedItemAndItemInfo_EquippedItem;
	Parms.CallFunc_GetEquippedItemAndItemInfo_ItemInfo = CallFunc_GetEquippedItemAndItemInfo_ItemInfo;
	Parms.CallFunc_GetEquippedItemAndItemInfo_IsValid = CallFunc_GetEquippedItemAndItemInfo_IsValid;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_ItemBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "PreConstruct");

	Params::UWid_CompanionEquipment_ItemBox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Companion                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemBox_C::Init(class FName Companion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "Init");

	Params::UWid_CompanionEquipment_ItemBox_C_Init_Params Parms{};

	Parms.Companion = Companion;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.BndEvt__ItemSlot_K2Node_ComponentBoundEvent_0_OnSlotHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemBox_C::BndEvt__ItemSlot_K2Node_ComponentBoundEvent_0_OnSlotHovered__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "BndEvt__ItemSlot_K2Node_ComponentBoundEvent_0_OnSlotHovered__DelegateSignature");

	Params::UWid_CompanionEquipment_ItemBox_C_BndEvt__ItemSlot_K2Node_ComponentBoundEvent_0_OnSlotHovered__DelegateSignature_Params Parms{};

	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.BndEvt__ItemSlot_K2Node_ComponentBoundEvent_1_OnSlotUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemBox_C::BndEvt__ItemSlot_K2Node_ComponentBoundEvent_1_OnSlotUnhovered__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "BndEvt__ItemSlot_K2Node_ComponentBoundEvent_1_OnSlotUnhovered__DelegateSignature");

	Params::UWid_CompanionEquipment_ItemBox_C_BndEvt__ItemSlot_K2Node_ComponentBoundEvent_1_OnSlotUnhovered__DelegateSignature_Params Parms{};

	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.BndEvt__ItemSlot_K2Node_ComponentBoundEvent_2_OnSlotPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemBox_C::BndEvt__ItemSlot_K2Node_ComponentBoundEvent_2_OnSlotPressed__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "BndEvt__ItemSlot_K2Node_ComponentBoundEvent_2_OnSlotPressed__DelegateSignature");

	Params::UWid_CompanionEquipment_ItemBox_C_BndEvt__ItemSlot_K2Node_ComponentBoundEvent_2_OnSlotPressed__DelegateSignature_Params Parms{};

	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_ItemBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_ItemBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.BndEvt__ItemSlot_K2Node_ComponentBoundEvent_3_OnSlotButtonUp__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_ItemBox_C::BndEvt__ItemSlot_K2Node_ComponentBoundEvent_3_OnSlotButtonUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "BndEvt__ItemSlot_K2Node_ComponentBoundEvent_3_OnSlotButtonUp__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.ExecuteUbergraph_wid_CompanionEquipment_ItemBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Companion                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// enum class ECompanionEquipmentSlotTypeK2Node_ComponentBoundEvent_SlotType_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeK2Node_ComponentBoundEvent_SlotType_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeK2Node_ComponentBoundEvent_SlotType                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemBox_C::ExecuteUbergraph_wid_CompanionEquipment_ItemBox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FName K2Node_CustomEvent_Companion, class FText CallFunc_TextToUpper_ReturnValue, enum class ECompanionEquipmentSlotType K2Node_ComponentBoundEvent_SlotType_2, enum class ECompanionEquipmentSlotType K2Node_ComponentBoundEvent_SlotType_1, enum class ECompanionEquipmentSlotType K2Node_ComponentBoundEvent_SlotType, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "ExecuteUbergraph_wid_CompanionEquipment_ItemBox");

	Params::UWid_CompanionEquipment_ItemBox_C_ExecuteUbergraph_wid_CompanionEquipment_ItemBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Companion = K2Node_CustomEvent_Companion;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SlotType_2 = K2Node_ComponentBoundEvent_SlotType_2;
	Parms.K2Node_ComponentBoundEvent_SlotType_1 = K2Node_ComponentBoundEvent_SlotType_1;
	Parms.K2Node_ComponentBoundEvent_SlotType = K2Node_ComponentBoundEvent_SlotType;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.OnSlotButtonUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_ItemBox_C::OnSlotButtonUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "OnSlotButtonUp__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_ItemBox_C::OnSelected__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType, bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "OnSelected__DelegateSignature");

	Params::UWid_CompanionEquipment_ItemBox_C_OnSelected__DelegateSignature_Params Parms{};

	Parms.SlotType = SlotType;
	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.OnSlotPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_CompanionEquipment_ItemBox_C*ItemBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemBox_C::OnSlotPressed__DelegateSignature(class UWid_CompanionEquipment_ItemBox_C* ItemBox, enum class ECompanionEquipmentSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "OnSlotPressed__DelegateSignature");

	Params::UWid_CompanionEquipment_ItemBox_C_OnSlotPressed__DelegateSignature_Params Parms{};

	Parms.ItemBox = ItemBox;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.OnSlotUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_CompanionEquipment_ItemBox_C*ItemBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemBox_C::OnSlotUnhovered__DelegateSignature(class UWid_CompanionEquipment_ItemBox_C* ItemBox, enum class ECompanionEquipmentSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "OnSlotUnhovered__DelegateSignature");

	Params::UWid_CompanionEquipment_ItemBox_C_OnSlotUnhovered__DelegateSignature_Params Parms{};

	Parms.ItemBox = ItemBox;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.OnSlotHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_CompanionEquipment_ItemBox_C*ItemBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemBox_C::OnSlotHovered__DelegateSignature(class UWid_CompanionEquipment_ItemBox_C* ItemBox, enum class ECompanionEquipmentSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemBox_C", "OnSlotHovered__DelegateSignature");

	Params::UWid_CompanionEquipment_ItemBox_C_OnSlotHovered__DelegateSignature_Params Parms{};

	Parms.ItemBox = ItemBox;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}

}


