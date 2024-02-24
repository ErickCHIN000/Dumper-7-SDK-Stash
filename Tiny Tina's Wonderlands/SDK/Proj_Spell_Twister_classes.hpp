#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x804 - 0x748)
// BlueprintGeneratedClass Proj_Spell_Twister.Proj_Spell_Twister_C
class AProj_Spell_Twister_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x748(0x8)(Transient, DuplicateTransient)
	class UWwiseAudioComponent*                  WwiseAudio;                                        // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxParticleSystemComponent*           GbxParticleSystem;                                 // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sphere;                                            // 0x760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxProjectileMovementComponent*       GbxProjectileMovement;                             // 0x768(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            SpellHitInfo;                                      // 0x770(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         bIgnoreForcedCleanup;                              // 0x800(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_SpellDeliveryMethod          SpellDelivery;                                     // 0x801(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTryToSpawnSplatAgain;                             // 0x802(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SecondLine;                                        // 0x803(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AProj_Spell_Twister_C* GetDefaultObj();

	void ConfigureDelivery(int32 Temp_int_Variable, enum class Enum_SpellDeliveryMethod Temp_byte_Variable, enum class Enum_SpellDeliveryMethod Temp_byte_Variable1, enum class Enum_SpellDeliveryMethod Temp_byte_Variable2, enum class Enum_SpellDeliveryMethod Temp_byte_Variable3, enum class Enum_SpellDeliveryMethod Temp_byte_Variable4, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, enum class Enum_SpellDeliveryMethod K2Node_Select_Default);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SpawnTwisterProjs();
	void SpawnSingularity();
	void ExecuteUbergraph_Proj_Spell_Twister(int32 EntryPoint, bool Temp_bool_Variable, enum class EOakElementalType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, class UClass* Temp_class_Variable5, bool Temp_bool_Variable1, int32 Temp_int_Array_Index_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, bool Temp_bool_Variable2, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default, bool CallFunc_Not_PreBool_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class UClass* Temp_class_Variable6, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue, class UClass* Temp_class_Variable7, class UClass* K2Node_Select2_Default, int32 Temp_int_Loop_Counter_Variable, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int32 K2Node_Select3_Default, TArray<struct FTransform>& CallFunc_GeneratePointsOnFan_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FVector& CallFunc_GetForwardVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
};

}


