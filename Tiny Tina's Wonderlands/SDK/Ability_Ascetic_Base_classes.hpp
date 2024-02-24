#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x190 - 0x110)
// BlueprintGeneratedClass Ability_Ascetic_Base.Ability_Ascetic_Base_C
class UAbility_Ascetic_Base_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AActor*                                Owner;                                             // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetOwnerComponent*                    PetOwnerComp;                                      // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EOakPlayerClass, class UClass*> Pet_Class;                                         // 0x128(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	enum class EOakPlayerClass                   CurrentPrimaryClass;                               // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOakPlayerClass                   CurrentSecondaryClass;                             // 0x179(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45EF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStatusEffectData*                     StatusEffect;                                      // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ArmorTickTimer;                                    // 0x188(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_Ascetic_Base_C* GetDefaultObj();

	void InventoryPetsByCurrentActivePets(TArray<class UClass*>* Pets, const TArray<class UClass*>& CurrentActivePets_C, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActivePets_OutActors, bool CallFunc_GetAllActivePets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void InventoryPetsByCurrentPlayerClasses(TArray<class UClass*>* Pets, const TArray<class UClass*>& CurrentPets, bool SecondaryAdded, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_AddClassPetToPetArray_Added, bool CallFunc_AddClassPetToPetArray_Added1);
	void AddClassPetToPetArray(enum class EOakPlayerClass PlayerClass, TArray<class UClass*>& PetArray, bool* Added, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void OnActivated();
	void OnDeactivated();
	void DisablePetSpawning();
	void EnablePetSpawning();
	void DespawnPets(TArray<class UClass*>& PetsToDespawn);
	void RespawnPets();
	void Apply_Status_Effect();
	void Remove_Status_Effect();
	void OnPaused();
	void OnArmorTick();
	void OnResumed();
	void Init_ArmorBehavior();
	void CleanUp_ArmorBehavior();
	void ExecuteUbergraph_Ability_Ascetic_Base(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, enum class EOakPlayerClass CallFunc_GetPlayerClasses_Primary, enum class EOakPlayerClass CallFunc_GetPlayerClasses_Secondary, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UPetOwnerComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<class UClass*>& K2Node_CustomEvent_PetsToDespawn, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, TArray<class UClass*>& CallFunc_InventoryPetsByCurrentPlayerClasses_Pets, bool CallFunc_RemoveStatusEffect_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, class UClass* CallFunc_Array_Get_Item1, int32 Temp_int_Loop_Counter_Variable1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Less_IntInt_ReturnValue1, enum class EOakPlayerClass CallFunc_GetPlayerClasses_Primary1, enum class EOakPlayerClass CallFunc_GetPlayerClasses_Secondary1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, TArray<class UClass*>& CallFunc_InventoryPetsByCurrentPlayerClasses_Pets1, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class UClass*>& CallFunc_InventoryPetsByCurrentPlayerClasses_Pets2);
};

}


