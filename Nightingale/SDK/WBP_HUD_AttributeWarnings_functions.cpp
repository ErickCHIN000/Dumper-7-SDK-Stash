#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_AttributeWarnings.WBP_HUD_AttributeWarnings_C
// (None)

class UClass* UWBP_HUD_AttributeWarnings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_AttributeWarnings_C");

	return Clss;
}


// WBP_HUD_AttributeWarnings_C WBP_HUD_AttributeWarnings.Default__WBP_HUD_AttributeWarnings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_AttributeWarnings_C* UWBP_HUD_AttributeWarnings_C::GetDefaultObj()
{
	static class UWBP_HUD_AttributeWarnings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_AttributeWarnings_C*>(UWBP_HUD_AttributeWarnings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_AttributeWarnings.WBP_HUD_AttributeWarnings_C.CleanupEventBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_AttributeWarnings_C::CleanupEventBindings(class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_AttributeWarnings_C", "CleanupEventBindings");

	Params::UWBP_HUD_AttributeWarnings_C_CleanupEventBindings_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue_1 = CallFunc_GetOwningPlayerState_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_AttributeWarnings.WBP_HUD_AttributeWarnings_C.OnClientReadyHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXAttributeSet*            CallFunc_GetAttributeSet_AttributeSet                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_AttributeWarnings_C::OnClientReadyHandler(class UNWXAttributeSet* CallFunc_GetAttributeSet_AttributeSet, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_AttributeWarnings_C", "OnClientReadyHandler");

	Params::UWBP_HUD_AttributeWarnings_C_OnClientReadyHandler_Params Parms{};

	Parms.CallFunc_GetAttributeSet_AttributeSet = CallFunc_GetAttributeSet_AttributeSet;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_AttributeWarnings.WBP_HUD_AttributeWarnings_C.GetAttributeSet
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNWXAttributeSet*            AttributeSet                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_AttributeWarnings_C::GetAttributeSet(class UNWXAttributeSet** AttributeSet, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_AttributeWarnings_C", "GetAttributeSet");

	Params::UWBP_HUD_AttributeWarnings_C_GetAttributeSet_Params Parms{};

	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeSet != nullptr)
		*AttributeSet = Parms.AttributeSet;

}


// Function WBP_HUD_AttributeWarnings.WBP_HUD_AttributeWarnings_C.OnPlayerRespawnedHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXCharacter*               PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_AttributeWarnings_C::OnPlayerRespawnedHandler(class ANWXCharacter* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_AttributeWarnings_C", "OnPlayerRespawnedHandler");

	Params::UWBP_HUD_AttributeWarnings_C_OnPlayerRespawnedHandler_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_AttributeWarnings.WBP_HUD_AttributeWarnings_C.OnConstructHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GameState_C*             GameState                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReady_Ready                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_AttributeWarnings_C::OnConstructHandler(class ABP_GameState_C* GameState, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsReady_Ready, bool CallFunc_BooleanAND_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_AttributeWarnings_C", "OnConstructHandler");

	Params::UWBP_HUD_AttributeWarnings_C_OnConstructHandler_Params Parms{};

	Parms.GameState = GameState;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsReady_Ready = CallFunc_IsReady_Ready;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_AttributeWarnings.WBP_HUD_AttributeWarnings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_AttributeWarnings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_AttributeWarnings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_AttributeWarnings.WBP_HUD_AttributeWarnings_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_AttributeWarnings_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_AttributeWarnings_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_AttributeWarnings.WBP_HUD_AttributeWarnings_C.OnPawnPossessedAndReady
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_AttributeWarnings_C::OnPawnPossessedAndReady(class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_AttributeWarnings_C", "OnPawnPossessedAndReady");

	Params::UWBP_HUD_AttributeWarnings_C_OnPawnPossessedAndReady_Params Parms{};

	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_AttributeWarnings.WBP_HUD_AttributeWarnings_C.ExecuteUbergraph_WBP_HUD_AttributeWarnings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_NewPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_AttributeWarnings_C::ExecuteUbergraph_WBP_HUD_AttributeWarnings(int32 EntryPoint, class APawn* K2Node_Event_NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_AttributeWarnings_C", "ExecuteUbergraph_WBP_HUD_AttributeWarnings");

	Params::UWBP_HUD_AttributeWarnings_C_ExecuteUbergraph_WBP_HUD_AttributeWarnings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewPawn = K2Node_Event_NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


