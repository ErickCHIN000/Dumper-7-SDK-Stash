#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C
// (None)

class UClass* UBP_ActionableBehaviour_Radial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Radial_C");

	return Clss;
}


// BP_ActionableBehaviour_Radial_C BP_ActionableBehaviour_Radial.Default__BP_ActionableBehaviour_Radial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Radial_C* UBP_ActionableBehaviour_Radial_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Radial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Radial_C*>(UBP_ActionableBehaviour_Radial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C.CreateMenuItem
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AContextMenuFactory*         ContextMenuFactory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FContextMenuItemData        ContextMenuItemData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UBP_ActionableBehaviour_Radial_C::CreateMenuItem(class AContextMenuFactory* ContextMenuFactory, struct FContextMenuItemData& ContextMenuItemData, int32 ItemIndex, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Radial_C", "CreateMenuItem");

	Params::UBP_ActionableBehaviour_Radial_C_CreateMenuItem_Params Parms{};

	Parms.ContextMenuFactory = ContextMenuFactory;
	Parms.ContextMenuItemData = ContextMenuItemData;
	Parms.ItemIndex = ItemIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C.GetContextMenuInfo
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

void UBP_ActionableBehaviour_Radial_C::GetContextMenuInfo(class FText* MenuName, TSoftObjectPtr<class UTexture2D>* MenuIcon, class AActor* CallFunc_GetOwner_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UItemableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableData_OutData, bool CallFunc_GetItemableData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Radial_C", "GetContextMenuInfo");

	Params::UBP_ActionableBehaviour_Radial_C_GetContextMenuInfo_Params Parms{};

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


// Function BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C.GetContextMenuItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FContextMenuItemData>MenuItems                                                        (Parm, OutParm, ContainsInstancedReference)

void UBP_ActionableBehaviour_Radial_C::GetContextMenuItems(TArray<struct FContextMenuItemData>* MenuItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Radial_C", "GetContextMenuItems");

	Params::UBP_ActionableBehaviour_Radial_C_GetContextMenuItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuItems != nullptr)
		*MenuItems = std::move(Parms.MenuItems);

}


// Function BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C.LocalOrServer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Server                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Radial_C::LocalOrServer(bool* Local, bool* Server, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Radial_C", "LocalOrServer");

	Params::UBP_ActionableBehaviour_Radial_C_LocalOrServer_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Local != nullptr)
		*Local = Parms.Local;

	if (Server != nullptr)
		*Server = Parms.Server;

}


// Function BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C.SetupPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Radial_C::SetupPlayer(class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Radial_C", "SetupPlayer");

	Params::UBP_ActionableBehaviour_Radial_C_SetupPlayer_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Radial_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Radial_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C.OpenRadialMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Radial_C::OpenRadialMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Radial_C", "OpenRadialMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C.CloseRadialMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Radial_C::CloseRadialMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Radial_C", "CloseRadialMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C.MenuItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemIdentifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemPayload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Radial_C::MenuItemSelected(class FName ItemIdentifier, int32 ItemPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Radial_C", "MenuItemSelected");

	Params::UBP_ActionableBehaviour_Radial_C_MenuItemSelected_Params Parms{};

	Parms.ItemIdentifier = ItemIdentifier;
	Parms.ItemPayload = ItemPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C.ExecuteUbergraph_BP_ActionableBehaviour_Radial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ContextMenu_Radial_C*   K2Node_DynamicCast_AsUMG_Context_Menu_Radial                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AContextMenuFactory*         CallFunc_CreateContextMenu_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UContextMenuWidget*          CallFunc_ShowAsRadialMenu_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FContextMenuItemData>CallFunc_GetContextMenuItems_MenuItems                           (ReferenceParm, ContainsInstancedReference)
// class FName                        K2Node_CustomEvent_ItemIdentifier                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ItemPayload                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetContextMenuInfo_MenuName                             (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetContextMenuInfo_MenuIcon                             (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Radial_C::ExecuteUbergraph_BP_ActionableBehaviour_Radial(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UUMG_ContextMenu_Radial_C* K2Node_DynamicCast_AsUMG_Context_Menu_Radial, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_IsValid_ReturnValue_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AContextMenuFactory* CallFunc_CreateContextMenu_ReturnValue, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, class UContextMenuWidget* CallFunc_ShowAsRadialMenu_ReturnValue, TArray<struct FContextMenuItemData>& CallFunc_GetContextMenuItems_MenuItems, class FName K2Node_CustomEvent_ItemIdentifier, int32 K2Node_CustomEvent_ItemPayload, const struct FContextMenuItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetContextMenuInfo_MenuName, TSoftObjectPtr<class UTexture2D> CallFunc_GetContextMenuInfo_MenuIcon, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Radial_C", "ExecuteUbergraph_BP_ActionableBehaviour_Radial");

	Params::UBP_ActionableBehaviour_Radial_C_ExecuteUbergraph_BP_ActionableBehaviour_Radial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Context_Menu_Radial = K2Node_DynamicCast_AsUMG_Context_Menu_Radial;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_CreateContextMenu_ReturnValue = CallFunc_CreateContextMenu_ReturnValue;
	Parms.CallFunc_LocalOrServer_Local_1 = CallFunc_LocalOrServer_Local_1;
	Parms.CallFunc_LocalOrServer_Server_1 = CallFunc_LocalOrServer_Server_1;
	Parms.CallFunc_ShowAsRadialMenu_ReturnValue = CallFunc_ShowAsRadialMenu_ReturnValue;
	Parms.CallFunc_GetContextMenuItems_MenuItems = CallFunc_GetContextMenuItems_MenuItems;
	Parms.K2Node_CustomEvent_ItemIdentifier = K2Node_CustomEvent_ItemIdentifier;
	Parms.K2Node_CustomEvent_ItemPayload = K2Node_CustomEvent_ItemPayload;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetContextMenuInfo_MenuName = CallFunc_GetContextMenuInfo_MenuName;
	Parms.CallFunc_GetContextMenuInfo_MenuIcon = CallFunc_GetContextMenuInfo_MenuIcon;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


