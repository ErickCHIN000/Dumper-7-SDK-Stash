#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ModifierCosmetic_CorpseFlies.ModifierCosmetic_CorpseFlies_C
// (SceneComponent)

class UClass* UModifierCosmetic_CorpseFlies_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModifierCosmetic_CorpseFlies_C");

	return Clss;
}


// ModifierCosmetic_CorpseFlies_C ModifierCosmetic_CorpseFlies.Default__ModifierCosmetic_CorpseFlies_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModifierCosmetic_CorpseFlies_C* UModifierCosmetic_CorpseFlies_C::GetDefaultObj()
{
	static class UModifierCosmetic_CorpseFlies_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModifierCosmetic_CorpseFlies_C*>(UModifierCosmetic_CorpseFlies_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ModifierCosmetic_CorpseFlies.ModifierCosmetic_CorpseFlies_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModifierCosmetic_CorpseFlies_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModifierCosmetic_CorpseFlies_C", "ReceiveEndPlay");

	Params::UModifierCosmetic_CorpseFlies_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModifierCosmetic_CorpseFlies.ModifierCosmetic_CorpseFlies_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UModifierCosmetic_CorpseFlies_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModifierCosmetic_CorpseFlies_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ModifierCosmetic_CorpseFlies.ModifierCosmetic_CorpseFlies_C.ExecuteUbergraph_ModifierCosmetic_CorpseFlies
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GOAP_Corpse_C*           K2Node_DynamicCast_AsBP_GOAP_Corpse                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GOAP_Corpse_C*           K2Node_DynamicCast_AsBP_GOAP_Corpse_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSkeletalCenterOfMass_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UModifierCosmetic_CorpseFlies_C::ExecuteUbergraph_ModifierCosmetic_CorpseFlies(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse_1, bool K2Node_DynamicCast_bSuccess_1, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, const struct FVector& CallFunc_GetSkeletalCenterOfMass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModifierCosmetic_CorpseFlies_C", "ExecuteUbergraph_ModifierCosmetic_CorpseFlies");

	Params::UModifierCosmetic_CorpseFlies_C_ExecuteUbergraph_ModifierCosmetic_CorpseFlies_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_GOAP_Corpse = K2Node_DynamicCast_AsBP_GOAP_Corpse;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_GOAP_Corpse_1 = K2Node_DynamicCast_AsBP_GOAP_Corpse_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.CallFunc_GetSkeletalCenterOfMass_ReturnValue = CallFunc_GetSkeletalCenterOfMass_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


