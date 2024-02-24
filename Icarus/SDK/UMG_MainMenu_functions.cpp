#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MainMenu.UMG_MainMenu_C
// (None)

class UClass* UUMG_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MainMenu_C");

	return Clss;
}


// UMG_MainMenu_C UMG_MainMenu.Default__UMG_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MainMenu_C* UUMG_MainMenu_C::GetDefaultObj()
{
	static class UUMG_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MainMenu_C*>(UUMG_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MainMenu.UMG_MainMenu_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_CursorWidget_C*         CallFunc_GetCursorWidget_CursorWidget                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UUMG_MainMenu_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess_1, class UUMG_CursorWidget_C* CallFunc_GetCursorWidget_CursorWidget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "OnMouseButtonUp");

	Params::UUMG_MainMenu_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCursorWidget_CursorWidget = CallFunc_GetCursorWidget_CursorWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_MainMenu.UMG_MainMenu_C.ShowOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMainMenuOptions        Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainMenu_C::ShowOption(enum class EMainMenuOptions Option, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "ShowOption");

	Params::UUMG_MainMenu_C_ShowOption_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.Get Shown Menu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMainMenuOptions        Menu                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::Get_Shown_Menu(enum class EMainMenuOptions* Menu, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "Get Shown Menu");

	Params::UUMG_MainMenu_C_Get_Shown_Menu_Params Parms{};

	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Menu != nullptr)
		*Menu = Parms.Menu;

}


// Function UMG_MainMenu.UMG_MainMenu_C.Setup Player Crafting 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProcessingComponent*        Processing                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::Setup_Player_Crafting_(class UInventory* Inventory, class UProcessingComponent* Processing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "Setup Player Crafting ");

	Params::UUMG_MainMenu_C_Setup_Player_Crafting__Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Processing = Processing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.Toggle Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMainMenuOptions        MenuOption                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainMenu_C::Toggle_Menu(enum class EMainMenuOptions MenuOption, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "Toggle Menu");

	Params::UUMG_MainMenu_C_Toggle_Menu_Params Parms{};

	Parms.MenuOption = MenuOption;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.Setup Main Inventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Bound_Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  Envirosuit_Inventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  Equipment_Inventory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  UpgradeInventory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  VisionInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterface_C*        Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::Setup_Main_Inventory(class UInventory* Bound_Inventory, class UInventory* Envirosuit_Inventory, class UInventory* Equipment_Inventory, class UInventory* UpgradeInventory, class UInventory* VisionInventory, class UUMG_UserInterface_C* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "Setup Main Inventory");

	Params::UUMG_MainMenu_C_Setup_Main_Inventory_Params Parms{};

	Parms.Bound_Inventory = Bound_Inventory;
	Parms.Envirosuit_Inventory = Envirosuit_Inventory;
	Parms.Equipment_Inventory = Equipment_Inventory;
	Parms.UpgradeInventory = UpgradeInventory;
	Parms.VisionInventory = VisionInventory;
	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.Initialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FConnectedPlayer            CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer(None)
