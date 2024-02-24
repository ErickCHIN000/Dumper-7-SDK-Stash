#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x179 - 0x110)
// BlueprintGeneratedClass Ability_AntGreatBow.Ability_AntGreatBow_C
class UAbility_AntGreatBow_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakWeapon*                            WeaponOwner;                                       // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AntGreatBow; // 0x120(0x28)(None)
	class AOakCharacter_Player*                  PlayerOwner;                                       // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADroppedInventoryItemPickup*           NewWeaponPickup;                                   // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UInventorySlotData*>            WeaponSlots;                                       // 0x158(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UInventorySlotData*                    CurrentWeaponSlot;                                 // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                UsedGreatbow;                                      // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PickedUp;                                          // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_AntGreatBow_C* GetDefaultObj();

	void GbxAsyncRequest_PickupSpawned_D9EEDB0D4D6B8F97CA8086BB2E5CF10D(class ADroppedInventoryItemPickup* Pickup);
	void OnActivated();
	void AntiqueGreatBow_OnUsed();
	void OnPaused();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_AntGreatBow(int32 EntryPoint, enum class EOakElementalType Temp_byte_Variable, class UItemPoolListInterface* Temp_object_Variable, class UItemPoolListInterface* Temp_object_Variable1, class UItemPoolListInterface* Temp_object_Variable2, class UItemPoolListInterface* Temp_object_Variable3, class UItemPoolListInterface* Temp_object_Variable4, class UItemPoolListInterface* Temp_object_Variable5, class ADroppedInventoryItemPickup* Temp_object_Variable6, class ADroppedInventoryItemPickup* K2Node_CustomEvent_Pickup, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWeaponFireComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_SetAntiqueGreatbowAttribute_Res, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess2, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_SetAntiqueGreatbowAttribute_Res1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, enum class EOakElementalType CallFunc_GetElementalType_ReturnValue, class UItemPoolListInterface* K2Node_Select_Default, const struct FSpawnDroppedPickupLootRequest& K2Node_MakeStruct_SpawnDroppedPickupLootRequest, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, int32 CallFunc_SpawnLootAsync_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


