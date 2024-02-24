#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C
// (None)

class UClass* UCE_PlayerShared_Skills_Confuse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CE_PlayerShared_Skills_Confuse_C");

	return Clss;
}


// CE_PlayerShared_Skills_Confuse_C CE_PlayerShared_Skills_Confuse.Default__CE_PlayerShared_Skills_Confuse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCE_PlayerShared_Skills_Confuse_C* UCE_PlayerShared_Skills_Confuse_C::GetDefaultObj()
{
	static class UCE_PlayerShared_Skills_Confuse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCE_PlayerShared_Skills_Confuse_C*>(UCE_PlayerShared_Skills_Confuse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.On Confuse Target death
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCE_PlayerShared_Skills_Confuse_C::On_Confuse_Target_death(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CE_PlayerShared_Skills_Confuse_C", "On Confuse Target death");

	Params::UCE_PlayerShared_Skills_Confuse_C_On_Confuse_Target_death_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCE_PlayerShared_Skills_Confuse_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CE_PlayerShared_Skills_Confuse_C", "OnEnd");

	Params::UCE_PlayerShared_Skills_Confuse_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCE_PlayerShared_Skills_Confuse_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CE_PlayerShared_Skills_Confuse_C", "OnBegin");

	Params::UCE_PlayerShared_Skills_Confuse_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.StartTeamSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCE_PlayerShared_Skills_Confuse_C::StartTeamSwap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CE_PlayerShared_Skills_Confuse_C", "StartTeamSwap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.StopTeamSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCE_PlayerShared_Skills_Confuse_C::StopTeamSwap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CE_PlayerShared_Skills_Confuse_C", "StopTeamSwap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.ExecuteUbergraph_CE_PlayerShared_Skills_Confuse
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTeamComponent*              CallFunc_GetTeamComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamageReceiver                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_K2_GetObjectRegisterValue_OutObject                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetObjectRegisterValue_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_ApplyAttributeEffect_ModifierActionResult               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_ApplyAttributeEffect_ReturnValue                        (None)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCE_PlayerShared_Skills_Confuse_C::ExecuteUbergraph_CE_PlayerShared_Skills_Confuse(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UTeamComponent* CallFunc_GetTeamComponent_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_K2_GetActor_ReturnValue1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, class AActor* K2Node_Event_Actor, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_RemoveGameplayTag_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions1, bool K2Node_DynamicCast_bSuccess2, class UObject* CallFunc_K2_GetObjectRegisterValue_OutObject, bool CallFunc_K2_GetObjectRegisterValue_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess3, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RemoveAttributeModifier_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CE_PlayerShared_Skills_Confuse_C", "ExecuteUbergraph_CE_PlayerShared_Skills_Confuse");

	Params::UCE_PlayerShared_Skills_Confuse_C_ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTeamComponent_ReturnValue = CallFunc_GetTeamComponent_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_DamageReceiver = K2Node_CustomEvent_DamageReceiver;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions1 = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions1;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_K2_GetObjectRegisterValue_OutObject = CallFunc_K2_GetObjectRegisterValue_OutObject;
	Parms.CallFunc_K2_GetObjectRegisterValue_ReturnValue = CallFunc_K2_GetObjectRegisterValue_ReturnValue;
	Parms.CallFunc_ApplyAttributeEffect_ModifierActionResult = CallFunc_ApplyAttributeEffect_ModifierActionResult;
	Parms.CallFunc_ApplyAttributeEffect_ReturnValue = CallFunc_ApplyAttributeEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RemoveAttributeModifier_ReturnValue = CallFunc_RemoveAttributeModifier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


