#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xF8 - 0xF8)
// BlueprintGeneratedClass BP_EquippableModifier_GlobalStat.BP_EquippableModifier_GlobalStat_C
class UBP_EquippableModifier_GlobalStat_C : public UBP_EquippableModifier_C
{
public:

	static class UClass* StaticClass();
	static class UBP_EquippableModifier_GlobalStat_C* GetDefaultObj();

	bool ItemUnequipped(class AMapManager_C* CallFunc_GetActorOfClass_ReturnValue, const struct FEquippableData& CallFunc_GetEquippableStruct_Equippable, enum class EValid CallFunc_GetEquippableStruct_Paths, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ItemUnequipped_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue);
	bool ItemEquipped(class AMapManager_C* CallFunc_GetActorOfClass_ReturnValue, const struct FEquippableData& CallFunc_GetEquippableStruct_Equippable, enum class EValid CallFunc_GetEquippableStruct_Paths, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ItemEquipped_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue);
};

}


