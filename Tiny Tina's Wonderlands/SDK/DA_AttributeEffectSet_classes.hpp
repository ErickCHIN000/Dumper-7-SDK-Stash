#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass DA_AttributeEffectSet.DA_AttributeEffectSet_C
class UDA_AttributeEffectSet_C : public UGbxDataAssetBlueprintable
{
public:
	TArray<struct FAttributeEffectData>          AttributeEffects;                                  // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UDA_AttributeEffectSet_C* GetDefaultObj();

	void ApplyAttributeEffectSet(class AActor* ModifierContext, class AActor* ModifierTarget, TArray<struct FGbxAttributeModifierHandle>* AppliedAttributeEffects, const TArray<struct FGbxAttributeModifierHandle>& MyAppliedEffects, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FAttributeEffectData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


