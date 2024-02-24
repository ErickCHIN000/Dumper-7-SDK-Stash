#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CursorWidget.UMG_CursorWidget_C
// (None)

class UClass* UUMG_CursorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CursorWidget_C");

	return Clss;
}


// UMG_CursorWidget_C UMG_CursorWidget.Default__UMG_CursorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CursorWidget_C* UUMG_CursorWidget_C::GetDefaultObj()
{
	static class UUMG_CursorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CursorWidget_C*>(UUMG_CursorWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CursorWidget.UMG_CursorWidget_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCursorSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CursorWidget_C::Clear(class UCursorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CursorWidget_C", "Clear");

	Params::UUMG_CursorWidget_C_Clear_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CursorWidget.UMG_CursorWidget_C.DragItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_InventoryItem_C*        Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCursorSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)

void UUMG_CursorWidget_C::DragItem(class UInventory* Inventory, int32 Location, class UUMG_InventoryItem_C* Item, int32 Count, class UCursorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CursorWidget_C", "DragItem");

	Params::UUMG_CursorWidget_C_DragItem_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;
	Parms.Item = Item;
	Parms.Count = Count;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CursorWidget.UMG_CursorWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   CursorData                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CursorWidget_C::Update(const struct FItemData& CursorData, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CursorWidget_C", "Update");

	Params::UUMG_CursorWidget_C_Update_Params Parms{};

	Parms.CursorData = CursorData;
	Parms.CallFunc_SetItemPropertyValue_Paths = CallFunc_SetItemPropertyValue_Paths;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CursorWidget.UMG_CursorWidget_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CursorWidget_C::Initialise()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CursorWidget_C", "Initialise");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CursorWidget.UMG_CursorWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CursorWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CursorWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CursorWidget.UMG_CursorWidget_C.OnWindowLostFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CursorWidget_C::OnWindowLostFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CursorWidget_C", "OnWindowLostFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CursorWidget.UMG_CursorWidget_C.ExecuteUbergraph_UMG_CursorWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusGameInstance*         K2Node_DynamicCast_AsIcarus_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CursorWidget_C::ExecuteUbergraph_UMG_CursorWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CursorWidget_C", "ExecuteUbergraph_UMG_CursorWidget");

	Params::UUMG_CursorWidget_C_ExecuteUbergraph_UMG_CursorWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Instance = K2Node_DynamicCast_AsIcarus_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


