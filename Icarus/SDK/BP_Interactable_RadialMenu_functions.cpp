#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C
// (None)

class UClass* UBP_Interactable_RadialMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_RadialMenu_C");

	return Clss;
}


// BP_Interactable_RadialMenu_C BP_Interactable_RadialMenu.Default__BP_Interactable_RadialMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_RadialMenu_C* UBP_Interactable_RadialMenu_C::GetDefaultObj()
{
	static class UBP_Interactable_RadialMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_RadialMenu_C*>(UBP_Interactable_RadialMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.GetContextMenuItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FContextMenuItemData>MenuItems                                                        (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FContextMenuItemData>PendingMenuItems                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      CallFunc_GetInteractableComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractableData           CallFunc_GetInteractableData_OutData                             (None)
// bool                               CallFunc_GetInteractableData_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_CastToRadialMenuDataRowHandle_Paths                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRadialMenuDataRowHandle    CallFunc_CastToRadialMenuDataRowHandle_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FRadialMenuData             CallFunc_GetRadialMenuDataStruct_RadialMenuData                  (None)
// enum class EValid                  CallFunc_GetRadialMenuDataStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRadialMenuOption           CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData                            (ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Interactable_RadialMenu_C::GetContextMenuItems(TArray<struct FContextMenuItemData>* MenuItems, const TArray<struct FContextMenuItemData>& PendingMenuItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UInteractableComponent* CallFunc_GetInteractableComponent_ReturnValue, const struct FInteractableData& CallFunc_GetInteractableData_OutData, bool CallFunc_GetInteractableData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EValid CallFunc_CastToRadialMenuDataRowHandle_Paths, const struct FRadialMenuDataRowHandle& CallFunc_CastToRadialMenuDataRowHandle_ReturnValue, const struct FRadialMenuData& CallFunc_GetRadialMenuDataStruct_RadialMenuData, enum class EValid CallFunc_GetRadialMenuDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FRadialMenuOption& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_RadialMenu_C", "GetContextMenuItems");

	Params::UBP_Interactable_RadialMenu_C_GetContextMenuItems_Params Parms{};

	Parms.PendingMenuItems = PendingMenuItems;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetInteractableComponent_ReturnValue = CallFunc_GetInteractableComponent_ReturnValue;
	Parms.CallFunc_GetInteractableData_OutData = CallFunc_GetInteractableData_OutData;
	Parms.CallFunc_GetInteractableData_ReturnValue = CallFunc_GetInteractableData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CastToRadialMenuDataRowHandle_Paths = CallFunc_CastToRadialMenuDataRowHandle_Paths;
	Parms.CallFunc_CastToRadialMenuDataRowHandle_ReturnValue = CallFunc_CastToRadialMenuDataRowHandle_ReturnValue;
	Parms.CallFunc_GetRadialMenuDataStruct_RadialMenuData = CallFunc_GetRadialMenuDataStruct_RadialMenuData;
	Parms.CallFunc_GetRadialMenuDataStruct_Paths = CallFunc_GetRadialMenuDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.K2Node_MakeStruct_ContextMenuItemData = K2Node_MakeStruct_ContextMenuItemData;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MenuItems != nullptr)
		*MenuItems = std::move(Parms.MenuItems);

}


// Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.GetContextMenuInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        MenuName                                                         (Parm, OutParm)
// TSoftObjectPtr<class UTexture2D>   MenuIcon                                                         (Parm, OutParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemableComponent*          CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableData_OutData                                 (None)
// bool                               CallFunc_GetItemableData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_RadialMenu_C::GetContextMenuInfo(class FText* MenuName, TSoftObjectPtr<class UTexture2D>* MenuIcon, class AActor* CallFunc_GetOwner_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UItemableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableData_OutData, bool CallFunc_GetItemableData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_RadialMenu_C", "GetContextMenuInfo");

	Params::UBP_Interactable_RadialMenu_C_GetContextMenuInfo_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemableData_OutData = CallFunc_GetItemableData_OutData;
	Parms.CallFunc_GetItemableData_ReturnValue = CallFunc_GetItemableData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MenuName != nullptr)
		*MenuName = Parms.MenuName;

	if (MenuIcon != nullptr)
		*MenuIcon = Parms.MenuIcon;

}


// Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_RadialMenu_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_RadialMenu_C", "CanInteract");

	Params::UBP_Interactable_RadialMenu_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.RadialMenuClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERadialOptions          Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Interactable_RadialMenu_C::RadialMenuClosed(enum class ERadialOptions Option, class AIcarusPlayerCharacter* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_RadialMenu_C", "RadialMenuClosed");

	Params::UBP_Interactable_RadialMenu_C_RadialMenuClosed_Params Parms{};

	Parms.Option = Option;
	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_RadialMenu_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_RadialMenu_C", "Interact");

	Params::UBP_Interactable_RadialMenu_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Interactable_RadialMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_RadialMenu_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.MenuItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemActionId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemPayload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Interactable_RadialMenu_C::MenuItemSelected(class FName ItemActionId, int32 ItemPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_RadialMenu_C", "MenuItemSelected");

	Params::UBP_Interactable_RadialMenu_C_MenuItemSelected_Params Parms{};

	Parms.ItemActionId = ItemActionId;
	Parms.ItemPayload = ItemPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.ExecuteUbergraph_BP_Interactable_RadialMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ItemActionId                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ItemPayload                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AContextMenuFactory*         CallFunc_CreateContextMenu_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContextMenuWidget*          CallFunc_ShowAsRadialMenu_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FContextMenuItemData>CallFunc_GetContextMenuItems_MenuItems                           (ReferenceParm, ContainsInstancedReference)
// struct FContextMenuItemData        CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERadialOptions          K2Node_CustomEvent_Option                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_CustomEvent_PlayerCharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetContextMenuInfo_MenuName                             (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetContextMenuInfo_MenuIcon                             (HasGetValueTypeHash)

void UBP_Interactable_RadialMenu_C::ExecuteUbergraph_BP_Interactable_RadialMenu(int32 EntryPoint, class FName K2Node_CustomEvent_ItemActionId, int32 K2Node_CustomEvent_ItemPayload, int32 Temp_int_Array_Index_Variable, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AContextMenuFactory* CallFunc_CreateContextMenu_ReturnValue, class UContextMenuWidget* CallFunc_ShowAsRadialMenu_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, TArray<struct FContextMenuItemData>& CallFunc_GetContextMenuItems_MenuItems, const struct FContextMenuItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ERadialOptions K2Node_CustomEvent_Option, class AIcarusPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetContextMenuInfo_MenuName, TSoftObjectPtr<class UTexture2D> CallFunc_GetContextMenuInfo_MenuIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_RadialMenu_C", "ExecuteUbergraph_BP_Interactable_RadialMenu");

	Params::UBP_Interactable_RadialMenu_C_ExecuteUbergraph_BP_Interactable_RadialMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ItemActionId = K2Node_CustomEvent_ItemActionId;
	Parms.K2Node_CustomEvent_ItemPayload = K2Node_CustomEvent_ItemPayload;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_CreateContextMenu_ReturnValue = CallFunc_CreateContextMenu_ReturnValue;
	Parms.CallFunc_ShowAsRadialMenu_ReturnValue = CallFunc_ShowAsRadialMenu_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.CallFunc_GetContextMenuItems_MenuItems = CallFunc_GetContextMenuItems_MenuItems;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Option = K2Node_CustomEvent_Option;
	Parms.K2Node_CustomEvent_PlayerCharacter = K2Node_CustomEvent_PlayerCharacter;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContextMenuInfo_MenuName = CallFunc_GetContextMenuInfo_MenuName;
	Parms.CallFunc_GetContextMenuInfo_MenuIcon = CallFunc_GetContextMenuInfo_MenuIcon;

	UObject::ProcessEvent(Func, &Parms);

}

}


