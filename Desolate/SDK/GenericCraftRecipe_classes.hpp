#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x440 - 0x420)
// BlueprintGeneratedClass GenericCraftRecipe.GenericCraftRecipe_C
class AGenericCraftRecipe_C : public AGenericLootItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Particle;                                          // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRecipeLearnKey                       RecipeKey;                                         // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AGenericCraftRecipe_C* GetDefaultObj();

	bool UpdateCollectibleVisibilityLocalEvent(bool CallFunc_IsCollectibleVisible_ReturnValue);
	bool IsCollectibleVisible(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRecipeLearnedByKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();
	void OnUse(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_GenericCraftRecipe(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsRecipeLearnedByKey_ReturnValue);
};

}


