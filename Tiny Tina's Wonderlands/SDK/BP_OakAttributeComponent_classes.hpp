#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x680 (0x808 - 0x188)
// BlueprintGeneratedClass BP_OakAttributeComponent.BP_OakAttributeComponent_C
class UBP_OakAttributeComponent_C : public UGbxAttributesComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(Transient, DuplicateTransient)
	struct FStruct_DamageTypes                   TypeInstigatorMultipliers;                         // 0x190(0x54)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStruct_DamageTypes                   TypeReceiverMultipliers;                           // 0x1E4(0x54)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStruct_DamageSources                 SourceInstigatorMultipliers;                       // 0x238(0x18C)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStruct_DamageSources                 SourceReceiverMultipliers;                         // 0x3C4(0x18C)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStruct_DamageTypes                   EffectInstigatorMultipliers;                       // 0x550(0x54)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStruct_DamageSources                 SourceInstigatorHealFFModifiers_Flesh;             // 0x5A4(0x18C)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStruct_DamageTypes                   EffectActorMultipliers;                            // 0x730(0x54)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class Enum_ElementalAffinity            Affinity_Normal;                                   // 0x784(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ElementalAffinity            Affinity_Fire;                                     // 0x785(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ElementalAffinity            Affinity_Shock;                                    // 0x786(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ElementalAffinity            Affinity_Poison;                                   // 0x787(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ElementalAffinity            Affinity_DarkMagic;                                // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ElementalAffinity            Affinity_Cryo;                                     // 0x789(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19D5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxAttributeModifierHandle>   AffinityModifiers_Normal;                          // 0x790(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGbxAttributeModifierHandle>   AffinityModifiers_Fire;                            // 0x7A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGbxAttributeModifierHandle>   AffinityModifiers_Shock;                           // 0x7B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGbxAttributeModifierHandle>   AffinityModifiers_Poison;                          // 0x7C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGbxAttributeModifierHandle>   AffinityModifiers_DarkMagic;                       // 0x7D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGbxAttributeModifierHandle>   AffinityModifiers_Cryo;                            // 0x7E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGbxAttributeFloat                    DarkMagicLeechGainPercentOfMaxHealth;              // 0x7F0(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    VoidDamagePercentOfMaxHealth;                      // 0x7FC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_OakAttributeComponent_C* GetDefaultObj();

	void ClearElementalAffinity();
	void InitElementAffinity();
	void SetElementAffinity(enum class EOakElementalType Element, enum class Enum_ElementalAffinity Affinity, enum class Enum_ElementalAffinity MyAffinity, enum class EOakElementalType MyElement, const TArray<struct FGbxAttributeModifierHandle>& MyNewAttributeEffects, class UDA_AttributeEffectSet_C* Temp_object_Variable, class UDA_AttributeEffectSet_C* Temp_object_Variable1, class UDA_AttributeEffectSet_C* Temp_object_Variable2, class UDA_AttributeEffectSet_C* Temp_object_Variable3, class UDA_AttributeEffectSet_C* Temp_object_Variable4, class UDA_AttributeEffectSet_C* Temp_object_Variable5, enum class EOakElementalType Temp_byte_Variable, class UDA_AttributeEffectSet_C* Temp_object_Variable6, class UDA_AttributeEffectSet_C* Temp_object_Variable7, class UDA_AttributeEffectSet_C* Temp_object_Variable8, class UDA_AttributeEffectSet_C* Temp_object_Variable9, class UDA_AttributeEffectSet_C* Temp_object_Variable10, class UDA_AttributeEffectSet_C* Temp_object_Variable11, enum class Enum_ElementalAffinity Temp_byte_Variable1, class UDA_AttributeEffectSet_C* Temp_object_Variable12, enum class EOakElementalType Temp_byte_Variable2, class UDA_AttributeEffectSet_C* Temp_object_Variable13, class UDA_AttributeEffectSet_C* Temp_object_Variable14, class UDA_AttributeEffectSet_C* Temp_object_Variable15, class UDA_AttributeEffectSet_C* Temp_object_Variable16, class UDA_AttributeEffectSet_C* Temp_object_Variable17, class UDA_AttributeEffectSet_C* Temp_object_Variable18, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable, enum class EOakElementalType Temp_byte_Variable3, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, const struct FGbxAttributeModifierHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EOakElementalType Temp_byte_Variable4, class UDA_AttributeEffectSet_C* K2Node_Select_Default, class UDA_AttributeEffectSet_C* K2Node_Select1_Default, class UDA_AttributeEffectSet_C* K2Node_Select2_Default, class UDA_AttributeEffectSet_C* K2Node_Select3_Default, bool CallFunc_IsValid_ReturnValue, TArray<struct FGbxAttributeModifierHandle>& K2Node_Select4_Default, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGbxAttributeModifierHandle& CallFunc_Array_Get_Item1, TArray<struct FGbxAttributeModifierHandle>& CallFunc_ApplyAttributeEffectSet_AppliedAttributeEffects, bool CallFunc_RemoveAttributeModifier_ReturnValue, const struct FGbxAttributeModifierHandle& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, enum class EOakElementalType Temp_byte_Variable5, TArray<struct FGbxAttributeModifierHandle>& K2Node_Select5_Default, int32 CallFunc_Array_Add_ReturnValue1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_OakAttributeComponent(int32 EntryPoint);
};

}


