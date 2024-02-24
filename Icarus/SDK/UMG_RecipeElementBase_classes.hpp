#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x218 (0x478 - 0x260)
// WidgetBlueprintGeneratedClass UMG_RecipeElementBase.UMG_RecipeElementBase_C
class UUMG_RecipeElementBase_C : public UUserWidget
{
public:
	struct FItemData                             Item;                                              // 0x260(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	int32                                        CurrentAmount;                                     // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LinkedActor;                                       // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUMG_RecipeElementTooltip_C*           HolographicPreview;                                // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableTooltip;                                    // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2A72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Multiplier;                                        // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EIcarusResourceType               ResourceType;                                      // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2A75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RequiredResourceAmount;                            // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RecipeElementBase_C* GetDefaultObj();

	void GetPlayerInventories(TArray<class UInventory*>* Array, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, TArray<class UInventory*>& K2Node_MakeArray_Array);
	bool IsOutput();
	bool IsResource(bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void CurrentAmountUpdated();
	void SetCurrentAmount(int32 CurrentAmount);
	void UpdateBackgroundImage(class UTexture2D* Texture, enum class EProcessorPreview Selected);
	void UpdateStateRecipe(enum class EProcessorPreview NewState, class UTexture2D* Texture, TArray<class UInventory*>& CallFunc_GetPlayerInventories_Array, bool CallFunc_IsOutput_ReturnValue, class UUMG_RecipeElementTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_IsOutput_ReturnValue_1, TArray<class UInventory*>& CallFunc_GetPlayerInventories_Array_1, int32 CallFunc_Multiply_IntInt_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UProcessingComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsResource_ReturnValue, int32 CallFunc_GetResourceRecipeValidility_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetTrait_Paths_1, class UProcessingComponent* CallFunc_GetTrait_ReturnValue_1, int32 CallFunc_CheckRecipeValidityItems_CurrentAmount, bool CallFunc_CheckRecipeValidityItems_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2);
};

}


