#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_AntGreatBow.Ability_AntGreatBow_C
// (None)

class UClass* UAbility_AntGreatBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_AntGreatBow_C");

	return Clss;
}


// Ability_AntGreatBow_C Ability_AntGreatBow.Default__Ability_AntGreatBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_AntGreatBow_C* UAbility_AntGreatBow_C::GetDefaultObj()
{
	static class UAbility_AntGreatBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_AntGreatBow_C*>(UAbility_AntGreatBow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_AntGreatBow.Ability_AntGreatBow_C.GbxAsyncRequest_PickupSpawned_D9EEDB0D4D6B8F97CA8086BB2E5CF10D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADroppedInventoryItemPickup* Pickup                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_AntGreatBow_C::GbxAsyncRequest_PickupSpawned_D9EEDB0D4D6B8F97CA8086BB2E5CF10D(class ADroppedInventoryItemPickup* Pickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AntGreatBow_C", "GbxAsyncRequest_PickupSpawned_D9EEDB0D4D6B8F97CA8086BB2E5CF10D");

	Params::UAbility_AntGreatBow_C_GbxAsyncRequest_PickupSpawned_D9EEDB0D4D6B8F97CA8086BB2E5CF10D_Params Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_AntGreatBow.Ability_AntGreatBow_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_AntGreatBow_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AntGreatBow_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AntGreatBow.Ability_AntGreatBow_C.AntiqueGreatBow_OnUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_AntGreatBow_C::AntiqueGreatBow_OnUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AntGreatBow_C", "AntiqueGreatBow_OnUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AntGreatBow.Ability_AntGreatBow_C.OnPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_AntGreatBow_C::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AntGreatBow_C", "OnPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AntGreatBow.Ability_AntGreatBow_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_AntGreatBow_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AntGreatBow_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AntGreatBow.Ability_AntGreatBow_C.ExecuteUbergraph_Ability_AntGreatBow
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPoolListInterface*      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPoolListInterface*      Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPoolListInterface*      Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPoolListInterface*      Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPoolListInterface*      Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPoolListInterface*      Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADroppedInventoryItemPickup* Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADroppedInventoryItemPickup* K2Node_CustomEvent_Pickup                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakWeapon*                  K2Node_DynamicCast_AsOak_Weapon                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UWeaponFireComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetAntiqueGreatbowAttribute_Res                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetAntiqueGreatbowAttribute_Res1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UGbxDamageType*              CallFunc_GetDamageType_ReturnValue                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetElementalType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPoolListInterface*      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnDroppedPickupLootRequestK2Node_MakeStruct_SpawnDroppedPickupLootRequest                  (ContainsInstancedReference)
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue                              (IsPlainOldData, NoDestructor)
// int32                              CallFunc_SpawnLootAsync_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_AntGreatBow_C::ExecuteUbergraph_Ability_AntGreatBow(int32 EntryPoint, enum class EOakElementalType Temp_byte_Variable, class UItemPoolListInterface* Temp_object_Variable, class UItemPoolListInterface* Temp_object_Variable1, class UItemPoolListInterface* Temp_object_Variable2, class UItemPoolListInterface* Temp_object_Variable3, class UItemPoolListInterface* Temp_object_Variable4, class UItemPoolListInterface* Temp_object_Variable5, class ADroppedInventoryItemPickup* Temp_object_Variable6, class ADroppedInventoryItemPickup* K2Node_CustomEvent_Pickup, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWeaponFireComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_SetAntiqueGreatbowAttribute_Res, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess2, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_SetAntiqueGreatbowAttribute_Res1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, enum class EOakElementalType CallFunc_GetElementalType_ReturnValue, class UItemPoolListInterface* K2Node_Select_Default, const struct FSpawnDroppedPickupLootRequest& K2Node_MakeStruct_SpawnDroppedPickupLootRequest, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, int32 CallFunc_SpawnLootAsync_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AntGreatBow_C", "ExecuteUbergraph_Ability_AntGreatBow");

	Params::UAbility_AntGreatBow_C_ExecuteUbergraph_Ability_AntGreatBow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.K2Node_CustomEvent_Pickup = K2Node_CustomEvent_Pickup;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Weapon = K2Node_DynamicCast_AsOak_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_SetAntiqueGreatbowAttribute_Res = CallFunc_SetAntiqueGreatbowAttribute_Res;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_SetAntiqueGreatbowAttribute_Res1 = CallFunc_SetAntiqueGreatbowAttribute_Res1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetDamageType_ReturnValue = CallFunc_GetDamageType_ReturnValue;
	Parms.CallFunc_GetElementalType_ReturnValue = CallFunc_GetElementalType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SpawnDroppedPickupLootRequest = K2Node_MakeStruct_SpawnDroppedPickupLootRequest;
	Parms.CallFunc_GetActorSocket_ReturnValue = CallFunc_GetActorSocket_ReturnValue;
	Parms.CallFunc_SpawnLootAsync_ReturnValue = CallFunc_SpawnLootAsync_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


