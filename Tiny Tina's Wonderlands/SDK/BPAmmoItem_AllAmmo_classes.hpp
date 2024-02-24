#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4B0 - 0x4A8)
// BlueprintGeneratedClass BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C
class ABPAmmoItem_AllAmmo_C : public AOakInventoryAmmoItem
{
public:
	class UGbxCondition*                         AllAmmoFullCondition;                              // 0x4A8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPAmmoItem_AllAmmo_C* GetDefaultObj();

	void ReceiveBeginPlay(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void FillAmmo(class AOakCharacter* PickupInstigator, class UGbxAttributeData* CurrentValue, class UGbxAttributeData* MaxValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void PickedUp(class AOakCharacter* PickupInstigator, enum class EIsPlayerExecOutput CallFunc_BranchOnIsPlayer_Branches, bool K2Node_SwitchEnum_CmpSuccess);
	bool CanBePickedUp(class AOakCharacter* PickupInstigator, int32 Quantity, bool UsedByInstigator, class AInventoryItemPickup* WorldPickupActor, bool CallFunc_CanBePickedUp_ReturnValue, bool CallFunc_IsPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_EvaluateCondition_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


