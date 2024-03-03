#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ALS_Player_Controller.ALS_Player_Controller_C
// (Actor, PlayerController)

class UClass* AALS_Player_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_Player_Controller_C");

	return Clss;
}


// ALS_Player_Controller_C ALS_Player_Controller.Default__ALS_Player_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AALS_Player_Controller_C* AALS_Player_Controller_C::GetDefaultObj()
{
	static class AALS_Player_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AALS_Player_Controller_C*>(AALS_Player_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_Player_Controller.ALS_Player_Controller_C.BPI_Get_DebugInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  DebugFocusCharacter                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DebugView                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowHUD                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowTraces                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDebugShapes                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowLayerColors                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Slomo                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowCharacterInfo                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AALS_Player_Controller_C::BPI_Get_DebugInfo(class ACharacter** DebugFocusCharacter, bool* DebugView, bool* ShowHUD, bool* ShowTraces, bool* ShowDebugShapes, bool* ShowLayerColors, bool* Slomo, bool* ShowCharacterInfo, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Player_Controller_C", "BPI_Get_DebugInfo");

	Params::AALS_Player_Controller_C_BPI_Get_DebugInfo_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DebugFocusCharacter != nullptr)
		*DebugFocusCharacter = Parms.DebugFocusCharacter;

	if (DebugView != nullptr)
		*DebugView = Parms.DebugView;

	if (ShowHUD != nullptr)
		*ShowHUD = Parms.ShowHUD;

	if (ShowTraces != nullptr)
		*ShowTraces = Parms.ShowTraces;

	if (ShowDebugShapes != nullptr)
		*ShowDebugShapes = Parms.ShowDebugShapes;

	if (ShowLayerColors != nullptr)
		*ShowLayerColors = Parms.ShowLayerColors;

	if (Slomo != nullptr)
		*Slomo = Parms.Slomo;

	if (ShowCharacterInfo != nullptr)
		*ShowCharacterInfo = Parms.ShowCharacterInfo;

}


// Function ALS_Player_Controller.ALS_Player_Controller_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AALS_Player_Controller_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Player_Controller_C", "InpActEvt_AnyKey_K2Node_InputKeyEvent_0");

	Params::AALS_Player_Controller_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_Player_Controller.ALS_Player_Controller_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALS_Player_Controller_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Player_Controller_C", "ReceivePossess");

	Params::AALS_Player_Controller_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_Player_Controller.ALS_Player_Controller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AALS_Player_Controller_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Player_Controller_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_Player_Controller.ALS_Player_Controller_C.Initialize AC Inventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AALS_Player_Controller_C::Initialize_AC_Inventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Player_Controller_C", "Initialize AC Inventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_Player_Controller.ALS_Player_Controller_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_3
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALS_Player_Controller_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_3(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Player_Controller_C", "InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_3");

	Params::AALS_Player_Controller_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_3_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_Player_Controller.ALS_Player_Controller_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_4
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALS_Player_Controller_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_4(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Player_Controller_C", "InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_4");

	Params::AALS_Player_Controller_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_4_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_Player_Controller.ALS_Player_Controller_C.EventInteractWithNPC
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComp_NPC_Controller_C*      NPC_Controller                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Player_Pawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALS_Player_Controller_C::EventInteractWithNPC(class UComp_NPC_Controller_C* NPC_Controller, class APawn* Player_Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Player_Controller_C", "EventInteractWithNPC");

	Params::AALS_Player_Controller_C_EventInteractWithNPC_Params Parms{};

	Parms.NPC_Controller = NPC_Controller;
	Parms.Player_Pawn = Player_Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_Player_Controller.ALS_Player_Controller_C.ExecuteUbergraph_ALS_Player_Controller
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AALS_Base_CharacterBP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AALS_PlayerCameraManager_C*  K2Node_DynamicCast_AsALS_Player_Camera_Manager                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisKeyEvent_AxisValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisKeyEvent_AxisValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UComp_NPC_Controller_C*      K2Node_CustomEvent_NPC_Controller                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_Player_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// TScriptInterface<class IBPI_NPC_Interaction_C>K2Node_DynamicCast_AsBPI_NPC_Interaction                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AALS_Player_Controller_C::ExecuteUbergraph_ALS_Player_Controller(int32 EntryPoint, TArray<class AALS_Base_CharacterBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class APawn* K2Node_Event_PossessedPawn, class AALS_PlayerCameraManager_C* K2Node_DynamicCast_AsALS_Player_Camera_Manager, bool K2Node_DynamicCast_bSuccess, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, float K2Node_InputAxisKeyEvent_AxisValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float K2Node_InputAxisKeyEvent_AxisValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UComp_NPC_Controller_C* K2Node_CustomEvent_NPC_Controller, class APawn* K2Node_CustomEvent_Player_Pawn, const struct FKey& K2Node_InputKeyEvent_Key, TScriptInterface<class IBPI_NPC_Interaction_C> K2Node_DynamicCast_AsBPI_NPC_Interaction, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Key_IsGamepadKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Player_Controller_C", "ExecuteUbergraph_ALS_Player_Controller");

	Params::AALS_Player_Controller_C_ExecuteUbergraph_ALS_Player_Controller_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.K2Node_DynamicCast_AsALS_Player_Camera_Manager = K2Node_DynamicCast_AsALS_Player_Camera_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.K2Node_InputAxisKeyEvent_AxisValue_1 = K2Node_InputAxisKeyEvent_AxisValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.K2Node_InputAxisKeyEvent_AxisValue = K2Node_InputAxisKeyEvent_AxisValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_1 = CallFunc_NotEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_NPC_Controller = K2Node_CustomEvent_NPC_Controller;
	Parms.K2Node_CustomEvent_Player_Pawn = K2Node_CustomEvent_Player_Pawn;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_DynamicCast_AsBPI_NPC_Interaction = K2Node_DynamicCast_AsBPI_NPC_Interaction;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


