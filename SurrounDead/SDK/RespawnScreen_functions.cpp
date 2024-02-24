#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RespawnScreen.RespawnScreen_C
// (None)

class UClass* URespawnScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RespawnScreen_C");

	return Clss;
}


// RespawnScreen_C RespawnScreen.Default__RespawnScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URespawnScreen_C* URespawnScreen_C::GetDefaultObj()
{
	static class URespawnScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URespawnScreen_C*>(URespawnScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RespawnScreen.RespawnScreen_C.Get_DistanceTravelled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FText                        CallFunc_Append_Text_Return_Value                                (None)

class FText URespawnScreen_C::Get_DistanceTravelled(class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Append_Text_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "Get_DistanceTravelled");

	Params::URespawnScreen_C_Get_DistanceTravelled_Params Parms{};

	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Append_Text_Return_Value = CallFunc_Append_Text_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RespawnScreen.RespawnScreen_C.Get_HumansKilled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Append_Text_Return_Value                                (None)

class FText URespawnScreen_C::Get_HumansKilled(class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Append_Text_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "Get_HumansKilled");

	Params::URespawnScreen_C_Get_HumansKilled_Params Parms{};

	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Append_Text_Return_Value = CallFunc_Append_Text_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RespawnScreen.RespawnScreen_C.Get_ZombiesKilled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Append_Text_Return_Value                                (None)

class FText URespawnScreen_C::Get_ZombiesKilled(class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Append_Text_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "Get_ZombiesKilled");

	Params::URespawnScreen_C_Get_ZombiesKilled_Params Parms{};

	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Append_Text_Return_Value = CallFunc_Append_Text_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RespawnScreen.RespawnScreen_C.Get_DaysSurvived
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Append_Text_Return_Value                                (None)

class FText URespawnScreen_C::Get_DaysSurvived(class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Append_Text_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "Get_DaysSurvived");

	Params::URespawnScreen_C_Get_DaysSurvived_Params Parms{};

	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Append_Text_Return_Value = CallFunc_Append_Text_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RespawnScreen.RespawnScreen_C.ClearUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD_Game_C*                 CallFunc_GetGameHUD_HUD                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URespawnScreen_C::ClearUI(class AHUD_Game_C* CallFunc_GetGameHUD_HUD, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "ClearUI");

	Params::URespawnScreen_C_ClearUI_Params Parms{};

	Parms.CallFunc_GetGameHUD_HUD = CallFunc_GetGameHUD_HUD;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RespawnScreen.RespawnScreen_C.BndEvt__BP_RespawnScreen_QuitToMainMenuButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void URespawnScreen_C::BndEvt__BP_RespawnScreen_QuitToMainMenuButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "BndEvt__BP_RespawnScreen_QuitToMainMenuButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RespawnScreen.RespawnScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URespawnScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RespawnScreen.RespawnScreen_C.BndEvt__BP_RespawnScreen_QuitButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void URespawnScreen_C::BndEvt__BP_RespawnScreen_QuitButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "BndEvt__BP_RespawnScreen_QuitButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RespawnScreen.RespawnScreen_C.BndEvt__RespawnScreen_QuitToMainMenuButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void URespawnScreen_C::BndEvt__RespawnScreen_QuitToMainMenuButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "BndEvt__RespawnScreen_QuitToMainMenuButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RespawnScreen.RespawnScreen_C.BndEvt__RespawnScreen_QuitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void URespawnScreen_C::BndEvt__RespawnScreen_QuitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "BndEvt__RespawnScreen_QuitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RespawnScreen.RespawnScreen_C.BndEvt__RespawnScreen_RespawnButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void URespawnScreen_C::BndEvt__RespawnScreen_RespawnButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "BndEvt__RespawnScreen_RespawnButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RespawnScreen.RespawnScreen_C.BndEvt__RespawnScreen_RespawnButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void URespawnScreen_C::BndEvt__RespawnScreen_RespawnButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "BndEvt__RespawnScreen_RespawnButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RespawnScreen.RespawnScreen_C.BndEvt__RespawnScreen_RespawnSpawnPointButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void URespawnScreen_C::BndEvt__RespawnScreen_RespawnSpawnPointButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "BndEvt__RespawnScreen_RespawnSpawnPointButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RespawnScreen.RespawnScreen_C.BndEvt__RespawnScreen_RespawnSpawnPointButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void URespawnScreen_C::BndEvt__RespawnScreen_RespawnSpawnPointButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "BndEvt__RespawnScreen_RespawnSpawnPointButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RespawnScreen.RespawnScreen_C.ExecuteUbergraph_RespawnScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuitWidgetRespawn_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_PlayerCharacter_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetGameHUD_HUD                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URespawnScreen_C::ExecuteUbergraph_RespawnScreen(int32 EntryPoint, bool CallFunc_IsStandalone_ReturnValue, int32 Temp_int_Array_Index_Variable, class UQuitWidgetRespawn_C* CallFunc_Create_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class ABP_PlayerCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, class ABP_PlayerCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller_1, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_1, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_2, class AHUD_Game_C* CallFunc_GetGameHUD_HUD, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnScreen_C", "ExecuteUbergraph_RespawnScreen");

	Params::URespawnScreen_C_ExecuteUbergraph_RespawnScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_GetGameInstance_Instance = CallFunc_GetGameInstance_Instance;
	Parms.CallFunc_CastToController_Controller_1 = CallFunc_CastToController_Controller_1;
	Parms.CallFunc_GetGameInstance_Instance_1 = CallFunc_GetGameInstance_Instance_1;
	Parms.CallFunc_GetGameInstance_Instance_2 = CallFunc_GetGameInstance_Instance_2;
	Parms.CallFunc_GetGameHUD_HUD = CallFunc_GetGameHUD_HUD;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


