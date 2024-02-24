#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x108 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Rain_Reservior_Drink.BP_Interactable_Rain_Reservior_Drink_C
class UBP_Interactable_Rain_Reservior_Drink_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        AmountToDrink;                                     // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AmountAllowedToDrink;                              // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StoredUnits;                                       // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D8B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            InteractSound;                                     // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Rain_Reservior_Drink_C* GetDefaultObj();

	void PlayInteractSound(class AActor* Instigator, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UBP_FillableComponent_C* CallFunc_GetTrait_ReturnValue, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, int32 CallFunc_GetStoredUnits_ReturnValue, int32 CallFunc_GetMaxWater_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetWater_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void MULTI_PlayInteractFX(class AActor* Instigator);
	void ExecuteUbergraph_BP_Interactable_Rain_Reservior_Drink(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UBP_FillableComponent_C* CallFunc_GetTrait_ReturnValue, int32 CallFunc_GetStoredUnits_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, int32 CallFunc_Subtract_IntInt_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_Instigator, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, int32 CallFunc_GetWater_ReturnValue, int32 CallFunc_GetMaxWater_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1);
};

}


