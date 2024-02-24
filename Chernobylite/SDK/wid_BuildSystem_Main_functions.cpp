#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_BuildSystem_Main.wid_BuildSystem_Main_C
// (None)

class UClass* UWid_BuildSystem_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_BuildSystem_Main_C");

	return Clss;
}


// wid_BuildSystem_Main_C wid_BuildSystem_Main.Default__wid_BuildSystem_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_BuildSystem_Main_C* UWid_BuildSystem_Main_C::GetDefaultObj()
{
	static class UWid_BuildSystem_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_BuildSystem_Main_C*>(UWid_BuildSystem_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.GetEnterButtons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWid_MainMenu_Buttons_Entry_C*EnterBuilding                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*EnterEditing                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*EnterBuildingGamepad                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Main_C::GetEnterButtons(class UWid_MainMenu_Buttons_Entry_C** EnterBuilding, class UWid_MainMenu_Buttons_Entry_C** EnterEditing, class UWid_MainMenu_Buttons_Entry_C** EnterBuildingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "GetEnterButtons");

	Params::UWid_BuildSystem_Main_C_GetEnterButtons_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnterBuilding != nullptr)
		*EnterBuilding = Parms.EnterBuilding;

	if (EnterEditing != nullptr)
		*EnterEditing = Parms.EnterEditing;

	if (EnterBuildingGamepad != nullptr)
		*EnterBuildingGamepad = Parms.EnterBuildingGamepad;

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.GetBackButtons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWid_MainMenu_Buttons_Entry_C*BackBuilding                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*BackEditing                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*BackBuildingGamepad                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Main_C::GetBackButtons(class UWid_MainMenu_Buttons_Entry_C** BackBuilding, class UWid_MainMenu_Buttons_Entry_C** BackEditing, class UWid_MainMenu_Buttons_Entry_C** BackBuildingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "GetBackButtons");

	Params::UWid_BuildSystem_Main_C_GetBackButtons_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BackBuilding != nullptr)
		*BackBuilding = Parms.BackBuilding;

	if (BackEditing != nullptr)
		*BackEditing = Parms.BackEditing;

	if (BackBuildingGamepad != nullptr)
		*BackBuildingGamepad = Parms.BackBuildingGamepad;

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.SetBuildingButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsInit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlayAnim                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetEnterButtons_EnterBuilding                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetEnterButtons_EnterEditing                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetEnterButtons_EnterBuildingGamepad                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Main_C::SetBuildingButtonState(bool bInIsEnabled, bool IsInit, bool PlayAnim, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterBuilding, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterEditing, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterBuildingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "SetBuildingButtonState");

	Params::UWid_BuildSystem_Main_C_SetBuildingButtonState_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;
	Parms.IsInit = IsInit;
	Parms.PlayAnim = PlayAnim;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEnterButtons_EnterBuilding = CallFunc_GetEnterButtons_EnterBuilding;
	Parms.CallFunc_GetEnterButtons_EnterEditing = CallFunc_GetEnterButtons_EnterEditing;
	Parms.CallFunc_GetEnterButtons_EnterBuildingGamepad = CallFunc_GetEnterButtons_EnterBuildingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.SetBackButtonsState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsInit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlayAnim                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetBackButtons_BackBuilding                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetBackButtons_BackEditing                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetBackButtons_BackBuildingGamepad                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Main_C::SetBackButtonsState(bool bInIsEnabled, bool IsInit, bool PlayAnim, enum class EUMGSequencePlayMode Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackBuilding, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackEditing, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackBuildingGamepad, enum class EUMGSequencePlayMode K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "SetBackButtonsState");

	Params::UWid_BuildSystem_Main_C_SetBackButtonsState_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;
	Parms.IsInit = IsInit;
	Parms.PlayAnim = PlayAnim;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetBackButtons_BackBuilding = CallFunc_GetBackButtons_BackBuilding;
	Parms.CallFunc_GetBackButtons_BackEditing = CallFunc_GetBackButtons_BackEditing;
	Parms.CallFunc_GetBackButtons_BackBuildingGamepad = CallFunc_GetBackButtons_BackBuildingGamepad;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.GetIsInItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsInItems                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Main_C::GetIsInItems(bool* IsInItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "GetIsInItems");

	Params::UWid_BuildSystem_Main_C_GetIsInItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsInItems != nullptr)
		*IsInItems = Parms.IsInItems;

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.ChangeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Ibi_BuildSystemUIState_C>NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Main_C::ChangeState(TScriptInterface<class Ibi_BuildSystemUIState_C> NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "ChangeState");

	Params::UWid_BuildSystem_Main_C_ChangeState_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.InputFaceLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.InputFaceUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.InputFaceRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.InputDPadUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::InputDPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "InputDPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.InputDPadRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::InputDPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "InputDPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.InputDPadDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::InputDPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "InputDPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.InputDPadLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::InputDPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "InputDPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.InputFaceDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.InputL1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::InputL1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "InputL1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.InputR1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::InputR1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "InputR1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.ShouldCloseEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::ShouldCloseEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "ShouldCloseEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.GoToEditModeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::GoToEditModeEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "GoToEditModeEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.GoBackEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::GoBackEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "GoBackEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.ShowCatalogs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Main_C::ShowCatalogs(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "ShowCatalogs");

	Params::UWid_BuildSystem_Main_C_ShowCatalogs_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.MoveLeftCatalogs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::MoveLeftCatalogs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "MoveLeftCatalogs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.MoveRightCatalogs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::MoveRightCatalogs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "MoveRightCatalogs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.MoveUpCatalogs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::MoveUpCatalogs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "MoveUpCatalogs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.MoveDownCatalogs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::MoveDownCatalogs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "MoveDownCatalogs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.BPItemScrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::BPItemScrap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "BPItemScrap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.SetBackInputEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Main_C::SetBackInputEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "SetBackInputEnabled");

	Params::UWid_BuildSystem_Main_C_SetBackInputEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.SetEnterActionEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Main_C::SetEnterActionEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "SetEnterActionEnabled");

	Params::UWid_BuildSystem_Main_C_SetEnterActionEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.StopAnimBackButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::StopAnimBackButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "StopAnimBackButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.StopEnterButtonAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::StopEnterButtonAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "StopEnterButtonAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.ExecuteUbergraph_wid_BuildSystem_Main
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGHUD_C*                    CallFunc_GetCGHud_AsCGHUD                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class Ibi_BuildSystemUIState_C>CallFunc_ChangeState_NewState_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class Ibi_BuildSystemUIState_C>CallFunc_ChangeState_NewState_CastInput_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class Ibi_BuildSystemUIState_C>CallFunc_ChangeState_NewState_CastInput_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Show                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class Ibi_BuildSystemUIState_C>CallFunc_InputDPadLeft_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class Ibi_BuildSystemUIState_C>CallFunc_InputDPadRight_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class Ibi_BuildSystemUIState_C>CallFunc_InputDPadUp_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class Ibi_BuildSystemUIState_C>CallFunc_InputDPadDown_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsEnabled_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsEnabled                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetBackButtons_BackBuilding                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetBackButtons_BackEditing                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetBackButtons_BackBuildingGamepad                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetEnterButtons_EnterBuilding                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetEnterButtons_EnterEditing                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Buttons_Entry_C*CallFunc_GetEnterButtons_EnterBuildingGamepad                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGHUD_C*                    CallFunc_GetCGHud_AsCGHUD_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Main_C::ExecuteUbergraph_wid_BuildSystem_Main(int32 EntryPoint, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_ChangeState_NewState_CastInput, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_ChangeState_NewState_CastInput_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_ChangeState_NewState_CastInput_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool K2Node_CustomEvent_Show, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadLeft_self_CastInput, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadRight_self_CastInput, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadUp_self_CastInput, TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadDown_self_CastInput, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, bool K2Node_CustomEvent_IsEnabled_1, bool K2Node_CustomEvent_IsEnabled, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackBuilding, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackEditing, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetBackButtons_BackBuildingGamepad, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterBuilding, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterEditing, class UWid_MainMenu_Buttons_Entry_C* CallFunc_GetEnterButtons_EnterBuildingGamepad, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "ExecuteUbergraph_wid_BuildSystem_Main");

	Params::UWid_BuildSystem_Main_C_ExecuteUbergraph_wid_BuildSystem_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGHud_AsCGHUD = CallFunc_GetCGHud_AsCGHUD;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_ChangeState_NewState_CastInput = CallFunc_ChangeState_NewState_CastInput;
	Parms.CallFunc_ChangeState_NewState_CastInput_1 = CallFunc_ChangeState_NewState_CastInput_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_ChangeState_NewState_CastInput_2 = CallFunc_ChangeState_NewState_CastInput_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_CustomEvent_Show = K2Node_CustomEvent_Show;
	Parms.CallFunc_InputDPadLeft_self_CastInput = CallFunc_InputDPadLeft_self_CastInput;
	Parms.CallFunc_InputDPadRight_self_CastInput = CallFunc_InputDPadRight_self_CastInput;
	Parms.CallFunc_InputDPadUp_self_CastInput = CallFunc_InputDPadUp_self_CastInput;
	Parms.CallFunc_InputDPadDown_self_CastInput = CallFunc_InputDPadDown_self_CastInput;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.K2Node_CustomEvent_IsEnabled_1 = K2Node_CustomEvent_IsEnabled_1;
	Parms.K2Node_CustomEvent_IsEnabled = K2Node_CustomEvent_IsEnabled;
	Parms.CallFunc_GetBackButtons_BackBuilding = CallFunc_GetBackButtons_BackBuilding;
	Parms.CallFunc_GetBackButtons_BackEditing = CallFunc_GetBackButtons_BackEditing;
	Parms.CallFunc_GetBackButtons_BackBuildingGamepad = CallFunc_GetBackButtons_BackBuildingGamepad;
	Parms.CallFunc_GetEnterButtons_EnterBuilding = CallFunc_GetEnterButtons_EnterBuilding;
	Parms.CallFunc_GetEnterButtons_EnterEditing = CallFunc_GetEnterButtons_EnterEditing;
	Parms.CallFunc_GetEnterButtons_EnterBuildingGamepad = CallFunc_GetEnterButtons_EnterBuildingGamepad;
	Parms.CallFunc_GetCGHud_AsCGHUD_1 = CallFunc_GetCGHud_AsCGHUD_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.Exit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Main_C::Exit__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Main_C", "Exit__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


