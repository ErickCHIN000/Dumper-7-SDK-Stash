#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x224 (0x998 - 0x774)
// BlueprintGeneratedClass BP_Salting_Station.BP_Salting_Station_C
class ABP_Salting_Station_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_472C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                WidgetClassToOpen;                                 // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAlterationsEnum>              Alterations;                                       // 0x790(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ItemsPerOneSalt;                                   // 0x7A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_473F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ItemToSalt;                                        // 0x7A8(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_Salting_Station_C* GetDefaultObj();

	void HasFood(bool* HasFood, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetItemStackCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void GetRequiredSalt(int32* RequiredSalt, float CallFunc_Conv_IntToFloat_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItem_ReturnValue, int32 CallFunc_GetItemStackCount_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue);
	void SaltFood(const struct FAlterationsEnum& Temp_struct_Variable, int32 CallFunc_GetRequiredSalt_RequiredSalt, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_GetItemStackCount_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_RemoveItemProperty_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ConsumeItem_ReturnValue, bool CallFunc_ConsumeItem_ReturnValue_1, const struct FItemData& CallFunc_GetItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FIcarusStatReplicated>& K2Node_MakeArray_Array, TArray<struct FAlterationsEnum>& CallFunc_GetItemAlterations_Alterations, const struct FItemData& CallFunc_CreateCustomItem_ReturnValue, bool CallFunc_ManuallyForcePlaceItem_ReturnValue);
	void HasEnoughSalt(bool* EnoughSalt, int32 CallFunc_GetRequiredSalt_RequiredSalt, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetItemStackCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void IsSalted(bool* Salted, const struct FAlterationsEnum& Temp_struct_Variable, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, TArray<struct FAlterationsEnum>& CallFunc_GetItemAlterations_Alterations, bool CallFunc_Array_Contains_ReturnValue);
	void Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void GenericActionWithCharacter(class AIcarusPlayerCharacter* Character);
	void ReceiveBeginPlay();
	void GenericAction();
	void ExecuteUbergraph_BP_Salting_Station(int32 EntryPoint, bool CallFunc_HasFood_HasFood, class AIcarusPlayerCharacter* K2Node_Event_Character, bool CallFunc_IsSalted_Salted, bool CallFunc_HasEnoughSalt_EnoughSalt, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


