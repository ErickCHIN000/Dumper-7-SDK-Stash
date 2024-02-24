#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPChar_Enemy.BPChar_Enemy_C
// (Actor, Pawn)

class UClass* ABPChar_Enemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPChar_Enemy_C");

	return Clss;
}


// BPChar_Enemy_C BPChar_Enemy.Default__BPChar_Enemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPChar_Enemy_C* ABPChar_Enemy_C::GetDefaultObj()
{
	static class ABPChar_Enemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPChar_Enemy_C*>(ABPChar_Enemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPChar_Enemy.BPChar_Enemy_C.AIEndlessDungeon_Get
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEndlessDungeon                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Enemy_C::AIEndlessDungeon_Get(bool* IsEndlessDungeon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "AIEndlessDungeon_Get");

	Params::ABPChar_Enemy_C_AIEndlessDungeon_Get_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEndlessDungeon != nullptr)
		*IsEndlessDungeon = Parms.IsEndlessDungeon;

}


// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPolymorphStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Enemy_C::Enemy_OnPolymorphStart(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "Enemy_OnPolymorphStart");

	Params::ABPChar_Enemy_C_Enemy_OnPolymorphStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPolymorphStop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Enemy_C::Enemy_OnPolymorphStop(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "Enemy_OnPolymorphStop");

	Params::ABPChar_Enemy_C_Enemy_OnPolymorphStop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Enemy.BPChar_Enemy_C.CanEnemyBeTeamSwapped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_EvaluateConditionType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Enemy_C::CanEnemyBeTeamSwapped(bool* Res, bool CallFunc_K2_EvaluateConditionType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "CanEnemyBeTeamSwapped");

	Params::ABPChar_Enemy_C_CanEnemyBeTeamSwapped_Params Parms{};

	Parms.CallFunc_K2_EvaluateConditionType_ReturnValue = CallFunc_K2_EvaluateConditionType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Enemy.BPChar_Enemy_C.GetCompanionTargetingSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Socket                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Enemy_C::GetCompanionTargetingSocket(class FName* Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "GetCompanionTargetingSocket");

	Params::ABPChar_Enemy_C_GetCompanionTargetingSocket_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Socket != nullptr)
		*Socket = Parms.Socket;

}


// Function BPChar_Enemy.BPChar_Enemy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Enemy_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Enemy.BPChar_Enemy_C.Player_HealthDepleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Enemy_C::Player_HealthDepleted(class AOakCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "Player_HealthDepleted");

	Params::ABPChar_Enemy_C_Player_HealthDepleted_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Enemy_C::Enemy_OnPhaseLockStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "Enemy_OnPhaseLockStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Enemy_C::Enemy_OnPhaseLockStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "Enemy_OnPhaseLockStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Enemy_C::Enemy_OnThoughtLockStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "Enemy_OnThoughtLockStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Enemy_C::Enemy_OnThoughtLockStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "Enemy_OnThoughtLockStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Enemy.BPChar_Enemy_C.Player_SpawnTransfusionProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DataBlueprint__Override_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageType__Override_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Causer__Override_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Enemy_C::Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "Player_SpawnTransfusionProjectile");

	Params::ABPChar_Enemy_C_Player_SpawnTransfusionProjectile_Params Parms{};

	Parms.DataBlueprint__Override_ = DataBlueprint__Override_;
	Parms.DamageType__Override_ = DamageType__Override_;
	Parms.SourceActor = SourceActor;
	Parms.TargetActor = TargetActor;
	Parms.Damage = Damage;
	Parms.Causer__Override_ = Causer__Override_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Enemy.BPChar_Enemy_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy
// (BlueprintEvent)
// Parameters:
// enum class EOakElementalType       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Enemy_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy(enum class EOakElementalType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy");

	Params::ABPChar_Enemy_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Enemy.BPChar_Enemy_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Enemy
// (BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Enemy_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Enemy(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Enemy");

	Params::ABPChar_Enemy_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Enemy_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Enemy.BPChar_Enemy_C.AIEndlessDungeon_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Enemy_C::AIEndlessDungeon_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "AIEndlessDungeon_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Enemy.BPChar_Enemy_C.ExecuteUbergraph_BPChar_Enemy
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter*               K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_DataBlueprint__Override_                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_DamageType__Override_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_SourceActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_TargetActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Causer__Override_                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       K2Node_ComponentBoundEvent_Type                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_ComponentBoundEvent_DamageReceiver                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_DamageCauser                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Enemy_C::ExecuteUbergraph_BPChar_Enemy(int32 EntryPoint, enum class EOakElementalType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, class UClass* Temp_class_Variable5, bool Temp_bool_IsClosed_Variable, class AOakCharacter* K2Node_Event_Character, class UClass* K2Node_Event_DataBlueprint__Override_, class UClass* K2Node_Event_DamageType__Override_, class AActor* K2Node_Event_SourceActor, class AActor* K2Node_Event_TargetActor, float K2Node_Event_Damage, class AActor* K2Node_Event_Causer__Override_, enum class EOakElementalType K2Node_ComponentBoundEvent_Type, bool Temp_bool_Has_Been_Initd_Variable, class UClass* K2Node_Select_Default, bool CallFunc_IsValidClass_ReturnValue, class AActor* K2Node_ComponentBoundEvent_DamageReceiver, class AActor* K2Node_ComponentBoundEvent_DamageCauser, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Enemy_C", "ExecuteUbergraph_BPChar_Enemy");

	Params::ABPChar_Enemy_C_ExecuteUbergraph_BPChar_Enemy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.Temp_class_Variable4 = Temp_class_Variable4;
	Parms.Temp_class_Variable5 = Temp_class_Variable5;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_Event_DataBlueprint__Override_ = K2Node_Event_DataBlueprint__Override_;
	Parms.K2Node_Event_DamageType__Override_ = K2Node_Event_DamageType__Override_;
	Parms.K2Node_Event_SourceActor = K2Node_Event_SourceActor;
	Parms.K2Node_Event_TargetActor = K2Node_Event_TargetActor;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_Causer__Override_ = K2Node_Event_Causer__Override_;
	Parms.K2Node_ComponentBoundEvent_Type = K2Node_ComponentBoundEvent_Type;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_DamageReceiver = K2Node_ComponentBoundEvent_DamageReceiver;
	Parms.K2Node_ComponentBoundEvent_DamageCauser = K2Node_ComponentBoundEvent_DamageCauser;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


