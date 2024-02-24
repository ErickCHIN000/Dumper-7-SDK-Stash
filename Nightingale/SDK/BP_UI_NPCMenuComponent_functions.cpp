#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UI_NPCMenuComponent.BP_UI_NPCMenuComponent_C
// (None)

class UClass* UBP_UI_NPCMenuComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UI_NPCMenuComponent_C");

	return Clss;
}


// BP_UI_NPCMenuComponent_C BP_UI_NPCMenuComponent.Default__BP_UI_NPCMenuComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UI_NPCMenuComponent_C* UBP_UI_NPCMenuComponent_C::GetDefaultObj()
{
	static class UBP_UI_NPCMenuComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UI_NPCMenuComponent_C*>(UBP_UI_NPCMenuComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UI_NPCMenuComponent.BP_UI_NPCMenuComponent_C.SetupNPCMGMT
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> MenuContent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_UI_NPCMenuComponent_C::SetupNPCMGMT(TArray<struct FDataTableRowHandle>& MenuContent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_NPCMenuComponent_C", "SetupNPCMGMT");

	Params::UBP_UI_NPCMenuComponent_C_SetupNPCMGMT_Params Parms{};

	Parms.MenuContent = MenuContent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_NPCMenuComponent.BP_UI_NPCMenuComponent_C.ShowMerchantStorePanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_NPCMenuComponent_C::ShowMerchantStorePanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_NPCMenuComponent_C", "ShowMerchantStorePanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_NPCMenuComponent.BP_UI_NPCMenuComponent_C.RemoveOpenedWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_NPCMenuComponent_C::RemoveOpenedWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_NPCMenuComponent_C", "RemoveOpenedWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_NPCMenuComponent.BP_UI_NPCMenuComponent_C.SetupScreen
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ui_NPCMenus           Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        MenuName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FDataTableRowHandle> MenuContent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_UI_NPCMenuComponent_C::SetupScreen(enum class E_ui_NPCMenus Menu, class FText MenuName, TArray<struct FDataTableRowHandle>& MenuContent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_NPCMenuComponent_C", "SetupScreen");

	Params::UBP_UI_NPCMenuComponent_C_SetupScreen_Params Parms{};

	Parms.Menu = Menu;
	Parms.MenuName = MenuName;
	Parms.MenuContent = MenuContent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_NPCMenuComponent.BP_UI_NPCMenuComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_NPCMenuComponent_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_NPCMenuComponent_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_NPCMenuComponent.BP_UI_NPCMenuComponent_C.ExecuteUbergraph_BP_UI_NPCMenuComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class ANWXHUDBase*                 CallFunc_GetNWXHUD_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCMenu_Content          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ui_NPCMenus           K2Node_CustomEvent_Menu                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_MenuName                                      (None)
// TArray<struct FDataTableRowHandle> K2Node_CustomEvent_MenuContent                                   (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_NPCMenuComponent_C::ExecuteUbergraph_BP_UI_NPCMenuComponent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class ANWXHUDBase* CallFunc_GetNWXHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class E_ui_NPCMenus K2Node_CustomEvent_Menu, class FText K2Node_CustomEvent_MenuName, TArray<struct FDataTableRowHandle>& K2Node_CustomEvent_MenuContent, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_NPCMenuComponent_C", "ExecuteUbergraph_BP_UI_NPCMenuComponent");

	Params::UBP_UI_NPCMenuComponent_C_ExecuteUbergraph_BP_UI_NPCMenuComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetNWXHUD_ReturnValue = CallFunc_GetNWXHUD_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Menu = K2Node_CustomEvent_Menu;
	Parms.K2Node_CustomEvent_MenuName = K2Node_CustomEvent_MenuName;
	Parms.K2Node_CustomEvent_MenuContent = K2Node_CustomEvent_MenuContent;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


