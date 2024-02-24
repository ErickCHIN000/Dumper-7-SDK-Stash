#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ReadyUp.UMG_ReadyUp_C
// (None)

class UClass* UUMG_ReadyUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ReadyUp_C");

	return Clss;
}


// UMG_ReadyUp_C UMG_ReadyUp.Default__UMG_ReadyUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ReadyUp_C* UUMG_ReadyUp_C::GetDefaultObj()
{
	static class UUMG_ReadyUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ReadyUp_C*>(UUMG_ReadyUp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ReadyUp.UMG_ReadyUp_C.SetReadyUpButtonStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::SetReadyUpButtonStates(bool Enabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "SetReadyUpButtonStates");

	Params::UUMG_ReadyUp_C_SetReadyUpButtonStates_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.ShowError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FErrorCodesEnum             ErrorCode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UIcarusErrorSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::ShowError(const struct FErrorCodesEnum& ErrorCode, class UIcarusErrorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "ShowError");

	Params::UUMG_ReadyUp_C_ShowError_Params Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.SetContentState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ContractTabs          Tab                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::SetContentState(enum class E_ContractTabs Tab, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "SetContentState");

	Params::UUMG_ReadyUp_C_SetContentState_Params Parms{};

	Parms.Tab = Tab;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.Log
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::Log(const class FString& Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "Log");

	Params::UUMG_ReadyUp_C_Log_Params Parms{};

	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.LoadoutUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Dropship                                                         (Edit, BlueprintVisible)
// class FText                        EnviroSuit                                                       (Edit, BlueprintVisible)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSpace_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ReadyUp_C::LoadoutUpdated(class FText Dropship, class FText EnviroSuit, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "LoadoutUpdated");

	Params::UUMG_ReadyUp_C_LoadoutUpdated_Params Parms{};

	Parms.Dropship = Dropship;
	Parms.EnviroSuit = EnviroSuit;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.PartyReadyStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllPlayersReady                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::PartyReadyStateChanged(bool AllPlayersReady, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "PartyReadyStateChanged");

	Params::UUMG_ReadyUp_C_PartyReadyStateChanged_Params Parms{};

	Parms.AllPlayersReady = AllPlayersReady;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::Reset(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsServer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "Reset");

	Params::UUMG_ReadyUp_C_Reset_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.Show Loading Screen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Loading_Screen_Text                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_ReadyUp_C::Show_Loading_Screen(class FText Loading_Screen_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "Show Loading Screen");

	Params::UUMG_ReadyUp_C_Show_Loading_Screen_Params Parms{};

	Parms.Loading_Screen_Text = Loading_Screen_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ReadyUp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__LaunchDropButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::BndEvt__LaunchDropButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "BndEvt__LaunchDropButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_ReadyUp_C_BndEvt__LaunchDropButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__EvenSplitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::BndEvt__EvenSplitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "BndEvt__EvenSplitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_ReadyUp_C_BndEvt__EvenSplitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.OnOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ReadyUp_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "OnOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UUMG_ReadyUp_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__ReadyButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::BndEvt__ReadyButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "BndEvt__ReadyButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::UUMG_ReadyUp_C_BndEvt__ReadyButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.Launch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ReadyUp_C::Launch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "Launch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__ContractTabButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::BndEvt__ContractTabButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "BndEvt__ContractTabButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature");

	Params::UUMG_ReadyUp_C_BndEvt__ContractTabButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__LoadoutTabButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::BndEvt__LoadoutTabButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "BndEvt__LoadoutTabButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature");

	Params::UUMG_ReadyUp_C_BndEvt__LoadoutTabButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__CrewTabButton_K2Node_ComponentBoundEvent_6_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ReadyUp_C::BndEvt__CrewTabButton_K2Node_ComponentBoundEvent_6_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "BndEvt__CrewTabButton_K2Node_ComponentBoundEvent_6_Toggled__DelegateSignature");

	Params::UUMG_ReadyUp_C_BndEvt__CrewTabButton_K2Node_ComponentBoundEvent_6_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.ReadyUpResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ReadyUp_C::ReadyUpResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "ReadyUpResult");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ReadyUp.UMG_ReadyUp_C.ExecuteUbergraph_UMG_ReadyUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusGameStateSpace_bValid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSpace*       CallFunc_GetIcarusGameStateSpace_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASpaceStation_GameState_C*   K2Node_DynamicCast_AsSpace_Station_Game_State                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_ProspectInfoIsValid_Valid                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSpace_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Loading_Screen_Text                           (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASpaceStation_GameState_C*   K2Node_DynamicCast_AsSpace_Station_Game_State_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusGameStateSpace_bValid_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSpace*       CallFunc_GetIcarusGameStateSpace_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSpace_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASpaceStation_GameState_C*   K2Node_DynamicCast_AsSpace_Station_Game_State_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidSession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_NumConnections                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_NumPrivateConnections                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bIsLAN                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsDedicated                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowInvites                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowJoinInProgress                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsAnticheatEnabled                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSessionSettings_BuildUniqueID                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetSessionSettings_ExtraSettings                        (ReferenceParm)
// enum class EBlueprintResultSwitch  CallFunc_GetSessionSettings_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectInfo               CallFunc_MakeProspectInfoFromExtraSettings_ReturnValue           (None)
// struct FFProspectServerInfo        K2Node_MakeStruct_FProspectServerInfo                            (HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent_1        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent_2        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent_3        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ReadyUp_C::ExecuteUbergraph_UMG_ReadyUp(int32 EntryPoint, bool CallFunc_GetIcarusGameStateSpace_bValid, class AIcarusGameStateSpace* CallFunc_GetIcarusGameStateSpace_ReturnValue, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_ProspectInfoIsValid_Valid, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_2, class FText K2Node_CustomEvent_Loading_Screen_Text, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool CallFunc_GetIcarusGameStateSpace_bValid_1, class AIcarusGameStateSpace* CallFunc_GetIcarusGameStateSpace_ReturnValue_1, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space_1, bool K2Node_DynamicCast_bSuccess_5, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsServer_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_3, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValidSession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FProspectInfo& CallFunc_MakeProspectInfoFromExtraSettings_ReturnValue, const struct FFProspectServerInfo& K2Node_MakeStruct_FProspectServerInfo, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_2, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_1, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent_1, bool CallFunc_GetBackendProxyComponent_bSuccess_1, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent_2, bool CallFunc_GetBackendProxyComponent_bSuccess_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent_3, bool CallFunc_GetBackendProxyComponent_bSuccess_3, bool CallFunc_IsServer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReadyUp_C", "ExecuteUbergraph_UMG_ReadyUp");

	Params::UUMG_ReadyUp_C_ExecuteUbergraph_UMG_ReadyUp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusGameStateSpace_bValid = CallFunc_GetIcarusGameStateSpace_bValid;
	Parms.CallFunc_GetIcarusGameStateSpace_ReturnValue = CallFunc_GetIcarusGameStateSpace_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpace_Station_Game_State = K2Node_DynamicCast_AsSpace_Station_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_ProspectInfoIsValid_Valid = CallFunc_ProspectInfoIsValid_Valid;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_Loading_Screen_Text = K2Node_CustomEvent_Loading_Screen_Text;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsUIController_Interface_1 = K2Node_DynamicCast_AsUIController_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface_1 = CallFunc_GetUserInterface_UserInterface_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpace_Station_Game_State_1 = K2Node_DynamicCast_AsSpace_Station_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetIcarusGameStateSpace_bValid_1 = CallFunc_GetIcarusGameStateSpace_bValid_1;
	Parms.CallFunc_GetIcarusGameStateSpace_ReturnValue_1 = CallFunc_GetIcarusGameStateSpace_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space_1 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsSpace_Station_Game_State_2 = K2Node_DynamicCast_AsSpace_Station_Game_State_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValidSession_ReturnValue = CallFunc_IsValidSession_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetSessionSettings_NumConnections = CallFunc_GetSessionSettings_NumConnections;
	Parms.CallFunc_GetSessionSettings_NumPrivateConnections = CallFunc_GetSessionSettings_NumPrivateConnections;
	Parms.CallFunc_GetSessionSettings_bIsLAN = CallFunc_GetSessionSettings_bIsLAN;
	Parms.CallFunc_GetSessionSettings_bIsDedicated = CallFunc_GetSessionSettings_bIsDedicated;
	Parms.CallFunc_GetSessionSettings_bAllowInvites = CallFunc_GetSessionSettings_bAllowInvites;
	Parms.CallFunc_GetSessionSettings_bAllowJoinInProgress = CallFunc_GetSessionSettings_bAllowJoinInProgress;
	Parms.CallFunc_GetSessionSettings_bIsAnticheatEnabled = CallFunc_GetSessionSettings_bIsAnticheatEnabled;
	Parms.CallFunc_GetSessionSettings_BuildUniqueID = CallFunc_GetSessionSettings_BuildUniqueID;
	Parms.CallFunc_GetSessionSettings_ExtraSettings = CallFunc_GetSessionSettings_ExtraSettings;
	Parms.CallFunc_GetSessionSettings_Result = CallFunc_GetSessionSettings_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_MakeProspectInfoFromExtraSettings_ReturnValue = CallFunc_MakeProspectInfoFromExtraSettings_ReturnValue;
	Parms.K2Node_MakeStruct_FProspectServerInfo = K2Node_MakeStruct_FProspectServerInfo;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_2 = K2Node_ComponentBoundEvent_ToggleButton_2;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_1 = K2Node_ComponentBoundEvent_ToggleButton_1;
	Parms.K2Node_ComponentBoundEvent_ToggleButton = K2Node_ComponentBoundEvent_ToggleButton;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent_1 = CallFunc_GetBackendProxyComponent_BackendProxyComponent_1;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess_1 = CallFunc_GetBackendProxyComponent_bSuccess_1;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent_2 = CallFunc_GetBackendProxyComponent_BackendProxyComponent_2;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess_2 = CallFunc_GetBackendProxyComponent_bSuccess_2;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent_3 = CallFunc_GetBackendProxyComponent_BackendProxyComponent_3;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess_3 = CallFunc_GetBackendProxyComponent_bSuccess_3;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


