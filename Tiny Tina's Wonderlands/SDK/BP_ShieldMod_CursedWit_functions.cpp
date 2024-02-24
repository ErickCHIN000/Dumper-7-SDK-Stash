#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShieldMod_CursedWit.BP_ShieldMod_CursedWit_C
// (Actor)

class UClass* ABP_ShieldMod_CursedWit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShieldMod_CursedWit_C");

	return Clss;
}


// BP_ShieldMod_CursedWit_C BP_ShieldMod_CursedWit.Default__BP_ShieldMod_CursedWit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShieldMod_CursedWit_C* ABP_ShieldMod_CursedWit_C::GetDefaultObj()
{
	static class ABP_ShieldMod_CursedWit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShieldMod_CursedWit_C*>(ABP_ShieldMod_CursedWit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ShieldMod_CursedWit.BP_ShieldMod_CursedWit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ShieldMod_CursedWit_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldMod_CursedWit_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ShieldMod_CursedWit.BP_ShieldMod_CursedWit_C.CursedWit_ShieldDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void ABP_ShieldMod_CursedWit_C::CursedWit_ShieldDepleted(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldMod_CursedWit_C", "CursedWit_ShieldDepleted");

	Params::ABP_ShieldMod_CursedWit_C_CursedWit_ShieldDepleted_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ShieldMod_CursedWit.BP_ShieldMod_CursedWit_C.CursedWit_TakeAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReceivedDamageDetails      Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ABP_ShieldMod_CursedWit_C::CursedWit_TakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldMod_CursedWit_C", "CursedWit_TakeAnyDamage");

	Params::ABP_ShieldMod_CursedWit_C_CursedWit_TakeAnyDamage_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ShieldMod_CursedWit.BP_ShieldMod_CursedWit_C.CursedWit_Unequip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*               UnequippedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShieldMod_CursedWit_C::CursedWit_Unequip(class AOakCharacter* UnequippedBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldMod_CursedWit_C", "CursedWit_Unequip");

	Params::ABP_ShieldMod_CursedWit_C_CursedWit_Unequip_Params Parms{};

	Parms.UnequippedBy = UnequippedBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ShieldMod_CursedWit.BP_ShieldMod_CursedWit_C.CursedWit_OnEquip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*               EquippedBy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShieldMod_CursedWit_C::CursedWit_OnEquip(class AOakCharacter* EquippedBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldMod_CursedWit_C", "CursedWit_OnEquip");

	Params::ABP_ShieldMod_CursedWit_C_CursedWit_OnEquip_Params Parms{};

	Parms.EquippedBy = EquippedBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ShieldMod_CursedWit.BP_ShieldMod_CursedWit_C.CursedWit_OnKilledEnemy
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ShieldMod_CursedWit_C::CursedWit_OnKilledEnemy(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldMod_CursedWit_C", "CursedWit_OnKilledEnemy");

	Params::ABP_ShieldMod_CursedWit_C_CursedWit_OnKilledEnemy_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ShieldMod_CursedWit.BP_ShieldMod_CursedWit_C.ExecuteUbergraph_BP_ShieldMod_CursedWit
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FGameResourcePoolReference  K2Node_CustomEvent_ResourcePool                                  (NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UDamageComponent*            K2Node_CustomEvent_DamageReceiver                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReceivedDamageDetails      K2Node_CustomEvent_Details1                                      (ContainsInstancedReference)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AOakCharacter*               K2Node_Event_UnequippedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue2                           (None)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter*               K2Node_Event_EquippedBy                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation2                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageComponent*            K2Node_CustomEvent_Damaged                                       (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         K2Node_CustomEvent_Details                                       (ConstParm)

void ABP_ShieldMod_CursedWit_C::ExecuteUbergraph_BP_ShieldMod_CursedWit(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDamageComponent* K2Node_CustomEvent_DamageReceiver, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AController* K2Node_CustomEvent_InstigatedBy, class UDamageCauserComponent* K2Node_CustomEvent_DamageCauser, const struct FReceivedDamageDetails& K2Node_CustomEvent_Details1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AOakCharacter* K2Node_Event_UnequippedBy, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, float CallFunc_RandomFloatInRangeFromStream_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class AOakCharacter* K2Node_Event_EquippedBy, float CallFunc_RandomFloatInRangeFromStream_ReturnValue2, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation2, int32 CallFunc_FinishTriggerDialog_SequenceID2, bool CallFunc_FinishTriggerDialog_ReturnValue2, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldMod_CursedWit_C", "ExecuteUbergraph_BP_ShieldMod_CursedWit");

	Params::ABP_ShieldMod_CursedWit_C_ExecuteUbergraph_BP_ShieldMod_CursedWit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.K2Node_CustomEvent_ResourcePool = K2Node_CustomEvent_ResourcePool;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_DamageReceiver = K2Node_CustomEvent_DamageReceiver;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_Details1 = K2Node_CustomEvent_Details1;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue = CallFunc_RandomFloatInRangeFromStream_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_Event_UnequippedBy = K2Node_Event_UnequippedBy;
	Parms.CallFunc_NewDialogContext_ReturnValue2 = CallFunc_NewDialogContext_ReturnValue2;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue1 = CallFunc_RandomFloatInRangeFromStream_ReturnValue1;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.K2Node_Event_EquippedBy = K2Node_Event_EquippedBy;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue2 = CallFunc_RandomFloatInRangeFromStream_ReturnValue2;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FinishTriggerDialog_Conversation2 = CallFunc_FinishTriggerDialog_Conversation2;
	Parms.CallFunc_FinishTriggerDialog_SequenceID2 = CallFunc_FinishTriggerDialog_SequenceID2;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue2 = CallFunc_FinishTriggerDialog_ReturnValue2;
	Parms.K2Node_CustomEvent_Damaged = K2Node_CustomEvent_Damaged;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;

	UObject::ProcessEvent(Func, &Parms);

}

}