// bool                               CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::Initialise(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "Initialise");

	Params::UUMG_MainMenu_C_Initialise_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer = CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer;
	Parms.CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue = CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.ResetContentSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MainMenu_C::ResetContentSwitcher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "ResetContentSwitcher");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMenu.UMG_MainMenu_C.SetContentState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMainMenuOptions        State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::SetContentState(enum class EMainMenuOptions State, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "SetContentState");

	Params::UUMG_MainMenu_C_SetContentState_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonMap_K2Node_ComponentBoundEvent_7_Untoggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__ButtonMap_K2Node_ComponentBoundEvent_7_Untoggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__ButtonMap_K2Node_ComponentBoundEvent_7_Untoggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__ButtonMap_K2Node_ComponentBoundEvent_7_Untoggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_6_Untoggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_6_Untoggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_6_Untoggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_6_Untoggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_5_Untoggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_5_Untoggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_5_Untoggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_5_Untoggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_4_Untoggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_4_Untoggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_4_Untoggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_4_Untoggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_13_Untoggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_13_Untoggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_13_Untoggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_13_Untoggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonMap_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__ButtonMap_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__ButtonMap_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__ButtonMap_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MainMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMenu.UMG_MainMenu_C.UpdateBlueprintIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentModelInterface_Const* Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::UpdateBlueprintIndicator(class UTalentModelInterface_Const* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "UpdateBlueprintIndicator");

	Params::UUMG_MainMenu_C_UpdateBlueprintIndicator_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.UpdateTalentIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentModelInterface_Const* Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::UpdateTalentIndicator(class UTalentModelInterface_Const* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "UpdateTalentIndicator");

	Params::UUMG_MainMenu_C_UpdateTalentIndicator_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.PlayerModelViewChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentControllerComponent*  Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::PlayerModelViewChanged(class UTalentControllerComponent* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "PlayerModelViewChanged");

	Params::UUMG_MainMenu_C_PlayerModelViewChanged_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BlueprintModelViewChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentControllerComponent*  Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BlueprintModelViewChanged(class UTalentControllerComponent* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BlueprintModelViewChanged");

	Params::UUMG_MainMenu_C_BlueprintModelViewChanged_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.Visbility_Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::Visbility_Changed(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "Visbility_Changed");

	Params::UUMG_MainMenu_C_Visbility_Changed_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.ConnectedPlayerInitialised
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConnectedPlayer            ConnectedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_MainMenu_C::ConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "ConnectedPlayerInitialised");

	Params::UUMG_MainMenu_C_ConnectedPlayerInitialised_Params Parms{};

	Parms.ConnectedPlayer = ConnectedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.OnAliveStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::OnAliveStateChanged(class UActorState* ActorState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "OnAliveStateChanged");

	Params::UUMG_MainMenu_C_OnAliveStateChanged_Params Parms{};

	Parms.ActorState = ActorState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_8_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_8_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_8_Toggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_8_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_9_Untoggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_9_Untoggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_9_Untoggled__DelegateSignature");

	Params::UUMG_MainMenu_C_BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_9_Untoggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.OnSoloModelViewChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentControllerComponent*  Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::OnSoloModelViewChanged(class UTalentControllerComponent* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "OnSoloModelViewChanged");

	Params::UUMG_MainMenu_C_OnSoloModelViewChanged_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.SwitchTalentView
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Solo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainMenu_C::SwitchTalentView(bool Solo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "SwitchTalentView");

	Params::UUMG_MainMenu_C_SwitchTalentView_Params Parms{};

	Parms.Solo = Solo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.SwitchTalents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Solo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainMenu_C::SwitchTalents(bool Solo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "SwitchTalents");

	Params::UUMG_MainMenu_C_SwitchTalents_Params Parms{};

	Parms.Solo = Solo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.UpdateDLSSMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainMenu_C::UpdateDLSSMode(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "UpdateDLSSMode");

	Params::UUMG_MainMenu_C_UpdateDLSSMode_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMenu.UMG_MainMenu_C.ExecuteUbergraph_UMG_MainMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMenuOptions        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameGeneration_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EMainMenuOptions        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMenuOptions        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_11                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_10                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_9                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_8                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_7                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_6                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoloTalentControllerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlueprintTalentControllerComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerTalentControllerComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* K2Node_CustomEvent_Model_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* K2Node_CustomEvent_Model                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UTalentControllerComponent*  K2Node_CustomEvent_Controller_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentControllerComponent*  K2Node_CustomEvent_Controller_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetView_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentViewInterface*        CallFunc_GetView_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface*       CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAvailablePoints_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetView_self_CastInput_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentViewInterface*        CallFunc_GetView_ReturnValue_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_TalentView_Player_C*    K2Node_DynamicCast_AsUMG_Talent_View_Player                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_self_CastInput_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface*       CallFunc_GetModel_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAvailablePoints_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        K2Node_CustomEvent_InVisibility                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConnectedPlayer            K2Node_CustomEvent_ConnectedPlayer                               (ConstParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorState*                 K2Node_CustomEvent_ActorState                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMainMenuOptions        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentControllerComponent*  K2Node_CustomEvent_Controller                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetView_self_CastInput_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentViewInterface*        CallFunc_GetView_ReturnValue_2                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_self_CastInput_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface*       CallFunc_GetModel_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentView_Solo_C*      K2Node_DynamicCast_AsUMG_Talent_View_Solo                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Solo_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Solo                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMenuOptions        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoloTalentControllerComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_self_CastInput_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface*       CallFunc_GetModel_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAvailablePoints_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUStreamlineDLSSGMode   CallFunc_GetDLSSGMode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMainMenuOptions        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainMenu_C::ExecuteUbergraph_UMG_MainMenu(int32 EntryPoint, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, enum class EMainMenuOptions Temp_byte_Variable, bool CallFunc_GetFrameGeneration_ReturnValue, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMainMenuOptions Temp_byte_Variable_1, enum class EMainMenuOptions Temp_byte_Variable_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_IsClosed_Variable, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_11, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_9, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_7, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_6, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_5, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_4, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_3, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Has_Been_Initd_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USoloTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue, class UBlueprintTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPlayerTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UTalentModelInterface_Const* K2Node_CustomEvent_Model_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UTalentModelInterface_Const* K2Node_CustomEvent_Model, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UTalentControllerComponent* K2Node_CustomEvent_Controller_2, class UTalentControllerComponent* K2Node_CustomEvent_Controller_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput, class UTalentViewInterface* CallFunc_GetView_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput, class UTalentModelInterface* CallFunc_GetModel_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_GetAvailablePoints_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput_1, class UTalentViewInterface* CallFunc_GetView_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class UUMG_TalentView_Player_C* K2Node_DynamicCast_AsUMG_Talent_View_Player, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_SetContent_ReturnValue_1, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput_1, class UTalentModelInterface* CallFunc_GetModel_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_GetAvailablePoints_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FConnectedPlayer& K2Node_CustomEvent_ConnectedPlayer, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UActorState* K2Node_CustomEvent_ActorState, bool CallFunc_IsAlive_ReturnValue, enum class EMainMenuOptions Temp_byte_Variable_3, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_1, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton, class UTalentControllerComponent* K2Node_CustomEvent_Controller, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput_2, class UTalentViewInterface* CallFunc_GetView_ReturnValue_2, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput_2, class UTalentModelInterface* CallFunc_GetModel_ReturnValue_2, class UUMG_TalentView_Solo_C* K2Node_DynamicCast_AsUMG_Talent_View_Solo, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPanelSlot* CallFunc_SetContent_ReturnValue_2, bool K2Node_CustomEvent_Solo_1, bool K2Node_CustomEvent_Solo, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, enum class EMainMenuOptions K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_8, class USoloTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool K2Node_CustomEvent_Enabled, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput_3, class UTalentModelInterface* CallFunc_GetModel_ReturnValue_3, int32 CallFunc_GetAvailablePoints_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, enum class EUStreamlineDLSSGMode CallFunc_GetDLSSGMode_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, enum class EMainMenuOptions K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMenu_C", "ExecuteUbergraph_UMG_MainMenu");

	Params::UUMG_MainMenu_C_ExecuteUbergraph_UMG_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetFrameGeneration_ReturnValue = CallFunc_GetFrameGeneration_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_11 = K2Node_ComponentBoundEvent_ToggleButton_11;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_10 = K2Node_ComponentBoundEvent_ToggleButton_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_9 = K2Node_ComponentBoundEvent_ToggleButton_9;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_8 = K2Node_ComponentBoundEvent_ToggleButton_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_7 = K2Node_ComponentBoundEvent_ToggleButton_7;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_6 = K2Node_ComponentBoundEvent_ToggleButton_6;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_5 = K2Node_ComponentBoundEvent_ToggleButton_5;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_4 = K2Node_ComponentBoundEvent_ToggleButton_4;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_3 = K2Node_ComponentBoundEvent_ToggleButton_3;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_2 = K2Node_ComponentBoundEvent_ToggleButton_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.K2Node_CustomEvent_Model_1 = K2Node_CustomEvent_Model_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_CustomEvent_Model = K2Node_CustomEvent_Model;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Controller_2 = K2Node_CustomEvent_Controller_2;
	Parms.K2Node_CustomEvent_Controller_1 = K2Node_CustomEvent_Controller_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetView_self_CastInput = CallFunc_GetView_self_CastInput;
	Parms.CallFunc_GetView_ReturnValue = CallFunc_GetView_ReturnValue;
	Parms.CallFunc_GetModel_self_CastInput = CallFunc_GetModel_self_CastInput;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetAvailablePoints_ReturnValue = CallFunc_GetAvailablePoints_ReturnValue;
	Parms.CallFunc_GetView_self_CastInput_1 = CallFunc_GetView_self_CastInput_1;
	Parms.CallFunc_GetView_ReturnValue_1 = CallFunc_GetView_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Talent_View_Player = K2Node_DynamicCast_AsUMG_Talent_View_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetContent_ReturnValue_1 = CallFunc_SetContent_ReturnValue_1;
	Parms.CallFunc_GetModel_self_CastInput_1 = CallFunc_GetModel_self_CastInput_1;
	Parms.CallFunc_GetModel_ReturnValue_1 = CallFunc_GetModel_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetAvailablePoints_ReturnValue_1 = CallFunc_GetAvailablePoints_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_InVisibility = K2Node_CustomEvent_InVisibility;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_ConnectedPlayer = K2Node_CustomEvent_ConnectedPlayer;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_CustomEvent_ActorState = K2Node_CustomEvent_ActorState;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_1 = K2Node_ComponentBoundEvent_ToggleButton_1;
	Parms.K2Node_ComponentBoundEvent_ToggleButton = K2Node_ComponentBoundEvent_ToggleButton;
	Parms.K2Node_CustomEvent_Controller = K2Node_CustomEvent_Controller;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetView_self_CastInput_2 = CallFunc_GetView_self_CastInput_2;
	Parms.CallFunc_GetView_ReturnValue_2 = CallFunc_GetView_ReturnValue_2;
	Parms.CallFunc_GetModel_self_CastInput_2 = CallFunc_GetModel_self_CastInput_2;
	Parms.CallFunc_GetModel_ReturnValue_2 = CallFunc_GetModel_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsUMG_Talent_View_Solo = K2Node_DynamicCast_AsUMG_Talent_View_Solo;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_SetContent_ReturnValue_2 = CallFunc_SetContent_ReturnValue_2;
	Parms.K2Node_CustomEvent_Solo_1 = K2Node_CustomEvent_Solo_1;
	Parms.K2Node_CustomEvent_Solo = K2Node_CustomEvent_Solo;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.CallFunc_GetModel_self_CastInput_3 = CallFunc_GetModel_self_CastInput_3;
	Parms.CallFunc_GetModel_ReturnValue_3 = CallFunc_GetModel_ReturnValue_3;
	Parms.CallFunc_GetAvailablePoints_ReturnValue_2 = CallFunc_GetAvailablePoints_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetDLSSGMode_ReturnValue = CallFunc_GetDLSSGMode_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


