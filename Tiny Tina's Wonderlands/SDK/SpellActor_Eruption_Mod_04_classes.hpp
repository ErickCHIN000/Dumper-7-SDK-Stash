#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x511 - 0x508)
// BlueprintGeneratedClass SpellActor_Eruption_Mod_04.SpellActor_Eruption_Mod_04_C
class ASpellActor_Eruption_Mod_04_C : public ASpellActor_Eruption_Self_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(Transient, DuplicateTransient)
	enum class Enum_SpellDeliveryMethod          SpellDelivery;                                     // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASpellActor_Eruption_Mod_04_C* GetDefaultObj();

	void OnRep_SingularityDamageType();
	struct FVector ReturnSingularityOffset(enum class Enum_SpellDeliveryMethod A, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& Temp_struct_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& K2Node_Select_Default);
	void UserConstructionScript();
	void StartSingularity();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SpellActor_Eruption_Mod_04(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, enum class EOakElementalType Temp_byte_Variable, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable1, class UParticleSystem* Temp_object_Variable2, class UParticleSystem* Temp_object_Variable3, class UParticleSystem* Temp_object_Variable4, class UParticleSystem* Temp_object_Variable5, TArray<class AActor*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_ReturnSingularityOffset_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UParticleSystem* K2Node_Select1_Default, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue);
};

}


