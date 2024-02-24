#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_MushroomCompanion_RangedAttack.A_MushroomCompanion_RangedAttack_C
// (None)

class UClass* UA_MushroomCompanion_RangedAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_MushroomCompanion_RangedAttack_C");

	return Clss;
}


// A_MushroomCompanion_RangedAttack_C A_MushroomCompanion_RangedAttack.Default__A_MushroomCompanion_RangedAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_MushroomCompanion_RangedAttack_C* UA_MushroomCompanion_RangedAttack_C::GetDefaultObj()
{
	static class UA_MushroomCompanion_RangedAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_MushroomCompanion_RangedAttack_C*>(UA_MushroomCompanion_RangedAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function A_MushroomCompanion_RangedAttack.A_MushroomCompanion_RangedAttack_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UA_MushroomCompanion_RangedAttack_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_MushroomCompanion_RangedAttack_C", "OnBegin");

	Params::UA_MushroomCompanion_RangedAttack_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function A_MushroomCompanion_RangedAttack.A_MushroomCompanion_RangedAttack_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UA_MushroomCompanion_RangedAttack_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_MushroomCompanion_RangedAttack_C", "OnEnd");

	Params::UA_MushroomCompanion_RangedAttack_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function A_MushroomCompanion_RangedAttack.A_MushroomCompanion_RangedAttack_C.Notify_Projectile_Hold_Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_MushroomCompanion_RangedAttack_C::Notify_Projectile_Hold_Begin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_MushroomCompanion_RangedAttack_C", "Notify_Projectile_Hold_Begin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_MushroomCompanion_RangedAttack.A_MushroomCompanion_RangedAttack_C.Notify_Projectile_Hold_Abort
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_MushroomCompanion_RangedAttack_C::Notify_Projectile_Hold_Abort()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_MushroomCompanion_RangedAttack_C", "Notify_Projectile_Hold_Abort");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_MushroomCompanion_RangedAttack.A_MushroomCompanion_RangedAttack_C.Notify_Projectile_Hold_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_MushroomCompanion_RangedAttack_C::Notify_Projectile_Hold_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_MushroomCompanion_RangedAttack_C", "Notify_Projectile_Hold_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_MushroomCompanion_RangedAttack.A_MushroomCompanion_RangedAttack_C.ExecuteUbergraph_A_MushroomCompanion_RangedAttack
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTargetingComponent*         CallFunc_GetTargetingComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetBestTargetActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCompanionTargetingSocket_Socket                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UA_MushroomCompanion_RangedAttack_C::ExecuteUbergraph_A_MushroomCompanion_RangedAttack(int32 EntryPoint, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling1, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling2, bool K2Node_DynamicCast_bSuccess2, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess3, class UTargetingComponent* CallFunc_GetTargetingComponent_ReturnValue, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling3, bool K2Node_DynamicCast_bSuccess4, class AActor* CallFunc_GetBestTargetActor_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess5, class FName CallFunc_GetCompanionTargetingSocket_Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_MushroomCompanion_RangedAttack_C", "ExecuteUbergraph_A_MushroomCompanion_RangedAttack");

	Params::UA_MushroomCompanion_RangedAttack_C_ExecuteUbergraph_A_MushroomCompanion_RangedAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling = K2Node_DynamicCast_AsBPI_AIExplosive_Handling;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling1 = K2Node_DynamicCast_AsBPI_AIExplosive_Handling1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling2 = K2Node_DynamicCast_AsBPI_AIExplosive_Handling2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetTargetingComponent_ReturnValue = CallFunc_GetTargetingComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling3 = K2Node_DynamicCast_AsBPI_AIExplosive_Handling3;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_GetBestTargetActor_ReturnValue = CallFunc_GetBestTargetActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_GetCompanionTargetingSocket_Socket = CallFunc_GetCompanionTargetingSocket_Socket;

	UObject::ProcessEvent(Func, &Parms);

}

}


